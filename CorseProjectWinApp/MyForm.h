#pragma once
#include <vector>
#include "DataStorage.h"

namespace CorseProjectWinApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ requestsPage;
	private: System::Windows::Forms::Button^ searchByTypeOfServiceBTN;

	private: System::Windows::Forms::Button^ dateSearchBTN;

	private: System::Windows::Forms::Button^ passportSearchBTN;

	private: System::Windows::Forms::Button^ searchByTypeAndNameOfServiceBTN;


	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ RequestsDataGrid;
	private: System::Windows::Forms::Button^ searchByServiceNameBTN;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;



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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->requestsPage = (gcnew System::Windows::Forms::TabPage());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->searchByServiceNameBTN = (gcnew System::Windows::Forms::Button());
			this->RequestsDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->searchByTypeOfServiceBTN = (gcnew System::Windows::Forms::Button());
			this->dateSearchBTN = (gcnew System::Windows::Forms::Button());
			this->passportSearchBTN = (gcnew System::Windows::Forms::Button());
			this->searchByTypeAndNameOfServiceBTN = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->requestsPage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RequestsDataGrid))->BeginInit();
			this->tabPage1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->requestsPage);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Location = System::Drawing::Point(-5, -3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(746, 495);
			this->tabControl1->SizeMode = System::Windows::Forms::TabSizeMode::FillToRight;
			this->tabControl1->TabIndex = 0;
			// 
			// requestsPage
			// 
			this->requestsPage->Controls->Add(this->label5);
			this->requestsPage->Controls->Add(this->textBox5);
			this->requestsPage->Controls->Add(this->button3);
			this->requestsPage->Controls->Add(this->button2);
			this->requestsPage->Controls->Add(this->label4);
			this->requestsPage->Controls->Add(this->label3);
			this->requestsPage->Controls->Add(this->label2);
			this->requestsPage->Controls->Add(this->label1);
			this->requestsPage->Controls->Add(this->textBox4);
			this->requestsPage->Controls->Add(this->textBox3);
			this->requestsPage->Controls->Add(this->textBox2);
			this->requestsPage->Controls->Add(this->textBox1);
			this->requestsPage->Controls->Add(this->searchByServiceNameBTN);
			this->requestsPage->Controls->Add(this->RequestsDataGrid);
			this->requestsPage->Controls->Add(this->searchByTypeOfServiceBTN);
			this->requestsPage->Controls->Add(this->dateSearchBTN);
			this->requestsPage->Controls->Add(this->passportSearchBTN);
			this->requestsPage->Controls->Add(this->searchByTypeAndNameOfServiceBTN);
			this->requestsPage->Location = System::Drawing::Point(4, 22);
			this->requestsPage->Name = L"requestsPage";
			this->requestsPage->Padding = System::Windows::Forms::Padding(3);
			this->requestsPage->Size = System::Drawing::Size(738, 469);
			this->requestsPage->TabIndex = 0;
			this->requestsPage->Text = L"Заявки";
			this->requestsPage->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(508, 413);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Удалить";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(350, 412);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Добавить";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(505, 361);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 13);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Название услуги";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(347, 361);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 13);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Тип услуги";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(478, 294);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 13);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Номер паспорта";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(347, 294);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 13);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Серия паспорта";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(508, 378);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(167, 20);
			this->textBox4->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(350, 377);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(133, 20);
			this->textBox3->TabIndex = 9;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(481, 310);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 8;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(350, 311);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 7;
			// 
			// searchByServiceNameBTN
			// 
			this->searchByServiceNameBTN->Location = System::Drawing::Point(13, 413);
			this->searchByServiceNameBTN->Name = L"searchByServiceNameBTN";
			this->searchByServiceNameBTN->Size = System::Drawing::Size(157, 23);
			this->searchByServiceNameBTN->TabIndex = 6;
			this->searchByServiceNameBTN->Text = L"Поиск по названию услуги";
			this->searchByServiceNameBTN->UseVisualStyleBackColor = true;
			// 
			// RequestsDataGrid
			// 
			this->RequestsDataGrid->AllowUserToAddRows = false;
			this->RequestsDataGrid->AllowUserToDeleteRows = false;
			this->RequestsDataGrid->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->RequestsDataGrid->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->RequestsDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->RequestsDataGrid->Dock = System::Windows::Forms::DockStyle::Top;
			this->RequestsDataGrid->Location = System::Drawing::Point(3, 3);
			this->RequestsDataGrid->Name = L"RequestsDataGrid";
			this->RequestsDataGrid->ReadOnly = true;
			this->RequestsDataGrid->RowTemplate->ReadOnly = true;
			this->RequestsDataGrid->Size = System::Drawing::Size(732, 276);
			this->RequestsDataGrid->TabIndex = 5;
			// 
			// searchByTypeOfServiceBTN
			// 
			this->searchByTypeOfServiceBTN->Location = System::Drawing::Point(13, 375);
			this->searchByTypeOfServiceBTN->Name = L"searchByTypeOfServiceBTN";
			this->searchByTypeOfServiceBTN->Size = System::Drawing::Size(157, 23);
			this->searchByTypeOfServiceBTN->TabIndex = 4;
			this->searchByTypeOfServiceBTN->Text = L"Поиск по типу услуги";
			this->searchByTypeOfServiceBTN->UseVisualStyleBackColor = true;
			// 
			// dateSearchBTN
			// 
			this->dateSearchBTN->Location = System::Drawing::Point(146, 335);
			this->dateSearchBTN->Name = L"dateSearchBTN";
			this->dateSearchBTN->Size = System::Drawing::Size(99, 23);
			this->dateSearchBTN->TabIndex = 3;
			this->dateSearchBTN->Text = L"Поиск по дате";
			this->dateSearchBTN->UseVisualStyleBackColor = true;
			// 
			// passportSearchBTN
			// 
			this->passportSearchBTN->Location = System::Drawing::Point(13, 335);
			this->passportSearchBTN->Name = L"passportSearchBTN";
			this->passportSearchBTN->Size = System::Drawing::Size(127, 23);
			this->passportSearchBTN->TabIndex = 2;
			this->passportSearchBTN->Text = L"Поиск по паспорту";
			this->passportSearchBTN->UseVisualStyleBackColor = true;
			// 
			// searchByTypeAndNameOfServiceBTN
			// 
			this->searchByTypeAndNameOfServiceBTN->Location = System::Drawing::Point(13, 294);
			this->searchByTypeAndNameOfServiceBTN->Name = L"searchByTypeAndNameOfServiceBTN";
			this->searchByTypeAndNameOfServiceBTN->Size = System::Drawing::Size(232, 23);
			this->searchByTypeAndNameOfServiceBTN->TabIndex = 1;
			this->searchByTypeAndNameOfServiceBTN->Text = L"Поиск по типу и названию услуги";
			this->searchByTypeAndNameOfServiceBTN->UseVisualStyleBackColor = true;
			this->searchByTypeAndNameOfServiceBTN->Click += gcnew System::EventHandler(this, &MyForm::searchByTypeAndNameOfService_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(738, 469);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Клиенты";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Size = System::Drawing::Size(738, 469);
			this->tabPage1->TabIndex = 2;
			this->tabPage1->Text = L"Услуги";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(328, 127);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(608, 294);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(33, 13);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Дата";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(611, 310);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 17;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(742, 492);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::RequestsScreen_Load);
			this->tabControl1->ResumeLayout(false);
			this->requestsPage->ResumeLayout(false);
			this->requestsPage->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RequestsDataGrid))->EndInit();
			this->tabPage1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
	private: System::Void RequestsScreen_Load(System::Object^ sender, System::EventArgs^ e) {
		vector<RequestsEntity*> data = DataStorage::data;
		RequestsHashTable requestsHashTable = DataStorage::requestsHashTable;
		DataTable^ tabl = gcnew DataTable();
		RequestsDataGrid->DataSource = tabl;
		tabl->Columns->Add("Паспорт");
		tabl->Columns->Add("Название услуги");
		tabl->Columns->Add("Тип услуги");
		tabl->Columns->Add("Дата");
		for (int i = 0; i < data.size(); i++) {
			DataRow^ row = tabl->NewRow();
			string passport = to_string(data[i]->passport.series) + " " + to_string(data[i]->passport.number);
			row["Паспорт"] = gcnew String(passport.c_str());
			row["Название услуги"] = gcnew String(data[i]->serviceName.c_str());
			row["Тип услуги"] = gcnew String(data[i]->serviceType.c_str());
			string date = to_string(data[i]->date.day)+"." + to_string(data[i]->date.month) + "." + to_string(data[i]->date.year);
			row["Дата"] = gcnew String(date.c_str());
			tabl->Rows->Add(row);
		}

		for (int i = 0; i < data.size(); i++) {

			requestsHashTable.insert(data[i]);
		}
	}
private: System::Void searchByTypeAndNameOfService_Click(System::Object^ sender, System::EventArgs^ e) {
	RequestsHashTable requestsHashTable = DataStorage::requestsHashTable;
	requestsHashTable.print();

};

};
}
