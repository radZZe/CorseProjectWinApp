#pragma once
#include <vector>
#include "DataStorage.h"
#include "DataClientsStorage.h"
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
    /// Naiaea aey MyForm
    /// </summary>
    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:

        MyForm(void)
        {
            InitializeComponent();

            //
            //TODO: aiaaauoa eia eiino?oeoi?a
            //
        }

    protected:
        /// <summary>
        /// Inaiaiaeou ana eniieucoaiua ?ano?nu.
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













    private: System::Windows::Forms::Label^ label13;

    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::Label^ label16;
    private: System::Windows::Forms::Label^ label17;
    private: System::Windows::Forms::Button^ button12;
    private: System::Windows::Forms::TextBox^ tBType;

    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::Label^ label12;

    private: System::Windows::Forms::Button^ button13;
    private: System::Windows::Forms::Button^ button14;
    private: System::Windows::Forms::TextBox^ tBName;

    private: System::Windows::Forms::TextBox^ tBTerm;

    private: System::Windows::Forms::TextBox^ tBDivision;
    private: System::Windows::Forms::Button^ searchByServiceName;


    private: System::Windows::Forms::Button^ searchByServiceTypeBtn;

    private: System::Windows::Forms::Button^ divisionSearchBtn;
    private: System::Windows::Forms::Button^ searchServiceByTermBtb;


    private: System::Windows::Forms::Button^ button11;
    private: System::Windows::Forms::DataGridView^ ServicesDataGrid;

    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::Label^ label18;
    private: System::Windows::Forms::Label^ label19;
    private: System::Windows::Forms::TextBox^ textBox6;
    private: System::Windows::Forms::TextBox^ textBox7;
    private: System::Windows::Forms::TextBox^ textBox9;
    private: System::Windows::Forms::Button^ button7;
    private: System::Windows::Forms::DataGridView^ ClientsDataGrid;
    private: System::Windows::Forms::Button^ button15;
    private: System::Windows::Forms::Button^ button16;
    private: System::Windows::Forms::Button^ button17;
    private: System::Windows::Forms::Button^ button18;
    private: System::Windows::Forms::Button^ button19;
    private: System::Windows::Forms::Button^ button20;
    private: System::Windows::Forms::Button^ button21;
    private: System::Windows::Forms::Label^ resultSearchServices;
    private: System::Windows::Forms::Label^ countServices;
    private: System::Windows::Forms::Label^ countComparationsServices;
    private: System::Windows::Forms::Label^ resultSearchServices2;






    private:
        /// <summary>
        /// Iaycaoaeuiay ia?aiaiiay eiino?oeoi?a.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

        /// <summary>
        /// O?aaoaiue iaoia aey iiaaa??ee eiino?oeoi?a — ia eciaiyeoa 
        /// niaa??eiia yoiai iaoiaa n iiiiuu? ?aaaeoi?a eiaa.
        /// </summary>
        void InitializeComponent(void)
        {
            this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
            this->requestsPage = (gcnew System::Windows::Forms::TabPage());
            this->resultSearchServices = (gcnew System::Windows::Forms::Label());
            this->countServices = (gcnew System::Windows::Forms::Label());
            this->button19 = (gcnew System::Windows::Forms::Button());
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
            this->button20 = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->ClientsDataGrid = (gcnew System::Windows::Forms::DataGridView());
            this->button15 = (gcnew System::Windows::Forms::Button());
            this->button16 = (gcnew System::Windows::Forms::Button());
            this->button17 = (gcnew System::Windows::Forms::Button());
            this->button18 = (gcnew System::Windows::Forms::Button());
            this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
            this->resultSearchServices2 = (gcnew System::Windows::Forms::Label());
            this->countComparationsServices = (gcnew System::Windows::Forms::Label());
            this->button21 = (gcnew System::Windows::Forms::Button());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->button12 = (gcnew System::Windows::Forms::Button());
            this->tBType = (gcnew System::Windows::Forms::TextBox());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->button13 = (gcnew System::Windows::Forms::Button());
            this->button14 = (gcnew System::Windows::Forms::Button());
            this->tBName = (gcnew System::Windows::Forms::TextBox());
            this->tBTerm = (gcnew System::Windows::Forms::TextBox());
            this->tBDivision = (gcnew System::Windows::Forms::TextBox());
            this->searchByServiceName = (gcnew System::Windows::Forms::Button());
            this->searchByServiceTypeBtn = (gcnew System::Windows::Forms::Button());
            this->divisionSearchBtn = (gcnew System::Windows::Forms::Button());
            this->searchServiceByTermBtb = (gcnew System::Windows::Forms::Button());
            this->button11 = (gcnew System::Windows::Forms::Button());
            this->ServicesDataGrid = (gcnew System::Windows::Forms::DataGridView());
            this->tabControl1->SuspendLayout();
            this->requestsPage->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RequestsDataGrid))->BeginInit();
            this->clientsPage->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ClientsDataGrid))->BeginInit();
            this->tabPage1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ServicesDataGrid))->BeginInit();
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
            this->tabControl1->Size = System::Drawing::Size(896, 633);
            this->tabControl1->SizeMode = System::Windows::Forms::TabSizeMode::FillToRight;
            this->tabControl1->TabIndex = 0;
            // 
            // requestsPage
            // 
            this->requestsPage->Controls->Add(this->resultSearchServices);
            this->requestsPage->Controls->Add(this->countServices);
            this->requestsPage->Controls->Add(this->button19);
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
            this->requestsPage->Size = System::Drawing::Size(888, 607);
            this->requestsPage->TabIndex = 0;
            this->requestsPage->Text = L"Заявки";
            this->requestsPage->UseVisualStyleBackColor = true;
            this->requestsPage->Click += gcnew System::EventHandler(this, &MyForm::requestsPage_Click);
            // 
            // resultSearchServices
            // 
            this->resultSearchServices->AutoSize = true;
            this->resultSearchServices->Location = System::Drawing::Point(263, 460);
            this->resultSearchServices->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->resultSearchServices->Name = L"resultSearchServices";
            this->resultSearchServices->Size = System::Drawing::Size(0, 13);
            this->resultSearchServices->TabIndex = 28;
            // 
            // countServices
            // 
            this->countServices->AutoSize = true;
            this->countServices->Location = System::Drawing::Point(143, 460);
            this->countServices->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->countServices->Name = L"countServices";
            this->countServices->Size = System::Drawing::Size(0, 13);
            this->countServices->TabIndex = 27;
            // 
            // button19
            // 
            this->button19->Location = System::Drawing::Point(350, 460);
            this->button19->Name = L"button19";
            this->button19->Size = System::Drawing::Size(115, 23);
            this->button19->TabIndex = 26;
            this->button19->Text = L"Окно отладки";
            this->button19->UseVisualStyleBackColor = true;
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
            this->numberOfComparisons->Size = System::Drawing::Size(123, 13);
            this->numberOfComparisons->TabIndex = 19;
            this->numberOfComparisons->Text = L"Количество сравнений";
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
            this->RequestsDataGrid->RowHeadersWidth = 51;
            this->RequestsDataGrid->RowTemplate->ReadOnly = true;
            this->RequestsDataGrid->Size = System::Drawing::Size(882, 276);
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
            this->clientsPage->Controls->Add(this->button20);
            this->clientsPage->Controls->Add(this->button4);
            this->clientsPage->Controls->Add(this->label7);
            this->clientsPage->Controls->Add(this->textBox1);
            this->clientsPage->Controls->Add(this->label8);
            this->clientsPage->Controls->Add(this->label9);
            this->clientsPage->Controls->Add(this->label10);
            this->clientsPage->Controls->Add(this->textBox2);
            this->clientsPage->Controls->Add(this->button5);
            this->clientsPage->Controls->Add(this->button6);
            this->clientsPage->Controls->Add(this->label14);
            this->clientsPage->Controls->Add(this->label18);
            this->clientsPage->Controls->Add(this->label19);
            this->clientsPage->Controls->Add(this->textBox6);
            this->clientsPage->Controls->Add(this->textBox7);
            this->clientsPage->Controls->Add(this->textBox9);
            this->clientsPage->Controls->Add(this->button7);
            this->clientsPage->Controls->Add(this->ClientsDataGrid);
            this->clientsPage->Controls->Add(this->button15);
            this->clientsPage->Controls->Add(this->button16);
            this->clientsPage->Controls->Add(this->button17);
            this->clientsPage->Controls->Add(this->button18);
            this->clientsPage->Location = System::Drawing::Point(4, 22);
            this->clientsPage->Name = L"clientsPage";
            this->clientsPage->Padding = System::Windows::Forms::Padding(3);
            this->clientsPage->Size = System::Drawing::Size(888, 607);
            this->clientsPage->TabIndex = 1;
            this->clientsPage->Text = L"Клиенты";
            this->clientsPage->UseVisualStyleBackColor = true;
            // 
            // button20
            // 
            this->button20->Location = System::Drawing::Point(616, 425);
            this->button20->Name = L"button20";
            this->button20->Size = System::Drawing::Size(115, 23);
            this->button20->TabIndex = 47;
            this->button20->Text = L"Окно отладки";
            this->button20->UseVisualStyleBackColor = true;
            // 
            // button4
            // 
            this->button4->Location = System::Drawing::Point(639, 462);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(75, 23);
            this->button4->TabIndex = 46;
            this->button4->Text = L"Сохранить";
            this->button4->UseVisualStyleBackColor = true;
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(478, 301);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(91, 13);
            this->label7->TabIndex = 45;
            this->label7->Text = L"Номер паспорта";
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(355, 317);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(100, 20);
            this->textBox1->TabIndex = 44;
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Location = System::Drawing::Point(200, 467);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(59, 13);
            this->label8->TabIndex = 43;
            this->label8->Text = L"Результат";
            // 
            // label9
            //
                this->label9->AutoSize = true;
            this->label9->Location = System::Drawing::Point(14, 467);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(129, 13);
            this->label9->TabIndex = 42;
            this->label9->Text = L"Количество сравнений: ";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Location = System::Drawing::Point(352, 409);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(104, 13);
            this->label10->TabIndex = 41;
            this->label10->Text = L"Электронная почта";
            this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(355, 425);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(200, 20);
            this->textBox2->TabIndex = 40;
            this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
            // 
            // button5
            // 
            this->button5->Location = System::Drawing::Point(506, 462);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(75, 23);
            this->button5->TabIndex = 39;
            this->button5->Text = L"Удалить";
            this->button5->UseVisualStyleBackColor = true;
            // 
            // button6
            // 
            this->button6->Location = System::Drawing::Point(348, 461);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(75, 23);
            this->button6->TabIndex = 38;
            this->button6->Text = L"Добавить";
            this->button6->UseVisualStyleBackColor = true;
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Location = System::Drawing::Point(547, 352);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(34, 13);
            this->label14->TabIndex = 37;
            this->label14->Text = L"ФИО";
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->Location = System::Drawing::Point(352, 352);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(65, 13);
            this->label18->TabIndex = 36;
            this->label18->Text = L"Должность";
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Location = System::Drawing::Point(352, 301);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(88, 13);
            this->label19->TabIndex = 35;
            this->label19->Text = L"Серия паспорта";
            this->label19->Click += gcnew System::EventHandler(this, &MyForm::label19_Click);
            // 
            // textBox6
            // 
            this->textBox6->Location = System::Drawing::Point(550, 369);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(186, 20);
            this->textBox6->TabIndex = 34;
            // 
            // textBox7
            // 
            this->textBox7->Location = System::Drawing::Point(355, 368);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(145, 20);
            this->textBox7->TabIndex = 33;
            // 
            // textBox9
            // 
            this->textBox9->Location = System::Drawing::Point(481, 317);
            this->textBox9->Name = L"textBox9";
            this->textBox9->Size = System::Drawing::Size(100, 20);
            this->textBox9->TabIndex = 32;
            // 
            // button7
            // 
            this->button7->Location = System::Drawing::Point(13, 420);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(199, 23);
            this->button7->TabIndex = 31;
            this->button7->Text = L"Поиск по электронной почте";
            this->button7->UseVisualStyleBackColor = true;
            // 
            // ClientsDataGrid
            // 
            this->ClientsDataGrid->AllowUserToAddRows = false;
            this->ClientsDataGrid->AllowUserToDeleteRows = false;
            this->ClientsDataGrid->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->ClientsDataGrid->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
            this->ClientsDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->ClientsDataGrid->Dock = System::Windows::Forms::DockStyle::Top;
            this->ClientsDataGrid->Location = System::Drawing::Point(3, 3);
            this->ClientsDataGrid->Name = L"ClientsDataGrid";
            this->ClientsDataGrid->ReadOnly = true;
            this->ClientsDataGrid->RowHeadersWidth = 51;
            this->ClientsDataGrid->RowTemplate->ReadOnly = true;
            this->ClientsDataGrid->Size = System::Drawing::Size(882, 276);
            this->ClientsDataGrid->TabIndex = 30;
            // 
            // button15
            // 
            this->button15->Location = System::Drawing::Point(13, 382);
            this->button15->Name = L"button15";
            this->button15->Size = System::Drawing::Size(157, 23);
            this->button15->TabIndex = 29;
            this->button15->Text = L"Поиск по ФИО";
            this->button15->UseVisualStyleBackColor = true;
            // 
            // button16
            // 
            this->button16->Location = System::Drawing::Point(146, 342);
            this->button16->Name = L"button16";
            this->button16->Size = System::Drawing::Size(161, 23);
            this->button16->TabIndex = 28;
            this->button16->Text = L"Поиск по должности";
            this->button16->UseVisualStyleBackColor = true;
            // 
            // button17
            // 
            this->button17->Location = System::Drawing::Point(13, 342);
            this->button17->Name = L"button17";
            this->button17->Size = System::Drawing::Size(127, 23);
            this->button17->TabIndex = 27;
            this->button17->Text = L"Поиск по паспорту";
            this->button17->UseVisualStyleBackColor = true;
            // 
            // button18
            // 
            this->button18->Location = System::Drawing::Point(13, 301);
            this->button18->Name = L"button18";
            this->button18->Size = System::Drawing::Size(232, 23);
            this->button18->TabIndex = 26;
            this->button18->Text = L"Поиск по полной информации";
            this->button18->UseVisualStyleBackColor = true;
            // 
            // tabPage1
            // 
            this->tabPage1->Controls->Add(this->resultSearchServices2);
            this->tabPage1->Controls->Add(this->countComparationsServices);
            this->tabPage1->Controls->Add(this->button21);
            this->tabPage1->Controls->Add(this->label13);
            this->tabPage1->Controls->Add(this->label15);
            this->tabPage1->Controls->Add(this->label16);
            this->tabPage1->Controls->Add(this->label17);
            this->tabPage1->Controls->Add(this->button12);
            this->tabPage1->Controls->Add(this->tBType);
            this->tabPage1->Controls->Add(this->label11);
            this->tabPage1->Controls->Add(this->label12);
            this->tabPage1->Controls->Add(this->button13);
            this->tabPage1->Controls->Add(this->button14);
            this->tabPage1->Controls->Add(this->tBName);
            this->tabPage1->Controls->Add(this->tBTerm);
            this->tabPage1->Controls->Add(this->tBDivision);
            this->tabPage1->Controls->Add(this->searchByServiceName);
            this->tabPage1->Controls->Add(this->searchByServiceTypeBtn);
            this->tabPage1->Controls->Add(this->divisionSearchBtn);
            this->tabPage1->Controls->Add(this->searchServiceByTermBtb);
            this->tabPage1->Controls->Add(this->button11);
            this->tabPage1->Controls->Add(this->ServicesDataGrid);
            this->tabPage1->Location = System::Drawing::Point(4, 22);
            this->tabPage1->Name = L"tabPage1";
            this->tabPage1->Size = System::Drawing::Size(888, 607);
            this->tabPage1->TabIndex = 2;
            this->tabPage1->Text = L"Услуги";
            this->tabPage1->UseVisualStyleBackColor = true;
            this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
            // 
            // resultSearchServices2
            // 
            this->resultSearchServices2->AutoSize = true;
            this->resultSearchServices2->Location = System::Drawing::Point(250, 461);
                this->resultSearchServices2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->resultSearchServices2->Name = L"resultSearchServices2";
            this->resultSearchServices2->Size = System::Drawing::Size(0, 13);
            this->resultSearchServices2->TabIndex = 43;
            // 
            // countComparationsServices
            // 
            this->countComparationsServices->AutoSize = true;
            this->countComparationsServices->Location = System::Drawing::Point(136, 461);
            this->countComparationsServices->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->countComparationsServices->Name = L"countComparationsServices";
            this->countComparationsServices->Size = System::Drawing::Size(0, 13);
            this->countComparationsServices->TabIndex = 42;
            // 
            // button21
            // 
            this->button21->Location = System::Drawing::Point(353, 456);
            this->button21->Name = L"button21";
            this->button21->Size = System::Drawing::Size(115, 23);
            this->button21->TabIndex = 41;
            this->button21->Text = L"Окно отладки";
            this->button21->UseVisualStyleBackColor = true;
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Location = System::Drawing::Point(481, 285);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(87, 13);
            this->label13->TabIndex = 40;
            this->label13->Text = L"Подразделение";
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Location = System::Drawing::Point(508, 352);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(93, 13);
            this->label15->TabIndex = 38;
            this->label15->Text = L"Название услуги";
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Location = System::Drawing::Point(350, 352);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(98, 13);
            this->label16->TabIndex = 37;
            this->label16->Text = L"Срок исполнения ";
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->Location = System::Drawing::Point(350, 285);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(62, 13);
            this->label17->TabIndex = 36;
            this->label17->Text = L"Тип услуги";
            this->label17->Click += gcnew System::EventHandler(this, &MyForm::label17_Click);
            // 
            // button12
            // 
            this->button12->Location = System::Drawing::Point(614, 451);
            this->button12->Name = L"button12";
            this->button12->Size = System::Drawing::Size(75, 23);
            this->button12->TabIndex = 35;
            this->button12->Text = L"Сохранить";
            this->button12->UseVisualStyleBackColor = true;
            // 
            // tBType
            // 
            this->tBType->Location = System::Drawing::Point(353, 301);
            this->tBType->Name = L"tBType";
            this->tBType->Size = System::Drawing::Size(100, 20);
            this->tBType->TabIndex = 34;
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Location = System::Drawing::Point(187, 461);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(59, 13);
            this->label11->TabIndex = 33;
            this->label11->Text = L"Результат";
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Location = System::Drawing::Point(13, 461);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(129, 13);
            this->label12->TabIndex = 32;
            this->label12->Text = L"Количество сравнений: ";
            // 
            // button13
            // 
            this->button13->Location = System::Drawing::Point(511, 404);
            this->button13->Name = L"button13";
            this->button13->Size = System::Drawing::Size(75, 23);
            this->button13->TabIndex = 30;
            this->button13->Text = L"Удалить";
            this->button13->UseVisualStyleBackColor = true;
            // 
            // button14
            //
                this->button14->Location = System::Drawing::Point(353, 403);
            this->button14->Name = L"button14";
            this->button14->Size = System::Drawing::Size(75, 23);
            this->button14->TabIndex = 29;
            this->button14->Text = L"Добавить";
            this->button14->UseVisualStyleBackColor = true;
            // 
            // tBName
            // 
            this->tBName->Location = System::Drawing::Point(511, 369);
            this->tBName->Name = L"tBName";
            this->tBName->Size = System::Drawing::Size(167, 20);
            this->tBName->TabIndex = 28;
            // 
            // tBTerm
            // 
            this->tBTerm->Location = System::Drawing::Point(353, 368);
            this->tBTerm->Name = L"tBTerm";
            this->tBTerm->Size = System::Drawing::Size(133, 20);
            this->tBTerm->TabIndex = 27;
            // 
            // tBDivision
            // 
            this->tBDivision->Location = System::Drawing::Point(484, 301);
            this->tBDivision->Name = L"tBDivision";
            this->tBDivision->Size = System::Drawing::Size(100, 20);
            this->tBDivision->TabIndex = 26;
            // 
            // searchByServiceName
            // 
            this->searchByServiceName->Location = System::Drawing::Point(16, 415);
            this->searchByServiceName->Name = L"searchByServiceName";
            this->searchByServiceName->Size = System::Drawing::Size(157, 23);
            this->searchByServiceName->TabIndex = 11;
            this->searchByServiceName->Text = L"Поиск по названию услуги";
            this->searchByServiceName->UseVisualStyleBackColor = true;
            this->searchByServiceName->Click += gcnew System::EventHandler(this, &MyForm::searchByServiceName_Click);
            // 
            // searchByServiceTypeBtn
            // 
            this->searchByServiceTypeBtn->Location = System::Drawing::Point(13, 376);
            this->searchByServiceTypeBtn->Name = L"searchByServiceTypeBtn";
            this->searchByServiceTypeBtn->Size = System::Drawing::Size(157, 23);
            this->searchByServiceTypeBtn->TabIndex = 10;
            this->searchByServiceTypeBtn->Text = L"Поиск по типу услуги ";
            this->searchByServiceTypeBtn->UseVisualStyleBackColor = true;
            this->searchByServiceTypeBtn->Click += gcnew System::EventHandler(this, &MyForm::searchByServiceTypeBtn_Click);
            // 
            // divisionSearchBtn
            // 
            this->divisionSearchBtn->Location = System::Drawing::Point(13, 287);
            this->divisionSearchBtn->Name = L"divisionSearchBtn";
            this->divisionSearchBtn->Size = System::Drawing::Size(190, 23);
            this->divisionSearchBtn->TabIndex = 9;
            this->divisionSearchBtn->Text = L"Поиск по подразделению";
            this->divisionSearchBtn->UseVisualStyleBackColor = true;
            this->divisionSearchBtn->Click += gcnew System::EventHandler(this, &MyForm::divisionSearchBtn_Click);
            // 
            // searchServiceByTermBtb
            // 
            this->searchServiceByTermBtb->Location = System::Drawing::Point(13, 347);
            this->searchServiceByTermBtb->Name = L"searchServiceByTermBtb";
            this->searchServiceByTermBtb->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->searchServiceByTermBtb->Size = System::Drawing::Size(172, 23);
            this->searchServiceByTermBtb->TabIndex = 8;
            this->searchServiceByTermBtb->Text = L"Поиск по сроку исполнения";
            this->searchServiceByTermBtb->UseVisualStyleBackColor = true;
            this->searchServiceByTermBtb->Click += gcnew System::EventHandler(this, &MyForm::searchServiceByTermBtb_Click);
            // 
            // button11
            // 
            this->button11->Location = System::Drawing::Point(13, 316);
            this->button11->Name = L"button11";
            this->button11->Size = System::Drawing::Size(232, 23);
            this->button11->TabIndex = 7;
            this->button11->Text = L"Поиск по типу и названию услуги";
            this->button11->UseVisualStyleBackColor = true;
            // 
            // ServicesDataGrid
            // 
            this->ServicesDataGrid->AllowUserToAddRows = false;
            this->ServicesDataGrid->AllowUserToDeleteRows = false;
            this->ServicesDataGrid->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->ServicesDataGrid->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
            this->ServicesDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->ServicesDataGrid->Dock = System::Windows::Forms::DockStyle::Top;
            this->ServicesDataGrid->Location = System::Drawing::Point(0, 0);
            this->ServicesDataGrid->Name = L"ServicesDataGrid";
            this->ServicesDataGrid->ReadOnly = true;
            this->ServicesDataGrid->RowHeadersWidth = 51;
            this->ServicesDataGrid->RowTemplate->ReadOnly = true;
            this->ServicesDataGrid->Size = System::Drawing::Size(888, 276);
            this->ServicesDataGrid->TabIndex = 6;
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
            this->Load += gcnew System::EventHandler(this, &MyForm::FormLoad);
            this->tabControl1->ResumeLayout(false);
            this->requestsPage->ResumeLayout(false);
            this->requestsPage->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RequestsDataGrid))->EndInit();
            this->clientsPage->ResumeLayout(false);
            this->clientsPage->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ClientsDataGrid))->EndInit();
            this->tabPage1->ResumeLayout(false);
            this->tabPage1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ServicesDataGrid))->EndInit();
            this->ResumeLayout(false);

        }
    private: System::Void FormLoad(System::Object^ sender, System::EventArgs^ e) {
        vector<RequestsEntity*> data = DataStorage::data;
        treeNode*& avlTreePassport = DataStorage::avlTreePassport;
        treeNode*& avlTreeDate = DataStorage::avlTreeDate;
        treeNode*& avlTreeServiceType = DataStorage::avlTreeServiceType;
        treeNode*& avlTreeServiceName = DataStorage::avlTreeServiceName;
        bool heightChanged = false;
        RequestsHashTable requestsHashTable = DataStorage::requestsHashTable;
        for (int i = 0; i < data.size(); i++) {
            requestsHashTable.insert(data[i]);
        }
        for (int i = 0; i < data.size(); i++) {
            string valueText = to_string(data[i]->passport.series) + to_string(data[i]->passport.number);
            listNodeElem* value = new listNodeElem();
            value->index = i;
            value->value = valueText;
            addNode(avlTreePassport, value, heightChanged);

        }
        for (int i = 0; i < data.size(); i++) {
            string valueText = data[i]->date.day + "." + data[i]->date.month + "." + data[i]->date.year;
            listNodeElem* value = new listNodeElem();
            value->index = i;
            value->value = valueText;
            addNode(avlTreeDate, value, heightChanged);

        }
        for (int i = 0; i < data.size(); i++) {
            string valueText = data[i]->serviceType;
            listNodeElem* value = new listNodeElem();
            value->index = i;
            value->value = valueText;
            addNode(avlTreeServiceType, value, heightChanged);
        }
        for (int i = 0; i < data.size(); i++) {
            string valueText = data[i]->serviceName;
            listNodeElem* value = new listNodeElem();
            value->index = i;
            value->value = valueText;
            addNode(avlTreeServiceName, value, heightChanged);
        }
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
            string date = data[i]->date.day + "." + data[i]->date.month + "." + data[i]->date.year;
            row["Дата"] = gcnew String(date.c_str());
            tabl->Rows->Add(row);
        }




        vector<ClientsEntity*> dataClients = DataClientsStorage::data;
        DataTable^ tablClients = gcnew DataTable();
        ClientsDataGrid->DataSource = tablClients;
        tablClients->Columns->Add("ФИО");
        tablClients->Columns->Add("Должность");
        tablClients->Columns->Add("email");
        tablClients->Columns->Add("Паспорт");
        for (int i = 0; i < dataClients.size(); i++) {
            DataRow^ rowClients = tablClients->NewRow();
            rowClients["ФИО"] = gcnew String((dataClients[i]->fullname.surname + ' ' + dataClients[i]->fullname.name + ' ' + dataClients[i]->fullname.lastname).c_str());
            rowClients["Должность"] = gcnew String(dataClients[i]->job.c_str());
            rowClients["email"] = gcnew String(dataClients[i]->email.c_str());
            string passportClient = to_string(dataClients[i]->passport.number) + ' ' + to_string(dataClients[i]->passport.series);
            //rowClients["Ianii?oiua aaiiua"] = gcnew String(passport.c_str());
            rowClients["Паспорт"] = gcnew String(passportClient.c_str());
            tablClients->Rows->Add(rowClients);
        }


        vector<ServiceEntity*> dataServices = DataStorage::dataServices;
        DataTable^ tablServices = gcnew DataTable();
        ServicesDataGrid->DataSource = tablServices;
        tablServices->Columns->Add("Тип услуги");
        tablServices->Columns->Add("Подразделение");
        tablServices->Columns->Add("Название услуги");
        tablServices->Columns->Add("Срок исполнения");
        for (int i = 0; i < dataServices.size(); i++) {
            DataRow^ rowServices = tablServices->NewRow();
            rowServices["Тип услуги"] = gcnew String(dataServices[i]->serviceType.c_str());
            rowServices["Подразделение"] = gcnew String(dataServices[i]->division.c_str());
            rowServices["Название услуги"] = gcnew String(dataServices[i]->serviceName.c_str());
            string term = to_string(dataServices[i]->term);
            rowServices["Срок исполнения"] = gcnew String(term.c_str());
            tablServices->Rows->Add(rowServices);
        }
    }
    private: System::Void searchByTypeAndNameOfService_Click(System::Object^ sender, System::EventArgs^ e) {
        string  serviceName = marshal_as<std::string>(this->tBServiceName->Text);
        string  serviceType = marshal_as<std::string>(this->tBServiceType->Text);
        string dateString = marshal_as<std::string>(this->tBDate->Text);
        string seriesPassportText = marshal_as<std::string>(this->tBSeriesPassport->Text);
        string numberPassportText = marshal_as<std::string>(this->tBNumberPassport->Text);
        if (serviceName.size() == 0 || serviceType.size() == 0 || dateString.size() == 0 || seriesPassportText.size() == 0 || numberPassportText.size() == 0) {
            MessageBox::Show(this, "Iaei??aeoiua aaiiua , i?iaa?uoa aaaaaiio? eioi?iaoe? i cayaea", "Ioeaea", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            int seriesPassport = stoi(seriesPassportText);
            int numberPassport = stoi(numberPassportText);
            date date = inputDateData(dateString);
            Passport passport = Passport();
            passport.number = numberPassport;
            int jopa = 4;
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
                this->resultSearch->Text = gcnew String("Iaeaai");
            }
            else {
                this->resultSearch->Text = gcnew String("Ia iaeaai");
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
        treeNode* avlTreePassport = DataStorage::avlTreePassport;
        int count = 0;
        searchByPassportTreeNode(avlTreePassport, entity, count);
        bool result_searchByPassportTreeNode = DataStorage::resultSerch;
        this->countComparisons->Text = gcnew String(to_string(DataStorage::countComparisons).c_str());
        if (result_searchByPassportTreeNode) {
            this->resultSearch->Text = gcnew String("Iaeaai");
        }
        else {
            this->resultSearch->Text = gcnew String("Ia iaeaai");
        }
        printTree(avlTreePassport, nullptr);
        cout << endl;
    }
    private: System::Void save_btn(System::Object^ sender, System::EventArgs^ e) {
        vector<RequestsEntity*> data = DataStorage::data;
        writeData(data, "stdrequests.txt");
        MessageBox::Show(this, "Aaiiua cayaie oniaoii nio?aiaiu", "Nio?aiaiea", MessageBoxButtons::OK, MessageBoxIcon::Information);
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
        treeNode*& avlTreePassport = DataStorage::avlTreePassport;
        treeNode*& avlTreeDate = DataStorage::avlTreeDate;
        treeNode*& avlTreeServiceType = DataStorage::avlTreeServiceType;
        treeNode*& avlTreeServiceName = DataStorage::avlTreeServiceName;
        RequestsHashTable requestsHashTable = DataStorage::requestsHashTable;
        int count = 0;
        searchByPassportTreeNode(avlTreePassport, entity, count);
        bool result_searchByPassportTreeNode = DataStorage::resultSerch;
        if (result_searchByPassportTreeNode) {
            int index = DataStorage::indexSearch;
            RequestsEntity* delElem = DataStorage::data[index];
            RequestsEntity* lastElem = DataStorage::data.back();
            listNodeElem* value = new listNodeElem();
            string valueText = to_string(delElem->passport.series) + to_string(delElem->passport.number);
            value->index = index;
            value->value = valueText;
            bool heightChanged = false;
            requestsHashTable.remove(delElem);
            updateByPassportTreeNode(avlTreePassport, lastElem, index);
            updateServiceTypeTreeNode(avlTreeServiceType, lastElem, index);
            updateServiceNameTreeNode(avlTreeServiceName, lastElem, index);
            updateByDateTreeNode(avlTreeDate, lastElem, index);
            delNode(avlTreePassport, value, heightChanged);

            DataStorage::data[index] = lastElem;
            DataStorage::data.pop_back();
            MessageBox::Show(this, "Cayaea oniaoii oaaeaia", "Oaaeaiea", MessageBoxButtons::OK, MessageBoxIcon::None);
            vector<RequestsEntity*> dataTest = DataStorage::data;
            int jopa = 3;
        }
        else {
            MessageBox::Show(this, "Iaei??aeoiua aaiiua , i?iaa?uoa aaaaaiio? eioi?iaoe? i cayaea", "Ioeaea", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        //dataStorage.removeElement(entity);
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
        treeNode* avlTreeDate = DataStorage::avlTreeDate;
        int count = 0;
        searchByDateTreeNode(avlTreeDate, entity, count);
        bool result_searchByDateTreeNode = DataStorage::resultSerch;
        this->countComparisons->Text = gcnew String(to_string(DataStorage::countComparisons).c_str());
        if (result_searchByDateTreeNode) {
            this->resultSearch->Text = gcnew String("Iaeaai");
        }
        else {
            this->resultSearch->Text = gcnew String("Ia iaeaai");
        }
        printTree(avlTreeDate, nullptr);
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
        treeNode* avlTreeServiceType = DataStorage::avlTreeServiceType;
        int count = 0;
        searchByServiceTypeTreeNode(avlTreeServiceType, entity, count);
        bool result_searchByServiceTypeTreeNode = DataStorage::resultSerch;
        this->countComparisons->Text = gcnew String(to_string(DataStorage::countComparisons).c_str());
        if (result_searchByServiceTypeTreeNode) {
            this->resultSearch->Text = gcnew String("Iaeaai");
        }
        else {
            this->resultSearch->Text = gcnew String("Ia iaeaai");
        }
        printTree(avlTreeServiceType, nullptr);
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
        treeNode* avlTreeServiceName = DataStorage::avlTreeServiceName;
        bool heightChanged = false;
        int count = 0;
        searchByServiceNameTreeNode(avlTreeServiceName, entity, count);
        bool result_searchByServiceNameTreeNode = DataStorage::resultSerch;
        this->countComparisons->Text = gcnew String(to_string(DataStorage::countComparisons).c_str());
        if (result_searchByServiceNameTreeNode) {
            this->resultSearch->Text = gcnew String("Iaeaai");
        }
        else {
            this->resultSearch->Text = gcnew String("Ia iaeaai");
        }
        printTree(avlTreeServiceName, nullptr);
        cout << endl;
    }
    private: System::Void RequestsDataGrid_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    }
    private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
    }

    private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
    }


    private: System::Void divisionSearchBtn_Click(System::Object^ sender, System::EventArgs^ e) {
        string serviceName = marshal_as<std::string>(this->tBName->Text);
        string serviceType = marshal_as<std::string>(this->tBType->Text);
        string serviceDivision = marshal_as<std::string>(this->tBDivision->Text);
        string serviceTermStr = marshal_as<std::string>(this->tBTerm->Text);
            if (serviceName.size() == 0 || serviceType.size() == 0 || serviceDivision.size() == 0 || serviceTermStr.size() == 0) {
                MessageBox::Show(this, "Некорректные данные, проверьте правильность введенных данных", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
            else {
                int serviceTerm;
                try {
                    serviceTerm = stoi(serviceTermStr);
                }
                catch (exception& err) {
                    MessageBox::Show(this, "Неверный тип данных", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
                }

                serviceTerm = stoi(serviceTermStr);
                Passport passport = Passport();
                ServiceEntity* entity = new ServiceEntity();
                entity->division = serviceDivision;
                entity->serviceName = serviceName;
                entity->term = serviceTerm;
                entity->serviceType = serviceType;
                DataStorage::rbTreeLeaf = initLeaf();
                treeNodeServices* leaf = DataStorage::rbTreeLeaf;
                DataStorage::rbTreeDivision = initTree(leaf);
                treeNodeServices* rbTreeDivision = DataStorage::rbTreeDivision;
                vector<ServiceEntity*> data = DataStorage::dataServices;


                for (int i = 0; i < data.size(); i++) {
                    string valueText = data[i]->division;
                    treeNodeElemServices value;
                    value.index = i;
                    value.value = valueText;
                    insert(rbTreeDivision, value, leaf);
                }
                int count = 0;
                treeNodeElemServices searchable;
                searchable.value = entity->division;
                searchable.index = 0;
                search(rbTreeDivision, searchable, leaf, count);
                bool result = DataStorage::resultSerch;
                this->countComparationsServices->Text = gcnew String(to_string(DataStorage::countComparisons).c_str());
                DataStorage::countComparisons = 0;
                if (result) {
                    this->resultSearchServices2->Text = gcnew String("Найден");
                }
                else {
                    this->resultSearchServices2->Text = gcnew String("Не найден");
                }
                printTreeA(rbTreeDivision, 8, leaf);
                cout << endl;
            }
    }
    private: System::Void requestsPage_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
    }

    private: System::Void searchByServiceTypeBtn_Click(System::Object^ sender, System::EventArgs^ e) {
        string serviceName = marshal_as<std::string>(this->tBName->Text);
        string serviceType = marshal_as<std::string>(this->tBType->Text);
        string serviceDivision = marshal_as<std::string>(this->tBDivision->Text);
        string serviceTermStr = marshal_as<std::string>(this->tBTerm->Text);

        if (serviceName.size() == 0 || serviceType.size() == 0 || serviceDivision.size() == 0 || serviceTermStr.size() == 0) {
            MessageBox::Show(this, "Некорректные данные, проверьте правильность введенных данных", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            int serviceTerm;
            try {
                serviceTerm = stoi(serviceTermStr);
            }
            catch (exception& err) {
                MessageBox::Show(this, "Неверный тип данных", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }

            serviceTerm = stoi(serviceTermStr);
            Passport passport = Passport();
            ServiceEntity* entity = new ServiceEntity();
            entity->division = serviceDivision;
            entity->serviceName = serviceName;
            entity->term = serviceTerm;
            entity->serviceType = serviceType;
            DataStorage::rbTreeLeaf = initLeaf();
            treeNodeServices* leaf = DataStorage::rbTreeLeaf;
            DataStorage::rbTreeType = initTree(leaf);
            treeNodeServices* rbTreeDivision = DataStorage::rbTreeType;
            vector<ServiceEntity*> data = DataStorage::dataServices;

 
                for (int i = 0; i < data.size(); i++) {
                    string valueText = data[i]->serviceType;
                    treeNodeElemServices value;
                    value.index = i;
                    value.value = valueText;
                    insert(rbTreeDivision, value, leaf);
                }
            int count = 0;
            treeNodeElemServices searchable;
            searchable.value = entity->serviceType;
            searchable.index = 0;
            search(rbTreeDivision, searchable, leaf, count);
            bool result = DataStorage::resultSerch;
            this->countComparationsServices->Text = gcnew String(to_string(DataStorage::countComparisons).c_str());
            DataStorage::countComparisons = 0;
            if (result) {
                this->resultSearchServices2->Text = gcnew String("Найден");
            }
            else {
                this->resultSearchServices2->Text = gcnew String("Не найден");
            }
            printTreeA(rbTreeDivision, 8, leaf);
            cout << endl;
        }
    }

    private: System::Void searchByServiceName_Click(System::Object^ sender, System::EventArgs^ e) {
        string serviceName = marshal_as<std::string>(this->tBName->Text);
        string serviceType = marshal_as<std::string>(this->tBType->Text);
        string serviceDivision = marshal_as<std::string>(this->tBDivision->Text);
        string serviceTermStr = marshal_as<std::string>(this->tBTerm->Text);

        if (serviceName.size() == 0 || serviceType.size() == 0 || serviceDivision.size() == 0 || serviceTermStr.size() == 0) {
            MessageBox::Show(this, "Некорректные данные, проверьте правильность введенных данных", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            int serviceTerm;
            try {
                serviceTerm = stoi(serviceTermStr);
            }
            catch (exception& err) {
                MessageBox::Show(this, "Неверный тип данных", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }

            serviceTerm = stoi(serviceTermStr);
            Passport passport = Passport();
            ServiceEntity* entity = new ServiceEntity();
            entity->division = serviceDivision;
            entity->serviceName = serviceName;
            entity->term = serviceTerm;
            entity->serviceType = serviceType;
            DataStorage::rbTreeLeaf = initLeaf();
            treeNodeServices* leaf = DataStorage::rbTreeLeaf;
            DataStorage::rbTreeName = initTree(leaf);
            treeNodeServices* rbTreeDivision = DataStorage::rbTreeName;
            vector<ServiceEntity*> data = DataStorage::dataServices;


            for (int i = 0; i < data.size(); i++) {
                string valueText = data[i]->serviceName;
                treeNodeElemServices value;
                value.index = i;
                value.value = valueText;
                insert(rbTreeDivision, value, leaf);
            }
            int count = 0;
            treeNodeElemServices searchable;
            searchable.value = entity->serviceName;
            searchable.index = 0;
            search(rbTreeDivision, searchable, leaf, count);
            bool result = DataStorage::resultSerch;
            this->countComparationsServices->Text = gcnew String(to_string(DataStorage::countComparisons).c_str());
            DataStorage::countComparisons = 0;
            if (result) {
                this->resultSearchServices2->Text = gcnew String("Найден");
            }
            else {
                this->resultSearchServices2->Text = gcnew String("Не найден");
            }
            printTreeA(rbTreeDivision, 8, leaf);
            cout << endl;
        }
    }

    private: System::Void searchServiceByTermBtb_Click(System::Object^ sender, System::EventArgs^ e) {
        string serviceName = marshal_as<std::string>(this->tBName->Text);
        string serviceType = marshal_as<std::string>(this->tBType->Text);
        string serviceDivision = marshal_as<std::string>(this->tBDivision->Text);
        string serviceTermStr = marshal_as<std::string>(this->tBTerm->Text);

        if (serviceName.size() == 0 || serviceType.size() == 0 || serviceDivision.size() == 0 || serviceTermStr.size() == 0) {
            MessageBox::Show(this, "Некорректные данные, проверьте правильность введенных данных", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            int serviceTerm;
            try {
                serviceTerm = stoi(serviceTermStr);
            }
            catch (exception& err) {
                MessageBox::Show(this, "Неверный тип данных", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
            Passport passport = Passport();
            ServiceEntity* entity = new ServiceEntity();
            entity->division = serviceDivision;
            entity->serviceName = serviceName;
            entity->term = serviceTerm;
            entity->serviceType = serviceType;
            DataStorage::rbTreeLeaf = initLeaf();
            treeNodeServices* leaf = DataStorage::rbTreeLeaf;
            DataStorage::rbTreeTerm = initTree(leaf);
            treeNodeServices* rbTreeDivision = DataStorage::rbTreeTerm;
            vector<ServiceEntity*> data = DataStorage::dataServices;


            for (int i = 0; i < data.size(); i++) {
                string valueText = to_string(data[i]->term);
                treeNodeElemServices value;
                value.index = i;
                value.value = valueText;
                insert(rbTreeDivision, value, leaf);
            }
            int count = 0;
            treeNodeElemServices searchable;
            searchable.value = to_string(entity->term);
            searchable.index = 0;
            search(rbTreeDivision, searchable, leaf, count);
            bool result = DataStorage::resultSerch;
            this->countComparationsServices->Text = gcnew String(to_string(DataStorage::countComparisons).c_str());
            DataStorage::countComparisons = 0;
            if (result) {
                this->resultSearchServices2->Text = gcnew String("Найден");
            }
            else {
                this->resultSearchServices2->Text = gcnew String("Не найден");
            }
            printTreeA(rbTreeDivision, 8, leaf);
            cout << endl;
        }

    }
    };
}