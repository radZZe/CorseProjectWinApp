
#pragma once
#include "ReaderClients.h"
#include <vector>

namespace CorseProjectWinApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� SearchForm
	/// </summary>
	public ref class SearchForm : public System::Windows::Forms::Form
	{
	public:
		std::vector<ClientsEntity*>*dataClients = nullptr;
		int cntCompar = 0;
		bool result = false;
	public: System::Windows::Forms::Label^ ���;
	public: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	public:

		   bool searchResult;
		SearchForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	public:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~SearchForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::DataGridView^ dataGridView1;
	public: System::Windows::Forms::Button^ btnCloseSearchResult;
	public: System::Windows::Forms::Label^ label1;
	public:

	public:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
	public: void InitializeComponent(void)
		{
		this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
		this->btnCloseSearchResult = (gcnew System::Windows::Forms::Button());
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->��� = (gcnew System::Windows::Forms::Label());
		this->label2 = (gcnew System::Windows::Forms::Label());
		this->label3 = (gcnew System::Windows::Forms::Label());
		this->label4 = (gcnew System::Windows::Forms::Label());
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
		this->SuspendLayout();
		// 
		// dataGridView1
		// 
		this->dataGridView1->AllowUserToAddRows = false;
		this->dataGridView1->AllowUserToDeleteRows = false;
		this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
		this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Control;
		this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
		this->dataGridView1->Location = System::Drawing::Point(0, 22);
		this->dataGridView1->Name = L"dataGridView1";
		this->dataGridView1->Size = System::Drawing::Size(541, 253);
		this->dataGridView1->TabIndex = 0;
		// 
		// btnCloseSearchResult
		// 
		this->btnCloseSearchResult->Location = System::Drawing::Point(178, 395);
		this->btnCloseSearchResult->Name = L"btnCloseSearchResult";
		this->btnCloseSearchResult->Size = System::Drawing::Size(172, 23);
		this->btnCloseSearchResult->TabIndex = 1;
		this->btnCloseSearchResult->Text = L"�������";
		this->btnCloseSearchResult->UseVisualStyleBackColor = true;
		this->btnCloseSearchResult->Click += gcnew System::EventHandler(this, &SearchForm::btnCloseSearchResult_Click);
		// 
		// label1
		// 
		this->label1->AutoSize = true;
		this->label1->Location = System::Drawing::Point(21, 327);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(126, 13);
		this->label1->TabIndex = 2;
		this->label1->Text = L"���������� ���������:";
		// 
		// ���
		// 
		this->���->Location = System::Drawing::Point(92, 369);
		this->���->Name = L"���";
		this->���->Size = System::Drawing::Size(123, 13);
		this->���->TabIndex = 1;
		// 
		// label2
		// 
		this->label2->AutoSize = true;
		this->label2->Location = System::Drawing::Point(24, 369);
		this->label2->Name = L"label2";
		this->label2->Size = System::Drawing::Size(62, 13);
		this->label2->TabIndex = 3;
		this->label2->Text = L"���������:";
		// 
		// label3
		// 
		this->label3->AutoSize = true;
		this->label3->Location = System::Drawing::Point(150, 327);
		this->label3->Name = L"label3";
		this->label3->Size = System::Drawing::Size(0, 13);
		this->label3->TabIndex = 4;
		// 
		// label4
		// 
		this->label4->AutoSize = true;
		this->label4->Location = System::Drawing::Point(239, 6);
		this->label4->Name = L"label4";
		this->label4->Size = System::Drawing::Size(51, 13);
		this->label4->TabIndex = 5;
		this->label4->Text = L"�������";
		// 
		// SearchForm
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(541, 430);
		this->Controls->Add(this->label4);
		this->Controls->Add(this->label3);
		this->Controls->Add(this->label2);
		this->Controls->Add(this->���);
		this->Controls->Add(this->label1);
		this->Controls->Add(this->btnCloseSearchResult);
		this->Controls->Add(this->dataGridView1);
		this->Name = L"SearchForm";
		this->Text = L"SearchForm";
		this->Load += gcnew System::EventHandler(this, &SearchForm::OnLoad);
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
		this->ResumeLayout(false);
		this->PerformLayout();

	}
	public: System::Void OnLoad(System::Object^ sender, System::EventArgs^ e) {
		DataTable^ tablClients = gcnew DataTable();
		dataGridView1->DataSource = tablClients;
		tablClients->Columns->Add("���");
		tablClients->Columns->Add("���������");
		tablClients->Columns->Add("email");
		tablClients->Columns->Add("��������");
		if (result) {
			this->���->Text = gcnew String("�������");
		}
		else {
			this->���->Text = gcnew String("�� �������");
		}
		this->label3->Text = gcnew String(to_string(cntCompar).c_str());
		for (int i = 0; i < dataClients->size(); i++) {
			DataRow^ rowClients = tablClients->NewRow();
			rowClients["���"] = gcnew String((dataClients->at(i)->fullname.surname + ' ' + dataClients->at(i)->fullname.name + ' ' + dataClients->at(i)->fullname.lastname).c_str());
			rowClients["���������"] = gcnew String(dataClients->at(i)->job.c_str());
			rowClients["email"] = gcnew String(dataClients->at(i)->email.c_str());
			string passportClient = to_string(dataClients->at(i)->passport.series) + ' ' + to_string(dataClients->at(i)->passport.number);
			//rowClients["Ianii?oiua aaiiua"] = gcnew String(passport.c_str());
			rowClients["��������"] = gcnew String(passportClient.c_str());
			tablClients->Rows->Add(rowClients);
		}
		dataClients->clear();
	}
    public: System::Void btnCloseSearchResult_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

#pragma endregion
	

};

	
}
