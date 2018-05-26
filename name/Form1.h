#pragma once

#include <iostream>
#include <fstream>

#include "C:\\prog\\Table\\name\\TTable.h"
#include "C:\\prog\\Table\\name\\TArrayTable.h"
#include "C:\\prog\\Table\\name\\THashTable.h"
#include "C:\\prog\\Table\\name\\TTreeTable.h"

namespace name {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:

		char *word;
		int size;
		int eff1, eff2, eff3, eff4;
		TScanTable<string, int> *scan;
		TSortTable<string, int> *sort;
		TArrayHash<string, int> *hash;
	private: System::Windows::Forms::Label^  label2;
	public: 
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
			 TTreeTable<string, int> *tree;

		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			word = new char[20];
			size = 100;

			scan = new TScanTable<string, int>(size);
			sort = new TSortTable<string, int>(size);
			hash = new TArrayHash<string, int>(size);
			tree = new TTreeTable<string, int>();

			Start();

			eff1 = scan->GetEff();
			eff2 = sort->GetEff();
			eff3 = hash->GetEff();
			eff4 = tree->GetEff();

			dataGridView1->RowCount = size;

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Key;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Value;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Key = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Value = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"ScanTable";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(331, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 2;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {this->Key, this->Value});
			this->dataGridView1->Location = System::Drawing::Point(2, 31);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(344, 315);
			this->dataGridView1->TabIndex = 3;
			// 
			// Key
			// 
			this->Key->HeaderText = L"Key";
			this->Key->Name = L"Key";
			this->Key->Width = 150;
			// 
			// Value
			// 
			this->Value->HeaderText = L"Value";
			this->Value->Name = L"Value";
			this->Value->Width = 150;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(84, 1);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"SortTable";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(166, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"HashTable";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(248, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"TreeTable";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(365, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 7;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(368, 31);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(0, 13);
			this->linkLabel1->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(352, 38);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"efficienty:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(407, 31);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(89, 20);
			this->textBox1->TabIndex = 10;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(508, 349);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		 void Start() {
			ifstream file;
			file.open("C:\\prog\\name\\name\\testText.txt");

			if(!file)
				return;

			while (!file.eof()) {

				file >> word;

				/*TRecord<char[50], int> tmp(word, 1);*/

				string str;
				str = word;
				TRecord<string, int> tmp(str, 1);

				if (scan->Find(tmp.key)) 
					scan->IncreaseVal(scan->GetCurr().val);
				
				else 
					if (!scan->IsFull()) 
						scan->Insert(tmp);
				
					else 
						break;
					
				if (sort->Find(tmp.key)) 
					sort->IncreaseVal(scan->GetCurr().val);
				
				else 
					if (!sort->IsFull()) 
						sort->Insert(tmp);
				
					else 
						break;

				if (hash->Find(tmp.key)) 
					hash->IncreaseVal(scan->GetCurr().val);
				
				else 
					if (!hash->IsFull()) 
						hash->Insert(tmp);
				
					else 
						break;

				if (tree->Find(tmp.key)) 
					tree->IncreaseVal(scan->GetCurr().val);
				
				else 
					if (!tree->IsFull()) 
						tree->Insert(tmp);
				
					else 
						break;
			}

			file.close();
		}

		void ClearDataGrid() {
		for (int i = 0; i < size; i++) {
			dataGridView1->Rows[i]->Cells[0]->Value = "";
			dataGridView1->Rows[i]->Cells[1]->Value = "";
		}
	}

		String^ convertString (string str) {

		int size = str.size();
		char *tmp = new char[size + 1];

		for (int i = 0; i < size; i++) {
			tmp[i] = str[i];
		}

		tmp[size] = '\0';

		String^ res = gcnew String(tmp);
		return res;
		
	}


	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	
		TRecord<string, int> tmp;
	
		String^ out; 
		out = ""; 

		ClearDataGrid();

		int i = 0;

		for (scan->Reset(); !scan->IsEnd(); scan->GoNext()) {
			tmp = scan->GetCurr();
			out = Convert::ToString(convertString(tmp.key));
			dataGridView1->Rows[i]->Cells[0]->Value = out;
			dataGridView1->Rows[i]->Cells[1]->Value = Convert::ToString(tmp.val);
			i++;
		}

		textBox1->Text = Convert::ToString(eff1);

			 }
};
}

