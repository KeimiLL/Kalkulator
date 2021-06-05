#pragma once

namespace Kalkulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Jednostki
	/// </summary>
	public ref class Jednostki : public System::Windows::Forms::Form
	{
	public:
		Jednostki(void)
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
		~Jednostki()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label4;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox_what;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ Convert_btn;
	private: System::Windows::Forms::Label^ display_txt;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ amount_txt;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox_to;
	private: System::Windows::Forms::ComboBox^ comboBox_from;

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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox_what = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Convert_btn = (gcnew System::Windows::Forms::Button());
			this->display_txt = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->amount_txt = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox_to = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_from = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(18, 17);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(148, 20);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Rodzaj jednostek";
			// 
			// comboBox_what
			// 
			this->comboBox_what->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_what->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->comboBox_what->FormattingEnabled = true;
			this->comboBox_what->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Masa", L"D³ugoœæ", L"Prêdkoœæ",
					L"Objêtoœæ", L"Powierzchnia", L"Dane"
			});
			this->comboBox_what->Location = System::Drawing::Point(197, 13);
			this->comboBox_what->Name = L"comboBox_what";
			this->comboBox_what->Size = System::Drawing::Size(170, 24);
			this->comboBox_what->TabIndex = 29;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(217, 173);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 35);
			this->button1->TabIndex = 28;
			this->button1->Text = L"Reset";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// Convert_btn
			// 
			this->Convert_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Convert_btn->Location = System::Drawing::Point(17, 173);
			this->Convert_btn->Name = L"Convert_btn";
			this->Convert_btn->Size = System::Drawing::Size(150, 35);
			this->Convert_btn->TabIndex = 27;
			this->Convert_btn->Text = L"Przelicz";
			this->Convert_btn->UseVisualStyleBackColor = true;
			// 
			// display_txt
			// 
			this->display_txt->AutoSize = true;
			this->display_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->display_txt->Location = System::Drawing::Point(17, 223);
			this->display_txt->Name = L"display_txt";
			this->display_txt->Size = System::Drawing::Size(211, 25);
			this->display_txt->TabIndex = 26;
			this->display_txt->Text = L"Przeliczona wartoœæ:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(18, 137);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(101, 20);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Przelicz na:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(17, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 20);
			this->label2->TabIndex = 24;
			this->label2->Text = L"Przelicz z:";
			// 
			// amount_txt
			// 
			this->amount_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->amount_txt->Location = System::Drawing::Point(197, 53);
			this->amount_txt->Multiline = true;
			this->amount_txt->Name = L"amount_txt";
			this->amount_txt->Size = System::Drawing::Size(170, 30);
			this->amount_txt->TabIndex = 23;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(17, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(164, 20);
			this->label1->TabIndex = 22;
			this->label1->Text = L"WprowadŸ wartoœæ:";
			// 
			// comboBox_to
			// 
			this->comboBox_to->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_to->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->comboBox_to->FormattingEnabled = true;
			this->comboBox_to->Items->AddRange(gcnew cli::array< System::Object^  >(1) {
					L"---"
			});
			this->comboBox_to->Location = System::Drawing::Point(197, 133);
			this->comboBox_to->Name = L"comboBox_to";
			this->comboBox_to->Size = System::Drawing::Size(170, 24);
			this->comboBox_to->TabIndex = 21;
			// 
			// comboBox_from
			// 
			this->comboBox_from->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_from->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->comboBox_from->FormattingEnabled = true;
			this->comboBox_from->Items->AddRange(gcnew cli::array< System::Object^  >(1) {
				L"---"
			});
			this->comboBox_from->Location = System::Drawing::Point(197, 93);
			this->comboBox_from->Name = L"comboBox_from";
			this->comboBox_from->Size = System::Drawing::Size(170, 24);
			this->comboBox_from->TabIndex = 20;
			// 
			// Jednostki
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(384, 261);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox_what);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Convert_btn);
			this->Controls->Add(this->display_txt);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->amount_txt);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox_to);
			this->Controls->Add(this->comboBox_from);
			this->Name = L"Jednostki";
			this->Text = L"Przelicznik Jednostek";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	};
}
