#pragma once

#include "vcclr.h"
#include "MyOpenCV.h"

#include <iostream>
#include <stdlib.h>
#include <string>


namespace Sample {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Form1에 대한 요약입니다.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}

	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	protected: 
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  파일ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  추가ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  삭제ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  필터ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  추가ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  삭제ToolStripMenuItem;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::TreeView^  treeView1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private:
		/// <summary>
		/// 필수 디자이너 변수입니다.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 디자이너 지원에 필요한 메서드입니다.
		/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
		/// </summary>
		void InitializeComponent(void)
		{
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->파일ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->추가ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->삭제ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->필터ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->추가ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->삭제ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// statusStrip1
			// 
			this->statusStrip1->Location = System::Drawing::Point(0, 394);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(783, 22);
			this->statusStrip1->TabIndex = 0;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->파일ToolStripMenuItem, 
				this->필터ToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(783, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 파일ToolStripMenuItem
			// 
			this->파일ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->추가ToolStripMenuItem1, 
				this->삭제ToolStripMenuItem1});
			this->파일ToolStripMenuItem->Name = L"파일ToolStripMenuItem";
			this->파일ToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->파일ToolStripMenuItem->Text = L"파일";
			// 
			// 추가ToolStripMenuItem1
			// 
			this->추가ToolStripMenuItem1->Name = L"추가ToolStripMenuItem1";
			this->추가ToolStripMenuItem1->Size = System::Drawing::Size(98, 22);
			this->추가ToolStripMenuItem1->Text = L"추가";
			this->추가ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::추가ToolStripMenuItem1_Click);
			// 
			// 삭제ToolStripMenuItem1
			// 
			this->삭제ToolStripMenuItem1->Name = L"삭제ToolStripMenuItem1";
			this->삭제ToolStripMenuItem1->Size = System::Drawing::Size(98, 22);
			this->삭제ToolStripMenuItem1->Text = L"삭제";
			// 
			// 필터ToolStripMenuItem
			// 
			this->필터ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->추가ToolStripMenuItem, 
				this->삭제ToolStripMenuItem});
			this->필터ToolStripMenuItem->Name = L"필터ToolStripMenuItem";
			this->필터ToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->필터ToolStripMenuItem->Text = L"필터";
			// 
			// 추가ToolStripMenuItem
			// 
			this->추가ToolStripMenuItem->Name = L"추가ToolStripMenuItem";
			this->추가ToolStripMenuItem->Size = System::Drawing::Size(98, 22);
			this->추가ToolStripMenuItem->Text = L"추가";
			// 
			// 삭제ToolStripMenuItem
			// 
			this->삭제ToolStripMenuItem->Name = L"삭제ToolStripMenuItem";
			this->삭제ToolStripMenuItem->Size = System::Drawing::Size(98, 22);
			this->삭제ToolStripMenuItem->Text = L"삭제";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				23.37165F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				76.62835F)));
			this->tableLayoutPanel1->Controls->Add(this->treeView1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->listBox1, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->listBox2, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox1, 1, 1);
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 27);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 49.72527F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50.27473F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(783, 364);
			this->tableLayoutPanel1->TabIndex = 2;
			// 
			// treeView1
			// 
			this->treeView1->Location = System::Drawing::Point(3, 3);
			this->treeView1->Name = L"treeView1";
			this->treeView1->Size = System::Drawing::Size(176, 174);
			this->treeView1->TabIndex = 0;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 12;
			this->listBox1->Location = System::Drawing::Point(3, 183);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(176, 172);
			this->listBox1->TabIndex = 1;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 12;
			this->listBox2->Location = System::Drawing::Point(186, 3);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(594, 172);
			this->listBox2->TabIndex = 2;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(186, 183);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(594, 177);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(783, 416);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		System::Void 추가ToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {

			OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
			openFileDialog1->RestoreDirectory = true;

			if ( openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK )
			{
				pin_ptr<const wchar_t> wch = PtrToStringChars(openFileDialog1->FileName);
				size_t origsize = wcslen(wch) + 1;
				const size_t newsize = 1000;
				size_t convertedChars = 0;
				char nstring[newsize];
				wcstombs_s(&convertedChars, nstring, origsize, wch, _TRUNCATE);
				myWrapper.OpenAndShow(nstring);
				this->listBox2->Items->Add(openFileDialog1->FileName);
			}
		}
};
}

