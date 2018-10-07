
#include "Decompression_ver2.h"


int decommpression_(String^ filePath_, String^ output_) {

	std::multimap<std::string, std::string> fileName_Path;

	std::string _path = marshal_as<std::string>(filePath_);

	for (auto & p : fs::directory_iterator(_path))
		fs::path path_ = p;

	fs::recursive_directory_iterator begin(_path);
	fs::recursive_directory_iterator end;

	// Получаем список файлов .zip с помощью алгоритма copy_if
	std::vector<fs::path> zipFiles_;
	std::vector<std::string> zipFiles;

	std::copy_if(begin, end, std::back_inserter(zipFiles_), [](const fs::path& path) {
		return fs::is_regular_file(path) && (path.extension() == ".zip");
	});
	for (auto i : zipFiles_) { zipFiles.push_back(i.string()); }
	std::vector<std::string> zipFiles_filename;

	// Выводим список файлов в cout.
	std::cout << "-- zip files --" << std::endl;
	int count = 0;
	for (auto i : zipFiles_) {
		std::string buf = i.filename().string();
		zipFiles_filename.push_back(buf);

	}

	for (auto i : zipFiles_filename) {
		
		fileName_Path.emplace(i, zipFiles[count]);
		count++;
	}

	for (auto i : fileName_Path) {
		std::cout << i.first << '\n' << i.second << std::endl;
	}
	std::cout << '\n\n' << std::endl;

	
	try
	{
		//std::string _output = marshal_as<std::string>(output_);
		fs::path parentPath(_path);

		for (auto i : fileName_Path) {
			fs::path childPath(i.second);
			fs::path relativePath = fs::relative(childPath, parentPath);
			

			std::string _output = marshal_as<std::string>(output_);


			_output += relativePath.string();
			fs::create_directories(_output);

			String^ str_output = gcnew String(_output.c_str());
			String^ str_filePath = gcnew String(i.second.c_str());
			std::cout << "Архив по пути: \n\t" << i.second << "\nраспаковывается в: \n\t " << _output << std::endl;
			ZipFile::ExtractToDirectory(str_filePath, str_output);
			std::cout << "Архив распакован \n\n" << std::endl;
		}
	}
	catch (const std::exception&)
	{
		std::cout << "Ошибка распаковки архива" << std::endl;
		return 0;
	}

	std::cout << "Все архивы успешно распакованны" << std::endl;

	return 0;
}
