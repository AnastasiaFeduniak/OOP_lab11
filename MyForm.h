#pragma once
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
namespace Lab {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	public: System::Windows::Forms::TextBox^ textBox2;
	private:
	public: System::Windows::Forms::TextBox^ textBox1;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	public: System::Windows::Forms::TextBox^ textBox4;
	private:
	public: System::Windows::Forms::TextBox^ textBox3;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	public: System::Windows::Forms::TextBox^ textBox5;
	private:

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ readCtrlRToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ writeCtrlWToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ writeAltF4ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tableToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ fillToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ getValueToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ setValueToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clearToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ needHelpYourProblemsToolStripMenuItem;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->readCtrlRToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->writeCtrlWToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->writeAltF4ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tableToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fillToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->getValueToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->setValueToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clearToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->needHelpYourProblemsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->tableLayoutPanel1);
			this->panel1->Location = System::Drawing::Point(12, 26);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(368, 259);
			this->panel1->TabIndex = 0;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel1->Location = System::Drawing::Point(34, 30);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(90, 90);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->textBox5);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->textBox4);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(386, 26);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(245, 259);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->Location = System::Drawing::Point(124, 202);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 14;
			this->button4->Text = L"Get value";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Location = System::Drawing::Point(31, 202);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Set value";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(93, 167);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(106, 20);
			this->textBox5->TabIndex = 12;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(28, 170);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"new value ";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(158, 130);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"value is ";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(120, 127);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(32, 20);
			this->textBox4->TabIndex = 9;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(47, 127);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(32, 20);
			this->textBox3->TabIndex = 8;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(102, 130);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(21, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"j = ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(28, 130);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"i = ";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(138, 60);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Clear";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(31, 60);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Fill";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(138, 30);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(75, 20);
			this->textBox2->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(31, 30);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(75, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(158, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Colums";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(53, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Rows";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->tableToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(643, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->readCtrlRToolStripMenuItem,
					this->writeCtrlWToolStripMenuItem, this->writeAltF4ToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// readCtrlRToolStripMenuItem
			// 
			this->readCtrlRToolStripMenuItem->Name = L"readCtrlRToolStripMenuItem";
			this->readCtrlRToolStripMenuItem->Size = System::Drawing::Size(143, 22);
			this->readCtrlRToolStripMenuItem->Text = L"Read Ctrl+R";
			this->readCtrlRToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::readCtrlRToolStripMenuItem_Click);
			// 
			// writeCtrlWToolStripMenuItem
			// 
			this->writeCtrlWToolStripMenuItem->Name = L"writeCtrlWToolStripMenuItem";
			this->writeCtrlWToolStripMenuItem->Size = System::Drawing::Size(143, 22);
			this->writeCtrlWToolStripMenuItem->Text = L"Write Ctrl+W";
			this->writeCtrlWToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::writeCtrlWToolStripMenuItem_Click);
			// 
			// writeAltF4ToolStripMenuItem
			// 
			this->writeAltF4ToolStripMenuItem->Name = L"writeAltF4ToolStripMenuItem";
			this->writeAltF4ToolStripMenuItem->Size = System::Drawing::Size(143, 22);
			this->writeAltF4ToolStripMenuItem->Text = L"Exit Alt+F4";
			this->writeAltF4ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::writeAltF4ToolStripMenuItem_Click);
			// 
			// tableToolStripMenuItem
			// 
			this->tableToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->fillToolStripMenuItem,
					this->getValueToolStripMenuItem, this->setValueToolStripMenuItem, this->clearToolStripMenuItem
			});
			this->tableToolStripMenuItem->Name = L"tableToolStripMenuItem";
			this->tableToolStripMenuItem->Size = System::Drawing::Size(46, 20);
			this->tableToolStripMenuItem->Text = L"Table";
			// 
			// fillToolStripMenuItem
			// 
			this->fillToolStripMenuItem->Name = L"fillToolStripMenuItem";
			this->fillToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->fillToolStripMenuItem->Text = L"Fill";
			this->fillToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::fillToolStripMenuItem_Click);
			// 
			// getValueToolStripMenuItem
			// 
			this->getValueToolStripMenuItem->Name = L"getValueToolStripMenuItem";
			this->getValueToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->getValueToolStripMenuItem->Text = L"Get value";
			this->getValueToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::getValueToolStripMenuItem_Click);
			// 
			// setValueToolStripMenuItem
			// 
			this->setValueToolStripMenuItem->Name = L"setValueToolStripMenuItem";
			this->setValueToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->setValueToolStripMenuItem->Text = L"Set value";
			this->setValueToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::setValueToolStripMenuItem_Click);
			// 
			// clearToolStripMenuItem
			// 
			this->clearToolStripMenuItem->Name = L"clearToolStripMenuItem";
			this->clearToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->clearToolStripMenuItem->Text = L"Clear";
			this->clearToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::clearToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->needHelpYourProblemsToolStripMenuItem });
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// needHelpYourProblemsToolStripMenuItem
			// 
			this->needHelpYourProblemsToolStripMenuItem->Name = L"needHelpYourProblemsToolStripMenuItem";
			this->needHelpYourProblemsToolStripMenuItem->Size = System::Drawing::Size(235, 22);
			this->needHelpYourProblemsToolStripMenuItem->Text = L"Need any help\? Your problems";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(643, 297);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Lab11";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void Filling(){
			int column = Int32::Parse(textBox1->Text);
			int row = Int32::Parse(textBox2->Text);
			tableLayoutPanel1->ColumnCount = column;
			tableLayoutPanel1->RowCount = row;
			tableLayoutPanel1->Size = System::Drawing::Size(row * 20, column * 20);
			float rowSize = 100.0f / row;
			float columnSize = 100.0f / column;

			tableLayoutPanel1->RowStyles->Clear();
			tableLayoutPanel1->ColumnStyles->Clear();


			for (int i = 0; i < column; i++)
			{
				RowStyle^ rowStyle = gcnew RowStyle(SizeType::Percent, rowSize);
				tableLayoutPanel1->RowStyles->Add(rowStyle);
			}

			for (int i = 0; i < row; i++)
			{
				ColumnStyle^ columnStyle = gcnew ColumnStyle(SizeType::Percent, columnSize);
				tableLayoutPanel1->ColumnStyles->Add(columnStyle);
			}


			for (int rows = 0; rows < column; rows++)
			{
				for (int cols = 0; cols < row; cols++)
				{
					Label^ label = gcnew Label();
					String^ value = String::Format("({0}, {1})", rows, cols);
					if (cols <= rows && cols + rows <= column - 1 && column == row)
					{
						label->Text = "1";
					}
					else
					{
						label->Text = "0";
					}
					tableLayoutPanel1->Controls->Add(label, cols, rows);
				}
			}

}
		void getValue()
{
			int i = Int32::Parse(textBox3->Text);
			int j = Int32::Parse(textBox4->Text);
			Control^ control = tableLayoutPanel1->GetControlFromPosition(i, j);
			Label^ valueLabel = dynamic_cast<Label^>(control);
			if (control != nullptr)
			{
				int value = Int32::Parse(valueLabel->Text);
				label5->Text = String::Format("Value is {0}", value);
			}
}
		void setValue()
{
			int j = Int32::Parse(textBox3->Text);
			int i = Int32::Parse(textBox4->Text);
			int v = Int32::Parse(textBox5->Text);
			Control^ control = tableLayoutPanel1->GetControlFromPosition(i, j);
			Label^ valueL = dynamic_cast<Label^>(control);
			if (control != nullptr)
			{
				valueL->Text = v.ToString();
				tableLayoutPanel1->Controls->Add(valueL, i, j);
			}
}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		tableLayoutPanel1->Controls->Clear();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Filling();
	
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	getValue();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	setValue();

}
private: System::Void writeAltF4ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	exit(0);
}
private: System::Void fillToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Filling();
}
private: System::Void clearToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	tableLayoutPanel1->Controls->Clear();
}
private: System::Void getValueToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	getValue();
}
private: System::Void setValueToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	setValue();
}



private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void readCtrlRToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	using namespace std;
	ifstream file("Table.txt");
	vector<vector<int>> matrix;

	if (file.is_open())
	{
		string line;
		while (getline(file, line))
		{
			istringstream s(line);
			vector<int> row;
			int value;
			while (s >> value)
			{
				row.push_back(value);
			}
			matrix.push_back(row);
		}
		file.close();
		int column = matrix.size();
		int row = matrix[1].size();
		tableLayoutPanel1->ColumnCount = column;
		tableLayoutPanel1->RowCount = row;
		tableLayoutPanel1->Size = System::Drawing::Size(row * 20, column * 20);
		float rowSize = 100.0f / row;
		float columnSize = 100.0f / column;

		tableLayoutPanel1->RowStyles->Clear();
		tableLayoutPanel1->ColumnStyles->Clear();


		for (int i = 0; i < column; i++)
		{
			RowStyle^ rowStyle = gcnew RowStyle(SizeType::Percent, rowSize);
			tableLayoutPanel1->RowStyles->Add(rowStyle);
		}

		for (int i = 0; i < row; i++)
		{
			ColumnStyle^ columnStyle = gcnew ColumnStyle(SizeType::Percent, columnSize);
			tableLayoutPanel1->ColumnStyles->Add(columnStyle);
		}
		for (int rows = 0; rows < column; rows++)
		{
			for (int cols = 0; cols < row; cols++)
			{
				Label^ label = gcnew Label();
				label->Text = System::Convert::ToString(matrix[rows][cols]);
				String^ value = String::Format("({0}, {1})", rows, cols);
				tableLayoutPanel1->Controls->Add(label, cols, rows);
			}
		}

	}
}
	   void ClearFile(const std::string& filename)
	   {
		   std::ofstream file(filename, std::ofstream::out | std::ofstream::trunc);
		   if (file.is_open())
		   {
			   file.close();
		   }
	   }
private: System::Void writeCtrlWToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	using namespace std;
	ClearFile("Table.txt");
	ofstream file("Table.txt");
	for (int i = 0; i < tableLayoutPanel1->ColumnCount; i++)
	{
		for (int j = 0; j < tableLayoutPanel1->RowCount; j++) {
			Control^ control = tableLayoutPanel1->GetControlFromPosition(j, i);
			Label^ valueLabel = dynamic_cast<Label^>(control);
			int value = Int32::Parse(valueLabel->Text);
			file << value << " ";
		}
		file << endl;
	}
}
};
}
