#pragma once

namespace Kalkulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for OknoWalut
	/// </summary>
	public ref class OknoWalut : public System::Windows::Forms::Form
	{
	public:
		OknoWalut(void)
		{
			InitializeComponent();
			//Ustawienie maksymalnej liczby znaków na 10.
			amount_txt->MaxLength = 10;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~OknoWalut()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox_from;
	private: System::Windows::Forms::ComboBox^ comboBox_to;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ amount_txt;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ display_txt;

	private: System::Windows::Forms::Button^ Convert_btn;
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(OknoWalut::typeid));
			this->comboBox_from = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_to = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->amount_txt = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->display_txt = (gcnew System::Windows::Forms::Label());
			this->Convert_btn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// comboBox_from
			// 
			this->comboBox_from->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_from->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->comboBox_from->FormattingEnabled = true;
			this->comboBox_from->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"PLN (z³oty)", L"EUR (euro)", L"USD (dolar amerykañski)",
					L"AUD (dolar australijski)", L"CHF (frank szwajcarski)", L"GBP (funt szterling)"
			});
			this->comboBox_from->Location = System::Drawing::Point(149, 91);
			this->comboBox_from->Name = L"comboBox_from";
			this->comboBox_from->Size = System::Drawing::Size(177, 24);
			this->comboBox_from->TabIndex = 0;
			// 
			// comboBox_to
			// 
			this->comboBox_to->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_to->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->comboBox_to->FormattingEnabled = true;
			this->comboBox_to->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"PLN (z³oty)", L"EUR (euro)", L"USD (dolar amerykañski)",
					L"AUD (dolar australijski)", L"CHF (frank szwajcarski)", L"GBP (funt szterling)"
			});
			this->comboBox_to->Location = System::Drawing::Point(149, 134);
			this->comboBox_to->Name = L"comboBox_to";
			this->comboBox_to->Size = System::Drawing::Size(177, 24);
			this->comboBox_to->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(28, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(164, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"WprowadŸ wartoœæ:";
			// 
			// amount_txt
			// 
			this->amount_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->amount_txt->Location = System::Drawing::Point(209, 44);
			this->amount_txt->Multiline = true;
			this->amount_txt->Name = L"amount_txt";
			this->amount_txt->Size = System::Drawing::Size(117, 28);
			this->amount_txt->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(28, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Przelicz z:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(28, 138);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(101, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Przelicz na:";
			// 
			// display_txt
			// 
			this->display_txt->AutoSize = true;
			this->display_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->display_txt->Location = System::Drawing::Point(28, 241);
			this->display_txt->Name = L"display_txt";
			this->display_txt->Size = System::Drawing::Size(173, 20);
			this->display_txt->TabIndex = 6;
			this->display_txt->Text = L"Przeliczona wartoœæ:";
			// 
			// Convert_btn
			// 
			this->Convert_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Convert_btn->Location = System::Drawing::Point(32, 192);
			this->Convert_btn->Name = L"Convert_btn";
			this->Convert_btn->Size = System::Drawing::Size(104, 35);
			this->Convert_btn->TabIndex = 7;
			this->Convert_btn->Text = L"Przelicz";
			this->Convert_btn->UseVisualStyleBackColor = true;
			this->Convert_btn->Click += gcnew System::EventHandler(this, &OknoWalut::Convert_btn_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(222, 192);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 35);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Reset";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &OknoWalut::reset_btn);
			// 
			// OknoWalut
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(370, 326);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Convert_btn);
			this->Controls->Add(this->display_txt);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->amount_txt);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox_to);
			this->Controls->Add(this->comboBox_from);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"OknoWalut";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Przelicznik walutowy";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//zamiana walut na funty
	private: System::Double exchange_to_GBP(double f) {
		if(comboBox_from->SelectedItem == "PLN (z³oty)")
		{
			f *=0.19;
		}
		else if (comboBox_from->SelectedItem == "USD (dolar amerykañski)")
		{
			f *= 0.7;
		}
		else if (comboBox_from->SelectedItem == "EUR (euro)")
		{
			f *= 0.86;
		}
		else if (comboBox_from->SelectedItem == "CHF (frank szwajcarski)")
		{
			f *= 0.78;
		}
		else if (comboBox_from->SelectedItem == "AUD (dolar australijski)")
		{
			f *= 0.55;
		}
		return f;
	}

	//zamaina funta na inne waluty
	private: System::Double exchange_from_GBP(double f) {
		if (comboBox_to->SelectedItem == "PLN (z³oty)")
		{
			f *= 5.20;
		}
		else if (comboBox_to->SelectedItem == "USD (dolar amerykañski)")
		{
			f *= 1.42;
		}
		else if (comboBox_to->SelectedItem == "EUR (euro)")
		{
			f *= 1.16;
		}
		else if (comboBox_to->SelectedItem == "CHF (frank szwajcarski)")
		{
			f *= 1.27;
		}
		else if (comboBox_to->SelectedItem == "AUD (dolar australijski)")
		{
			 f *= 1.83;
		}
		return f;
	}

	//przycisk liczenia
	private: System::Void Convert_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		// zabezpieczeni przed nie wybraniem combobox_to ale zjebane jest 
		/*if (comboBox_to->SelectedItem != "PLN z³oty" || comboBox_to->SelectedItem != "EUR (euro)" || comboBox_to->SelectedItem != "USD (dolar amerykañski)" || comboBox_to->SelectedItem !=  "AUD (dolar australijski)" || comboBox_to->SelectedItem !=  "CHF (frank szwajcarski)" || comboBox_to->SelectedItem != "GBP (funt szterling)") {
			display_txt->Text = "Przeliczona wartoœæ: error";
			return;
		}
		*/
		String^ waluta = comboBox_to->SelectedItem->ToString();
		double i;
		//Zabezpieczenie przed wpisaniem liter.
		if (!Double::TryParse(amount_txt->Text, i)) {
			display_txt->Text = "Przeliczona wartoœæ: error";
			return;
		}
	
		i = exchange_to_GBP(i);
		i = exchange_from_GBP(i);
		//Sprawdzenie czy przeliczona wartoœæ nie jest zbyt ma³a lub zbyt du¿a.
		if (i < 0.01) {
			display_txt->Text = "Przeliczona wartoœæ jest zbyt ma³a.";
			return;
		}
		if (i > 1000000) {
			display_txt->Text = "Przeliczona wartoœæ jest zbyt du¿a.";
			return;
		}
		if(comboBox_from->SelectedItem == comboBox_to->SelectedItem)
			display_txt->Text = "B³¹d. Wybierz inn¹ walutê.";
		else{
			display_txt->Text = "Przeliczona wartoœæ: "
			+ String::Format("{0:0.00}", i)->Replace('.', ',') + " " + waluta->Substring(0, 3);
		}
	}

	//reset obszaru wpisywania i wyniku
	private: System::Void reset_btn(System::Object^ sender, System::EventArgs^ e) {
			amount_txt->Clear();
			display_txt->Text = "Przeliczona wartoœæ: ";
	}
};
}
