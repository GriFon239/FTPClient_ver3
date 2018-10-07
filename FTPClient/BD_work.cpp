#include "BD_work.h"
#include "To_Hash.h"


std::multimap<std::string, std::string> BDName_addresToFile;
int Name_addres(std::string _path)
{
	for (auto & p : fs::directory_iterator(_path))
		fs::path path_ = p;
	
	fs::directory_iterator begin(_path);
	fs::directory_iterator end;

	// Получаем список файлов .xml с помощью алгоритма copy_if
	std::vector<fs::path> xmlFiles_;
	std::vector<std::string> xmlFiles;

	std::copy_if(begin, end, std::back_inserter(xmlFiles_), [](const fs::path& path) {
		return fs::is_regular_file(path) && (path.extension() == ".xml");
	});
	for (auto i : xmlFiles_) { xmlFiles.push_back(i.string()); }
	std::vector<std::string> xmlFiles_filename;

	// Выводим список файлов в cout.
	//std::cout << "-- xml files --" << std::endl;
	int count = 0;
	for (auto i : xmlFiles_) {
		std::string buf = i.filename().string();
		xmlFiles_filename.push_back(buf);

	}

	int j = 0;

	std::vector<char> buffer_name;
	for (auto i : xmlFiles_filename) {
		while (i[j] != '_') {
			buffer_name.push_back(i[j]);
			j++;
		}
		j = 0;

		char* buff = new char[buffer_name.size() + 1];
		for (int i = 0; i < buffer_name.size(); i++) {
			buff[i] = buffer_name[i];
		}
		buff[buffer_name.size()] = '\0';

		BDName_addresToFile.emplace((std::string)buff, xmlFiles[count]);
		buffer_name.clear();
		delete[]buff;
		count++;
	}
	for (auto i : BDName_addresToFile) {
		//std::cout << i.first << '\n\t' << i.second << std::endl;
		//std::cout << To_Hash(i.second) << std::endl;
	}

	return 0;
}



int BD(String^ connect) {

	auto con = gcnew OleDbConnection(connect);

	try
	{
		con->Open();
		std::cout << "Соединение установлено" << std::endl;
	}
	catch (const std::exception&)
	{
		std::cout << "Ошибка подключения к базе данных" << std::endl;
	}
	catch (OleDbException^ ex) {
		std::cout << "Ошибка подключения к базе данных" << std::endl;

	}

	std::string create_table;

	for (auto NameBD_addres : BDName_addresToFile) {
		//create_table = "CREATE TABLE " + NameBD_addres.first + " (XMLCol xml)";
		create_table = "IF  NOT EXISTS(SELECT * FROM sys.objects --\n\
							WHERE object_id = OBJECT_ID(N'[dbo].[" + NameBD_addres.first + "]') AND type in(N'U')) --\n\
							BEGIN --\n\
							CREATE TABLE[dbo].[" + NameBD_addres.first + "](Hash nvarchar(33) NOT NULL PRIMARY KEY, XMLCol xml) --\n\
							END;";

		String^ create_table_str = gcnew String(create_table.c_str());
		auto command = gcnew OleDbCommand(create_table_str, con);

		try
		{
			command->ExecuteNonQuery();
		}
		catch (const std::exception&)
		{
			std::cout << "Ошибка создания таблицы с именем: " << NameBD_addres.first << std::endl;
		}

		catch (OleDbException^ ex) {
			std::cout << "Ошибка создания таблицы с именем: " << NameBD_addres.first << std::endl;

		}

		std::string Hash = To_Hash(NameBD_addres.second);
		
		std::string query =
			"INSERT INTO " + NameBD_addres.first + "(Hash, XMLCol)   --\n\
				 SELECT N\'" + Hash + "\' AS Hash,  --\n\
                 * FROM OPENROWSET( --\n\
				 BULK \'" + NameBD_addres.second + "\', SINGLE_CLOB) AS XMLCol;";   

		 

		String^ query_str = gcnew String(query.c_str());
		//std::cout << query << std::endl;
		command->CommandText = query_str;


		try
		{
			command->ExecuteNonQuery();
			std::cout << "Файл  " << NameBD_addres.second << "  загружен в БД" << std::endl;
		}
		catch (const std::exception&)
		{
			std::cout << "Ошибка занесения файла в базу данных по адресу:\n" \
				<< NameBD_addres.second << std::endl;
		}

		catch (OleDbException^ ex) {
			std::cout << "Ошибка занесения файла в базу данных по адресу:\n" \
				<< NameBD_addres.second << std::endl;

		}
		

		



	}
	std::cout << "Файлы успешно загружены в БД" << std::endl;

	con->Close();
	return 0;
}