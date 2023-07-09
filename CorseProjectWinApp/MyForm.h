#pragma once
#include <vector>
#include "DataStorage.h"
#include <msclr\marshal_cppstd.h>



namespace CorseProjectWinApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace msclr::interop;
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


	private: System::Windows::Forms::TabPage^ clientsPage;
	
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ RequestsDataGrid;
	private: System::Windows::Forms::Button^ searchByServiceNameBTN;
	private: System::Windows::Forms::TextBox^ tBNumberPassport;
	private: System::Windows::Forms::TextBox^ tBSeriesPassport;
	private: System::Windows::Forms::TextBox^ tBServiceName;
	private: System::Windows::Forms::TextBox^ tBServiceType;


	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ tBDate;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ numberOfComparisons;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ countComparisons;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ resultSearch;
	private: System::Windows::Forms::Button^ saveBtn;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;






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
			this->saveBtn = (gcnew System::Windows::Forms::Button());
			this->resultSearch = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tBSeriesPassport = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->countComparisons = (gcnew System::Windows::Forms::Label());
			this->numberOfComparisons = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tBDate = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tBServiceName = (gcnew System::Windows::Forms::TextBox());
			this->tBServiceType = (gcnew System::Windows::Forms::TextBox());
			this->tBNumberPassport = (gcnew System::Windows::Forms::TextBox());
			this->searchByServiceNameBTN = (gcnew System::Windows::Forms::Button());
			this->RequestsDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->searchByTypeOfServiceBTN = (gcnew System::Windows::Forms::Button());
			this->dateSearchBTN = (gcnew System::Windows::Forms::Button());
			this->passportSearchBTN = (gcnew System::Windows::Forms::Button());
			this->searchByTypeAndNameOfServiceBTN = (gcnew System::Windows::Forms::Button());
			this->clientsPage = (gcnew System::Windows::Forms::TabPage());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->requestsPage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RequestsDataGrid))->BeginInit();
			this->clientsPage->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->requestsPage);
			this->tabControl1->Controls->Add(this->clientsPage);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Location = System::Drawing::Point(-5, -3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(746, 527);
			this->tabControl1->SizeMode = System::Windows::Forms::TabSizeMode::FillToRight;
			this->tabControl1->TabIndex = 0;
			// 
			// requestsPage
			// 
			this->requestsPage->Controls->Add(this->saveBtn);
			this->requestsPage->Controls->Add(this->resultSearch);
			this->requestsPage->Controls->Add(this->label2);
			this->requestsPage->Controls->Add(this->tBSeriesPassport);
			this->requestsPage->Controls->Add(this->label6);
			this->requestsPage->Controls->Add(this->countComparisons);
			this->requestsPage->Controls->Add(this->numberOfComparisons);
			this->requestsPage->Controls->Add(this->label5);
			this->requestsPage->Controls->Add(this->tBDate);
			this->requestsPage->Controls->Add(this->button3);
			this->requestsPage->Controls->Add(this->button2);
			this->requestsPage->Controls->Add(this->label4);
			this->requestsPage->Controls->Add(this->label3);
			this->requestsPage->Controls->Add(this->label1);
			this->requestsPage->Controls->Add(this->tBServiceName);
			this->requestsPage->Controls->Add(this->tBServiceType);
			this->requestsPage->Controls->Add(this->tBNumberPassport);
			this->requestsPage->Controls->Add(this->searchByServiceNameBTN);
			this->requestsPage->Controls->Add(this->RequestsDataGrid);
			this->requestsPage->Controls->Add(this->searchByTypeOfServiceBTN);
			this->requestsPage->Controls->Add(this->dateSearchBTN);
			this->requestsPage->Controls->Add(this->passportSearchBTN);
			this->requestsPage->Controls->Add(this->searchByTypeAndNameOfServiceBTN);
			this->requestsPage->Location = System::Drawing::Point(4, 22);
			this->requestsPage->Name = L"requestsPage";
			this->requestsPage->Padding = System::Windows::Forms::Padding(3);
			this->requestsPage->Size = System::Drawing::Size(738, 501);
			this->requestsPage->TabIndex = 0;
			this->requestsPage->Text = L"Заявки";
			this->requestsPage->UseVisualStyleBackColor = true;
			// 
			// saveBtn
			// 
			this->saveBtn->Location = System::Drawing::Point(611, 460);
			this->saveBtn->Name = L"saveBtn";
			this->saveBtn->Size = System::Drawing::Size(75, 23);
			this->saveBtn->TabIndex = 25;
			this->saveBtn->Text = L"Сохранить";
			this->saveBtn->UseVisualStyleBackColor = true;
			this->saveBtn->Click += gcnew System::EventHandler(this, &MyForm::save_btn);
			// 
			// resultSearch
			// 
			this->resultSearch->AutoSize = true;
			this->resultSearch->Location = System::Drawing::Point(266, 460);
			this->resultSearch->Name = L"resultSearch";
			this->resultSearch->Size = System::Drawing::Size(0, 13);
			this->resultSearch->TabIndex = 24;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(478, 294);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 13);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Номер паспорта";
			// 
			// tBSeriesPassport
			// 
			this->tBSeriesPassport->Location = System::Drawing::Point(350, 310);
			this->tBSeriesPassport->Name = L"tBSeriesPassport";
			this->tBSeriesPassport->Size = System::Drawing::Size(100, 20);
			this->tBSeriesPassport->TabIndex = 22;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(200, 460);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 13);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Результат";
			// 
			// countComparisons
			// 
			this->countComparisons->AutoSize = true;
			this->countComparisons->Location = System::Drawing::Point(146, 460);
			this->countComparisons->Name = L"countComparisons";
			this->countComparisons->Size = System::Drawing::Size(0, 13);
			this->countComparisons->TabIndex = 20;
			// 
			// numberOfComparisons
			// 
			this->numberOfComparisons->AutoSize = true;
			this->numberOfComparisons->Location = System::Drawing::Point(14, 460);
			this->numberOfComparisons->Name = L"numberOfComparisons";
			this->numberOfComparisons->Size = System::Drawing::Size(129, 13);
			this->numberOfComparisons->TabIndex = 19;
			this->numberOfComparisons->Text = L"Количество сравнений: ";
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
			// tBDate
			// 
			this->tBDate->Location = System::Drawing::Point(611, 310);
			this->tBDate->Name = L"tBDate";
			this->tBDate->Size = System::Drawing::Size(100, 20);
			this->tBDate->TabIndex = 17;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(508, 413);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Удалить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::remove_element);
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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(347, 294);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 13);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Серия паспорта";
			// 
			// tBServiceName
			// 
			this->tBServiceName->Location = System::Drawing::Point(508, 378);
			this->tBServiceName->Name = L"tBServiceName";
			this->tBServiceName->Size = System::Drawing::Size(167, 20);
			this->tBServiceName->TabIndex = 10;
			// 
			// tBServiceType
			// 
			this->tBServiceType->Location = System::Drawing::Point(350, 377);
			this->tBServiceType->Name = L"tBServiceType";
			this->tBServiceType->Size = System::Drawing::Size(133, 20);
			this->tBServiceType->TabIndex = 9;
			// 
			// tBNumberPassport
			// 
			this->tBNumberPassport->Location = System::Drawing::Point(481, 310);
			this->tBNumberPassport->Name = L"tBNumberPassport";
			this->tBNumberPassport->Size = System::Drawing::Size(100, 20);
			this->tBNumberPassport->TabIndex = 8;
			// 
			// searchByServiceNameBTN
			// 
			this->searchByServiceNameBTN->Location = System::Drawing::Point(13, 413);
			this->searchByServiceNameBTN->Name = L"searchByServiceNameBTN";
			this->searchByServiceNameBTN->Size = System::Drawing::Size(157, 23);
			this->searchByServiceNameBTN->TabIndex = 6;
			this->searchByServiceNameBTN->Text = L"Поиск по названию услуги";
			this->searchByServiceNameBTN->UseVisualStyleBackColor = true;
			this->searchByServiceNameBTN->Click += gcnew System::EventHandler(this, &MyForm::searchByServiceNameBTN_Click);
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
			this->RequestsDataGrid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::RequestsDataGrid_CellContentClick);
			// 
			// searchByTypeOfServiceBTN
			// 
			this->searchByTypeOfServiceBTN->Location = System::Drawing::Point(13, 375);
			this->searchByTypeOfServiceBTN->Name = L"searchByTypeOfServiceBTN";
			this->searchByTypeOfServiceBTN->Size = System::Drawing::Size(157, 23);
			this->searchByTypeOfServiceBTN->TabIndex = 4;
			this->searchByTypeOfServiceBTN->Text = L"Поиск по типу услуги";
			this->searchByTypeOfServiceBTN->UseVisualStyleBackColor = true;
			this->searchByTypeOfServiceBTN->Click += gcnew System::EventHandler(this, &MyForm::searchByTypeOfServiceBTN_Click);
			// 
			// dateSearchBTN
			// 
			this->dateSearchBTN->Location = System::Drawing::Point(146, 335);
			this->dateSearchBTN->Name = L"dateSearchBTN";
			this->dateSearchBTN->Size = System::Drawing::Size(99, 23);
			this->dateSearchBTN->TabIndex = 3;
			this->dateSearchBTN->Text = L"Поиск по дате";
			this->dateSearchBTN->UseVisualStyleBackColor = true;
			this->dateSearchBTN->Click += gcnew System::EventHandler(this, &MyForm::dateSearchBTN_Click);
			// 
			// passportSearchBTN
			// 
			this->passportSearchBTN->Location = System::Drawing::Point(13, 335);
			this->passportSearchBTN->Name = L"passportSearchBTN";
			this->passportSearchBTN->Size = System::Drawing::Size(127, 23);
			this->passportSearchBTN->TabIndex = 2;
			this->passportSearchBTN->Text = L"Поиск по паспорту";
			this->passportSearchBTN->UseVisualStyleBackColor = true;
			this->passportSearchBTN->Click += gcnew System::EventHandler(this, &MyForm::passportSearchBTN_Click);
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
			// clientsPage
			// 
			this->clientsPage->Controls->Add(this->button7);
			this->clientsPage->Controls->Add(this->button6);
			this->clientsPage->Controls->Add(this->label10);
			this->clientsPage->Controls->Add(this->label9);
			this->clientsPage->Controls->Add(this->label8);
			this->clientsPage->Controls->Add(this->label7);
			this->clientsPage->Controls->Add(this->textBox7);
			this->clientsPage->Controls->Add(this->textBox6);
			this->clientsPage->Controls->Add(this->textBox2);
			this->clientsPage->Controls->Add(this->textBox1);
			this->clientsPage->Controls->Add(this->dataGridView1);
			this->clientsPage->Controls->Add(this->button5);
			this->clientsPage->Controls->Add(this->button4);
			this->clientsPage->Location = System::Drawing::Point(4, 22);
			this->clientsPage->Name = L"clientsPage";
			this->clientsPage->Padding = System::Windows::Forms::Padding(3);
			this->clientsPage->Size = System::Drawing::Size(738, 501);
			this->clientsPage->TabIndex = 1;
			this->clientsPage->Text = L"Клиенты";
			this->clientsPage->UseVisualStyleBackColor = true;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Size = System::Drawing::Size(738, 501);
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
			// button4
			// 
			this->button4->Location = System::Drawing::Point(102, 362);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(133, 23);
			this->button4->TabIndex = 0;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(102, 411);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(133, 23);
			this->button5->TabIndex = 1;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(3, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(728, 276);
			this->dataGridView1->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(480, 321);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(171, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(480, 365);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(171, 20);
			this->textBox2->TabIndex = 4;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(480, 414);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(171, 20);
			this->textBox6->TabIndex = 5;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(480, 463);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(171, 20);
			this->textBox7->TabIndex = 6;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(481, 305);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(483, 351);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 8;
			this->label8->Text = L"label8";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(483, 400);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(35, 13);
			this->label9->TabIndex = 9;
			this->label9->Text = L"label9";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(484, 448);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(41, 13);
			this->label10->TabIndex = 10;
			this->label10->Text = L"label10";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(102, 318);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(133, 23);
			this->button6->TabIndex = 11;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(102, 460);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(133, 23);
			this->button7->TabIndex = 12;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(742, 524);
			this->Controls->Add(this->tabControl1);
			this->Location = System::Drawing::Point(350, 311);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::RequestsScreen_Load);
			this->tabControl1->ResumeLayout(false);
			this->requestsPage->ResumeLayout(false);
			this->requestsPage->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RequestsDataGrid))->EndInit();
			this->clientsPage->ResumeLayout(false);
			this->clientsPage->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
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
			string date = data[i]->date.day+"." + data[i]->date.month + "." + data[i]->date.year;
			row["Дата"] = gcnew String(date.c_str());
			tabl->Rows->Add(row);
		}

		for (int i = 0; i < data.size(); i++) {

			requestsHashTable.insert(data[i]);
		}
	}
private: System::Void searchByTypeAndNameOfService_Click(System::Object^ sender, System::EventArgs^ e) {
	string  serviceName = marshal_as<std::string>(this->tBServiceName->Text);
	string  serviceType = marshal_as<std::string>(this->tBServiceType->Text);
	string dateString = marshal_as<std::string>(this->tBDate->Text);
	string seriesPassportText = marshal_as<std::string>(this->tBSeriesPassport->Text);
	string numberPassportText = marshal_as<std::string>(this->tBNumberPassport->Text);
	if (serviceName.size() == 0 || serviceType.size() == 0 || dateString.size() == 0 || seriesPassportText.size() == 0 || numberPassportText.size() == 0) {
		MessageBox::Show(this, "некорректные данные", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		int seriesPassport = stoi(seriesPassportText);
		int numberPassport = stoi(numberPassportText);
		date date = inputDateData(dateString);
		Passport passport = Passport();
		passport.number = numberPassport;
		passport.series = seriesPassport;
		RequestsEntity* entity = new RequestsEntity();
		entity->date = date;
		entity->passport = passport;
		entity->serviceName = serviceName;
		entity->serviceType = serviceType;
		RequestsHashTable requestsHashTable = DataStorage::requestsHashTable;
		requestsHashTable.print();
		vector<int> result_searchByTypeAndNameOfService = requestsHashTable.search(entity);
		this->countComparisons->Text = gcnew String(to_string(result_searchByTypeAndNameOfService[0]).c_str());
		if (result_searchByTypeAndNameOfService[1] != -1) {
			this->resultSearch->Text = gcnew String("Найден");
		}
		else {
			this->resultSearch->Text = gcnew String("Не найден");
		}
	}
};

private: System::Void passportSearchBTN_Click(System::Object^ sender, System::EventArgs^ e) {
	string serviceName = marshal_as<std::string>(this->tBServiceName->Text);
	string serviceType = marshal_as<std::string>(this->tBServiceType->Text);
	string dateString = marshal_as<std::string>(this->tBDate->Text);
	string seriesPassportText = marshal_as<std::string>(this->tBSeriesPassport->Text);
	string numberPassportText = marshal_as<std::string>(this->tBNumberPassport->Text);
	int seriesPassport = stoi(seriesPassportText);
	int numberPassport = stoi(numberPassportText);
	date date = inputDateData(dateString);
	Passport passport = Passport();
	passport.number = numberPassport;
	passport.series = seriesPassport;
	RequestsEntity* entity = new RequestsEntity();
	entity->date = date;
	entity->passport = passport;
	entity->serviceName = serviceName;
	entity->serviceType = serviceType;
	treeNode* avlTree = DataStorage::avlTree;
	vector<RequestsEntity*> data = DataStorage::data;
	bool heightChanged = false;
	for (int i = 0; i < data.size(); i++) {
		string valueText = to_string(data[i]->passport.series) + to_string(data[i]->passport.number);
		listNodeElem* value = new listNodeElem();
		value->index = i;
		value->value = valueText;
		     addNode(avlTree, value, heightChanged);

	}
	int count = 0;
	searchByPassportTreeNode(avlTree, entity, count);
	bool result_searchByPassportTreeNode = DataStorage::resultSerch;
	this->countComparisons->Text = gcnew String(to_string(DataStorage::countComparisons).c_str());
	if (result_searchByPassportTreeNode) {
		this->resultSearch->Text = gcnew String("Найден");
	}
	else  {
		this->resultSearch->Text = gcnew String("Не найден");
	}
	printTree(avlTree, nullptr);
	cout << endl;
}
private: System::Void save_btn(System::Object^ sender, System::EventArgs^ e) {
	vector<RequestsEntity*> data = DataStorage::data;
	writeData(data, "stdrequests.txt");
	MessageBox::Show(this, "Сохранено", "Сохранение", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void remove_element(System::Object^ sender, System::EventArgs^ e) {
	string  serviceName = marshal_as<std::string>(this->tBServiceName->Text);
	string  serviceType = marshal_as<std::string>(this->tBServiceType->Text);
	string dateString = marshal_as<std::string>(this->tBDate->Text);
	string seriesPassportText = marshal_as<std::string>(this->tBSeriesPassport->Text);
	string numberPassportText = marshal_as<std::string>(this->tBNumberPassport->Text);
	int seriesPassport = stoi(seriesPassportText);
	int numberPassport = stoi(numberPassportText);
	date date = inputDateData(dateString);
	Passport passport = Passport();
	passport.number = numberPassport;
	passport.series = seriesPassport;
	RequestsEntity* entity = new RequestsEntity();
	entity->date = date;
	entity->passport = passport;
	entity->serviceName = serviceName;
	entity->serviceType = serviceType;
	DataStorage dataStorage = DataStorage();
	dataStorage.removeElement(entity);
}
private: System::Void dateSearchBTN_Click(System::Object^ sender, System::EventArgs^ e) {
	string serviceName = marshal_as<std::string>(this->tBServiceName->Text);
	string serviceType = marshal_as<std::string>(this->tBServiceType->Text);
	string dateString = marshal_as<std::string>(this->tBDate->Text);
	string seriesPassportText = marshal_as<std::string>(this->tBSeriesPassport->Text);
	string numberPassportText = marshal_as<std::string>(this->tBNumberPassport->Text);
	int seriesPassport = stoi(seriesPassportText);
	int numberPassport = stoi(numberPassportText);
	date date = inputDateData(dateString);
	Passport passport = Passport();
	passport.number = numberPassport;
	passport.series = seriesPassport;
	RequestsEntity* entity = new RequestsEntity();
	entity->date = date;
	entity->passport = passport;
	entity->serviceName = serviceName;
	entity->serviceType = serviceType;
	treeNode* avlTree = DataStorage::avlTree;
	vector<RequestsEntity*> data = DataStorage::data;
	bool heightChanged = false;
	for (int i = 0; i < data.size(); i++) {
		string valueText = data[i]->date.day + "." + data[i]->date.month + "." + data[i]->date.year;
		listNodeElem* value = new listNodeElem();
		value->index = i;
		value->value = valueText;
		addNode(avlTree, value, heightChanged);

	}
	int count = 0;
	searchByDateTreeNode(avlTree, entity, count);
	bool result_searchByDateTreeNode = DataStorage::resultSerch;
	this->countComparisons->Text = gcnew String(to_string(DataStorage::countComparisons).c_str());
	if (result_searchByDateTreeNode) {
		this->resultSearch->Text = gcnew String("Найден");
	}
	else {
		this->resultSearch->Text = gcnew String("Не найден");
	}
	printTree(avlTree, nullptr);
	cout << endl;

}
private: System::Void searchByTypeOfServiceBTN_Click(System::Object^ sender, System::EventArgs^ e) {
	string serviceName = marshal_as<std::string>(this->tBServiceName->Text);
	string serviceType = marshal_as<std::string>(this->tBServiceType->Text);
	string dateString = marshal_as<std::string>(this->tBDate->Text);
	string seriesPassportText = marshal_as<std::string>(this->tBSeriesPassport->Text);
	string numberPassportText = marshal_as<std::string>(this->tBNumberPassport->Text);
	int seriesPassport = stoi(seriesPassportText);
	int numberPassport = stoi(numberPassportText);
	date date = inputDateData(dateString);
	Passport passport = Passport();
	passport.number = numberPassport;
	passport.series = seriesPassport;
	RequestsEntity* entity = new RequestsEntity();
	entity->date = date;
	entity->passport = passport;
	entity->serviceName = serviceName;
	entity->serviceType = serviceType;
	treeNode* avlTree = DataStorage::avlTree;
	vector<RequestsEntity*> data = DataStorage::data;
	bool heightChanged = false;
	for (int i = 0; i < data.size(); i++) {
		string valueText = data[i]->serviceType;
		listNodeElem* value = new listNodeElem();
		value->index = i;
		value->value = valueText;
		addNode(avlTree, value, heightChanged);

	}
	int count = 0;
	searchByServiceTypeTreeNode(avlTree, entity, count);
	bool result_searchByServiceTypeTreeNode = DataStorage::resultSerch;
	this->countComparisons->Text = gcnew String(to_string(DataStorage::countComparisons).c_str());
	if (result_searchByServiceTypeTreeNode) {
		this->resultSearch->Text = gcnew String("Найден");
	}
	else {
		this->resultSearch->Text = gcnew String("Не найден");
	}
	printTree(avlTree, nullptr);
	cout << endl;

}
private: System::Void searchByServiceNameBTN_Click(System::Object^ sender, System::EventArgs^ e) {
	string serviceName = marshal_as<std::string>(this->tBServiceName->Text);
	string serviceType = marshal_as<std::string>(this->tBServiceType->Text);
	string dateString = marshal_as<std::string>(this->tBDate->Text);
	string seriesPassportText = marshal_as<std::string>(this->tBSeriesPassport->Text);
	string numberPassportText = marshal_as<std::string>(this->tBNumberPassport->Text);
	int seriesPassport = stoi(seriesPassportText);
	int numberPassport = stoi(numberPassportText);
	date date = inputDateData(dateString);
	Passport passport = Passport();
	passport.number = numberPassport;
	passport.series = seriesPassport;
	RequestsEntity* entity = new RequestsEntity();
	entity->date = date;
	entity->passport = passport;
	entity->serviceName = serviceName;
	entity->serviceType = serviceType;
	treeNode* avlTree = DataStorage::avlTree;
	vector<RequestsEntity*> data = DataStorage::data;
	bool heightChanged = false;
	for (int i = 0; i < data.size(); i++) {
		string valueText = data[i]->serviceName;
		listNodeElem* value = new listNodeElem();
		value->index = i;
		value->value = valueText;
		addNode(avlTree, value, heightChanged);

	}
	int count = 0;
	searchByServiceNameTreeNode(avlTree, entity, count);
	bool result_searchByServiceNameTreeNode = DataStorage::resultSerch;
	this->countComparisons->Text = gcnew String(to_string(DataStorage::countComparisons).c_str());
	if (result_searchByServiceNameTreeNode) {
		this->resultSearch->Text = gcnew String("Найден");
	}
	else {
		this->resultSearch->Text = gcnew String("Не найден");
	}
	printTree(avlTree, nullptr);
	cout << endl;
}
private: System::Void RequestsDataGrid_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
