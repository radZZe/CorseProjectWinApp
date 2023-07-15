#pragma once
#include <vector>
#include <iostream>
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

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ tBDate;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ addRequestsBTN;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;


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
private: System::Windows::Forms::Button^ searchByNameAndType;



	private: System::Windows::Forms::DataGridView^ ServicesDataGrid;


    private: System::Windows::Forms::Button^ divisionSearchBtn;
    private: System::Windows::Forms::Button^ searchServiceByTermBtb;


	private: System::Windows::Forms::Button^ button11;    
private: System::Windows::Forms::TextBox^ tBClientPassSeries;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ btnSearchClientByEmail;
private: System::Windows::Forms::Button^ button8;
//private: System::Windows::Forms::Button^ btnSearchByClient;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::DataGridView^ ClientsDataGrid;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::Button^ button17;



	//private: System::Windows::Forms::TextBox^ tBClientEmai;  
  private: System::Windows::Forms::Button^ btnAddClient;



    private: System::Windows::Forms::TextBox^ tBClientFullname;
    private: System::Windows::Forms::TextBox^ tBClientJob;
    private: System::Windows::Forms::TextBox^ tBClientPassNum;
    private: System::Windows::Forms::Button^ btnSearchByClientEmail;
    private: System::Windows::Forms::DataGridView^ ClientsDataGrid;
    private: System::Windows::Forms::Button^ btnSearchBuClientFullname;
    private: System::Windows::Forms::Button^ btnSearchByClientJob;
    private: System::Windows::Forms::Button^ btnSearchByClientPassport;
    private: System::Windows::Forms::Button^ btnSearchByClient;
    private: System::Windows::Forms::Button^ button19;
    private: System::Windows::Forms::Button^ button20;
    private: System::Windows::Forms::Button^ button21;
    private: System::Windows::Forms::Label^ resultSearchServices;
    private: System::Windows::Forms::Label^ countServices;
    private: System::Windows::Forms::Label^ countComparationsServices;
    private: System::Windows::Forms::Label^ resultSearchServices2;
private: System::Windows::Forms::Label^ resultSearchClient;
private: System::Windows::Forms::Label^ countOfCompareClients;
private: System::Windows::Forms::TabPage^ clientsPage;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Button^ debugClientButton;
private: System::Windows::Forms::Button^ btnDeletionClient;
private: System::Windows::Forms::TextBox^ tBClientEmai;







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
			this->addRequestsBTN = (gcnew System::Windows::Forms::Button());
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
			this->btnAddClient = (gcnew System::Windows::Forms::Button());
			this->resultSearchClient = (gcnew System::Windows::Forms::Label());
			this->countOfCompareClients = (gcnew System::Windows::Forms::Label());
			this->tBClientEmai = (gcnew System::Windows::Forms::TextBox());
			this->tBClientFullname = (gcnew System::Windows::Forms::TextBox());
			this->tBClientJob = (gcnew System::Windows::Forms::TextBox());
			this->tBClientPassNum = (gcnew System::Windows::Forms::TextBox());
			this->tBClientPassSeries = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnSearchClientByEmail = (gcnew System::Windows::Forms::Button());
			this->btnSearchByClientJob = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->btnSearchByClient = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->debugClientButton = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->btnDeletionClient = (gcnew System::Windows::Forms::Button());
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
			this->searchByNameAndType = (gcnew System::Windows::Forms::Button());
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
			this->tabControl1->Location = System::Drawing::Point(-7, -4);
			this->tabControl1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1195, 779);
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
			this->requestsPage->Controls->Add(this->addRequestsBTN);
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
			this->requestsPage->Location = System::Drawing::Point(4, 25);
			this->requestsPage->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->requestsPage->Name = L"requestsPage";
			this->requestsPage->Padding = System::Windows::Forms::Padding(3);
			this->requestsPage->Size = System::Drawing::Size(888, 607);
			this->requestsPage->TabIndex = 0;
			this->requestsPage->Text = L"Çàÿâêè";
			this->requestsPage->UseVisualStyleBackColor = true;
			// 
			// resultSearchServices
			// 
			this->resultSearchServices->AutoSize = true;
			this->resultSearchServices->Location = System::Drawing::Point(351, 566);
			this->resultSearchServices->Name = L"resultSearchServices";
			this->resultSearchServices->Size = System::Drawing::Size(0, 16);
			this->resultSearchServices->TabIndex = 28;
			// 
			// countServices
			// 
			this->countServices->AutoSize = true;
			this->countServices->Location = System::Drawing::Point(191, 566);
			this->countServices->Name = L"countServices";
			this->countServices->Size = System::Drawing::Size(0, 16);
			this->countServices->TabIndex = 27;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(467, 566);
			this->button19->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(153, 28);
			this->button19->TabIndex = 26;
			this->button19->Text = L"Îêíî îòëàäêè";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// saveBtn
			// 
			this->saveBtn->Location = System::Drawing::Point(815, 566);
			this->saveBtn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->saveBtn->Name = L"saveBtn";
			this->saveBtn->Size = System::Drawing::Size(100, 28);
			this->saveBtn->TabIndex = 25;
			this->saveBtn->Text = L"Ñîõðàíèòü";
			this->saveBtn->UseVisualStyleBackColor = true;
			this->saveBtn->Click += gcnew System::EventHandler(this, &MyForm::save_btn);
			// 
			// resultSearch
			// 
			this->resultSearch->AutoSize = true;
			this->resultSearch->Location = System::Drawing::Point(355, 566);
			this->resultSearch->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->resultSearch->Name = L"resultSearch";
			this->resultSearch->Size = System::Drawing::Size(0, 16);
			this->resultSearch->TabIndex = 24;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(637, 362);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(115, 16);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Íîìåð ïàñïîðòà";
			// 
			// tBSeriesPassport
			// 
			this->tBSeriesPassport->Location = System::Drawing::Point(467, 382);
			this->tBSeriesPassport->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tBSeriesPassport->Name = L"tBSeriesPassport";
			this->tBSeriesPassport->Size = System::Drawing::Size(132, 22);
			this->tBSeriesPassport->TabIndex = 22;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(267, 566);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(77, 16);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Ðåçóëüòàò";
			// 
			// countComparisons
			// 
			this->countComparisons->AutoSize = true;
			this->countComparisons->Location = System::Drawing::Point(195, 566);
			this->countComparisons->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->countComparisons->Name = L"countComparisons";
			this->countComparisons->Size = System::Drawing::Size(0, 16);
			this->countComparisons->TabIndex = 20;
			// 
			// numberOfComparisons
			// 
			this->numberOfComparisons->AutoSize = true;
			this->numberOfComparisons->Location = System::Drawing::Point(19, 566);
			this->numberOfComparisons->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->numberOfComparisons->Name = L"numberOfComparisons";
			this->numberOfComparisons->Size = System::Drawing::Size(159, 16);
			this->numberOfComparisons->TabIndex = 19;
			this->numberOfComparisons->Text = L"Êîëè÷åñòâî ñðàâíåíèé";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(811, 362);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(39, 16);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Äàòà";
			// 
			// tBDate
			// 
			this->tBDate->Location = System::Drawing::Point(815, 382);
			this->tBDate->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tBDate->Name = L"tBDate";
			this->tBDate->Size = System::Drawing::Size(132, 22);
			this->tBDate->TabIndex = 17;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(677, 508);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 28);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Óäàëèòü";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::remove_element);
			// 
			// addRequestsBTN
			// 
			this->addRequestsBTN->Location = System::Drawing::Point(350, 413);
			this->addRequestsBTN->Margin = System::Windows::Forms::Padding(2);
			this->addRequestsBTN->Name = L"addRequestsBTN";
			this->addRequestsBTN->Size = System::Drawing::Size(75, 23);
			this->addRequestsBTN->TabIndex = 15;
			this->addRequestsBTN->Text = L"Äîáàâèòü";
			this->addRequestsBTN->UseVisualStyleBackColor = true;
			this->addRequestsBTN->Click += gcnew System::EventHandler(this, &MyForm::addRequestsBTN_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(673, 444);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(121, 16);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Íàçâàíèå óñëóãè";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(463, 444);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 16);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Òèï óñëóãè";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(463, 362);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 16);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Ñåðèÿ ïàñïîðòà";
			// 
			// tBServiceName
			// 
			this->tBServiceName->Location = System::Drawing::Point(677, 465);
			this->tBServiceName->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tBServiceName->Name = L"tBServiceName";
			this->tBServiceName->Size = System::Drawing::Size(221, 22);
			this->tBServiceName->TabIndex = 10;
			// 
			// tBServiceType
			// 
			this->tBServiceType->Location = System::Drawing::Point(467, 464);
			this->tBServiceType->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tBServiceType->Name = L"tBServiceType";
			this->tBServiceType->Size = System::Drawing::Size(176, 22);
			this->tBServiceType->TabIndex = 9;
			// 
			// tBNumberPassport
			// 
			this->tBNumberPassport->Location = System::Drawing::Point(641, 382);
			this->tBNumberPassport->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tBNumberPassport->Name = L"tBNumberPassport";
			this->tBNumberPassport->Size = System::Drawing::Size(132, 22);
			this->tBNumberPassport->TabIndex = 8;
			// 
			// searchByServiceNameBTN
			// 
			this->searchByServiceNameBTN->Location = System::Drawing::Point(17, 508);
			this->searchByServiceNameBTN->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->searchByServiceNameBTN->Name = L"searchByServiceNameBTN";
			this->searchByServiceNameBTN->Size = System::Drawing::Size(209, 28);
			this->searchByServiceNameBTN->TabIndex = 6;
			this->searchByServiceNameBTN->Text = L"Ïîèñê ïî íàçâàíèþ óñëóãè";
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
			this->RequestsDataGrid->Location = System::Drawing::Point(4, 4);
			this->RequestsDataGrid->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->RequestsDataGrid->Name = L"RequestsDataGrid";
			this->RequestsDataGrid->ReadOnly = true;
			this->RequestsDataGrid->RowHeadersWidth = 51;
			this->RequestsDataGrid->RowTemplate->ReadOnly = true;
			this->RequestsDataGrid->Size = System::Drawing::Size(1179, 340);
			this->RequestsDataGrid->TabIndex = 5;
			// 
			// searchByTypeOfServiceBTN
			// 
			this->searchByTypeOfServiceBTN->Location = System::Drawing::Point(17, 462);
			this->searchByTypeOfServiceBTN->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->searchByTypeOfServiceBTN->Name = L"searchByTypeOfServiceBTN";
			this->searchByTypeOfServiceBTN->Size = System::Drawing::Size(209, 28);
			this->searchByTypeOfServiceBTN->TabIndex = 4;
			this->searchByTypeOfServiceBTN->Text = L"Ïîèñê ïî òèïó óñëóãè";
			this->searchByTypeOfServiceBTN->UseVisualStyleBackColor = true;
			this->searchByTypeOfServiceBTN->Click += gcnew System::EventHandler(this, &MyForm::searchByTypeOfServiceBTN_Click);
			// 
			// dateSearchBTN
			// 
			this->dateSearchBTN->Location = System::Drawing::Point(195, 412);
			this->dateSearchBTN->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dateSearchBTN->Name = L"dateSearchBTN";
			this->dateSearchBTN->Size = System::Drawing::Size(132, 28);
			this->dateSearchBTN->TabIndex = 3;
			this->dateSearchBTN->Text = L"Ïîèñê ïî äàòå";
			this->dateSearchBTN->UseVisualStyleBackColor = true;
			this->dateSearchBTN->Click += gcnew System::EventHandler(this, &MyForm::dateSearchBTN_Click);
			// 
			// passportSearchBTN
			// 
			this->passportSearchBTN->Location = System::Drawing::Point(17, 412);
			this->passportSearchBTN->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->passportSearchBTN->Name = L"passportSearchBTN";
			this->passportSearchBTN->Size = System::Drawing::Size(169, 28);
			this->passportSearchBTN->TabIndex = 2;
			this->passportSearchBTN->Text = L"Ïîèñê ïî ïàñïîðòó";
			this->passportSearchBTN->UseVisualStyleBackColor = true;
			this->passportSearchBTN->Click += gcnew System::EventHandler(this, &MyForm::passportSearchBTN_Click);
			// 
			// searchByTypeAndNameOfServiceBTN
			// 
			this->searchByTypeAndNameOfServiceBTN->Location = System::Drawing::Point(17, 362);
			this->searchByTypeAndNameOfServiceBTN->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->searchByTypeAndNameOfServiceBTN->Name = L"searchByTypeAndNameOfServiceBTN";
			this->searchByTypeAndNameOfServiceBTN->Size = System::Drawing::Size(309, 28);
			this->searchByTypeAndNameOfServiceBTN->TabIndex = 1;
			this->searchByTypeAndNameOfServiceBTN->Text = L"Ïîèñê ïî òèïó è íàçâàíèþ óñëóãè";
			this->searchByTypeAndNameOfServiceBTN->UseVisualStyleBackColor = true;
			this->searchByTypeAndNameOfServiceBTN->Click += gcnew System::EventHandler(this, &MyForm::searchByTypeAndNameOfService_Click);
			// 
			// clientsPage
			// 
			this->clientsPage->Controls->Add(this->btnAddClient);
			this->clientsPage->Controls->Add(this->resultSearchClient);
			this->clientsPage->Controls->Add(this->countOfCompareClients);
			this->clientsPage->Controls->Add(this->tBClientEmai);
			this->clientsPage->Controls->Add(this->tBClientFullname);
			this->clientsPage->Controls->Add(this->tBClientJob);
			this->clientsPage->Controls->Add(this->tBClientPassNum);
			this->clientsPage->Controls->Add(this->tBClientPassSeries);
			this->clientsPage->Controls->Add(this->button1);
			this->clientsPage->Controls->Add(this->btnSearchClientByEmail);
			this->clientsPage->Controls->Add(this->btnSearchByClientJob);
			this->clientsPage->Controls->Add(this->button8);
			this->clientsPage->Controls->Add(this->btnSearchByClient);
			this->clientsPage->Controls->Add(this->button20);
			this->clientsPage->Controls->Add(this->debugClientButton);
			this->clientsPage->Controls->Add(this->label7);
			this->clientsPage->Controls->Add(this->textBox1);
			this->clientsPage->Controls->Add(this->label8);
			this->clientsPage->Controls->Add(this->label9);
			this->clientsPage->Controls->Add(this->label10);
			this->clientsPage->Controls->Add(this->btnDeletionClient);
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
			this->clientsPage->Location = System::Drawing::Point(4, 25);
			this->clientsPage->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->clientsPage->Name = L"clientsPage";
			this->clientsPage->Padding = System::Windows::Forms::Padding(3);
			this->clientsPage->Size = System::Drawing::Size(888, 607);
			this->clientsPage->TabIndex = 1;
			this->clientsPage->Text = L"Êëèåíòû";
			this->clientsPage->UseVisualStyleBackColor = true;
			// 
			// btnAddClient
			// 
			this->btnAddClient->Location = System::Drawing::Point(382, 429);
			this->btnAddClient->Name = L"btnAddClient";
			this->btnAddClient->Size = System::Drawing::Size(100, 23);
			this->btnAddClient->TabIndex = 60;
			this->btnAddClient->Text = L"Добавить";
			this->btnAddClient->UseVisualStyleBackColor = true;
			this->btnAddClient->Click += gcnew System::EventHandler(this, &MyForm::btnAddClient_Click);
			// 
			// resultSearchClient
			// 
			this->resultSearchClient->AutoSize = true;
			this->resultSearchClient->Location = System::Drawing::Point(286, 467);
			this->resultSearchClient->Name = L"resultSearchClient";
			this->resultSearchClient->Size = System::Drawing::Size(0, 13);
			this->resultSearchClient->TabIndex = 59;
			// 
			// countOfCompareClients
			// 
			this->countOfCompareClients->AutoSize = true;
			this->countOfCompareClients->Location = System::Drawing::Point(135, 467);
			this->countOfCompareClients->Name = L"countOfCompareClients";
			this->countOfCompareClients->Size = System::Drawing::Size(0, 13);
			this->countOfCompareClients->TabIndex = 58;
			// 
			// tBClientEmai
			// 
			this->tBClientEmai->Location = System::Drawing::Point(356, 403);
			this->tBClientEmai->Name = L"tBClientEmai";
			this->tBClientEmai->Size = System::Drawing::Size(126, 20);
			this->tBClientEmai->TabIndex = 57;
			// 
			// tBClientFullname
			// 
			this->tBClientFullname->Location = System::Drawing::Point(515, 363);
			this->tBClientFullname->Name = L"tBClientFullname";
			this->tBClientFullname->Size = System::Drawing::Size(135, 20);
			this->tBClientFullname->TabIndex = 56;
			// 
			// tBClientJob
			// 
			this->tBClientJob->Location = System::Drawing::Point(356, 363);
			this->tBClientJob->Name = L"tBClientJob";
			this->tBClientJob->Size = System::Drawing::Size(126, 20);
			this->tBClientJob->TabIndex = 55;
			// 
			// tBClientPassNum
			// 
			this->tBClientPassNum->Location = System::Drawing::Point(515, 312);
			this->tBClientPassNum->Name = L"tBClientPassNum";
			this->tBClientPassNum->Size = System::Drawing::Size(135, 20);
			this->tBClientPassNum->TabIndex = 54;
			// 
			// tBClientPassSeries
			// 
			this->tBClientPassSeries->Location = System::Drawing::Point(356, 312);
			this->tBClientPassSeries->Name = L"tBClientPassSeries";
			this->tBClientPassSeries->Size = System::Drawing::Size(126, 20);
			this->tBClientPassSeries->TabIndex = 53;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(17, 415);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(157, 23);
			this->button1->TabIndex = 52;
			this->button1->Text = L"Поиск по ФИО";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btnSearchClientByEmail
			// 
			this->btnSearchClientByEmail->Location = System::Drawing::Point(17, 377);
			this->btnSearchClientByEmail->Name = L"btnSearchClientByEmail";
			this->btnSearchClientByEmail->Size = System::Drawing::Size(157, 23);
			this->btnSearchClientByEmail->TabIndex = 51;
			this->btnSearchClientByEmail->Text = L"Поиск по почте";
			this->btnSearchClientByEmail->UseVisualStyleBackColor = true;
			this->btnSearchClientByEmail->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// btnSearchByClientJob
			// 
			this->btnSearchByClientJob->Location = System::Drawing::Point(150, 337);
			this->btnSearchByClientJob->Name = L"btnSearchByClientJob";
			this->btnSearchByClientJob->Size = System::Drawing::Size(136, 23);
			this->btnSearchByClientJob->TabIndex = 50;
			this->btnSearchByClientJob->Text = L"Поиск по должности";
			this->btnSearchByClientJob->UseVisualStyleBackColor = true;
			this->btnSearchByClientJob->Click += gcnew System::EventHandler(this, &MyForm::button7_Click_1);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(17, 337);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(127, 23);
			this->button8->TabIndex = 49;
			this->button8->Text = L"Поиск по паспорту";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// btnSearchByClient
			// 
			this->btnSearchByClient->Location = System::Drawing::Point(17, 296);
			this->btnSearchByClient->Name = L"btnSearchByClient";
			this->btnSearchByClient->Size = System::Drawing::Size(232, 23);
			this->btnSearchByClient->TabIndex = 48;
			this->btnSearchByClient->Text = L"Поиск по полным данным";
			this->btnSearchByClient->UseVisualStyleBackColor = true;
			this->btnSearchByClient->Click += gcnew System::EventHandler(this, &MyForm::btnSearchByClient_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(524, 429);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(153, 28);
			this->button20->TabIndex = 47;
			this->button20->Text = L"Сохранить";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// debugClientButton
			// 
			this->debugClientButton->Location = System::Drawing::Point(524, 470);
			this->debugClientButton->Name = L"debugClientButton";
			this->debugClientButton->Size = System::Drawing::Size(115, 23);
			this->debugClientButton->TabIndex = 46;
			this->debugClientButton->Text = L"Окно отладки";
			this->debugClientButton->UseVisualStyleBackColor = true;
			this->debugClientButton->Click += gcnew System::EventHandler(this, &MyForm::debugClientButton_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(538, 296);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(91, 13);
			this->label7->TabIndex = 45;
			this->label7->Text = L"Номер паспорта";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(473, 390);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(132, 22);
			this->textBox1->TabIndex = 44;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(267, 575);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(65, 13);
			this->label8->TabIndex = 43;
			this->label8->Text = L"Результат: ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(19, 575);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(129, 13);
			this->label9->TabIndex = 42;
			this->label9->Text = L"Количество сравнений: ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(377, 386);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(104, 13);
			this->label10->TabIndex = 41;
			this->label10->Text = L"Электронная почта";
			// 
			// btnDeletionClient
			// 
			this->btnDeletionClient->Location = System::Drawing::Point(384, 470);
			this->btnDeletionClient->Name = L"btnDeletionClient";
			this->btnDeletionClient->Size = System::Drawing::Size(98, 23);
			this->btnDeletionClient->TabIndex = 39;
			this->btnDeletionClient->Text = L"Удалить";
			this->btnDeletionClient->UseVisualStyleBackColor = true;
			this->btnDeletionClient->Click += gcnew System::EventHandler(this, &MyForm::btnDeletionClient_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(464, 567);
			this->button6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 28);
			this->button6->TabIndex = 38;
			this->button6->Text = L"Äîáàâèòü";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(564, 347);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(34, 13);
			this->label14->TabIndex = 37;
			this->label14->Text = L"ФИО";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(379, 342);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(65, 13);
			this->label18->TabIndex = 36;
			this->label18->Text = L"Должность";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(379, 296);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(88, 13);
			this->label19->TabIndex = 35;
			this->label19->Text = L"Серия паспорта";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(733, 454);
			this->textBox6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(247, 22);
			this->textBox6->TabIndex = 34;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(473, 453);
			this->textBox7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(192, 22);
			this->textBox7->TabIndex = 33;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(641, 390);
			this->textBox9->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(132, 22);
			this->textBox9->TabIndex = 32;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(17, 517);
			this->button7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(265, 28);
			this->button7->TabIndex = 31;
			this->button7->Text = L"Ïîèñê ïî ýëåêòðîííîé ïî÷òå";
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
			this->ClientsDataGrid->Location = System::Drawing::Point(4, 4);
			this->ClientsDataGrid->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->ClientsDataGrid->Name = L"ClientsDataGrid";
			this->ClientsDataGrid->ReadOnly = true;
			this->ClientsDataGrid->RowHeadersWidth = 51;
			this->ClientsDataGrid->RowTemplate->ReadOnly = true;
			this->ClientsDataGrid->Size = System::Drawing::Size(1179, 340);
			this->ClientsDataGrid->TabIndex = 30;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(17, 470);
			this->button15->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(209, 28);
			this->button15->TabIndex = 29;
			this->button15->Text = L"Ïîèñê ïî ÔÈÎ";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(195, 421);
			this->button16->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(215, 28);
			this->button16->TabIndex = 28;
			this->button16->Text = L"Ïîèñê ïî äîëæíîñòè";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(17, 421);
			this->button17->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(169, 28);
			this->button17->TabIndex = 27;
			this->button17->Text = L"Ïîèñê ïî ïàñïîðòó";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(17, 370);
			this->button18->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(309, 28);
			this->button18->TabIndex = 26;
			this->button18->Text = L"Ïîèñê ïî ïîëíîé èíôîðìàöèè";
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
			this->tabPage1->Controls->Add(this->searchByNameAndType);
			this->tabPage1->Controls->Add(this->ServicesDataGrid);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Size = System::Drawing::Size(1187, 750);
			this->tabPage1->TabIndex = 2;
			this->tabPage1->Text = L"Óñëóãè";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// resultSearchServices2
			// 
			this->resultSearchServices2->AutoSize = true;
			this->resultSearchServices2->Location = System::Drawing::Point(333, 567);
			this->resultSearchServices2->Name = L"resultSearchServices2";
			this->resultSearchServices2->Size = System::Drawing::Size(0, 16);
			this->resultSearchServices2->TabIndex = 43;
			// 
			// countComparationsServices
			// 
			this->countComparationsServices->AutoSize = true;
			this->countComparationsServices->Location = System::Drawing::Point(181, 567);
			this->countComparationsServices->Name = L"countComparationsServices";
			this->countComparationsServices->Size = System::Drawing::Size(0, 16);
			this->countComparationsServices->TabIndex = 42;
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(471, 561);
			this->button21->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(153, 28);
			this->button21->TabIndex = 41;
			this->button21->Text = L"Îêíî îòëàäêè";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(641, 351);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(74, 13);
			this->label13->TabIndex = 40;
			this->label13->Text = L"Iia\?acaaeaiea";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(677, 433);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(87, 13);
			this->label15->TabIndex = 38;
			this->label15->Text = L"Íàçâàíèå óñëóãè";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(467, 433);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(78, 13);
			this->label16->TabIndex = 37;
			this->label16->Text = L"N\?ie eniieiaiey ";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(467, 351);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(62, 13);
			this->label17->TabIndex = 36;
			this->label17->Text = L"Oei oneoae";
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(819, 555);
			this->button12->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(100, 28);
			this->button12->TabIndex = 35;
			this->button12->Text = L"Nio\?aieou";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// tBType
			// 
			this->tBType->Location = System::Drawing::Point(471, 370);
			this->tBType->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tBType->Name = L"tBType";
			this->tBType->Size = System::Drawing::Size(132, 22);
			this->tBType->TabIndex = 34;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(249, 567);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(61, 13);
			this->label11->TabIndex = 33;
			this->label11->Text = L"\?acoeuoao";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(17, 567);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(115, 13);
			this->label12->TabIndex = 32;
			this->label12->Text = L"Eiee\?anoai n\?aaiaiee: ";
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(681, 497);
			this->button13->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(100, 28);
			this->button13->TabIndex = 30;
			this->button13->Text = L"Óäàëèòü";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(471, 496);
			this->button14->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(100, 28);
			this->button14->TabIndex = 29;
			this->button14->Text = L"Äîáàâèòü";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// tBName
			// 
			this->tBName->Location = System::Drawing::Point(681, 454);
			this->tBName->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tBName->Name = L"tBName";
			this->tBName->Size = System::Drawing::Size(221, 22);
			this->tBName->TabIndex = 28;
			// 
			// tBTerm
			// 
			this->tBTerm->Location = System::Drawing::Point(471, 453);
			this->tBTerm->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tBTerm->Name = L"tBTerm";
			this->tBTerm->Size = System::Drawing::Size(176, 22);
			this->tBTerm->TabIndex = 27;
			// 
			// tBDivision
			// 
			this->tBDivision->Location = System::Drawing::Point(645, 370);
			this->tBDivision->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tBDivision->Name = L"tBDivision";
			this->tBDivision->Size = System::Drawing::Size(132, 22);
			this->tBDivision->TabIndex = 26;
			// 
			// searchByServiceName
			// 
			this->searchByServiceName->Location = System::Drawing::Point(21, 511);
			this->searchByServiceName->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->searchByServiceName->Name = L"searchByServiceName";
			this->searchByServiceName->Size = System::Drawing::Size(209, 28);
			this->searchByServiceName->TabIndex = 11;
			this->searchByServiceName->Text = L"Iiene ii iacaaie\? oneoae";
			this->searchByServiceName->UseVisualStyleBackColor = true;
			this->searchByServiceName->Click += gcnew System::EventHandler(this, &MyForm::searchByServiceName_Click);
			// 
			// searchByServiceTypeBtn
			// 
			this->searchByServiceTypeBtn->Location = System::Drawing::Point(17, 463);
			this->searchByServiceTypeBtn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->searchByServiceTypeBtn->Name = L"searchByServiceTypeBtn";
			this->searchByServiceTypeBtn->Size = System::Drawing::Size(209, 28);
			this->searchByServiceTypeBtn->TabIndex = 10;
			this->searchByServiceTypeBtn->Text = L"Ïîèñê ïî òèïó óñëóãè ";
			this->searchByServiceTypeBtn->UseVisualStyleBackColor = true;
			this->searchByServiceTypeBtn->Click += gcnew System::EventHandler(this, &MyForm::searchByServiceTypeBtn_Click);
			// 
			// divisionSearchBtn
			// 
			this->divisionSearchBtn->Location = System::Drawing::Point(17, 353);
			this->divisionSearchBtn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->divisionSearchBtn->Name = L"divisionSearchBtn";
			this->divisionSearchBtn->Size = System::Drawing::Size(253, 28);
			this->divisionSearchBtn->TabIndex = 9;
			this->divisionSearchBtn->Text = L"Iiene ii iia\?acaaeaie\?";
			this->divisionSearchBtn->UseVisualStyleBackColor = true;
			this->divisionSearchBtn->Click += gcnew System::EventHandler(this, &MyForm::divisionSearchBtn_Click);
			// 
			// searchServiceByTermBtb
			// 
			this->searchServiceByTermBtb->Location = System::Drawing::Point(17, 427);
			this->searchServiceByTermBtb->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->searchServiceByTermBtb->Name = L"searchServiceByTermBtb";
			this->searchServiceByTermBtb->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->searchServiceByTermBtb->Size = System::Drawing::Size(229, 28);
			this->searchServiceByTermBtb->TabIndex = 8;
			this->searchServiceByTermBtb->Text = L"Iiene ii n\?ieo eniieiaiey";
			this->searchServiceByTermBtb->UseVisualStyleBackColor = true;
			this->searchServiceByTermBtb->Click += gcnew System::EventHandler(this, &MyForm::searchServiceByTermBtb_Click);
			// 
			// searchByNameAndType
			// 
			this->searchByNameAndType->Location = System::Drawing::Point(17, 389);
			this->searchByNameAndType->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->searchByNameAndType->Name = L"searchByNameAndType";
			this->searchByNameAndType->Size = System::Drawing::Size(309, 28);
			this->searchByNameAndType->TabIndex = 7;
			this->searchByNameAndType->Text = L"Iiene ii oeio e iacaaie\? oneoae";
			this->searchByNameAndType->UseVisualStyleBackColor = true;
			this->searchByNameAndType->Click += gcnew System::EventHandler(this, &MyForm::searchByNameAndType_Click);
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
			this->ServicesDataGrid->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->ServicesDataGrid->Name = L"ServicesDataGrid";
			this->ServicesDataGrid->ReadOnly = true;
			this->ServicesDataGrid->RowHeadersWidth = 51;
			this->ServicesDataGrid->RowTemplate->ReadOnly = true;
			this->ServicesDataGrid->Size = System::Drawing::Size(1187, 340);
			this->ServicesDataGrid->TabIndex = 6;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(989, 645);
			this->Controls->Add(this->tabControl1);
			this->Location = System::Drawing::Point(350, 311);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
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
		treeNode*& avlTreePassport = DataStorage::avlTreePassport;
		treeNode*& avlTreeDate = DataStorage::avlTreeDate;
		treeNode*& avlTreeServiceType = DataStorage::avlTreeServiceType;
		treeNode*& avlTreeServiceName = DataStorage::avlTreeServiceName;
		bool heightChanged = false;
		RequestsHashTable requestsHashTable = DataStorage::requestsHashTable;
		for (int i = 0; i < DataStorage::data.size(); i++) {
			requestsHashTable.insert(DataStorage::data[i]);
		}
		for (int i = 0; i < DataStorage::data.size(); i++) {
			string valueText = to_string(DataStorage::data[i]->passport.series) + to_string(DataStorage::data[i]->passport.number);
			listNodeElem* value = new listNodeElem();
			value->index = i;
			value->value = valueText;
			addNode(avlTreePassport, value, heightChanged);

		}
		for (int i = 0; i < DataStorage::data.size(); i++) {
			string valueText = DataStorage::data[i]->date.day + "." + DataStorage::data[i]->date.month + "." + DataStorage::data[i]->date.year;
			listNodeElem* value = new listNodeElem();
			value->index = i;
			value->value = valueText;
			addNode(avlTreeDate, value, heightChanged);

		}
		for (int i = 0; i < DataStorage::data.size(); i++) {
			string valueText = DataStorage::data[i]->serviceType;
			listNodeElem* value = new listNodeElem();
			value->index = i;
			value->value = valueText;
			addNode(avlTreeServiceType, value, heightChanged);
		}
		for (int i = 0; i < DataStorage::data.size(); i++) {
			string valueText = DataStorage::data[i]->serviceName;
			listNodeElem* value = new listNodeElem();
			value->index = i;
			value->value = valueText;
			addNode(avlTreeServiceName, value, heightChanged);

		}
		DataTable^ tabl = gcnew DataTable();
		tabl->Rows->Clear();
		RequestsDataGrid->DataSource = tabl;
		tabl->Columns->Add("Ïàñïîðò");
		tabl->Columns->Add("Íàçâàíèå óñëóãè");
		tabl->Columns->Add("Òèï óñëóãè");
		tabl->Columns->Add("Äàòà");
		for (int i = 0; i < DataStorage::data.size(); i++) {
			DataRow^ row = tabl->NewRow();
			string passport = to_string(DataStorage::data[i]->passport.series) + " " + to_string(DataStorage::data[i]->passport.number);
			row["Ïàñïîðò"] = gcnew String(passport.c_str());
			row["Íàçâàíèå óñëóãè"] = gcnew String(DataStorage::data[i]->serviceName.c_str());
			row["Òèï óñëóãè"] = gcnew String(DataStorage::data[i]->serviceType.c_str());
			string date = DataStorage::data[i]->date.day+"." + DataStorage::data[i]->date.month + "." + DataStorage::data[i]->date.year;
			row["Äàòà"] = gcnew String(date.c_str());
			tabl->Rows->Add(row);
		}


	
		DataClientsStorage::rbtClient = root_init(DataClientsStorage::rbtNullnode);
		Node*& rbtClient = DataClientsStorage::rbtClient;
		DataClientsStorage::rbtJob = root_init(DataClientsStorage::rbtNullnode);
		Node*& rbtJob = DataClientsStorage::rbtJob;
		DataClientsStorage::rbtEmail = root_init(DataClientsStorage::rbtNullnode);
		Node*& rbtEmail = DataClientsStorage::rbtEmail;
		DataClientsStorage::rbtFullname = root_init(DataClientsStorage::rbtNullnode);
		Node*& rbtFullname = DataClientsStorage::rbtFullname;
		DataClientsStorage::rbtPassport = root_init(DataClientsStorage::rbtNullnode);
		Node*& rbtPassport = DataClientsStorage::rbtPassport;

		vector<ClientsEntity*> dataClients = DataClientsStorage::data;
		ClientsHashTable& clientsHashTable = DataClientsStorage::clientsHashTable;
		for (int i = 0;i < dataClients.size(); i++)
		{
			clientsHashTable.insert(dataClients[i],i);
		}
		for (int i = 0; i < dataClients.size(); i++) {
			string series = to_string(dataClients[i]->passport.series);
			string number = to_string(dataClients[i]->passport.number);
			string valueText = series + number;
			RBTData value;
			value.index = i;
			value.value = valueText;
			insertClient(rbtPassport, DataClientsStorage::rbtNullnode, value);
		}
		for (int i = 0; i < dataClients.size(); i++) {
			string valueText = dataClients[i]->job;
			RBTData value;
			value.index = i;
			value.value = valueText;
			insertClient(rbtJob, DataClientsStorage::rbtNullnode, value);
		}
		for (int i = 0; i < dataClients.size(); i++) {
			string valueText = dataClients[i]->email;
			RBTData value;
			value.index = i;
			value.value = valueText;
			insertClient(rbtEmail, DataClientsStorage::rbtNullnode, value);
		}
		for (int i = 0; i < dataClients.size(); i++) {
			string valueText = dataClients[i]->fullname.surname + ' ' + dataClients[i]->fullname.name + ' '
				+ dataClients[i]->fullname.lastname + ' ' + dataClients[i]->job + ' ' + dataClients[i]->email
				+ ' ' + to_string(dataClients[i]->passport.series) + to_string(dataClients[i]->passport.number);
			RBTData value;
			value.index = i;
			value.value = valueText;
			insertClient(rbtClient, DataClientsStorage::rbtNullnode, value);
		}
		for (int i = 0; i < dataClients.size(); i++) {
			string valueText = dataClients[i]->fullname.surname + ' ' + dataClients[i]->fullname.name + ' ' + dataClients[i]->fullname.lastname;
			RBTData value;
			value.index = i;
			value.value = valueText;
			insertClient(rbtFullname, DataClientsStorage::rbtNullnode, value);
		}
		clientsHashTable.print();
		DataTable^ tablClients = gcnew DataTable();
		ClientsDataGrid->DataSource = tablClients;
		tablClients->Columns->Add("ФИО");
		tablClients->Columns->Add("Должность");
		tablClients->Columns->Add("email");
		tablClients->Columns->Add("Пасспорт");
		for (int i = 0; i < dataClients.size(); i++) {
			DataRow^ rowClients = tablClients->NewRow();
			rowClients["ФИО"] = gcnew String((dataClients[i]->fullname.surname +' '+ dataClients[i]->fullname.name + ' ' + dataClients[i]->fullname.lastname).c_str());
			rowClients["Должность"] = gcnew String(dataClients[i]->job.c_str());
			rowClients["email"] = gcnew String(dataClients[i]->email.c_str());
			string passportClient = to_string(dataClients[i]->passport.series) + ' ' + to_string(dataClients[i]->passport.number);
			//rowClients["Ianii?oiua aaiiua"] = gcnew String(passport.c_str());
			rowClients["Пасспорт"] = gcnew String(passportClient.c_str());
			tablClients->Rows->Add(rowClients);
		}

		vector<ServiceEntity*> dataServices = DataStorage::dataServices;
		DataTable^ tablServices = gcnew DataTable();
		ServicesDataGrid->DataSource = tablServices;
		tablServices->Columns->Add("Òèï óñëóãè");
		tablServices->Columns->Add("Ïîäðàçäåëåíèå");
		tablServices->Columns->Add("Íàçâàíèå óñëóãè");
		tablServices->Columns->Add("Ñðîê èñïîëíåíèÿ");
		for (int i = 0; i < dataServices.size(); i++) {
			DataRow^ rowServices = tablServices->NewRow();
			rowServices["Òèï óñëóãè"] = gcnew String(dataServices[i]->serviceType.c_str());
			rowServices["Ïîäðàçäåëåíèå"] = gcnew String(dataServices[i]->division.c_str());
			rowServices["Íàçâàíèå óñëóãè"] = gcnew String(dataServices[i]->serviceName.c_str());
			string term = to_string(dataServices[i]->term);
			rowServices["Ñðîê èñïîëíåíèÿ"] = gcnew String(term.c_str());
			tablServices->Rows->Add(rowServices);
		}
		
		ServicesHashTable servicesHashTable = DataStorage::servicesHashTable;
		for (int i = 0; i < dataServices.size(); i++) {
			DataStorage::servicesHashTable.htInsertA(dataServices[i], "insert", i);
		}

		treeNodeServices*& leaf = DataStorage::rbTreeLeaf;
		DataStorage::rbTreeDivision = initTree(leaf);
		treeNodeServices*& rbTreeDivision = DataStorage::rbTreeDivision;
		DataStorage::rbTreeType = initTree(leaf);
		treeNodeServices*& rbTreeType = DataStorage::rbTreeType;
		DataStorage::rbTreeName = initTree(leaf);
		treeNodeServices*& rbTreeName = DataStorage::rbTreeName;
		DataStorage::rbTreeTerm = initTree(leaf);
		treeNodeServices*& rbTreeTerm = DataStorage::rbTreeTerm;

		ServiceEntity* serviceEntity = new ServiceEntity();
		serviceEntity->division = "Ïîäðàçäåëåíèå";
		serviceEntity->serviceName = "Íàçâàíèå";
		serviceEntity->term = 1;
		serviceEntity->serviceType = "serviceType";

		for (int i = 0; i < dataServices.size(); i++) {
			string valueText = dataServices[i]->division;
			treeNodeElemServices value;
			value.index = i;
			value.value = valueText;
			insert(rbTreeDivision, value, leaf, serviceEntity);
		}
		for (int i = 0; i < dataServices.size(); i++) {
			string valueText = dataServices[i]->serviceType;
			treeNodeElemServices value;
			value.index = i;
			value.value = valueText;
			insert(rbTreeType, value, leaf, serviceEntity);
		}
		for (int i = 0; i < dataServices.size(); i++) {
			string valueText = dataServices[i]->serviceName;
			treeNodeElemServices value;
			value.index = i;
			value.value = valueText;
			insert(rbTreeName, value, leaf, serviceEntity);
		}
		for (int i = 0; i < dataServices.size(); i++) {
			string valueText = to_string(dataServices[i]->term);
			treeNodeElemServices value;
			value.index = i;
			value.value = valueText;
			insert(rbTreeTerm, value, leaf, serviceEntity);
		}

	}
private: System::Void searchByTypeAndNameOfService_Click(System::Object^ sender, System::EventArgs^ e) {
	string  serviceName = marshal_as<std::string>(this->tBServiceName->Text);
	string  serviceType = marshal_as<std::string>(this->tBServiceType->Text);
	string dateString = marshal_as<std::string>(this->tBDate->Text);
	string seriesPassportText = marshal_as<std::string>(this->tBSeriesPassport->Text);
	string numberPassportText = marshal_as<std::string>(this->tBNumberPassport->Text);
	int seriesPassport;
	int numberPassport;
	if (serviceName.size() == 0 || serviceType.size() == 0 || dateString.size() == 0 || seriesPassportText.size() == 0 || numberPassportText.size() == 0) {
		MessageBox::Show(this, "Íåêîððåêòíûå äàííûå , ïðîâåðüòå ââåäåííóþ èíôîðìàöèþ î çàÿâêå", "Óäàëåíèå", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		try {
			seriesPassport = stoi(seriesPassportText);
			numberPassport = stoi(numberPassportText);
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
				this->resultSearch->Text = gcnew String("Íàéäåí");
			}
			else {
				this->resultSearch->Text = gcnew String("Íå íàéäåí");
			}
		}
		catch (exception& err) {
			MessageBox::Show(this, "Íåêîððåêòíûå äàííûå , ïðîâåðüòå ââåäåííóþ èíôîðìàöèþ î çàÿâêå", "Óäàëåíèå", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

};
private: System::Void passportSearchBTN_Click(System::Object^ sender, System::EventArgs^ e) {
	string serviceName = marshal_as<std::string>(this->tBServiceName->Text);
	string serviceType = marshal_as<std::string>(this->tBServiceType->Text);
	string dateString = marshal_as<std::string>(this->tBDate->Text);
	string seriesPassportText = marshal_as<std::string>(this->tBSeriesPassport->Text);
	string numberPassportText = marshal_as<std::string>(this->tBNumberPassport->Text);
	int seriesPassport;
	int numberPassport;
	if (serviceName.size() == 0 || serviceType.size() == 0 || dateString.size() == 0 || seriesPassportText.size() == 0 || numberPassportText.size() == 0) {
		MessageBox::Show(this, "Íåêîððåêòíûå äàííûå , ïðîâåðüòå ââåäåííóþ èíôîðìàöèþ î çàÿâêå", "Óäàëåíèå", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		try {
			seriesPassport = stoi(seriesPassportText);
			numberPassport = stoi(numberPassportText);
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
				this->resultSearch->Text = gcnew String("Íàéäåí");
			}
			else {
				this->resultSearch->Text = gcnew String("Íå íàéäåí");
			}
			printTree(avlTreePassport, nullptr);
			cout << endl;
		}
		catch (exception& err) {
			MessageBox::Show(this, "Íåêîððåêòíûå äàííûå , ïðîâåðüòå ââåäåííóþ èíôîðìàöèþ î çàÿâêå", "Óäàëåíèå", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
		
	}
	
}
private: System::Void save_btn(System::Object^ sender, System::EventArgs^ e) {
	vector<RequestsEntity*> data = DataStorage::data;
	writeData(data, "stdrequests1.txt");
	MessageBox::Show(this, "Äàííûå çàÿâîê óñïåøíî ñîõðàíåíû", "Ñîõðàíåíèå", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void remove_element(System::Object^ sender, System::EventArgs^ e) {
	string  serviceName = marshal_as<std::string>(this->tBServiceName->Text);
	string  serviceType = marshal_as<std::string>(this->tBServiceType->Text);
	string dateString = marshal_as<std::string>(this->tBDate->Text);
	string seriesPassportText = marshal_as<std::string>(this->tBSeriesPassport->Text);
	string numberPassportText = marshal_as<std::string>(this->tBNumberPassport->Text);
	int seriesPassport;
	int numberPassport;
	if (serviceName.size() == 0 || serviceType.size() == 0 || dateString.size() == 0 || seriesPassportText.size() == 0 || numberPassportText.size() == 0) {
		MessageBox::Show(this, "Íåêîððåêòíûå äàííûå , ïðîâåðüòå ââåäåííóþ èíôîðìàöèþ î çàÿâêå", "Óäàëåíèå", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		try{
			seriesPassport = stoi(seriesPassportText);
			numberPassport = stoi(numberPassportText);
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
				MessageBox::Show(this, "Çàÿâêà óñïåøíî óäàëåíà", "Óäàëåíèå", MessageBoxButtons::OK, MessageBoxIcon::Information);
				DataTable^ tablTest = gcnew DataTable();
				tablTest->Rows->Clear();
				RequestsDataGrid->DataSource = tablTest;
				tablTest->Columns->Add("Ïàñïîðò");
				tablTest->Columns->Add("Íàçâàíèå óñëóãè");
				tablTest->Columns->Add("Òèï óñëóãè");
				tablTest->Columns->Add("Äàòà");
				for (int i = 0; i < DataStorage::data.size(); i++) {
					DataRow^ row = tablTest->NewRow();
					string passport = to_string(DataStorage::data[i]->passport.series) + " " + to_string(DataStorage::data[i]->passport.number);
					row["Ïàñïîðò"] = gcnew String(passport.c_str());
					row["Íàçâàíèå óñëóãè"] = gcnew String(DataStorage::data[i]->serviceName.c_str());
					row["Òèï óñëóãè"] = gcnew String(DataStorage::data[i]->serviceType.c_str());
					string date = DataStorage::data[i]->date.day + "." + DataStorage::data[i]->date.month + "." + DataStorage::data[i]->date.year;
					row["Äàòà"] = gcnew String(date.c_str());
					tablTest->Rows->Add(row);
				}

			}
			else {
				MessageBox::Show(this, "Íåêîððåêòíûå äàííûå , ïðîâåðüòå ââåäåííóþ èíôîðìàöèþ î çàÿâêå", "Óäàëåíèå", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (exception& err) {
			MessageBox::Show(this, "Íåêîððåêòíûå äàííûå , ïðîâåðüòå ââåäåííóþ èíôîðìàöèþ î çàÿâêå", "Óäàëåíèå", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
		
	}
	
	//dataStorage.removeElement(entity);
}
private: System::Void dateSearchBTN_Click(System::Object^ sender, System::EventArgs^ e) {
	string serviceName = marshal_as<std::string>(this->tBServiceName->Text);
	string serviceType = marshal_as<std::string>(this->tBServiceType->Text);
	string dateString = marshal_as<std::string>(this->tBDate->Text);
	string seriesPassportText = marshal_as<std::string>(this->tBSeriesPassport->Text);
	string numberPassportText = marshal_as<std::string>(this->tBNumberPassport->Text);
	int seriesPassport;
	int numberPassport;
	if (serviceName.size() == 0 || serviceType.size() == 0 || dateString.size() == 0 || seriesPassportText.size() == 0 || numberPassportText.size() == 0) {
		MessageBox::Show(this, "Íåêîððåêòíûå äàííûå , ïðîâåðüòå ââåäåííóþ èíôîðìàöèþ î çàÿâêå", "Óäàëåíèå", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		try {
			seriesPassport = stoi(seriesPassportText);
			numberPassport = stoi(numberPassportText);
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
				this->resultSearch->Text = gcnew String("Íàéäåí");
			}
			else {
				this->resultSearch->Text = gcnew String("Íå íàéäåí");
			}
			printTree(avlTreeDate, nullptr);
			cout << endl;
		}
		catch (exception& err) {
			MessageBox::Show(this, "Íåêîððåêòíûå äàííûå , ïðîâåðüòå ââåäåííóþ èíôîðìàöèþ î çàÿâêå", "Óäàëåíèå", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
	}
	

}
private: System::Void searchByTypeOfServiceBTN_Click(System::Object^ sender, System::EventArgs^ e) {
	string serviceName = marshal_as<std::string>(this->tBServiceName->Text);
	string serviceType = marshal_as<std::string>(this->tBServiceType->Text);
	string dateString = marshal_as<std::string>(this->tBDate->Text);
	string seriesPassportText = marshal_as<std::string>(this->tBSeriesPassport->Text);
	string numberPassportText = marshal_as<std::string>(this->tBNumberPassport->Text);
	int seriesPassport;
	int numberPassport;
	if (serviceName.size() == 0 || serviceType.size() == 0 || dateString.size() == 0 || seriesPassportText.size() == 0 || numberPassportText.size() == 0) {
		MessageBox::Show(this, "Íåêîððåêòíûå äàííûå , ïðîâåðüòå ââåäåííóþ èíôîðìàöèþ î çàÿâêå", "Óäàëåíèå", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		try {
			seriesPassport = stoi(seriesPassportText);
			numberPassport = stoi(numberPassportText);
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
				this->resultSearch->Text = gcnew String("Íàéäåí");
			}
			else {
				this->resultSearch->Text = gcnew String("Íå íàéäåí");
			}
			printTree(avlTreeServiceType, nullptr);
			cout << endl;
		}
		catch (exception& err) {
			MessageBox::Show(this, "Íåêîððåêòíûå äàííûå , ïðîâåðüòå ââåäåííóþ èíôîðìàöèþ î çàÿâêå", "Óäàëåíèå", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
		
	}
	

}
private: System::Void searchByServiceNameBTN_Click(System::Object^ sender, System::EventArgs^ e) {
	string serviceName = marshal_as<std::string>(this->tBServiceName->Text);
	string serviceType = marshal_as<std::string>(this->tBServiceType->Text);
	string dateString = marshal_as<std::string>(this->tBDate->Text);
	string seriesPassportText = marshal_as<std::string>(this->tBSeriesPassport->Text);
	string numberPassportText = marshal_as<std::string>(this->tBNumberPassport->Text);
	int seriesPassport;
	int numberPassport;
	if (serviceName.size() == 0 || serviceType.size() == 0 || dateString.size() == 0 || seriesPassportText.size() == 0 || numberPassportText.size() == 0) {
		MessageBox::Show(this, "Íåêîððåêòíûå äàííûå , ïðîâåðüòå ââåäåííóþ èíôîðìàöèþ î çàÿâêå", "Óäàëåíèå", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		try {
			seriesPassport = stoi(seriesPassportText);
			numberPassport = stoi(numberPassportText);
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
		catch (exception& err) {
			MessageBox::Show(this, "Iaei??aeoiua aaiiua , i?iaa?uoa aaaaaiio? eioi?iaoe? i cayaea", "Oaaeaiea", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
		
	}
	
}
    

private: System::Void btnSearchByClientJob_Click(System::Object^ sender, System::EventArgs^ e) {
    string fullnamestr = marshal_as<std::string>(this->tBClientFullname->Text);
    Fullname fullname = inputFullnameData(fullnamestr);
    ClientPassport passport = ClientPassport();
    int passnum = stoi(marshal_as<std::string>(this->tBClientPassNum->Text));
    int passseries = stoi(marshal_as<std::string>(this->tBClientPassSeries->Text));
	string passnumstr = to_string(passnum);
	string passserstr = to_string(passseries);
    passport.number = passnum;
    passport.series = passseries;
    string email = marshal_as<std::string>(this->tBClientEmai->Text);
    string job = marshal_as<std::string>(this->tBClientJob->Text);
	if (job.size() == 0 || email.size() == 0 || fullnamestr.size() == 0 || passnumstr.size() == 0 || passserstr.size() == 0) {
		MessageBox::Show(this, "Некорректные данные, проверьте введенную информацию о клиенте", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		try {
			ClientsEntity* client = new ClientsEntity();
			client->passport = passport;
			client->fullname = fullname;
			client->email = email;
			client->job = job;
			//DataClientsStorage::rbtJob = root_init(DataClientsStorage::rbtNullnode);
			Node*& rbt = DataClientsStorage::rbtJob;
			vector<ClientsEntity*> clients = DataClientsStorage::data;
			int count = 0;
			RBTData searchable;
			searchable.value = client->job;
			searchable.index = 0;
			pre_search(rbt, DataClientsStorage::rbtNullnode, searchable.value, count);
			bool result = DataClientsStorage::resultSearch;
			this->countOfCompareClients->Text = gcnew String(to_string(DataClientsStorage::countComparisons).c_str());
			DataStorage::countComparisons = 0;
			if (result) {
				this->resultSearchClient->Text = gcnew String("Найдено");
			}
			else {
				this->resultSearchClient->Text = gcnew String("Не найдено");
			}
			/*print(rbt, DataClientsStorage::rbtNullnode, 4, 2);
			cout << endl;*/
		}
		catch (exception& err) {
			MessageBox::Show(this, "Некорректные данные, проверьте введенную информацию о клиенте", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}


	}
}


private: System::Void btnSearchBuClientFullname_Click(System::Object^ sender, System::EventArgs^ e) {
    
}	   

private: System::Void btnAddClient_Click(System::Object^ sender, System::EventArgs^ e) {
	vector<ClientsEntity*>& clients = DataClientsStorage::data;
	Node*& rbtClient = DataClientsStorage::rbtClient;
	Node*& rbtNullnode = DataClientsStorage::rbtNullnode;
	Node*& rbtPassport = DataClientsStorage::rbtPassport;
	Node*& rbtJob = DataClientsStorage::rbtJob;
	Node*& rbtEmail = DataClientsStorage::rbtEmail;
	Node*& rbtFullname = DataClientsStorage::rbtFullname;
	ClientsHashTable& clientsHashTable = DataClientsStorage::clientsHashTable;
	string fullnamestr = marshal_as<std::string>(this->tBClientFullname->Text);
	Fullname fullname = inputFullnameData(fullnamestr);
	ClientPassport passport = ClientPassport();
	int passnum = stoi(marshal_as<std::string>(this->tBClientPassNum->Text));
	int passseries = stoi(marshal_as<std::string>(this->tBClientPassSeries->Text));
	passport.number = passnum;
	passport.series = passseries;
	string email = marshal_as<std::string>(this->tBClientEmai->Text);
	string job = marshal_as<std::string>(this->tBClientJob->Text);
	ClientsEntity* client = new ClientsEntity();
	client->passport = passport;
	client->fullname = fullname;
	client->email = email;
	client->job = job;
	int local = 0;
	string clientstr = client->fullname.surname + ' ' + client->fullname.name + ' ' + client->fullname.lastname
		+ ' ' + client->job + ' ' + client->email
		+ ' ' + to_string(client->passport.series) + to_string(client->passport.number);
	bool isContain = pre_search(rbtPassport, DataClientsStorage::rbtNullnode, to_string(passport.series) + to_string(passport.number), local);


	if (email.size() == 0 || fullnamestr.size() == 0 || job.size() == 0) 
	{
		MessageBox::Show(this, "Некорректные данные, проверьте введенную информацию о клиенте", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else if(!isContain)
	{
		try
		{
			ClientsEntity* client = new ClientsEntity();
			client->passport = passport;
			client->fullname = fullname;
			client->email = email;
			client->job = job;
			DataClientsStorage::data.push_back(client);
			//удаление в хеш таблицу с индекоксом или без???
			clientsHashTable.insert(client, DataClientsStorage::data.size()-1);
			//PASSPORT
			RBTData dataPassport;
			dataPassport.index = DataClientsStorage::data.size() - 1;
			dataPassport.value = to_string(passport.series) + to_string(passport.number);
			insertClient(rbtPassport, DataClientsStorage::rbtNullnode, dataPassport);
			//JOB
			RBTData dataJob;
			dataJob.index = DataClientsStorage::data.size() - 1;
			dataJob.value = job;
			insertClient(rbtJob, DataClientsStorage::rbtNullnode, dataJob);
			//Email
			RBTData dataEmail;
			dataEmail.index = DataClientsStorage::data.size() - 1;
			dataEmail.value = email;
			insertClient(rbtEmail, DataClientsStorage::rbtNullnode, dataEmail);
			//Fullname
			RBTData dataFullname;
			dataFullname.index = DataClientsStorage::data.size() - 1;
			dataFullname.value = fullnamestr;
			insertClient(rbtFullname, DataClientsStorage::rbtNullnode, dataFullname);
			//Client
			RBTData dataClient;
			dataClient.index = DataClientsStorage::data.size() - 1;
			dataClient.value = clientstr;
			insertClient(rbtClient, DataClientsStorage::rbtNullnode, dataClient);

			MessageBox::Show(this, "Клиент добавлен", "Успешно", MessageBoxButtons::OK, MessageBoxIcon::Information);
			DataTable^ tablTestClient = gcnew DataTable();
			tablTestClient->Rows->Clear();
			ClientsDataGrid->DataSource = tablTestClient;
			tablTestClient->Columns->Add("ФИО");
			tablTestClient->Columns->Add("Должность");
			tablTestClient->Columns->Add("email");
			tablTestClient->Columns->Add("Пасспорт");
			for (int i = 0; i < DataClientsStorage::data.size(); i++) {
				DataRow^ rowClients = tablTestClient->NewRow();
				rowClients["ФИО"] = gcnew String((DataClientsStorage::data[i]->fullname.surname + ' ' + DataClientsStorage::data[i]->fullname.name + ' ' + DataClientsStorage::data[i]->fullname.lastname).c_str());
				rowClients["Должность"] = gcnew String(DataClientsStorage::data[i]->job.c_str());
				rowClients["email"] = gcnew String(DataClientsStorage::data[i]->email.c_str());
				string passportClient = to_string(DataClientsStorage::data[i]->passport.series) + ' ' + to_string(DataClientsStorage::data[i]->passport.number);
				//rowClients["Ianii?oiua aaiiua"] = gcnew String(passport.c_str());
				rowClients["Пасспорт"] = gcnew String(passportClient.c_str());
				tablTestClient->Rows->Add(rowClients);
			}
		}
		catch (exception& e)
		{

		}
	}
	else {
		MessageBox::Show(this, "Такой клиент уже находится в базе", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}			
}


private: System::Void divisionSearchBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	string serviceName = marshal_as<std::string>(this->tBName->Text);
	string serviceType = marshal_as<std::string>(this->tBType->Text);
	string serviceDivision = marshal_as<std::string>(this->tBDivision->Text);
	string serviceTermStr = marshal_as<std::string>(this->tBTerm->Text);

	if (serviceName.size() == 0 || serviceType.size() == 0 || serviceDivision.size() == 0 || serviceTermStr.size() == 0) {
		MessageBox::Show(this, "Íåêîððåêòíûå äàííûå, ïðîâåðüòå ïðàâèëüíîñòü ââåäåííûõ äàííûõ", "Îøèáêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		int serviceTerm;
		try {
			serviceTerm = stoi(serviceTermStr);
		}
		catch (exception& err) {
			MessageBox::Show(this, "Íåâåðíûé òèï äàííûõ", "Îøèáêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		ServiceEntity* entity = new ServiceEntity();
		entity->division = serviceDivision;
		entity->serviceName = serviceName;
		entity->term = serviceTerm;
		entity->serviceType = serviceType;
		treeNodeServices* leaf = DataStorage::rbTreeLeaf;
		treeNodeServices* rbTreeDivision = DataStorage::rbTreeDivision;
		vector<ServiceEntity*> data = DataStorage::dataServices;

		int count = 0;
		treeNodeElemServices searchable;
		searchable.value = entity->division;
		searchable.index = 0;
		search(rbTreeDivision, searchable, leaf, count, entity);
		bool result = DataStorage::resultSerch;
		this->countComparationsServices->Text = gcnew String(to_string(DataStorage::countComparisons).c_str());
		DataStorage::countComparisons = 0;
		if (result) {
			this->resultSearchServices2->Text = gcnew String("Íàéäåí");
		}
		else {
			this->resultSearchServices2->Text = gcnew String("Íå íàéäåí");
		}
		printTreeA(rbTreeDivision, 8, leaf);
		cout << endl;
	}
}

private: System::Void searchByServiceTypeBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	string serviceName = marshal_as<std::string>(this->tBName->Text);
	string serviceType = marshal_as<std::string>(this->tBType->Text);
	string serviceDivision = marshal_as<std::string>(this->tBDivision->Text);
	string serviceTermStr = marshal_as<std::string>(this->tBTerm->Text);

	if (serviceName.size() == 0 || serviceType.size() == 0 || serviceDivision.size() == 0 || serviceTermStr.size() == 0) {
		MessageBox::Show(this, "Íåêîððåêòíûå äàííûå, ïðîâåðüòå ïðàâèëüíîñòü ââåäåííûõ äàííûõ", "Îøèáêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		int serviceTerm;
		try {
			serviceTerm = stoi(serviceTermStr);
		}
		catch (exception& err) {
			MessageBox::Show(this, "Íåâåðíûé òèï äàííûõ", "Îøèáêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		serviceTerm = stoi(serviceTermStr);
		Passport passport = Passport();
		ServiceEntity* entity = new ServiceEntity();
		entity->division = serviceDivision;
		entity->serviceName = serviceName;
		entity->term = serviceTerm;
		entity->serviceType = serviceType;
		treeNodeServices* leaf = DataStorage::rbTreeLeaf;
		treeNodeServices* rbTreeDivision = DataStorage::rbTreeType;
		vector<ServiceEntity*> data = DataStorage::dataServices;

		int count = 0;
		treeNodeElemServices searchable;
		searchable.value = entity->serviceType;
		searchable.index = 0;
		search(rbTreeDivision, searchable, leaf, count, entity);
		bool result = DataStorage::resultSerch;
		this->countComparationsServices->Text = gcnew String(to_string(DataStorage::countComparisons).c_str());
		DataStorage::countComparisons = 0;
		if (result) {
			this->resultSearchServices2->Text = gcnew String("Íàéäåí");
		}
		else {
			this->resultSearchServices2->Text = gcnew String("Íå íàéäåí");
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
		MessageBox::Show(this, "Íåêîððåêòíûå äàííûå, ïðîâåðüòå ïðàâèëüíîñòü ââåäåííûõ äàííûõ", "Îøèáêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		int serviceTerm;
		try {
			serviceTerm = stoi(serviceTermStr);
		}
		catch (exception& err) {
			MessageBox::Show(this, "Íåâåðíûé òèï äàííûõ", "Îøèáêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		 serviceTerm = stoi(serviceTermStr);
		Passport passport = Passport();
		ServiceEntity* entity = new ServiceEntity();
		entity->division = serviceDivision;
		entity->serviceName = serviceName;
		entity->term = serviceTerm;
		entity->serviceType = serviceType;
		treeNodeServices* leaf = DataStorage::rbTreeLeaf;
		treeNodeServices* rbTreeDivision = DataStorage::rbTreeName;
		vector<ServiceEntity*> data = DataStorage::dataServices;

		int count = 0;
		treeNodeElemServices searchable;
		searchable.value = entity->serviceName;
		searchable.index = 0;
		search(rbTreeDivision, searchable, leaf, count, entity);
		bool result = DataStorage::resultSerch;
		this->countComparationsServices->Text = gcnew String(to_string(DataStorage::countComparisons).c_str());
		DataStorage::countComparisons = 0;
		if (result) {
			this->resultSearchServices2->Text = gcnew String("Íàéäåí");
		}
		else {
			this->resultSearchServices2->Text = gcnew String("Íå íàéäåí");
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
		MessageBox::Show(this, "Íåêîððåêòíûå äàííûå, ïðîâåðüòå ïðàâèëüíîñòü ââåäåííûõ äàííûõ", "Îøèáêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		int serviceTerm;
		try {
			serviceTerm = stoi(serviceTermStr);
		}
		catch (exception& err) {
			MessageBox::Show(this, "Íåâåðíûé òèï äàííûõ", "Îøèáêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		Passport passport = Passport();
		ServiceEntity* entity = new ServiceEntity();
		entity->division = serviceDivision;
		entity->serviceName = serviceName;
		entity->term = serviceTerm;
		entity->serviceType = serviceType;
		treeNodeServices* leaf = DataStorage::rbTreeLeaf;
		treeNodeServices* rbTreeDivision = DataStorage::rbTreeTerm;
		vector<ServiceEntity*> data = DataStorage::dataServices;

		int count = 0;
		treeNodeElemServices searchable;
		searchable.value = to_string(entity->term);
		searchable.index = 0;
		search(rbTreeDivision, searchable, leaf, count, entity);
		bool result = DataStorage::resultSerch;
		this->countComparationsServices->Text = gcnew String(to_string(DataStorage::countComparisons).c_str());
		DataStorage::countComparisons = 0;
		if (result) {
			this->resultSearchServices2->Text = gcnew String("Íàéäåí");
		}
		else {
			this->resultSearchServices2->Text = gcnew String("Íå íàéäåí");
		}
		printTreeA(rbTreeDivision, 8, leaf);
		cout << endl;
	}
	

}

private: System::Void searchByNameAndType_Click(System::Object^ sender, System::EventArgs^ e) {
	string serviceName = marshal_as<std::string>(this->tBName->Text);
	string serviceType = marshal_as<std::string>(this->tBType->Text);
	string serviceDivision = marshal_as<std::string>(this->tBDivision->Text);
	string serviceTermStr = marshal_as<std::string>(this->tBTerm->Text);

	if (serviceName.size() == 0 || serviceType.size() == 0 || serviceDivision.size() == 0 || serviceTermStr.size() == 0) {
		MessageBox::Show(this, "Íåêîððåêòíûå äàííûå, ïðîâåðüòå ïðàâèëüíîñòü ââåäåííûõ äàííûõ", "Îøèáêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		int serviceTerm;
		try {
			serviceTerm = stoi(serviceTermStr);
		}
		catch (exception& err) {
			MessageBox::Show(this, "Íåâåðíûé òèï äàííûõ", "Îøèáêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		ServiceEntity* entity = new ServiceEntity();
		entity->division = serviceDivision;
		entity->serviceType = serviceType;
		entity->serviceName = serviceName;
		entity->term = stoi(serviceTermStr);
		ServicesHashTable servicesHashTable = DataStorage::servicesHashTable;
		servicesHashTable.printTable();
		
		vector<ServiceEntity*> data = DataStorage::dataServices;
		vector<int> res = servicesHashTable.findItem(entity);
		this->countComparationsServices->Text = gcnew String(to_string(res[0]).c_str());
		if (isEqualServices(data[res[2]], entity)) {
			this->resultSearchServices2->Text = gcnew String("Íàéäåí");
		}
		else {
			this->resultSearchServices2->Text = gcnew String("Íå íàéäåí");
		}
		DataStorage::resultSerch = false;
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	treeNode*& avlTreePassport = DataStorage::avlTreePassport;
	treeNode*& avlTreeDate = DataStorage::avlTreeDate;
	treeNode*& avlTreeServiceType = DataStorage::avlTreeServiceType;
	treeNode*& avlTreeServiceName = DataStorage::avlTreeServiceName;
	RequestsHashTable requestsHashTable = DataStorage::requestsHashTable;
	ofstream fout("debugRequests.txt");
	requestsHashTable.debugPrint(fout);
	debugPrintAvlTree(avlTreePassport, nullptr, fout);
	debugPrintAvlTree(avlTreeDate, nullptr, fout);
	debugPrintAvlTree(avlTreeServiceType, nullptr, fout);
	debugPrintAvlTree(avlTreeServiceName, nullptr, fout);
	fout.close();
	MessageBox::Show(this, "Ñòðóêòóðû äàííûõ ñîõðàíåíû â ôàéë debugRequests.txt", "Îòëàäêà", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void addRequestsBTN_Click(System::Object^ sender, System::EventArgs^ e) {
	// Äîáàâèòü âàëèäàöèþ ïî äåðåâó äåíèñà è õåø òàáëèöå àíòàèêñà
	vector<RequestsEntity*> data = DataStorage::data;
	treeNode*& avlTreePassport = DataStorage::avlTreePassport;
	treeNode*& avlTreeDate = DataStorage::avlTreeDate;
	treeNode*& avlTreeServiceType = DataStorage::avlTreeServiceType;
	treeNode*& avlTreeServiceName = DataStorage::avlTreeServiceName;
	bool heightChanged = false;
	RequestsHashTable requestsHashTable = DataStorage::requestsHashTable;
	string serviceName = marshal_as<std::string>(this->tBServiceName->Text);
	string serviceType = marshal_as<std::string>(this->tBServiceType->Text);
	string dateString = marshal_as<std::string>(this->tBDate->Text);
	string seriesPassportText = marshal_as<std::string>(this->tBSeriesPassport->Text);
	string numberPassportText = marshal_as<std::string>(this->tBNumberPassport->Text);
	int seriesPassport;
	int numberPassport;
	if (serviceName.size() == 0 || serviceType.size() == 0 || dateString.size() == 0 || seriesPassportText.size() == 0 || numberPassportText.size() == 0) {
		MessageBox::Show(this, "Íåêîððåêòíûå äàííûå , ïðîâåðüòå ââåäåííóþ èíôîðìàöèþ î çàÿâêå", "Óäàëåíèå", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		try {
			seriesPassport = stoi(seriesPassportText);
			numberPassport = stoi(numberPassportText);
			date date = inputDateData(dateString);
			Passport passport = Passport();
			passport.number = numberPassport;
			passport.series = seriesPassport;
			RequestsEntity* entity = new RequestsEntity();
			entity->date = date;
			entity->passport = passport;
			entity->serviceName = serviceName;
			entity->serviceType = serviceType;
			bool heightChanged = false;
			DataStorage::data.push_back(entity);
			requestsHashTable.insert(entity);
			listNodeElem* valuePasport = new listNodeElem();
			valuePasport->index = DataStorage::data.size() - 1 ;
			valuePasport->value = to_string(entity->passport.series) + to_string(entity->passport.number);
			addNode(avlTreePassport, valuePasport, heightChanged);
			listNodeElem* valueDate = new listNodeElem();
			valueDate->index = DataStorage::data.size() - 1;
			valueDate->value = entity->date.day + "." + entity->date.month + "." + entity->date.year;
			addNode(avlTreeDate, valueDate, heightChanged);
			listNodeElem* valueServiceType = new listNodeElem();
			valueServiceType->index = DataStorage::data.size() - 1;
			valueServiceType->value = entity->serviceType;
			addNode(avlTreeServiceType, valueServiceType, heightChanged);
			listNodeElem* valueServiceName = new listNodeElem();
			valueServiceName->index = DataStorage::data.size() - 1;
			valueServiceName->value = entity->serviceName;
			addNode(avlTreeServiceName, valueServiceName, heightChanged);
			MessageBox::Show(this, "Çàÿâêà óñïåøíî äîáàâëåíà", "Äîáàâëåíèå", MessageBoxButtons::OK, MessageBoxIcon::Information);
			DataTable^ tablTest2 = gcnew DataTable();
			tablTest2->Rows->Clear();
			RequestsDataGrid->DataSource = tablTest2;
			tablTest2->Columns->Add("Ïàñïîðò");
			tablTest2->Columns->Add("Íàçâàíèå óñëóãè");
			tablTest2->Columns->Add("Òèï óñëóãè");
			tablTest2->Columns->Add("Äàòà");
			for (int i = 0; i < DataStorage::data.size(); i++) {
				DataRow^ row = tablTest2->NewRow();
				string passport = to_string(DataStorage::data[i]->passport.series) + " " + to_string(DataStorage::data[i]->passport.number);
				row["Ïàñïîðò"] = gcnew String(passport.c_str());
				row["Íàçâàíèå óñëóãè"] = gcnew String(DataStorage::data[i]->serviceName.c_str());
				row["Òèï óñëóãè"] = gcnew String(DataStorage::data[i]->serviceType.c_str());
				string date = DataStorage::data[i]->date.day + "." + DataStorage::data[i]->date.month + "." + DataStorage::data[i]->date.year;
				row["Äàòà"] = gcnew String(date.c_str());
				tablTest2->Rows->Add(row);
			}
		}
		catch (exception& err) {
			MessageBox::Show(this, "Íåêîððåêòíûå äàííûå , ïðîâåðüòå ââåäåííóþ èíôîðìàöèþ î çàÿâêå", "Óäàëåíèå", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	string fullnamestr = marshal_as<std::string>(this->tBClientFullname->Text);
	Fullname fullname = inputFullnameData(fullnamestr);
	ClientPassport passport = ClientPassport();
	int passnum;
	int passseries;
	try {
		passnum = stoi(marshal_as<std::string>(this->tBClientPassNum->Text));
		passseries = stoi(marshal_as<std::string>(this->tBClientPassSeries->Text));
	}
	catch (exception& err)
	{
		MessageBox::Show(this, "Некорректные данные, проверьте введенную информацию о клиенте", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	passport.number = passnum;
	passport.series = passseries;
	string email = marshal_as<std::string>(this->tBClientEmai->Text);
	string job = marshal_as<std::string>(this->tBClientJob->Text);
	string passnumstr = to_string(passnum);
	string passserstr = to_string(passseries);
	if (isValidateData(passseries, passnum, fullnamestr, email, job)) {
		MessageBox::Show(this, "Некорректные данные, проверьте введенную информацию о клиенте", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		try {
			ClientsEntity* client = new ClientsEntity();
			client->passport = passport;
			client->fullname = fullname;
			client->email = email;
			client->job = job;
			//DataClientsStorage::rbtFullname = root_init(DataClientsStorage::rbtNullnode);
			Node*& rbt = DataClientsStorage::rbtFullname;
			vector<ClientsEntity*> clients = DataClientsStorage::data;
			int count = 0;
			RBTData searchable;
			searchable.value = fullnamestr;
			searchable.index = 0;
			pre_search(rbt, DataClientsStorage::rbtNullnode, searchable.value, count);
			bool result = DataClientsStorage::resultSearch;
			this->countOfCompareClients->Text = gcnew String(to_string(DataClientsStorage::countComparisons).c_str());
			DataStorage::countComparisons = 0;
			if (result) {
				this->resultSearchClient->Text = gcnew String("Найдено");
			}
			else {
				this->resultSearchClient->Text = gcnew String("Не найдено");
			}
			//print(rbt, DataClientsStorage::rbtNullnode, 4, 4);
			//cout << endl;
		}
		catch (exception& err) {
			MessageBox::Show(this, "Некорректные данные, проверьте введенную информацию о клиенте", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	string fullnamestr = marshal_as<std::string>(this->tBClientFullname->Text);
	Fullname fullname = inputFullnameData(fullnamestr);
	ClientPassport passport = ClientPassport();
	int passnum;
	int passseries;
	try {
		passnum = stoi(marshal_as<std::string>(this->tBClientPassNum->Text));
		passseries = stoi(marshal_as<std::string>(this->tBClientPassSeries->Text));
	}
	catch (exception& err)
	{
		MessageBox::Show(this, "Некорректные данные, проверьте введенную информацию о клиенте", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	passport.number = passnum;
	passport.series = passseries;
	string email = marshal_as<std::string>(this->tBClientEmai->Text);
	string job = marshal_as<std::string>(this->tBClientJob->Text);
	string passnumstr = to_string(passnum);
	string passserstr = to_string(passseries);
	if (isValidateData(passseries, passnum, fullnamestr, email, job)) {
		MessageBox::Show(this, "Некорректные данные, проверьте введенную информацию о клиенте", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		try {
			ClientsEntity* client = new ClientsEntity();
			client->passport = passport;
			client->fullname = fullname;
			client->email = email;
			client->job = job;
			//DataClientsStorage::rbtEmail = root_init(DataClientsStorage::rbtNullnode);
			Node*& rbt = DataClientsStorage::rbtEmail;
			vector<ClientsEntity*> clients = DataClientsStorage::data;

			int count = 0;
			RBTData searchable;
			searchable.value = client->email;
			searchable.index = 0;
			pre_search(rbt, DataClientsStorage::rbtNullnode, searchable.value, count);
			bool result = DataClientsStorage::resultSearch;
			this->countOfCompareClients->Text = gcnew String(to_string(DataClientsStorage::countComparisons).c_str());
			DataStorage::countComparisons = 0;
			if (result) {
				this->resultSearchClient->Text = gcnew String("Найдено");
			}
			else {
				this->resultSearchClient->Text = gcnew String("Не найдено");
			}
			print(rbt, DataClientsStorage::rbtNullnode, 4, 2);
			cout << endl;
		}
		catch (exception& err) {
			MessageBox::Show(this, "Некорректные данные, проверьте введенную информацию о клиенте", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
}
private: System::Void button7_Click_1(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	string fullnamestr = marshal_as<std::string>(this->tBClientFullname->Text);
	Fullname fullname = inputFullnameData(fullnamestr);
	ClientPassport passport = ClientPassport();
	int passnum;
	int passseries;
	try {
		passnum = stoi(marshal_as<std::string>(this->tBClientPassNum->Text));
		passseries = stoi(marshal_as<std::string>(this->tBClientPassSeries->Text));
	}
	catch (exception& err)
	{
		MessageBox::Show(this, "Некорректные данные, проверьте введенную информацию о клиенте", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	string passnumstr = to_string(passnum);
	string passserstr = to_string(passseries);
	passport.number = passnum;
	passport.series = passseries;
	string email = marshal_as<std::string>(this->tBClientEmai->Text);
	string job = marshal_as<std::string>(this->tBClientJob->Text);
	if (isValidateData(passseries, passnum, fullnamestr, email, job)) {
		MessageBox::Show(this, "Некорректные данные, проверьте введенную информацию о клиенте", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		try {
			ClientsEntity* client = new ClientsEntity();
			client->passport = passport;
			client->fullname = fullname;
			client->email = email;
			client->job = job;
			//DataClientsStorage::rbtPassport = root_init(DataClientsStorage::rbtNullnode);
			Node*& rbt = DataClientsStorage::rbtPassport;
			vector<ClientsEntity*>& clients = DataClientsStorage::data;
			int count = 0;
			RBTData searchable;
			searchable.value = to_string(client->passport.series) + to_string(client->passport.number);
			searchable.index = 0;
			pre_search(rbt, DataClientsStorage::rbtNullnode, searchable.value, count);
			bool result = DataClientsStorage::resultSearch;
			this->countOfCompareClients->Text = gcnew String(to_string(DataClientsStorage::countComparisons).c_str());
			DataStorage::countComparisons = 0;
			if (result) {
				this->resultSearchClient->Text = gcnew String("Найдено");
			}
			else {
				this->resultSearchClient->Text = gcnew String("Не найдено");
			}
			cout << endl;
		}
		catch (exception& err) {
			MessageBox::Show(this, "Некорректные данные, проверьте введенную информацию о клиенте", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}

private: System::Void btnSearchByClient_Click(System::Object^ sender, System::EventArgs^ e) {
	string fullnamestr = marshal_as<std::string>(this->tBClientFullname->Text);
	Fullname fullname = inputFullnameData(fullnamestr);
	ClientPassport passport = ClientPassport();
	int passnum;
	int passseries;
	try {
		passnum = stoi(marshal_as<std::string>(this->tBClientPassNum->Text));
		passseries = stoi(marshal_as<std::string>(this->tBClientPassSeries->Text));
	}
	catch (exception& err)
	{
		MessageBox::Show(this, "Некорректные данные, проверьте введенную информацию о клиенте", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	passport.number = passnum;
	passport.series = passseries;
	string email = marshal_as<std::string>(this->tBClientEmai->Text);
	string job = marshal_as<std::string>(this->tBClientJob->Text);
	if (isValidateData(passseries,passnum,fullnamestr,email,job)) {
		MessageBox::Show(this, "Некорректные данные, проверьте введенную информацию о клиенте", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		try {
			ClientsEntity* client = new ClientsEntity();
			client->passport = passport;
			client->fullname = fullname;
			client->email = email;
			client->job = job;
			//DataClientsStorage::rbtClient = root_init(DataClientsStorage::rbtNullnode);
			Node*& rbt = DataClientsStorage::rbtClient;
			vector<ClientsEntity*> clients = DataClientsStorage::data;

			int count = 0;
			RBTData searchable;
			searchable.value = client->fullname.surname + ' ' + client->fullname.name + ' ' + client->fullname.lastname
				+ ' ' + client->job + ' ' + client->email
				+ ' ' + to_string(client->passport.series) + to_string(client->passport.number);
			searchable.index = 0;
			pre_search(rbt, DataClientsStorage::rbtNullnode, searchable.value, count);
			bool result = DataClientsStorage::resultSearch;
			this->countOfCompareClients->Text = gcnew String(to_string(DataClientsStorage::countComparisons).c_str());
			DataStorage::countComparisons = 0;
			if (result) {
				this->resultSearchClient->Text = gcnew String("Найдено");
			}
			else {
				this->resultSearchClient->Text = gcnew String("Не найдено");
			}
			//cout << searchable.value << "\n";
		}
			catch (exception& err) {
				MessageBox::Show(this, "Некорректные данные, проверьте введенную информацию о клиенте", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

	}

private: System::Void btnDeletionClient_Click(System::Object^ sender, System::EventArgs^ e) {
	string fullnamestr = marshal_as<std::string>(this->tBClientFullname->Text);
	Fullname fullname = inputFullnameData(fullnamestr);
	ClientPassport passport = ClientPassport();
	int passnum = stoi(marshal_as<std::string>(this->tBClientPassNum->Text));
	int passseries = stoi(marshal_as<std::string>(this->tBClientPassSeries->Text));
	passport.number = passnum;
	passport.series = passseries;
	string email = marshal_as<std::string>(this->tBClientEmai->Text);
	string job = marshal_as<std::string>(this->tBClientJob->Text);
	Node*& rbtPassport = DataClientsStorage::rbtPassport;
	int local = 0;
	string passnumstr = to_string(passnum);
	string passserstr = to_string(passseries);
	bool isContains = pre_search(rbtPassport, DataClientsStorage::rbtNullnode, to_string(passport.series) + to_string(passport.number), local);
	if (job.size() == 0 || email.size() == 0 || fullnamestr.size() == 0 || passnumstr.size() == 0 || passserstr.size() == 0) {
		MessageBox::Show(this, "Некорректные данные, проверьте введенную информацию о клиенте", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else 
	{
		try 
		{
			if (isContains) {
				ClientsEntity* client = new ClientsEntity();
				client->passport = passport;
				client->fullname = fullname;
				client->email = email;
				client->job = job;
				vector<ClientsEntity*>& clients = DataClientsStorage::data;
				ClientsHashTable& clientsHashTable = DataClientsStorage::clientsHashTable;
				Node*& rbtClient = DataClientsStorage::rbtClient;
				Node*& rbtNullnode = DataClientsStorage::rbtNullnode;
				Node*& rbtJob = DataClientsStorage::rbtJob;
				Node*& rbtEmail = DataClientsStorage::rbtEmail;
				Node*& rbtFullname = DataClientsStorage::rbtFullname;
				int count = 0;
				pre_search(rbtPassport, DataClientsStorage::rbtNullnode, to_string(client->passport.series) + to_string(client->passport.number), count);
				bool result_searchByPassportTreeNode = DataClientsStorage::resultSearch;
				if (result_searchByPassportTreeNode) {
					int index = DataClientsStorage::index;
					ClientsEntity* deletionElem = DataClientsStorage::data[index];
					ClientsEntity* lastElement = DataClientsStorage::data.back();
					RBTData value;
					string valueText = to_string(deletionElem->passport.series) + to_string(deletionElem->passport.number);
					value.index = index;
					value.value = valueText;

					updateTreeNode(rbtPassport, DataClientsStorage::rbtNullnode,lastElement, to_string(lastElement->passport.series) + to_string(lastElement->passport.number), index);
					updateTreeNode(rbtJob, DataClientsStorage::rbtNullnode, lastElement,lastElement->job, index);
					updateTreeNode(rbtEmail, DataClientsStorage::rbtNullnode, lastElement, lastElement->email, index);
					updateTreeNode(rbtFullname, DataClientsStorage::rbtNullnode, lastElement, lastElement->fullname.surname + ' ' + lastElement->fullname.name + ' '
						+ lastElement->fullname.lastname, index);
					updateTreeNode(rbtClient, DataClientsStorage::rbtNullnode, lastElement,lastElement->fullname.surname +
						' ' + lastElement->fullname.name + ' ' + lastElement->fullname.lastname + ' ' + lastElement->job + ' '
						+ lastElement->email + ' ' + to_string(lastElement->passport.series) + to_string(lastElement->passport.number), index);
					ofstream fout("debugClients.txt");
					fout << "@@@@@@@@@@@@@@@@@\n";
					//debugPrintRBTClient(rbtJob, DataClientsStorage::rbtNullnode, fout, 4, 2);
					string clientToText = client->fullname.surname + ' ' + client->fullname.name + ' '
						+ client->fullname.lastname + ' ' + client->job + ' ' + client->email
						+ ' ' + to_string(client->passport.series) + to_string(client->passport.number);
					RBTData clientdata = {clientToText,index };
					RBTData jobdata = { client->job,index };
					RBTData emaildata = { client->email,index };
					RBTData fullnamedata = { client->fullname.surname + ' ' + client->fullname.name + ' '
						+ client->fullname.lastname,index };
					RBTData passportdata = { to_string(client->passport.series) + to_string(client->passport.number) ,index };
					eraseClient(rbtClient, DataClientsStorage::rbtNullnode, clientdata);
					eraseClient(rbtJob, DataClientsStorage::rbtNullnode, jobdata);
					eraseClient(rbtEmail, DataClientsStorage::rbtNullnode, emaildata);
					eraseClient(rbtFullname, DataClientsStorage::rbtNullnode, fullnamedata);
					eraseClient(rbtPassport, DataClientsStorage::rbtNullnode, passportdata);
					clientsHashTable.deleteEntity(deletionElem);
					clientsHashTable.changeIndex(lastElement, index);
					DataClientsStorage::data[index] = lastElement;
					DataClientsStorage::data.pop_back();
					MessageBox::Show(this, "Клиент удален", "Успешно", MessageBoxButtons::OK, MessageBoxIcon::Information);
					DataTable^ tablTestClient = gcnew DataTable();
					tablTestClient->Rows->Clear();
					ClientsDataGrid->DataSource = tablTestClient;
					tablTestClient->Columns->Add("ФИО");
					tablTestClient->Columns->Add("Должность");
					tablTestClient->Columns->Add("email");
					tablTestClient->Columns->Add("Пасспорт");
					for (int i = 0; i < DataClientsStorage::data.size(); i++) {
						DataRow^ rowClients = tablTestClient->NewRow();
						rowClients["ФИО"] = gcnew String((DataClientsStorage::data[i]->fullname.surname + ' ' + DataClientsStorage::data[i]->fullname.name + ' ' + DataClientsStorage::data[i]->fullname.lastname).c_str());
						rowClients["Должность"] = gcnew String(DataClientsStorage::data[i]->job.c_str());
						rowClients["email"] = gcnew String(DataClientsStorage::data[i]->email.c_str());
						string passportClient = to_string(DataClientsStorage::data[i]->passport.series) + ' ' + to_string(DataClientsStorage::data[i]->passport.number);
						rowClients["Пасспорт"] = gcnew String(passportClient.c_str());
						tablTestClient->Rows->Add(rowClients);
					}

				}
			}
			else {
				MessageBox::Show(this, "Такого клиента нет в базе", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (exception& err) {
			MessageBox::Show(this, "Некорректные данные, проверьте введенную информацию о клиенте", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
}

private: System::Void debugClientButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Node*& rbtPassport = DataClientsStorage::rbtPassport;
	Node*& rbtClient = DataClientsStorage::rbtClient;
	Node*& rbtNullnode = DataClientsStorage::rbtNullnode;
	Node*& rbtJob = DataClientsStorage::rbtJob;
	Node*& rbtEmail = DataClientsStorage::rbtEmail;
	Node*& rbtFullname = DataClientsStorage::rbtFullname;
	ClientsHashTable& clientsHashTable = DataClientsStorage::clientsHashTable;
	ofstream fout("debugClients.txt");
	clientsHashTable.debugPrint(fout);
	debugPrintRBTClient(rbtFullname, DataClientsStorage::rbtNullnode, fout, 4, 2);
	debugPrintRBTClient(rbtJob, DataClientsStorage::rbtNullnode, fout, 4, 2);
	debugPrintRBTClient(rbtEmail, DataClientsStorage::rbtNullnode, fout, 4, 2);
	debugPrintRBTClient(rbtPassport, DataClientsStorage::rbtNullnode, fout, 4, 2);
	fout.close(); 
	MessageBox::Show(this, "Данные сохранены в файл debugClients.txt", "Успешно", MessageBoxButtons::OK, MessageBoxIcon::Information);

}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	vector<ClientsEntity*> data = DataClientsStorage::data;
	writeDataClient(data, "stdclients1.txt");
	MessageBox::Show(this, "Данные о клиентах сохранены в файл stdclients1", "Успешно", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};
}