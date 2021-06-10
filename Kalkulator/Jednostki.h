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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Jednostki::typeid));
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
				L"Masa", L"D³ugoœæ", L"Powierzchnia", L"Objêtoœæ",
					L"Prêdkoœæ", L"Dane"
			});
			this->comboBox_what->Location = System::Drawing::Point(197, 13);
			this->comboBox_what->Name = L"comboBox_what";
			this->comboBox_what->Size = System::Drawing::Size(170, 24);
			this->comboBox_what->TabIndex = 29;
			this->comboBox_what->SelectedIndexChanged += gcnew System::EventHandler(this, &Jednostki::comboBox_what_SelectedIndexChanged);
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
			this->button1->Click += gcnew System::EventHandler(this, &Jednostki::button1_Click);
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
			this->Convert_btn->Click += gcnew System::EventHandler(this, &Jednostki::Convert_btn_Click);
			// 
			// display_txt
			// 
			this->display_txt->AutoSize = true;
			this->display_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->display_txt->Location = System::Drawing::Point(17, 223);
			this->display_txt->Name = L"display_txt";
			this->display_txt->Size = System::Drawing::Size(173, 20);
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
			this->comboBox_to->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"---" });
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
			this->comboBox_from->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"---" });
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
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Jednostki";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Przelicznik Jednostek";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//funkcja czyszcz¹ca comboboxy
		private: void ClearCombo(){
			comboBox_from->Items->Clear();
			comboBox_to->Items->Clear();
		}

		//funkcja pisz¹ca wynik w okienku
		private: void Write_display(double f){
			String^ current_item = comboBox_to->SelectedItem->ToString();
			display_txt->Text = "Przeliczona wartoœæ: "
			+ String::Format("{0:0.00}", f)->Replace('.', ',') + " " + current_item;
		}

		//Centrum sprowadzania jednostek do wspólnego mianownika
		//Masa 
		private: System::Double exchange_from_kg(double f) {
			if (comboBox_to->SelectedItem == "g")
			{
				f *= 1000;
			}
			else if (comboBox_to->SelectedItem == "dag")
			{
				f *= 100;
			}
			else if (comboBox_to->SelectedItem == "mg")
			{
				f *= 1000000;
			}
			else if (comboBox_to->SelectedItem == "t")
			{
				f *= 0.001;
			}
			else if (comboBox_to->SelectedItem == "oz")
			{
				f *= 0.0283286;
			}
			else if (comboBox_to->SelectedItem == "lb")
			{
				f *= 0.453515;
			}
			return f;
		}
		private: System::Double exchange_to_kg(double f) {
			if (comboBox_from->SelectedItem == "g")
			{
				f *= 0.001;
			}
			else if (comboBox_from->SelectedItem == "dag")
			{
				f *= 0.01;
			}
			else if (comboBox_from->SelectedItem == "mg")
			{
				f *= 0.000001;
			}
			else if (comboBox_from->SelectedItem == "t")
			{
				f *= 1000;
			}
			else if (comboBox_from->SelectedItem == "oz")
			{
				f *= 35.3;
			}
			else if (comboBox_from->SelectedItem == "lb")
			{
				f *= 2.205;
			}
			return f;
		}
		//D³ugoœæ 
		private: System::Double exchange_to_m(double f) {
			if (comboBox_from->SelectedItem == "mm")
			{
				f *= 0.001;
			}
			else if (comboBox_from->SelectedItem == "cm")
			{
				f *= 0.01;
			}
			else if (comboBox_from->SelectedItem == "dm")
			{
				f *= 0.1;
			}
			else if (comboBox_from->SelectedItem == "km")
			{
				f *= 1000;
			}
			else if (comboBox_from->SelectedItem == "in")
			{
				f *= 0.0254;
			}
			else if (comboBox_from->SelectedItem == "ft")
			{
				f *= 0.30480;
			}
			else if (comboBox_from->SelectedItem == "yd")
			{
				f *= 0.9144;
			}
			else if (comboBox_from->SelectedItem == "mile")
			{
				f *= 1609.344;
			}
			return f;
		}
		private: System::Double exchange_from_m(double f) {
			if (comboBox_to->SelectedItem == "mm")
			{
				f *= 1000;
			}
			else if (comboBox_to->SelectedItem == "cm")
			{
				f *= 100;
			}
			else if (comboBox_to->SelectedItem == "dm")
			{
				f *= 10;
			}
			else if (comboBox_to->SelectedItem == "km")
			{
				f *= 0.001;
			}
			else if (comboBox_to->SelectedItem == "in")
			{
				f *= 39,37008;
			}
			else if (comboBox_to->SelectedItem == "ft")
			{
				f *= 328084;
			}
			else if (comboBox_to->SelectedItem == "yd")
			{
				f *= 1.09361;
			}
			else if (comboBox_to->SelectedItem == "mile")
			{
				f *= 0.000621375;
			}
			return f;
		}
		//Powierzchnia 
		private: System::Double exchange_to_m2(double f) {
			if (comboBox_from->SelectedItem == "mm^2")
			{
				f *= 0.0000001;
			}
			else if (comboBox_from->SelectedItem == "cm^2")
			{
				f *= 0.00001;
			}
			else if (comboBox_from->SelectedItem == "dm^2")
			{
				f *= 0.01;
			}
			else if (comboBox_from->SelectedItem == "km^2")
			{
				f *= 1000000;
			}
			else if (comboBox_from->SelectedItem == "a")
			{
				f *= 100;
			}
			else if (comboBox_from->SelectedItem == "ha")
			{
				f *= 10000;
			}
			return f;
		}
		private: System::Double exchange_from_m2(double f) {
			if (comboBox_to->SelectedItem == "mm^2")
			{
				f *= 1000000;
			}
			else if (comboBox_to->SelectedItem == "cm^2")
			{
				f *= 10000;
			}
			else if (comboBox_to->SelectedItem == "dm^2")
			{
				f *= 100;
			}
			else if (comboBox_to->SelectedItem == "km^2")
			{
				f *= 0.000001;
			}
			else if (comboBox_to->SelectedItem == "a")
			{
				f *= 0.01;
			}
			else if (comboBox_to->SelectedItem == "ha")
			{
				f *= 0.0001;
			}
			return f;
		}
		//Objêtoœæ
		private: System::Double exchange_to_l(double f) {
			if (comboBox_from->SelectedItem == "mm^3")
			{
				f *= 0.000001;
			}
			else if (comboBox_from->SelectedItem == "ml")
			{
				f *= 0.001;
			}
			else if (comboBox_from->SelectedItem == "hl")
			{
				f *= 100;
			}
			else if (comboBox_from->SelectedItem == "m^3")
			{
				f *= 1000;
			}
			else if (comboBox_from->SelectedItem == "gal")
			{
				f *= 4.54609;
			}
			else if (comboBox_from->SelectedItem == "bbl")
			{
				f *= 158.987295;
			}
			return f;
		}
		private: System::Double exchange_from_l(double f) {
			if (comboBox_to->SelectedItem == "mm^3")
			{
				f *= 1000000;
			}
			else if (comboBox_to->SelectedItem == "ml")
			{
				f *= 1000;
			}
			else if (comboBox_to->SelectedItem == "hl")
			{
				f *= 0.01;
			}
			else if (comboBox_to->SelectedItem == "m^3")
			{
				f *= 0.001;
			}
			else if (comboBox_to->SelectedItem == "gal")
			{
				f *= 0.219969;
			}
			else if (comboBox_to->SelectedItem == "bbl")
			{
				f *= 0.00629;
			}
			return f;
		}
		//Prêdkoœæ 
		private: System::Double exchange_to_kmh(double f) {
			if (comboBox_from->SelectedItem == "m/s")
			{
				f *= 3.6;
			}
			else if (comboBox_from->SelectedItem == "mph")
			{
				f *= 1.6090;
			}
			else if (comboBox_from->SelectedItem == "w")
			{
				f *= 1.85;
			}
			else if (comboBox_from->SelectedItem == "Ma")
			{
				f *= 1225.04;
			}
			return f;
		}
		private: System::Double exchange_from_kmh(double f) {
			if (comboBox_to->SelectedItem == "m/s")
			{
				f *= 0.277778;
			}
			else if (comboBox_to->SelectedItem == "mph")
			{
				f *= 0.621504;
			}
			else if (comboBox_to->SelectedItem == "w")
			{
				f *= 0.540541;
			}
			else if (comboBox_to->SelectedItem == "Ma")
			{
				f *= 0.0008163;
			}
			return f;
		}
		//Dane 
		private: System::Double exchange_to_b(double f) {
			if (comboBox_from->SelectedItem == "kB")
			{
				f *= 1000;
			}
			else if (comboBox_from->SelectedItem == "MB")
			{
				f *= 1000000;
			}
			else if (comboBox_from->SelectedItem == "GB")
			{
				f *= 1000000000;
			}
			else if (comboBox_from->SelectedItem == "TB")
			{
				f *= 1000000000000;
			}
			return f;
		}
		private: System::Double exchange_from_b(double f) {
			if (comboBox_to->SelectedItem == "kB")
			{
				f *= 0.001;
			}
			else if (comboBox_to->SelectedItem == "MB")
			{
				f *= 0.000001;
			}
			else if (comboBox_to->SelectedItem == "GB")
			{
				f *= 0.000000001;
			}
			else if (comboBox_to->SelectedItem == "TB")
			{
				f *= 0.000000000001;
			}
			return f;
		}

		private: void comboBox_what_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
		{
			// W zale¿noœci od opcji wybranej w comboBox_what dodaje opcje do wyboru w pozosta³ych
			// comboBoxach
			String^ current_item = comboBox_what->SelectedItem->ToString();
			int current_index = comboBox_what->FindString(current_item);
	
			switch (current_index)
			{
			case 0:
				// Masa
				ClearCombo();
				comboBox_from->Items->Add("mg");
				comboBox_to->Items->Add("mg");
				comboBox_from->Items->Add("g");
				comboBox_to->Items->Add("g");
				comboBox_from->Items->Add("dag");
				comboBox_to->Items->Add("dag");
				comboBox_from->Items->Add("kg");
				comboBox_to->Items->Add("kg");
				comboBox_from->Items->Add("t");
				comboBox_to->Items->Add("t");
				comboBox_from->Items->Add("lb");
				comboBox_to->Items->Add("lb");
				comboBox_from->Items->Add("oz");
				comboBox_to->Items->Add("oz");
				break;
			case 1:
				// D³ugoœæ
				ClearCombo();
				comboBox_from->Items->Add("mm");
				comboBox_to->Items->Add("mm");
				comboBox_from->Items->Add("cm");
				comboBox_to->Items->Add("cm");
				comboBox_from->Items->Add("dm");
				comboBox_to->Items->Add("dm");
				comboBox_from->Items->Add("m");
				comboBox_to->Items->Add("m");
				comboBox_from->Items->Add("km");
				comboBox_to->Items->Add("km");
				comboBox_from->Items->Add("in");
				comboBox_to->Items->Add("in");
				comboBox_from->Items->Add("ft");
				comboBox_to->Items->Add("ft");
				comboBox_from->Items->Add("yd");
				comboBox_to->Items->Add("yd");
				comboBox_from->Items->Add("mile");
				comboBox_to->Items->Add("mile");
				break;
			case 2:
				//Powierzchnia
				ClearCombo();
				comboBox_from->Items->Add("mm^2");
				comboBox_to->Items->Add("mm^2");
				comboBox_from->Items->Add("cm^2");
				comboBox_to->Items->Add("cm^2");
				comboBox_from->Items->Add("dm^2");
				comboBox_to->Items->Add("dm^2");
				comboBox_from->Items->Add("m^2");
				comboBox_to->Items->Add("m^2");
				comboBox_from->Items->Add("km^2");
				comboBox_to->Items->Add("km^2");
				comboBox_from->Items->Add("a");
				comboBox_to->Items->Add("a");
				comboBox_from->Items->Add("ha");
				comboBox_to->Items->Add("ha");
				break;
			case 3:
				//Objêtoœæ
				ClearCombo();
				comboBox_from->Items->Add("mm^3");
				comboBox_to->Items->Add("mm^3");
				comboBox_from->Items->Add("ml");
				comboBox_to->Items->Add("ml");
				comboBox_from->Items->Add("l");
				comboBox_to->Items->Add("l");
				comboBox_from->Items->Add("hl");
				comboBox_to->Items->Add("hl");
				comboBox_from->Items->Add("m^3");
				comboBox_to->Items->Add("m^3");
				comboBox_from->Items->Add("gal");
				comboBox_to->Items->Add("gal");
				comboBox_from->Items->Add("bbl");
				comboBox_to->Items->Add("bbl");
				break;
			case 4:
				//Predkoœæ
				ClearCombo();
				comboBox_from->Items->Add("m/s");
				comboBox_to->Items->Add("m/s");
				comboBox_from->Items->Add("km/h");
				comboBox_to->Items->Add("km/h");
				comboBox_from->Items->Add("mph");
				comboBox_to->Items->Add("mph");
				comboBox_from->Items->Add("w");
				comboBox_to->Items->Add("w");
				comboBox_from->Items->Add("Ma");
				comboBox_to->Items->Add("Ma");
				break;
			case 5:
				//Dane
				ClearCombo();
				comboBox_from->Items->Add("B");
				comboBox_to->Items->Add("B");
				comboBox_from->Items->Add("kB");
				comboBox_to->Items->Add("kB");
				comboBox_from->Items->Add("MB");
				comboBox_to->Items->Add("MB");
				comboBox_from->Items->Add("GB");
				comboBox_to->Items->Add("GB");
				comboBox_from->Items->Add("TB");
				comboBox_to->Items->Add("TB");
			default:
				break;
			}
		}

		private: System::Void Convert_btn_Click(System::Object^ sender, System::EventArgs^ e)
		{
			//funkcja licz¹ca
			String^ current_item = comboBox_what->SelectedItem->ToString();
			int current_index = comboBox_what->FindString(current_item);

			double i = Double::Parse(amount_txt->Text);

		if (comboBox_from->SelectedItem == comboBox_to->SelectedItem)
			display_txt->Text = "B³¹d. Wybierz inn¹ jednostkê";

		else if (comboBox_what->SelectedItem == "Masa") {
			// Masa
			i = exchange_to_kg(i);
			i = exchange_from_kg(i);
			Write_display(i);
		}
		else if (comboBox_what->SelectedItem == "D³ugoœæ") {
			// D³ugoœæ
			i = exchange_to_m(i);
			i = exchange_from_m(i);
			Write_display(i);
		}
		else if (comboBox_what->SelectedItem == "Powierzchnia") {
			//Powierzchnia
			i = exchange_to_m2(i);
			i = exchange_from_m2(i);
			Write_display(i);
		}
		else if (comboBox_what->SelectedItem == "Objêtoœæ") {
			//Objêtoœæ
			i = exchange_to_l(i);
			i = exchange_from_l(i);
			Write_display(i);
		}
		else if (comboBox_what->SelectedItem == "Prêdkoœæ") {
			//Predkoœæ
			i = exchange_to_kmh(i);
			i = exchange_from_kmh(i);
			Write_display(i);
		}
		else if (comboBox_what->SelectedItem == "Dane"){
			//Dane
			i = exchange_to_b(i);
			i = exchange_from_b(i);
			Write_display(i);
		}

		}
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			amount_txt->Clear();
			display_txt->Text = "Przeliczona wartoœæ: ";
			ClearCombo();
			comboBox_what->Items->Clear();
		}
};
}
