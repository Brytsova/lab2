#pragma once
#include <cmath>
namespace Project1 {

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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox2;










	protected:








	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Location = System::Drawing::Point(-4, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(703, 479);
			this->tabControl1->TabIndex = 8;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->tabPage2->Controls->Add(this->pictureBox1);
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(695, 446);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Завдання 1";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(416, 127);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(222, 136);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox2->Location = System::Drawing::Point(245, 237);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(129, 26);
			this->textBox2->TabIndex = 7;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox1->Location = System::Drawing::Point(245, 127);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(129, 26);
			this->textBox1->TabIndex = 6;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->button2->Location = System::Drawing::Point(443, 314);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(121, 40);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Очистити";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->button1->Location = System::Drawing::Point(128, 314);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 40);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Обчислити";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::MediumVioletRed;
			this->label3->Location = System::Drawing::Point(167, 49);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(378, 29);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Обчислити значення функції";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label2->Location = System::Drawing::Point(124, 237);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"y=f(x)";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label1->ForeColor = System::Drawing::Color::Blue;
			this->label1->Location = System::Drawing::Point(124, 127);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введіть x";
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->tabPage1->Controls->Add(this->pictureBox2);
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(695, 446);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Завдання 2";
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::Yellow;
			this->listBox1->ForeColor = System::Drawing::Color::Black;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Киів", L"Лондон", L"Париж", L"Амстердам", L"Відень",
					L"Берлін"
			});
			this->listBox1->Location = System::Drawing::Point(82, 188);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(141, 144);
			this->listBox1->TabIndex = 3;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Yellow;
			this->textBox3->Location = System::Drawing::Point(376, 188);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(161, 26);
			this->textBox3->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Yellow;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(409, 130);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(96, 29);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Країна";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Yellow;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(98, 130);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(114, 29);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Столиці";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(12, 36);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(651, 64);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(685, 477);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"Лабораторна робота 2";
			this->tabControl1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double x, y;
		x = Convert::ToDouble(textBox1->Text);
		if (x <= -3) y = log(abs(x));
		else
			if (x > -3) y = atan(x);
		textBox2->Text = Convert::ToString(y);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = " ";
		textBox2->Text = " ";
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		int n;
		n = listBox1->SelectedIndex;
		switch (n)
		{
		case 0: textBox3->Text = "Україна"; break;
		case 1: textBox3->Text = "Велика Британія"; break;
		case 2: textBox3->Text = "Франція"; break;
		case 3: textBox3->Text = "Нідерланди"; break;
		case 4: textBox3->Text = "Австрія"; break;
		case 5: textBox3->Text = "Німеччина"; break;
			
		}
	};
	};;
}