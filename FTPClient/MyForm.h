#pragma once
#include "BD_work.h"
#include <shlwapi.h>
#include "Decompression_ver2.h"
#pragma comment (lib, "shell32.lib ")


namespace FTPClient {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	//int enumerateArchive(const char* filePath, const char* output)
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;

	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog2;





	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox15;


	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->folderBrowserDialog2 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->folderBrowserDialog3 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(691, 42);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 20);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Распаковать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(691, 300);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(97, 20);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Добавить в БД";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox1->Enabled = false;
			this->textBox1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox1->Location = System::Drawing::Point(29, 23);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(575, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"Укажите путь до архива";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox2->Enabled = false;
			this->textBox2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox2->Location = System::Drawing::Point(29, 301);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(572, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"Укажите путь до папки";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(630, 23);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(30, 20);
			this->button3->TabIndex = 4;
			this->button3->Text = L"...";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(630, 61);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(30, 20);
			this->button4->TabIndex = 5;
			this->button4->Text = L"...";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(630, 300);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(30, 20);
			this->button5->TabIndex = 6;
			this->button5->Text = L"...";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox3->Enabled = false;
			this->textBox3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox3->Location = System::Drawing::Point(29, 61);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(575, 20);
			this->textBox3->TabIndex = 7;
			this->textBox3->Text = L"Распаковать в ...";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// folderBrowserDialog1
			// 
			this->folderBrowserDialog1->HelpRequest += gcnew System::EventHandler(this, &MyForm::folderBrowserDialog1_HelpRequest);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::openFileDialog1_FileOk_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 109);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Provider = sqloledb";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 138);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(155, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Data Source (Имя сервера) = ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(35, 165);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(132, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Initial Catalog (Имя БД) = ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 198);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(264, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Integrated Security (режим аутентификации) = SSPI ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(314, 198);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(158, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"User Id (Имя пользователя) = ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(360, 238);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(112, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Password (Пароль) = ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(644, 138);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(127, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Data Source (IP, порт) = ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(43, 84);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(172, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Проверка подлинности Windows";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(317, 84);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(197, 13);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Стандартная проверка безопасности";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(317, 138);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(155, 13);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Data Source (Имя сервера) = ";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(340, 165);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(132, 13);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Initial Catalog (Имя БД) = ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(317, 109);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(97, 13);
			this->label12->TabIndex = 20;
			this->label12->Text = L"Provider = sqloledb";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(644, 84);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(104, 13);
			this->label13->TabIndex = 21;
			this->label13->Text = L"Подключение по IP";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(644, 109);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(97, 13);
			this->label14->TabIndex = 22;
			this->label14->Text = L"Provider = sqloledb";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(639, 165);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(132, 13);
			this->label15->TabIndex = 23;
			this->label15->Text = L"Initial Catalog (Имя БД) = ";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(613, 198);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(158, 13);
			this->label16->TabIndex = 24;
			this->label16->Text = L"User Id (Имя пользователя) = ";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(659, 238);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(112, 13);
			this->label17->TabIndex = 25;
			this->label17->Text = L"Password (Пароль) = ";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(675, 268);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(96, 13);
			this->label18->TabIndex = 26;
			this->label18->Text = L"Network Library  = ";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(173, 135);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(117, 20);
			this->textBox5->TabIndex = 27;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(173, 165);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(117, 20);
			this->textBox6->TabIndex = 28;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(478, 238);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(117, 20);
			this->textBox7->TabIndex = 29;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(478, 158);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(117, 20);
			this->textBox8->TabIndex = 30;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(478, 135);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(117, 20);
			this->textBox9->TabIndex = 31;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(478, 195);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(117, 20);
			this->textBox10->TabIndex = 32;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(777, 135);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(117, 20);
			this->textBox11->TabIndex = 33;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(777, 162);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(117, 20);
			this->textBox12->TabIndex = 34;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(777, 195);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(117, 20);
			this->textBox13->TabIndex = 35;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(777, 235);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(117, 20);
			this->textBox14->TabIndex = 36;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(777, 265);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(117, 20);
			this->textBox15->TabIndex = 37;
			this->textBox15->Text = L"DBMSSOCN";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(910, 333);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		//auto input  = textBox1->Text;
		//auto output = textBox3->Text;

		System::String^ input = textBox1->Text;
	//	std::string input_ = marshal_as<std::string>(input);

		System::String^ output = textBox3->Text;
		//std::string output_ = marshal_as<std::string>(output);
		//output_ += (std::string)"\\";
		output  += "\\";
		decommpression_(input, output);

		//enumerateArchive(input_.c_str(), output_.c_str());

	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

		folderBrowserDialog2->ShowDialog();
		textBox3->Text = folderBrowserDialog2->SelectedPath;

	}
private: System::Void folderBrowserDialog2_HelpRequest(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void folderBrowserDialog1_HelpRequest(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void openFileDialog1_FileOk_1(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

	//openFileDialog1->ShowDialog();
	//textBox1->Text = openFileDialog1->FileName;
	folderBrowserDialog3->ShowDialog();
	textBox1->Text = folderBrowserDialog3->SelectedPath;

}

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	folderBrowserDialog1->ShowDialog();
	textBox2->Text = folderBrowserDialog1->SelectedPath;
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {


	System::String^ input = textBox2->Text;
	std::string input_ = marshal_as<std::string>(input);

	System::String^ connect;

	System::String^ Data_Source_Win = textBox5->Text;
	System::String^ Initial_Catalog_Win = textBox6->Text;

	System::String^ Data_Source_Standart = textBox9->Text;
	System::String^ Initial_Catalog_Standart = textBox8->Text;
	System::String^ User_ID_Standart = textBox10->Text;
	System::String^ Password_Standart = textBox7->Text;

	System::String^ Data_Source_IP = textBox11->Text;
	System::String^ Initial_Catalog_IP = textBox12->Text;
	System::String^ User_ID_IP = textBox13->Text;
	System::String^ Password_IP = textBox14->Text;
	System::String^ Network_Library = textBox15->Text;

	if ((Data_Source_Win != "") && (Initial_Catalog_Win != "")) {
		connect = "Provider=sqloledb; Data Source =" +Data_Source_Win+";Initial Catalog="+Initial_Catalog_Win+"; Integrated Security = SSPI; ";
	}

	if ((Data_Source_Standart != "") && (Initial_Catalog_Standart != "") && (User_ID_Standart != "") && (Password_Standart != "")) {
		connect = "Provider = sqloledb; Data Source =" +Data_Source_Standart+"; Initial Catalog = " +Initial_Catalog_Standart+"; User Id = "+User_ID_Standart+"; Password = "+Password_Standart+";";
	}

	if ((Data_Source_IP != "") && (Initial_Catalog_IP != "") && (User_ID_IP != "") && (Password_IP != "") && (Network_Library != "")) {
		connect = "Provider=sqloledb;Data Source= " + Data_Source_IP+";Network Library="+Network_Library+"; Initial Catalog = "+Initial_Catalog_IP +"; User ID = "+User_ID_IP+"; Password ="+Password_IP+"; ";
	}

	
	input_ += (std::string)"\\";
	std::string conn = marshal_as<std::string>(connect);
	std::cout << conn << std::endl;
	Name_addres(input_);
	BD(connect);



}
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {

	/*
	try
	{
		ShellExecute(0, L"open", L"https://www.connectionstrings.com/microsoft-ole-db-provider-for-sql-server-sqloledb/", 0, 0, SW_SHOWNORMAL);
	}
	catch (Exception ^ex)
	{
		MessageBox::Show(ex->Message, "Error");
	}
	*/
}


};
}
