#pragma once
#include "ReaderRequests.h"
#include <vector>

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
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ RequestsDataGrid;


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
			this->RequestsDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
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
			this->requestsPage->Controls->Add(this->RequestsDataGrid);
			this->requestsPage->Controls->Add(this->button5);
			this->requestsPage->Controls->Add(this->button4);
			this->requestsPage->Controls->Add(this->button3);
			this->requestsPage->Controls->Add(this->button2);
			this->requestsPage->Location = System::Drawing::Point(4, 22);
			this->requestsPage->Name = L"requestsPage";
			this->requestsPage->Padding = System::Windows::Forms::Padding(3);
			this->requestsPage->Size = System::Drawing::Size(738, 469);
			this->requestsPage->TabIndex = 0;
			this->requestsPage->Text = L"Заявки";
			this->requestsPage->UseVisualStyleBackColor = true;
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
			// button5
			// 
			this->button5->Location = System::Drawing::Point(448, 304);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 4;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(337, 304);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(222, 304);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(112, 304);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RequestsDataGrid))->EndInit();
			this->tabPage1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void RequestsScreen_Load(System::Object^ sender, System::EventArgs^ e) {
		vector<RequestsEntity*> data = readFromFile("stdrequests.txt");
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
	}
};
}
