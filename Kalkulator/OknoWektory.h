#pragma once
#include <math.h>

namespace Kalkulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for OknoWektory
	/// </summary>
	public ref class OknoWektory : public System::Windows::Forms::Form
	{
	public:
		OknoWektory(void)
		{
			InitializeComponent();
			//Ustawienie maksymalnej liczby znakow w poszczegolnych texbox'ach.
			text_v1->MaxLength = 3;
			text_v2->MaxLength = 3;
			text_v3->MaxLength = 3;
			text_w1->MaxLength = 3;
			text_w2->MaxLength = 3;
			text_w3->MaxLength = 3;
			
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~OknoWektory()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ text_v1;
	protected:
	private: System::Windows::Forms::TextBox^ text_w3;
	private: System::Windows::Forms::TextBox^ text_w2;
	private: System::Windows::Forms::TextBox^ text_w1;
	private: System::Windows::Forms::TextBox^ text_v3;
	private: System::Windows::Forms::TextBox^ text_v2;
	private: System::Windows::Forms::Label^ wektor_v;
	private: System::Windows::Forms::Label^ wektor_w;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ lbl1;
	private: System::Windows::Forms::Label^ lbl2;


	private: System::Windows::Forms::Button^ Oblicz_btn;
	private: System::Windows::Forms::Label^ Ilocz_wekt;
	private: System::Windows::Forms::Label^ Ilocz_skal;
	private: System::Windows::Forms::Label^ lbl6;
	private: System::Windows::Forms::Label^ dl_wekt;
	private: System::Windows::Forms::Button^ reset_btn;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(OknoWektory::typeid));
			this->text_v1 = (gcnew System::Windows::Forms::TextBox());
			this->text_w3 = (gcnew System::Windows::Forms::TextBox());
			this->text_w2 = (gcnew System::Windows::Forms::TextBox());
			this->text_w1 = (gcnew System::Windows::Forms::TextBox());
			this->text_v3 = (gcnew System::Windows::Forms::TextBox());
			this->text_v2 = (gcnew System::Windows::Forms::TextBox());
			this->wektor_v = (gcnew System::Windows::Forms::Label());
			this->wektor_w = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->Oblicz_btn = (gcnew System::Windows::Forms::Button());
			this->Ilocz_wekt = (gcnew System::Windows::Forms::Label());
			this->Ilocz_skal = (gcnew System::Windows::Forms::Label());
			this->lbl6 = (gcnew System::Windows::Forms::Label());
			this->dl_wekt = (gcnew System::Windows::Forms::Label());
			this->reset_btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// text_v1
			// 
			this->text_v1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->text_v1->Location = System::Drawing::Point(129, 36);
			this->text_v1->Multiline = true;
			this->text_v1->Name = L"text_v1";
			this->text_v1->Size = System::Drawing::Size(42, 33);
			this->text_v1->TabIndex = 0;
			// 
			// text_w3
			// 
			this->text_w3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->text_w3->Location = System::Drawing::Point(259, 95);
			this->text_w3->Multiline = true;
			this->text_w3->Name = L"text_w3";
			this->text_w3->Size = System::Drawing::Size(42, 33);
			this->text_w3->TabIndex = 5;
			// 
			// text_w2
			// 
			this->text_w2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->text_w2->Location = System::Drawing::Point(194, 95);
			this->text_w2->Multiline = true;
			this->text_w2->Name = L"text_w2";
			this->text_w2->Size = System::Drawing::Size(42, 33);
			this->text_w2->TabIndex = 4;
			// 
			// text_w1
			// 
			this->text_w1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->text_w1->Location = System::Drawing::Point(129, 95);
			this->text_w1->Multiline = true;
			this->text_w1->Name = L"text_w1";
			this->text_w1->Size = System::Drawing::Size(42, 33);
			this->text_w1->TabIndex = 3;
			// 
			// text_v3
			// 
			this->text_v3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->text_v3->Location = System::Drawing::Point(259, 35);
			this->text_v3->Multiline = true;
			this->text_v3->Name = L"text_v3";
			this->text_v3->Size = System::Drawing::Size(42, 33);
			this->text_v3->TabIndex = 2;
			// 
			// text_v2
			// 
			this->text_v2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->text_v2->Location = System::Drawing::Point(195, 35);
			this->text_v2->Multiline = true;
			this->text_v2->Name = L"text_v2";
			this->text_v2->Size = System::Drawing::Size(42, 33);
			this->text_v2->TabIndex = 1;
			// 
			// wektor_v
			// 
			this->wektor_v->AutoSize = true;
			this->wektor_v->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->wektor_v->Location = System::Drawing::Point(65, 38);
			this->wektor_v->Name = L"wektor_v";
			this->wektor_v->Size = System::Drawing::Size(58, 25);
			this->wektor_v->TabIndex = 6;
			this->wektor_v->Text = L"v = [";
			// 
			// wektor_w
			// 
			this->wektor_w->AutoSize = true;
			this->wektor_w->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->wektor_w->Location = System::Drawing::Point(61, 98);
			this->wektor_w->Name = L"wektor_w";
			this->wektor_w->Size = System::Drawing::Size(62, 25);
			this->wektor_w->TabIndex = 7;
			this->wektor_w->Text = L"w = [";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(175, 43);
			this->label3->Margin = System::Windows::Forms::Padding(0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(19, 25);
			this->label3->TabIndex = 8;
			this->label3->Text = L",";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(307, 38);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(19, 25);
			this->label4->TabIndex = 9;
			this->label4->Text = L"]";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(307, 98);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(19, 25);
			this->label5->TabIndex = 10;
			this->label5->Text = L"]";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(238, 43);
			this->label1->Margin = System::Windows::Forms::Padding(0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(19, 25);
			this->label1->TabIndex = 12;
			this->label1->Text = L",";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(175, 103);
			this->label2->Margin = System::Windows::Forms::Padding(0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(19, 25);
			this->label2->TabIndex = 13;
			this->label2->Text = L",";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(237, 103);
			this->label7->Margin = System::Windows::Forms::Padding(0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(19, 25);
			this->label7->TabIndex = 14;
			this->label7->Text = L",";
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lbl1->Location = System::Drawing::Point(24, 206);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(94, 25);
			this->lbl1->TabIndex = 15;
			this->lbl1->Text = L"v × w = ";
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lbl2->Location = System::Drawing::Point(28, 285);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(90, 25);
			this->lbl2->TabIndex = 16;
			this->lbl2->Text = L"v * w = ";
			// 
			// Oblicz_btn
			// 
			this->Oblicz_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Oblicz_btn->Location = System::Drawing::Point(159, 148);
			this->Oblicz_btn->Name = L"Oblicz_btn";
			this->Oblicz_btn->Size = System::Drawing::Size(100, 34);
			this->Oblicz_btn->TabIndex = 6;
			this->Oblicz_btn->Text = L"Oblicz";
			this->Oblicz_btn->UseVisualStyleBackColor = true;
			this->Oblicz_btn->Click += gcnew System::EventHandler(this, &OknoWektory::Oblicz_btn_Click);
			// 
			// Ilocz_wekt
			// 
			this->Ilocz_wekt->AutoSize = true;
			this->Ilocz_wekt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Ilocz_wekt->Location = System::Drawing::Point(105, 206);
			this->Ilocz_wekt->Name = L"Ilocz_wekt";
			this->Ilocz_wekt->Size = System::Drawing::Size(0, 25);
			this->Ilocz_wekt->TabIndex = 18;
			// 
			// Ilocz_skal
			// 
			this->Ilocz_skal->AutoSize = true;
			this->Ilocz_skal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Ilocz_skal->Location = System::Drawing::Point(106, 285);
			this->Ilocz_skal->Name = L"Ilocz_skal";
			this->Ilocz_skal->Size = System::Drawing::Size(0, 25);
			this->Ilocz_skal->TabIndex = 19;
			// 
			// lbl6
			// 
			this->lbl6->AutoSize = true;
			this->lbl6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lbl6->Location = System::Drawing::Point(12, 245);
			this->lbl6->Name = L"lbl6";
			this->lbl6->Size = System::Drawing::Size(106, 25);
			this->lbl6->TabIndex = 20;
			this->lbl6->Text = L"|v × w| = ";
			// 
			// dl_wekt
			// 
			this->dl_wekt->AutoSize = true;
			this->dl_wekt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->dl_wekt->Location = System::Drawing::Point(106, 245);
			this->dl_wekt->Name = L"dl_wekt";
			this->dl_wekt->Size = System::Drawing::Size(0, 25);
			this->dl_wekt->TabIndex = 21;
			// 
			// reset_btn
			// 
			this->reset_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->reset_btn->Location = System::Drawing::Point(159, 327);
			this->reset_btn->Name = L"reset_btn";
			this->reset_btn->Size = System::Drawing::Size(100, 34);
			this->reset_btn->TabIndex = 22;
			this->reset_btn->Text = L"Reset";
			this->reset_btn->UseVisualStyleBackColor = true;
			this->reset_btn->Click += gcnew System::EventHandler(this, &OknoWektory::reset_btn_Click);
			// 
			// OknoWektory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(419, 395);
			this->Controls->Add(this->reset_btn);
			this->Controls->Add(this->dl_wekt);
			this->Controls->Add(this->lbl6);
			this->Controls->Add(this->Ilocz_skal);
			this->Controls->Add(this->Ilocz_wekt);
			this->Controls->Add(this->Oblicz_btn);
			this->Controls->Add(this->lbl2);
			this->Controls->Add(this->lbl1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->wektor_w);
			this->Controls->Add(this->wektor_v);
			this->Controls->Add(this->text_v2);
			this->Controls->Add(this->text_v3);
			this->Controls->Add(this->text_w1);
			this->Controls->Add(this->text_w2);
			this->Controls->Add(this->text_w3);
			this->Controls->Add(this->text_v1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"OknoWektory";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Iloczyny wektorów";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void writeToAllTB(String^ text) {
		// Ustawienie zmiennej text jako tekstu w kazdym wyniku.
		Ilocz_wekt->Text = (text);
		dl_wekt->Text = (text);
		Ilocz_skal->Text = (text);
	}
	
	private: System::Void Oblicz_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		double v1, v2, v3, w1, w2, w3, u1, u2, u3;
		//Zabaezpieczenie przed wpisaniem liter.
		if (!Double::TryParse(text_v1->Text, v1)) {
			writeToAllTB("error");
			return;
		}
		else if (!Double::TryParse(text_v2->Text, v2)) {
			writeToAllTB("error");
			return;
		}
		else if (!Double::TryParse(text_v3->Text, v3)) {
			writeToAllTB("error");
			return;
		}
		else if (!Double::TryParse(text_w1->Text, w1)) {
			writeToAllTB("error");
			return;
		}
		else if (!Double::TryParse(text_w2->Text, w2)) {
			writeToAllTB("error");
			return;
		}
		else if (!Double::TryParse(text_w3->Text, w3)) {
			writeToAllTB("error");
			return;
		}

		u1 = v2 * w3 - v3 * w2;
		u2 = v1 * w3 - v3 * w1;
		u3 = v1 * w2 - v2 * w1;

		//Zabezpieczenie przed zbyt d³ugimi wynikami.
		if (System::Convert::ToString(u1)->Length > 4) {
			writeToAllTB("error");
			return;
		}
		if (System::Convert::ToString(u2)->Length > 4) {
			writeToAllTB("error");
			return;
		}
		if (System::Convert::ToString(u3)->Length > 4) {
			writeToAllTB("error");
			return;
		}
		

		Ilocz_wekt->Text = "[" + String::Format("{0:0.00}", u1) + "; " + String::Format("{0:0.00}", u2) + "; " + String::Format("{0:0.00}", u3) + "]";
		dl_wekt->Text = String::Format("{0:0.00}", sqrt(u1 * u1 + u2 * u2 + u3 * u3));
		Ilocz_skal->Text = String::Format("{0:0.00}", v1 * w1 + v2 * w2 + v3 * w3);
	}
	//Przycisk Reset - wyczyszczenie komórek.
	private: System::Void reset_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		text_v1->Clear();
		text_v2->Clear();
		text_v3->Clear();
		text_w1->Clear();
		text_w2->Clear();
		text_w3->Clear();
		dl_wekt->Text = "";
		Ilocz_wekt->Text = "";
		Ilocz_skal->Text = "";
	}
};
}
