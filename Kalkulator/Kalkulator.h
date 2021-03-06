#pragma once
// Pliki potrzebne do działania.
#include "OknoWalut.h"
#include "OknoWektory.h"
#include "O_programie.h"
#include "Objasnienia.h"
#include "Jednostki.h"
// Do korzystania ze stałych matematycznych.
#define _USE_MATH_DEFINES
#include <cmath>

namespace Kalkulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Kalkulator
	/// </summary>
	public ref class Kalkulator : public System::Windows::Forms::Form
	{
	public:
		// Definicja konstruktora.
		Kalkulator(void)
		{
			InitializeComponent();
		}

	protected:
		// Definicja destruktora.
		~Kalkulator()
		{
			// Jeśli są jakiekolwiek komponenty, to są one usuwane.
			if (components)
			{
				delete components;
			}
		}
	// menuStrip1 i jego zawartość.
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	// plik i przyciski pod plik.
	private: System::Windows::Forms::ToolStripMenuItem^ plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ historiaToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ wyjścieToolStripMenuItem;
	// widok i przyciski pod widok.
	private: System::Windows::Forms::ToolStripMenuItem^ widokToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ standardowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ naukowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ walutowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zamianaJednostekToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ iloczynyWektorówToolStripMenuItem1;
	// pomoc i przyciski pod pomoc.
	private: System::Windows::Forms::ToolStripMenuItem^ pomocToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ objaśnieniaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ oProgramieToolStripMenuItem;
	// Przyciski i pola w głównym oknie.
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ showOperator;
	private: System::Windows::Forms::Button^ btnBackspace;
	private: System::Windows::Forms::Button^ btnAC;
	private: System::Windows::Forms::Button^ btnC;
	private: System::Windows::Forms::Button^ btnDivide;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btnMultiply;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btnSubstract;
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnSigned;
	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::Button^ btnComma;
	private: System::Windows::Forms::Button^ btnEquals;
	private: System::Windows::Forms::ListBox^ historiaBox;
	// Przyciski i pola pojawiające się po wybraniu trybu naukowego.
	private: System::Windows::Forms::Button^ btnPi;
	private: System::Windows::Forms::Button^ btnE;
	private: System::Windows::Forms::Button^ btnSqrt;
	private: System::Windows::Forms::Button^ btnSquared;
	private: System::Windows::Forms::Button^ btnLog;
	private: System::Windows::Forms::Button^ btnAbs;
	private: System::Windows::Forms::Button^ btnSin;
	private: System::Windows::Forms::Button^ btnDec;
	private: System::Windows::Forms::Button^ btnCubed;
	private: System::Windows::Forms::Button^ btnCos;
	private: System::Windows::Forms::Button^ btnBin;
	private: System::Windows::Forms::Button^ btnInverse;
	private: System::Windows::Forms::Button^ btnExp;
	private: System::Windows::Forms::Button^ btnTg;
	private: System::Windows::Forms::Button^ btnHex;
	private: System::Windows::Forms::Button^ btnPercent;
	private: System::Windows::Forms::Button^ btnFact;
	private: System::Windows::Forms::Button^ btnMod;
	private: System::Windows::Forms::Button^ btnOct;
	private: System::Windows::Forms::Button^ btnPerMille;
	private: System::Windows::Forms::ToolStripMenuItem^ przypnijToolStripMenuItem;

	private:
		// Wymagany element dla Designera.
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		// Wymagana metoda dla Designera - nie modyfikować z poziomu edytora kodu.
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Kalkulator::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->przypnijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->historiaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wyjścieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->widokToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->standardowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->naukowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->walutowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zamianaJednostekToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->iloczynyWektorówToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pomocToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->objaśnieniaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oProgramieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btnBackspace = (gcnew System::Windows::Forms::Button());
			this->btnAC = (gcnew System::Windows::Forms::Button());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->btnDivide = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btnMultiply = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btnSubstract = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnSigned = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnComma = (gcnew System::Windows::Forms::Button());
			this->btnEquals = (gcnew System::Windows::Forms::Button());
			this->btnPi = (gcnew System::Windows::Forms::Button());
			this->btnE = (gcnew System::Windows::Forms::Button());
			this->btnSqrt = (gcnew System::Windows::Forms::Button());
			this->btnSquared = (gcnew System::Windows::Forms::Button());
			this->btnLog = (gcnew System::Windows::Forms::Button());
			this->btnSin = (gcnew System::Windows::Forms::Button());
			this->btnDec = (gcnew System::Windows::Forms::Button());
			this->btnCubed = (gcnew System::Windows::Forms::Button());
			this->btnAbs = (gcnew System::Windows::Forms::Button());
			this->btnCos = (gcnew System::Windows::Forms::Button());
			this->btnBin = (gcnew System::Windows::Forms::Button());
			this->btnInverse = (gcnew System::Windows::Forms::Button());
			this->btnExp = (gcnew System::Windows::Forms::Button());
			this->btnTg = (gcnew System::Windows::Forms::Button());
			this->btnHex = (gcnew System::Windows::Forms::Button());
			this->btnPercent = (gcnew System::Windows::Forms::Button());
			this->btnFact = (gcnew System::Windows::Forms::Button());
			this->btnMod = (gcnew System::Windows::Forms::Button());
			this->btnOct = (gcnew System::Windows::Forms::Button());
			this->btnPerMille = (gcnew System::Windows::Forms::Button());
			this->showOperator = (gcnew System::Windows::Forms::Label());
			this->historiaBox = (gcnew System::Windows::Forms::ListBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->plikToolStripMenuItem,
					this->widokToolStripMenuItem, this->pomocToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(614, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->przypnijToolStripMenuItem,
					this->historiaToolStripMenuItem, this->wyjścieToolStripMenuItem
			});
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(44, 24);
			this->plikToolStripMenuItem->Text = L"Plik";
			this->plikToolStripMenuItem->Click += gcnew System::EventHandler(this, &Kalkulator::plikToolStripMenuItem_Click);
			// 
			// przypnijToolStripMenuItem
			// 
			this->przypnijToolStripMenuItem->Name = L"przypnijToolStripMenuItem";
			this->przypnijToolStripMenuItem->Size = System::Drawing::Size(180, 24);
			this->przypnijToolStripMenuItem->Text = L"Przypnij";
			this->przypnijToolStripMenuItem->Click += gcnew System::EventHandler(this, &Kalkulator::przypnijToolStripMenuItem_Click);
			// 
			// historiaToolStripMenuItem
			// 
			this->historiaToolStripMenuItem->Name = L"historiaToolStripMenuItem";
			this->historiaToolStripMenuItem->Size = System::Drawing::Size(180, 24);
			this->historiaToolStripMenuItem->Text = L"Historia";
			this->historiaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Kalkulator::historiaToolStripMenuItem_Click);
			// 
			// wyjścieToolStripMenuItem
			// 
			this->wyjścieToolStripMenuItem->Name = L"wyjścieToolStripMenuItem";
			this->wyjścieToolStripMenuItem->Size = System::Drawing::Size(180, 24);
			this->wyjścieToolStripMenuItem->Text = L"Zamknij";
			this->wyjścieToolStripMenuItem->Click += gcnew System::EventHandler(this, &Kalkulator::wyjścieToolStripMenuItem_Click);
			// 
			// widokToolStripMenuItem
			// 
			this->widokToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->standardowyToolStripMenuItem,
					this->naukowyToolStripMenuItem, this->walutowyToolStripMenuItem, this->zamianaJednostekToolStripMenuItem, this->iloczynyWektorówToolStripMenuItem1
			});
			this->widokToolStripMenuItem->Name = L"widokToolStripMenuItem";
			this->widokToolStripMenuItem->Size = System::Drawing::Size(64, 24);
			this->widokToolStripMenuItem->Text = L"Widok";
			// 
			// standardowyToolStripMenuItem
			// 
			this->standardowyToolStripMenuItem->Name = L"standardowyToolStripMenuItem";
			this->standardowyToolStripMenuItem->Size = System::Drawing::Size(204, 24);
			this->standardowyToolStripMenuItem->Text = L"Standardowy";
			this->standardowyToolStripMenuItem->Click += gcnew System::EventHandler(this, &Kalkulator::standardowyToolStripMenuItem_Click);
			// 
			// naukowyToolStripMenuItem
			// 
			this->naukowyToolStripMenuItem->Name = L"naukowyToolStripMenuItem";
			this->naukowyToolStripMenuItem->Size = System::Drawing::Size(204, 24);
			this->naukowyToolStripMenuItem->Text = L"Naukowy";
			this->naukowyToolStripMenuItem->Click += gcnew System::EventHandler(this, &Kalkulator::naukowyToolStripMenuItem_Click);
			// 
			// walutowyToolStripMenuItem
			// 
			this->walutowyToolStripMenuItem->Name = L"walutowyToolStripMenuItem";
			this->walutowyToolStripMenuItem->Size = System::Drawing::Size(204, 24);
			this->walutowyToolStripMenuItem->Text = L"Walutowy";
			this->walutowyToolStripMenuItem->Click += gcnew System::EventHandler(this, &Kalkulator::walutowyToolStripMenuItem_Click);
			// 
			// zamianaJednostekToolStripMenuItem
			// 
			this->zamianaJednostekToolStripMenuItem->Name = L"zamianaJednostekToolStripMenuItem";
			this->zamianaJednostekToolStripMenuItem->Size = System::Drawing::Size(204, 24);
			this->zamianaJednostekToolStripMenuItem->Text = L"Zamiana jednostek";
			this->zamianaJednostekToolStripMenuItem->Click += gcnew System::EventHandler(this, &Kalkulator::zamianaJednostekToolStripMenuItem_Click);
			// 
			// iloczynyWektorówToolStripMenuItem1
			// 
			this->iloczynyWektorówToolStripMenuItem1->Name = L"iloczynyWektorówToolStripMenuItem1";
			this->iloczynyWektorówToolStripMenuItem1->Size = System::Drawing::Size(204, 24);
			this->iloczynyWektorówToolStripMenuItem1->Text = L"Iloczyny wektorów";
			this->iloczynyWektorówToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Kalkulator::iloczynyWektorówToolStripMenuItem1_Click);
			// 
			// pomocToolStripMenuItem
			// 
			this->pomocToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->objaśnieniaToolStripMenuItem,
					this->oProgramieToolStripMenuItem
			});
			this->pomocToolStripMenuItem->Name = L"pomocToolStripMenuItem";
			this->pomocToolStripMenuItem->Size = System::Drawing::Size(66, 24);
			this->pomocToolStripMenuItem->Text = L"Pomoc";
			// 
			// objaśnieniaToolStripMenuItem
			// 
			this->objaśnieniaToolStripMenuItem->Name = L"objaśnieniaToolStripMenuItem";
			this->objaśnieniaToolStripMenuItem->Size = System::Drawing::Size(163, 24);
			this->objaśnieniaToolStripMenuItem->Text = L"Objaśnienia";
			this->objaśnieniaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Kalkulator::objaśnieniaToolStripMenuItem_Click);
			// 
			// oProgramieToolStripMenuItem
			// 
			this->oProgramieToolStripMenuItem->Name = L"oProgramieToolStripMenuItem";
			this->oProgramieToolStripMenuItem->Size = System::Drawing::Size(163, 24);
			this->oProgramieToolStripMenuItem->Text = L"O programie";
			this->oProgramieToolStripMenuItem->Click += gcnew System::EventHandler(this, &Kalkulator::oProgramieToolStripMenuItem_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Black;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(12, 46);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(277, 37);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnBackspace
			// 
			this->btnBackspace->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(190)));
			this->btnBackspace->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnBackspace->FlatAppearance->BorderSize = 0;
			this->btnBackspace->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBackspace->Font = (gcnew System::Drawing::Font(L"Wingdings", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->btnBackspace->ForeColor = System::Drawing::Color::Black;
			this->btnBackspace->Location = System::Drawing::Point(12, 92);
			this->btnBackspace->Name = L"btnBackspace";
			this->btnBackspace->Size = System::Drawing::Size(70, 70);
			this->btnBackspace->TabIndex = 7;
			this->btnBackspace->Text = L"";
			this->btnBackspace->UseVisualStyleBackColor = false;
			this->btnBackspace->Click += gcnew System::EventHandler(this, &Kalkulator::btnBackspace_Click);
			// 
			// btnAC
			// 
			this->btnAC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(190)));
			this->btnAC->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnAC->FlatAppearance->BorderSize = 0;
			this->btnAC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnAC->ForeColor = System::Drawing::Color::Black;
			this->btnAC->Location = System::Drawing::Point(83, 92);
			this->btnAC->Name = L"btnAC";
			this->btnAC->Size = System::Drawing::Size(70, 70);
			this->btnAC->TabIndex = 2;
			this->btnAC->Text = L"AC";
			this->btnAC->UseVisualStyleBackColor = false;
			this->btnAC->Click += gcnew System::EventHandler(this, &Kalkulator::btnAC_Click);
			// 
			// btnC
			// 
			this->btnC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(190)));
			this->btnC->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnC->FlatAppearance->BorderSize = 0;
			this->btnC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnC->ForeColor = System::Drawing::Color::Black;
			this->btnC->Location = System::Drawing::Point(154, 92);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(70, 70);
			this->btnC->TabIndex = 4;
			this->btnC->Text = L"C";
			this->btnC->UseVisualStyleBackColor = false;
			this->btnC->Click += gcnew System::EventHandler(this, &Kalkulator::btnC_Click);
			// 
			// btnDivide
			// 
			this->btnDivide->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->btnDivide->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDivide->FlatAppearance->BorderSize = 0;
			this->btnDivide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDivide->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnDivide->ForeColor = System::Drawing::Color::White;
			this->btnDivide->Location = System::Drawing::Point(225, 92);
			this->btnDivide->Name = L"btnDivide";
			this->btnDivide->Size = System::Drawing::Size(70, 70);
			this->btnDivide->TabIndex = 42;
			this->btnDivide->Text = L"÷";
			this->btnDivide->UseVisualStyleBackColor = false;
			this->btnDivide->Click += gcnew System::EventHandler(this, &Kalkulator::Aritm_Operators);
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->btn7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn7->FlatAppearance->BorderSize = 0;
			this->btn7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn7->ForeColor = System::Drawing::Color::White;
			this->btn7->Location = System::Drawing::Point(12, 163);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(70, 70);
			this->btn7->TabIndex = 75;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &Kalkulator::button_Click);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->btn8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn8->FlatAppearance->BorderSize = 0;
			this->btn8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn8->ForeColor = System::Drawing::Color::White;
			this->btn8->Location = System::Drawing::Point(83, 163);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(70, 70);
			this->btn8->TabIndex = 43;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &Kalkulator::button_Click);
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->btn9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn9->FlatAppearance->BorderSize = 0;
			this->btn9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn9->ForeColor = System::Drawing::Color::White;
			this->btn9->Location = System::Drawing::Point(154, 163);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(70, 70);
			this->btn9->TabIndex = 44;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &Kalkulator::button_Click);
			// 
			// btnMultiply
			// 
			this->btnMultiply->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->btnMultiply->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnMultiply->FlatAppearance->BorderSize = 0;
			this->btnMultiply->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMultiply->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnMultiply->ForeColor = System::Drawing::Color::White;
			this->btnMultiply->Location = System::Drawing::Point(225, 163);
			this->btnMultiply->Name = L"btnMultiply";
			this->btnMultiply->Size = System::Drawing::Size(70, 70);
			this->btnMultiply->TabIndex = 46;
			this->btnMultiply->Text = L"×";
			this->btnMultiply->UseVisualStyleBackColor = false;
			this->btnMultiply->Click += gcnew System::EventHandler(this, &Kalkulator::Aritm_Operators);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->btn4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn4->FlatAppearance->BorderSize = 0;
			this->btn4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn4->ForeColor = System::Drawing::Color::White;
			this->btn4->Location = System::Drawing::Point(12, 234);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(70, 70);
			this->btn4->TabIndex = 76;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &Kalkulator::button_Click);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->btn5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn5->FlatAppearance->BorderSize = 0;
			this->btn5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn5->ForeColor = System::Drawing::Color::White;
			this->btn5->Location = System::Drawing::Point(83, 234);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(70, 70);
			this->btn5->TabIndex = 47;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &Kalkulator::button_Click);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->btn6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn6->FlatAppearance->BorderSize = 0;
			this->btn6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn6->ForeColor = System::Drawing::Color::White;
			this->btn6->Location = System::Drawing::Point(154, 234);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(70, 70);
			this->btn6->TabIndex = 48;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &Kalkulator::button_Click);
			// 
			// btnSubstract
			// 
			this->btnSubstract->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->btnSubstract->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSubstract->FlatAppearance->BorderSize = 0;
			this->btnSubstract->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSubstract->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnSubstract->ForeColor = System::Drawing::Color::White;
			this->btnSubstract->Location = System::Drawing::Point(225, 234);
			this->btnSubstract->Name = L"btnSubstract";
			this->btnSubstract->Size = System::Drawing::Size(70, 70);
			this->btnSubstract->TabIndex = 54;
			this->btnSubstract->Text = L"-";
			this->btnSubstract->UseVisualStyleBackColor = false;
			this->btnSubstract->Click += gcnew System::EventHandler(this, &Kalkulator::Aritm_Operators);
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->btn1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn1->FlatAppearance->BorderSize = 0;
			this->btn1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn1->ForeColor = System::Drawing::Color::White;
			this->btn1->Location = System::Drawing::Point(12, 305);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(70, 70);
			this->btn1->TabIndex = 81;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &Kalkulator::button_Click);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->btn2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn2->FlatAppearance->BorderSize = 0;
			this->btn2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn2->ForeColor = System::Drawing::Color::White;
			this->btn2->Location = System::Drawing::Point(83, 305);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(70, 70);
			this->btn2->TabIndex = 51;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &Kalkulator::button_Click);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->btn3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn3->FlatAppearance->BorderSize = 0;
			this->btn3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn3->ForeColor = System::Drawing::Color::White;
			this->btn3->Location = System::Drawing::Point(154, 305);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(70, 70);
			this->btn3->TabIndex = 52;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &Kalkulator::button_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->btnAdd->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnAdd->FlatAppearance->BorderSize = 0;
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnAdd->ForeColor = System::Drawing::Color::White;
			this->btnAdd->Location = System::Drawing::Point(225, 305);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(70, 70);
			this->btnAdd->TabIndex = 50;
			this->btnAdd->Text = L"+";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &Kalkulator::Aritm_Operators);
			// 
			// btnSigned
			// 
			this->btnSigned->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->btnSigned->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSigned->FlatAppearance->BorderSize = 0;
			this->btnSigned->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSigned->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnSigned->ForeColor = System::Drawing::Color::White;
			this->btnSigned->Location = System::Drawing::Point(12, 376);
			this->btnSigned->Name = L"btnSigned";
			this->btnSigned->Size = System::Drawing::Size(70, 70);
			this->btnSigned->TabIndex = 5;
			this->btnSigned->Text = L"+/-";
			this->btnSigned->UseVisualStyleBackColor = false;
			this->btnSigned->Click += gcnew System::EventHandler(this, &Kalkulator::btnSigned_Click);
			// 
			// btn0
			// 
			this->btn0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->btn0->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn0->FlatAppearance->BorderSize = 0;
			this->btn0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn0->ForeColor = System::Drawing::Color::White;
			this->btn0->Location = System::Drawing::Point(83, 376);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(70, 70);
			this->btn0->TabIndex = 82;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = false;
			this->btn0->Click += gcnew System::EventHandler(this, &Kalkulator::button_Click);
			// 
			// btnComma
			// 
			this->btnComma->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->btnComma->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnComma->FlatAppearance->BorderSize = 0;
			this->btnComma->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnComma->Font = (gcnew System::Drawing::Font(L"Calibri", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnComma->ForeColor = System::Drawing::Color::White;
			this->btnComma->Location = System::Drawing::Point(154, 376);
			this->btnComma->Name = L"btnComma";
			this->btnComma->Size = System::Drawing::Size(70, 70);
			this->btnComma->TabIndex = 83;
			this->btnComma->Text = L",";
			this->btnComma->UseVisualStyleBackColor = false;
			this->btnComma->Click += gcnew System::EventHandler(this, &Kalkulator::btnComma_Click);
			// 
			// btnEquals
			// 
			this->btnEquals->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->btnEquals->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEquals->FlatAppearance->BorderSize = 0;
			this->btnEquals->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEquals->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnEquals->ForeColor = System::Drawing::Color::White;
			this->btnEquals->Location = System::Drawing::Point(225, 376);
			this->btnEquals->Name = L"btnEquals";
			this->btnEquals->Size = System::Drawing::Size(70, 70);
			this->btnEquals->TabIndex = 84;
			this->btnEquals->Text = L"=";
			this->btnEquals->UseVisualStyleBackColor = false;
			this->btnEquals->Click += gcnew System::EventHandler(this, &Kalkulator::btnEquals_Click);
			// 
			// btnPi
			// 
			this->btnPi->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->btnPi->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnPi->FlatAppearance->BorderSize = 0;
			this->btnPi->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPi->Font = (gcnew System::Drawing::Font(L"Cambria", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnPi->ForeColor = System::Drawing::Color::White;
			this->btnPi->Location = System::Drawing::Point(320, 92);
			this->btnPi->Name = L"btnPi";
			this->btnPi->Size = System::Drawing::Size(70, 70);
			this->btnPi->TabIndex = 88;
			this->btnPi->Text = L"π";
			this->btnPi->UseVisualStyleBackColor = false;
			this->btnPi->Click += gcnew System::EventHandler(this, &Kalkulator::btnPi_Click);
			// 
			// btnE
			// 
			this->btnE->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->btnE->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnE->FlatAppearance->BorderSize = 0;
			this->btnE->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnE->Font = (gcnew System::Drawing::Font(L"Cambria", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnE->ForeColor = System::Drawing::Color::White;
			this->btnE->Location = System::Drawing::Point(391, 92);
			this->btnE->Name = L"btnE";
			this->btnE->Size = System::Drawing::Size(70, 70);
			this->btnE->TabIndex = 100;
			this->btnE->Text = L"e";
			this->btnE->UseVisualStyleBackColor = false;
			this->btnE->Click += gcnew System::EventHandler(this, &Kalkulator::btnE_Click);
			// 
			// btnSqrt
			// 
			this->btnSqrt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->btnSqrt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSqrt->FlatAppearance->BorderSize = 0;
			this->btnSqrt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSqrt->Font = (gcnew System::Drawing::Font(L"Cambria", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnSqrt->ForeColor = System::Drawing::Color::White;
			this->btnSqrt->Location = System::Drawing::Point(462, 92);
			this->btnSqrt->Name = L"btnSqrt";
			this->btnSqrt->Size = System::Drawing::Size(70, 70);
			this->btnSqrt->TabIndex = 86;
			this->btnSqrt->Text = L"√";
			this->btnSqrt->UseVisualStyleBackColor = false;
			this->btnSqrt->Click += gcnew System::EventHandler(this, &Kalkulator::btnSqrt_Click);
			// 
			// btnSquared
			// 
			this->btnSquared->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->btnSquared->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSquared->FlatAppearance->BorderSize = 0;
			this->btnSquared->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSquared->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnSquared->ForeColor = System::Drawing::Color::White;
			this->btnSquared->Location = System::Drawing::Point(533, 92);
			this->btnSquared->Name = L"btnSquared";
			this->btnSquared->Size = System::Drawing::Size(70, 70);
			this->btnSquared->TabIndex = 110;
			this->btnSquared->Text = L"x²";
			this->btnSquared->UseVisualStyleBackColor = false;
			this->btnSquared->Click += gcnew System::EventHandler(this, &Kalkulator::btnSquared_Click);
			// 
			// btnLog
			// 
			this->btnLog->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->btnLog->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnLog->FlatAppearance->BorderSize = 0;
			this->btnLog->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLog->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnLog->ForeColor = System::Drawing::Color::White;
			this->btnLog->Location = System::Drawing::Point(320, 163);
			this->btnLog->Name = L"btnLog";
			this->btnLog->Size = System::Drawing::Size(70, 70);
			this->btnLog->TabIndex = 85;
			this->btnLog->Text = L"log";
			this->btnLog->UseVisualStyleBackColor = false;
			this->btnLog->Click += gcnew System::EventHandler(this, &Kalkulator::btnLog_Click);
			// 
			// btnSin
			// 
			this->btnSin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->btnSin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSin->FlatAppearance->BorderSize = 0;
			this->btnSin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnSin->ForeColor = System::Drawing::Color::White;
			this->btnSin->Location = System::Drawing::Point(391, 163);
			this->btnSin->Name = L"btnSin";
			this->btnSin->Size = System::Drawing::Size(70, 70);
			this->btnSin->TabIndex = 90;
			this->btnSin->Text = L"sin";
			this->btnSin->UseVisualStyleBackColor = false;
			this->btnSin->Click += gcnew System::EventHandler(this, &Kalkulator::btnSin_Click);
			// 
			// btnDec
			// 
			this->btnDec->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->btnDec->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDec->FlatAppearance->BorderSize = 0;
			this->btnDec->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnDec->ForeColor = System::Drawing::Color::White;
			this->btnDec->Location = System::Drawing::Point(462, 163);
			this->btnDec->Name = L"btnDec";
			this->btnDec->Size = System::Drawing::Size(70, 70);
			this->btnDec->TabIndex = 91;
			this->btnDec->Text = L"Dec";
			this->btnDec->UseVisualStyleBackColor = false;
			this->btnDec->Click += gcnew System::EventHandler(this, &Kalkulator::btnDec_Click);
			// 
			// btnCubed
			// 
			this->btnCubed->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->btnCubed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCubed->FlatAppearance->BorderSize = 0;
			this->btnCubed->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCubed->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnCubed->ForeColor = System::Drawing::Color::White;
			this->btnCubed->Location = System::Drawing::Point(533, 163);
			this->btnCubed->Name = L"btnCubed";
			this->btnCubed->Size = System::Drawing::Size(70, 70);
			this->btnCubed->TabIndex = 111;
			this->btnCubed->Text = L"x³";
			this->btnCubed->UseVisualStyleBackColor = false;
			this->btnCubed->Click += gcnew System::EventHandler(this, &Kalkulator::btnCubed_Click);
			// 
			// btnAbs
			// 
			this->btnAbs->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->btnAbs->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnAbs->FlatAppearance->BorderSize = 0;
			this->btnAbs->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAbs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnAbs->ForeColor = System::Drawing::Color::White;
			this->btnAbs->Location = System::Drawing::Point(320, 234);
			this->btnAbs->Name = L"btnAbs";
			this->btnAbs->Size = System::Drawing::Size(70, 70);
			this->btnAbs->TabIndex = 99;
			this->btnAbs->Text = L"|x|";
			this->btnAbs->UseVisualStyleBackColor = false;
			this->btnAbs->Click += gcnew System::EventHandler(this, &Kalkulator::btnAbs_Click);
			// 
			// btnCos
			// 
			this->btnCos->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->btnCos->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCos->FlatAppearance->BorderSize = 0;
			this->btnCos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnCos->ForeColor = System::Drawing::Color::White;
			this->btnCos->Location = System::Drawing::Point(391, 234);
			this->btnCos->Name = L"btnCos";
			this->btnCos->Size = System::Drawing::Size(70, 70);
			this->btnCos->TabIndex = 93;
			this->btnCos->Text = L"cos";
			this->btnCos->UseVisualStyleBackColor = false;
			this->btnCos->Click += gcnew System::EventHandler(this, &Kalkulator::btnCos_Click);
			// 
			// btnBin
			// 
			this->btnBin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->btnBin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnBin->FlatAppearance->BorderSize = 0;
			this->btnBin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnBin->ForeColor = System::Drawing::Color::White;
			this->btnBin->Location = System::Drawing::Point(462, 234);
			this->btnBin->Name = L"btnBin";
			this->btnBin->Size = System::Drawing::Size(70, 70);
			this->btnBin->TabIndex = 94;
			this->btnBin->Text = L"Bin";
			this->btnBin->UseVisualStyleBackColor = false;
			this->btnBin->Click += gcnew System::EventHandler(this, &Kalkulator::btnBin_Click);
			// 
			// btnInverse
			// 
			this->btnInverse->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->btnInverse->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnInverse->FlatAppearance->BorderSize = 0;
			this->btnInverse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnInverse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnInverse->ForeColor = System::Drawing::Color::White;
			this->btnInverse->Location = System::Drawing::Point(533, 234);
			this->btnInverse->Name = L"btnInverse";
			this->btnInverse->Size = System::Drawing::Size(70, 70);
			this->btnInverse->TabIndex = 108;
			this->btnInverse->Text = L"1/x";
			this->btnInverse->UseVisualStyleBackColor = false;
			this->btnInverse->Click += gcnew System::EventHandler(this, &Kalkulator::btnInverse_Click);
			// 
			// btnExp
			// 
			this->btnExp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->btnExp->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExp->FlatAppearance->BorderSize = 0;
			this->btnExp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnExp->ForeColor = System::Drawing::Color::White;
			this->btnExp->Location = System::Drawing::Point(320, 305);
			this->btnExp->Name = L"btnExp";
			this->btnExp->Size = System::Drawing::Size(70, 70);
			this->btnExp->TabIndex = 104;
			this->btnExp->Text = L"exp";
			this->btnExp->UseVisualStyleBackColor = false;
			this->btnExp->Click += gcnew System::EventHandler(this, &Kalkulator::btnExp_Click);
			// 
			// btnTg
			// 
			this->btnTg->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->btnTg->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnTg->FlatAppearance->BorderSize = 0;
			this->btnTg->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnTg->ForeColor = System::Drawing::Color::White;
			this->btnTg->Location = System::Drawing::Point(391, 305);
			this->btnTg->Name = L"btnTg";
			this->btnTg->Size = System::Drawing::Size(70, 70);
			this->btnTg->TabIndex = 96;
			this->btnTg->Text = L"tg";
			this->btnTg->UseVisualStyleBackColor = false;
			this->btnTg->Click += gcnew System::EventHandler(this, &Kalkulator::btnTg_Click);
			// 
			// btnHex
			// 
			this->btnHex->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->btnHex->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnHex->FlatAppearance->BorderSize = 0;
			this->btnHex->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnHex->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnHex->ForeColor = System::Drawing::Color::White;
			this->btnHex->Location = System::Drawing::Point(462, 376);
			this->btnHex->Name = L"btnHex";
			this->btnHex->Size = System::Drawing::Size(70, 70);
			this->btnHex->TabIndex = 97;
			this->btnHex->Text = L"Hex";
			this->btnHex->UseVisualStyleBackColor = false;
			this->btnHex->Click += gcnew System::EventHandler(this, &Kalkulator::btnHex_Click);
			// 
			// btnPercent
			// 
			this->btnPercent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->btnPercent->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnPercent->FlatAppearance->BorderSize = 0;
			this->btnPercent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPercent->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnPercent->ForeColor = System::Drawing::Color::White;
			this->btnPercent->Location = System::Drawing::Point(533, 305);
			this->btnPercent->Name = L"btnPercent";
			this->btnPercent->Size = System::Drawing::Size(70, 70);
			this->btnPercent->TabIndex = 107;
			this->btnPercent->Text = L"%";
			this->btnPercent->UseVisualStyleBackColor = false;
			this->btnPercent->Click += gcnew System::EventHandler(this, &Kalkulator::btnPercent_Click);
			// 
			// btnFact
			// 
			this->btnFact->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->btnFact->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnFact->FlatAppearance->BorderSize = 0;
			this->btnFact->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnFact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnFact->ForeColor = System::Drawing::Color::White;
			this->btnFact->Location = System::Drawing::Point(320, 376);
			this->btnFact->Name = L"btnFact";
			this->btnFact->Size = System::Drawing::Size(70, 70);
			this->btnFact->TabIndex = 106;
			this->btnFact->Text = L"n!";
			this->btnFact->UseVisualStyleBackColor = false;
			this->btnFact->Click += gcnew System::EventHandler(this, &Kalkulator::btnFact_Click);
			// 
			// btnMod
			// 
			this->btnMod->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->btnMod->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnMod->FlatAppearance->BorderSize = 0;
			this->btnMod->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMod->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnMod->ForeColor = System::Drawing::Color::White;
			this->btnMod->Location = System::Drawing::Point(391, 376);
			this->btnMod->Name = L"btnMod";
			this->btnMod->Size = System::Drawing::Size(70, 70);
			this->btnMod->TabIndex = 102;
			this->btnMod->Text = L"mod";
			this->btnMod->UseVisualStyleBackColor = false;
			this->btnMod->Click += gcnew System::EventHandler(this, &Kalkulator::Aritm_Operators);
			// 
			// btnOct
			// 
			this->btnOct->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->btnOct->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnOct->FlatAppearance->BorderSize = 0;
			this->btnOct->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnOct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnOct->ForeColor = System::Drawing::Color::White;
			this->btnOct->Location = System::Drawing::Point(462, 305);
			this->btnOct->Name = L"btnOct";
			this->btnOct->Size = System::Drawing::Size(70, 70);
			this->btnOct->TabIndex = 103;
			this->btnOct->Text = L"Oct";
			this->btnOct->UseVisualStyleBackColor = false;
			this->btnOct->Click += gcnew System::EventHandler(this, &Kalkulator::btnOct_Click);
			// 
			// btnPerMille
			// 
			this->btnPerMille->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->btnPerMille->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnPerMille->FlatAppearance->BorderSize = 0;
			this->btnPerMille->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPerMille->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnPerMille->ForeColor = System::Drawing::Color::White;
			this->btnPerMille->Location = System::Drawing::Point(533, 376);
			this->btnPerMille->Name = L"btnPerMille";
			this->btnPerMille->Size = System::Drawing::Size(70, 70);
			this->btnPerMille->TabIndex = 105;
			this->btnPerMille->Text = L"‰";
			this->btnPerMille->UseVisualStyleBackColor = false;
			this->btnPerMille->Click += gcnew System::EventHandler(this, &Kalkulator::btnPerMille_Click);
			// 
			// showOperator
			// 
			this->showOperator->AutoSize = true;
			this->showOperator->BackColor = System::Drawing::Color::Black;
			this->showOperator->ForeColor = System::Drawing::Color::White;
			this->showOperator->Location = System::Drawing::Point(11, 27);
			this->showOperator->Name = L"showOperator";
			this->showOperator->Size = System::Drawing::Size(0, 13);
			this->showOperator->TabIndex = 112;
			// 
			// historiaBox
			// 
			this->historiaBox->BackColor = System::Drawing::Color::Black;
			this->historiaBox->ForeColor = System::Drawing::Color::White;
			this->historiaBox->FormattingEnabled = true;
			this->historiaBox->Location = System::Drawing::Point(12, 459);
			this->historiaBox->Name = L"historiaBox";
			this->historiaBox->Size = System::Drawing::Size(277, 147);
			this->historiaBox->TabIndex = 113;
			// 
			// Kalkulator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(614, 618);
			this->Controls->Add(this->historiaBox);
			this->Controls->Add(this->showOperator);
			this->Controls->Add(this->btnCubed);
			this->Controls->Add(this->btnSquared);
			this->Controls->Add(this->btnInverse);
			this->Controls->Add(this->btnPercent);
			this->Controls->Add(this->btnFact);
			this->Controls->Add(this->btnPerMille);
			this->Controls->Add(this->btnExp);
			this->Controls->Add(this->btnOct);
			this->Controls->Add(this->btnMod);
			this->Controls->Add(this->btnE);
			this->Controls->Add(this->btnAbs);
			this->Controls->Add(this->btnHex);
			this->Controls->Add(this->btnTg);
			this->Controls->Add(this->btnBin);
			this->Controls->Add(this->btnCos);
			this->Controls->Add(this->btnDec);
			this->Controls->Add(this->btnSin);
			this->Controls->Add(this->btnSqrt);
			this->Controls->Add(this->btnPi);
			this->Controls->Add(this->btnLog);
			this->Controls->Add(this->btnEquals);
			this->Controls->Add(this->btnComma);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btnSubstract);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btnMultiply);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btnDivide);
			this->Controls->Add(this->btnSigned);
			this->Controls->Add(this->btnC);
			this->Controls->Add(this->btnBackspace);
			this->Controls->Add(this->btnAC);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"Kalkulator";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Kalkulator";
			this->Load += gcnew System::EventHandler(this, &Kalkulator::Kalkulator_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Zmienne 'globalne'.
		double firstVariable;
		double secondVariable;
		double result;
		double a;
		String^ Operator;

	// Ładowanie okienka Kalkulator z odpowiednimi parametrami.
	private: System::Void Kalkulator_Load(System::Object^ sender, System::EventArgs^ e) {
		// Ustawianie wymiarów okna.
		Kalkulator::Width = 323;
		Kalkulator::Height = 498;
	}
	// Działanie w przypadku wybrania trybu naukowego.
	private: System::Void naukowyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// Ustawianie szerokości okna.
		Kalkulator::Width = 631;
		// Ustawianie szerokości historii.
		historiaBox->Width = 590;
		// Ustawianie szerokości pola tesktowego.
		textBox1->Width = 590;
	}
		   // Działanie w przypadku wybrania trybu standardowego.
	private: System::Void standardowyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// Ustawianie szerokości okna.
		Kalkulator::Width = 323;
		// Ustawianie szerokości historii.
		historiaBox->Width = 283;
		// Ustawianie szerokości pola tesktowego.
		textBox1->Width = 283;
	}
	// Funkcja writeTotextBox - wpisuje podany tekst do textBox1.
	private: System::Void writeToTextBox1(String^ text) {
		// Ustawienie zmiennej text jako tekstu w textBox1.
		textBox1->Text = (text);
	}
	// Funkcja checkForInf - sprawdza, czy dana liczba jest nieskończonością.
	private: System::Boolean checkForInf(double b) {
		if (isinf(b) || isinf(-b)) {
			writeToTextBox1("error");
			return true;
		}
		return false;
	}
	// Funckja checkLength sprawdza, czy wynik nie jest zbyt długi i, jeśli jest, modyfikuje jego długość.
	private: System::Void checkLength(String^ temp) {
		int b = 14;
		if (Kalkulator::Width > 323) {
			b = 28;
		}
		if (temp->Length > b) {
			writeToTextBox1(temp->Substring(0, b));
		}
		else {
			writeToTextBox1(temp);
		}
	}
	// Działanie w przypadku kliknięcia w 'Plik' w strip menu.
	private: System::Void plikToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {}
	// Przycisk "Historia" - odpowiada za wyświetlanie lub ukrycie historii po kliknięciu.
	private: System::Void historiaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!historiaToolStripMenuItem->Checked) {
			historiaToolStripMenuItem->Checked = true;
			historiaBox->Visible = true;
			Kalkulator::Height = 669;
			if (Kalkulator::Width == 323) {
				historiaBox->Width = 283;
			}
			else {
				historiaBox->Width = 590;
			}
		}
		else {
			historiaBox->Visible = false;
			historiaToolStripMenuItem->Checked = false;
			Kalkulator::Height = 498;
		}
	}
	// Wyjście z aplikacji - zamknięcie wszystkich okien.
	private: System::Void wyjścieToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	// Backspace - usuwa ostatni znak z pola obszaru roboczego.
	private: System::Void btnBackspace_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length > 0) {
			writeToTextBox1(textBox1->Text->Remove(textBox1->Text->Length - 1, 1));
		}
	}
	// AC - czyści obszar roboczy, sprawdzając najpierw, czy zawiera jedynie 0,
	// ponadto czyści historię oraz zawartość etykiety "showOperator".
	private: System::Void btnAC_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text != "0") {
			textBox1->Clear();
		}
		writeToTextBox1("0");
		historiaBox->Items->Clear();
		showOperator->Text = "";
	}
	// C - czyści obszar roboczy, sprawdzając najpierw, czy zawiera jedynie 0
	// ponadto czyści zawartość etykiety "showOperator".
	private: System::Void btnC_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text != "0") {
			textBox1->Clear();
		}
		writeToTextBox1("0");
		showOperator->Text = "";
	}
	// e - stała, do 20 miejsc po przecinku.
	private: System::Void btnE_Click(System::Object^ sender, System::EventArgs^ e) {
		writeToTextBox1("2,71828182845904523536");
	}
	// pi - stała, do 20 miejsc po przecinku.
	private: System::Void btnPi_Click(System::Object^ sender, System::EventArgs^ e) {
		writeToTextBox1("3,14159265358979323846");
	}
	// Działanie w przypadku naciśnięcia przycisku 'numerycznego'.
	private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ Numbers = safe_cast<Button^>(sender);
		if (textBox1->Text == "0") {
			writeToTextBox1(Numbers->Text);
		}
		else if (textBox1->Text == "error") {
			writeToTextBox1(Numbers->Text);
		}
		else {
			writeToTextBox1(textBox1->Text + Numbers->Text);
		}
	}
	// , - dodawanie przecinka do liczb, aby wyświetlały się jako zmiennoprzecinkowe.
	private: System::Void btnComma_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!textBox1->Text->Contains(",")) {
			textBox1->Text += ",";
		}
	}
	// Aritm_Operators - odpowiada za wpisywanie liczb do obszaru roboczego.
	private: System::Void Aritm_Operators(System::Object^ sender, System::EventArgs^ e) {
		// safe_cast pozwala zmienić typ danego wyrażenia - w tym wypadku sender zostaje zmieniony na <Button^>.
		Button^ op = safe_cast<Button^>(sender);
		if (!Double::TryParse(textBox1->Text, firstVariable)) {
			writeToTextBox1("error");
			return;
		}
		writeToTextBox1("");
		Operator = op->Text;
		showOperator->Text = System::Convert::ToString(firstVariable) + " " + Operator;
	}
	// +/- - zmienia znak liczby.
	private: System::Void btnSigned_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "error") {
			return;
		}
		else if (textBox1->Text->Contains("-")) {
			writeToTextBox1(textBox1->Text->Remove(0, 1));
		}
		else {
			writeToTextBox1("-" + textBox1->Text);
		}
	}
	// log - logarytm naturalny danej liczby.
	private: System::Void btnLog_Click(System::Object^ sender, System::EventArgs^ e) {
		showOperator->Text = System::Convert::ToString("log " + "(" + (textBox1->Text) + ")");
		if (!Double::TryParse(textBox1->Text, a)) {
			writeToTextBox1("error");
			return;
		}
		if (a <= 0) {
			writeToTextBox1("error");
			return;
		}
		a = Math::Log(a);
		if (checkForInf(a)) {
			return;
		}
		historiaBox->Items->Add(showOperator->Text + " = " + a);
		checkLength(System::Convert::ToString(a));
	}
	// sqrt - pierwiastek kwadratowy danej liczby.
	private: System::Void btnSqrt_Click(System::Object^ sender, System::EventArgs^ e) {
		showOperator->Text = System::Convert::ToString("sqrt" + "(" + textBox1->Text + ")");
		if (!Double::TryParse(textBox1->Text, a)) {
			writeToTextBox1("error");
			return;
		}
		if (a < 0) {
			writeToTextBox1("error");
			return;
		}
		a = Math::Sqrt(a);
		if (checkForInf(a)) {
			return;
		}
		historiaBox->Items->Add(showOperator->Text + " = " + a);
		checkLength(System::Convert::ToString(a));
	}
	// sin - sinus danej liczby, jako argument przyjmuje stopnie.
	private: System::Void btnSin_Click(System::Object^ sender, System::EventArgs^ e) {
		showOperator->Text = System::Convert::ToString("sin" + "(" + textBox1->Text + ")");
		if (!Double::TryParse(textBox1->Text, a)) {
			writeToTextBox1("error");
			return;
		}
		a = Math::Sin(a * M_PI/180.);
		historiaBox->Items->Add(showOperator->Text + " = " + a);
		checkLength(System::Convert::ToString(a));
	}
	// cos - cosinus danej liczby, jako argument przyjmuje stopnie.
	private: System::Void btnCos_Click(System::Object^ sender, System::EventArgs^ e) {
		showOperator->Text = System::Convert::ToString("cos" + "(" + textBox1->Text + ")");
		if (!Double::TryParse(textBox1->Text, a)) {
			writeToTextBox1("error");
			return;
		}
		a = Math::Cos(a * M_PI / 180.);
		historiaBox->Items->Add(showOperator->Text + " = " + a);
		writeToTextBox1(System::Convert::ToString(a));
	}
	// tg - tangens danej liczby, jako argument przyjmuje stopnie.
	private: System::Void btnTg_Click(System::Object^ sender, System::EventArgs^ e) {
		showOperator->Text = System::Convert::ToString("tg" + "(" + textBox1->Text + ")");
		if (!Double::TryParse(textBox1->Text, a)) {
			writeToTextBox1("error");
			return;
		}
		a = Math::Tan(a * M_PI / 180.);
		if (checkForInf(a)) {
			return;
		}
		historiaBox->Items->Add(showOperator->Text + " = " + a);
		writeToTextBox1(System::Convert::ToString(a));
	}
	// Dec - konwertuje liczbę zapisaną w systemie 2 na system 10.
	private: System::Void btnDec_Click(System::Object^ sender, System::EventArgs^ e) {
		showOperator->Text = "bin " + a + " -> dec";
		int b;
		if (!int::TryParse(textBox1->Text, b)) {
			writeToTextBox1("error");
			return;
		}
		try {
			checkLength(System::Convert::ToString(System::Convert::ToInt32(textBox1->Text, 2)));
		}
		catch (...) {
			writeToTextBox1("error");
			return;
		}
		historiaBox->Items->Add("bin " + b + " = " + "dec " + textBox1->Text);
	}
	// Bin - konwertuje liczbę zapisaną w systemie 10 na system 2.
	private: System::Void btnBin_Click(System::Object^ sender, System::EventArgs^ e) {
		showOperator->Text = "dec " + a + " -> bin";
		int b;
		if (!int::TryParse(textBox1->Text, b)) {
			writeToTextBox1("error");
			return;
		}
		try {
			checkLength(System::Convert::ToString(b, 2));
		}
		catch (...) {
			writeToTextBox1("error");
			return;
		}
		historiaBox->Items->Add("dec " + b + " = " + "bin " + textBox1->Text);
	}
	// Oct - konwertuje liczbę zapisaną w systemie 10 na system 8.
	private: System::Void btnOct_Click(System::Object^ sender, System::EventArgs^ e) {
		showOperator->Text = "dec " + a + " -> oct";
		int b;
		if (!int::TryParse(textBox1->Text, b)) {
			writeToTextBox1("error");
			return;
		}
		try {
			checkLength(System::Convert::ToString(b, 8));
		}
		catch (...) {
			writeToTextBox1("error");
			return;
		}
		historiaBox->Items->Add("dec " + b + " = " + "oct " + textBox1->Text);
	}
	// Hex - konwertuje liczbę zapisaną w systemie 10 na system 16.
	private: System::Void btnHex_Click(System::Object^ sender, System::EventArgs^ e) {
		showOperator->Text = "dec " + a + " -> hex";
		int b;
		if (!int::TryParse(textBox1->Text, b)) {
			writeToTextBox1("error");
			return;
		}
		try {
			checkLength(System::Convert::ToString(b, 16));
		}
		catch (...) {
			writeToTextBox1("error");
			return;
		}
		historiaBox->Items->Add("dec " + b + " = " + "hex " + textBox1->Text);
	}
	// squared - zwraca kwadrat danej liczby.
	private: System::Void btnSquared_Click(System::Object^ sender, System::EventArgs^ e) {
		double b;
		showOperator->Text = System::Convert::ToString("(" + textBox1->Text + ")^2 = ");
		if (!Double::TryParse(textBox1->Text, b)) {
			writeToTextBox1("error");
			return;
		}
		if (a < 0) {
			writeToTextBox1("error");
			return;
		}
		a = Math::Pow(b, 2);
		if (checkForInf(a)) {
			return;
		}
		checkLength(System::Convert::ToString(a));
		historiaBox->Items->Add(showOperator->Text + a);
	}
	// cubed - zwraca sześcian danej liczby.
	private: System::Void btnCubed_Click(System::Object^ sender, System::EventArgs^ e) {
		double b;
		showOperator->Text = System::Convert::ToString("(" + textBox1->Text + ")^3 = ");
		if (!Double::TryParse(textBox1->Text, b)) {
			writeToTextBox1("error");
			return;
		}
		if (a < 0) {
			writeToTextBox1("error");
			return;
		}
		a = Math::Pow(b, 3);
		if (checkForInf(a)) {
			return;
		}
		checkLength(System::Convert::ToString(a));
		historiaBox->Items->Add(showOperator->Text + a);
	}
	// exp - zwraca wartość eksponanty danej liczby - e^x.
	private: System::Void btnExp_Click(System::Object^ sender, System::EventArgs^ e) {
		double b;
		showOperator->Text = System::Convert::ToString("exp" + "(" + textBox1->Text + ") = ");
		if (!Double::TryParse(textBox1->Text, b)) {
			writeToTextBox1("error");
			return;
		}
		if (a < 0) {
			writeToTextBox1("error");
			return;
		}
		a = Math::Exp(b);
		if (checkForInf(a)) {
			return;
		}
		checkLength(System::Convert::ToString(a));
		historiaBox->Items->Add(showOperator->Text + a);
	}
	// abs - zwraca wartość bezwzględną liczby.
	private: System::Void btnAbs_Click(System::Object^ sender, System::EventArgs^ e) {
		double b;
		showOperator->Text = System::Convert::ToString("|" + "" + textBox1->Text + "| = ");
		if (!Double::TryParse(textBox1->Text, b)) {
			writeToTextBox1("error");
			return;
		}
		if (a < 0) {
			writeToTextBox1("error");
			return;
		}
		a = Math::Abs(b);
		if (checkForInf(a)) {
			return;
		}
		checkLength(System::Convert::ToString(a));
		historiaBox->Items->Add(showOperator->Text + a);
	}
	// fact - zwraca silnię danej liczby naturalnej.
	// Konwertuje liczby zmiennoprzecinkowe na całkowite.
	private: System::Void btnFact_Click(System::Object^ sender, System::EventArgs^ e) {
		showOperator->Text = System::Convert::ToString(textBox1->Text + "! = ");
		int b, c = 1;
		try {
			b = Convert::ToInt32(Double::Parse(textBox1->Text));
			if (b < 0 || b > 12) {
				writeToTextBox1("error");
				return;
			}
			for (int i = 1; i <= b; i++)
				c *= i;
		}
		catch (...) {
			writeToTextBox1("error");
			return;
		}
		checkLength(System::Convert::ToString(c));
		historiaBox->Items->Add(showOperator->Text + c);
	}
	// permille - zwraca liczbę zamienioną na promil.
	private: System::Void btnPerMille_Click(System::Object^ sender, System::EventArgs^ e) {
		showOperator->Text = System::Convert::ToString(textBox1->Text + "‰ = ");
		if (!Double::TryParse(textBox1->Text, a)) {
			writeToTextBox1("error");
			return;
		}
		a /= 1000.0;
		checkLength(System::Convert::ToString(a));
		historiaBox->Items->Add(showOperator->Text + a);
	}
	// percent - zwraca liczbę zamienioną na procent.
	private: System::Void btnPercent_Click(System::Object^ sender, System::EventArgs^ e) {
		showOperator->Text = System::Convert::ToString(textBox1->Text + "% = ");
		if (!Double::TryParse(textBox1->Text, a)) {
			writeToTextBox1("error");
			return;
		}
		a /= 100.0;
		checkLength(System::Convert::ToString(a));
		historiaBox->Items->Add(showOperator->Text + a);
	}
	// 1/x - zwraca odwrotność liczby.
	private: System::Void btnInverse_Click(System::Object^ sender, System::EventArgs^ e) {
		showOperator->Text = System::Convert::ToString("1/" + textBox1->Text + " = ");

		if (!Double::TryParse(textBox1->Text, a)) {
			writeToTextBox1("error");
			return;
		}
		if (a == 0) {
			writeToTextBox1("error");
			return;
		}
		a = 1.0 / a;
		if (checkForInf(a)) {
			return;
		}
		checkLength(System::Convert::ToString(a));
		historiaBox->Items->Add(showOperator->Text + a);
	}
	// Deklaracja 'operatorów arytmetycznych' - opis działania w przypadku naciśnięcia przycisku "=".
	private: System::Void btnEquals_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "") {
			writeToTextBox1("error");
			return;
		}
		if (Operator == "+")
		{
			showOperator->Text += " " + textBox1->Text + " = ";
			if (!Double::TryParse(textBox1->Text, secondVariable)) {
				writeToTextBox1("error");
				return;
			}
			result = firstVariable + secondVariable;
			if (checkForInf(result)) {
				return;
			}
			checkLength(System::Convert::ToString(result));
			historiaBox->Items->Add(showOperator->Text + result);
			Operator = "";

		}
		else if (Operator == "-")
		{
			showOperator->Text += " " + textBox1->Text + " = ";
			if (!Double::TryParse(textBox1->Text, secondVariable)) {
				writeToTextBox1("error");
				return;
			}
			result = firstVariable - secondVariable;
			if (checkForInf(result)) {
				return;
			}
			checkLength(System::Convert::ToString(result));
			historiaBox->Items->Add(showOperator->Text + result);
			Operator = "";
		}
		else if (Operator == "×")
		{
			showOperator->Text += " " + textBox1->Text + " = ";
			if (!Double::TryParse(textBox1->Text, secondVariable)) {
				writeToTextBox1("error");
				return;
			}
			result = firstVariable * secondVariable;
			if (checkForInf(result)) {
				return;
			}
			checkLength(System::Convert::ToString(result));
			historiaBox->Items->Add(showOperator->Text + result);
			Operator = "";
		}
		else if (Operator == "÷")
		{
			showOperator->Text += " " + textBox1->Text + " = ";
			if (!Double::TryParse(textBox1->Text, secondVariable)) {
				writeToTextBox1("error");
				return;
			}
			if (secondVariable == 0) {
				writeToTextBox1("error");
				return;
			}
			result = firstVariable / secondVariable;
			if (checkForInf(result)) {
				return;
			}
			checkLength(System::Convert::ToString(result));
			historiaBox->Items->Add(showOperator->Text + result);
			Operator = "";
		}
		else if (Operator == "mod")
		{
			showOperator->Text += " " + textBox1->Text + " = ";
			if (!Double::TryParse(textBox1->Text, secondVariable)) {
				writeToTextBox1("error");
				return;
			}
			int first, second, res;
			try {
				first = Convert::ToInt32(firstVariable);
				second = Convert::ToInt32(secondVariable);
				res = first % second;
			}
			catch (...) {
				writeToTextBox1("error");
				return;
			}
			checkLength(System::Convert::ToString(res));
			historiaBox->Items->Add(first + " mod " + second + " = " + res);
			Operator = "";
		}
	}
// Działanie w przypadku wybrania trybu walutowego - otwarcie nowego okna.
private: System::Void walutowyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	OknoWalut^ Waluty = gcnew OknoWalut();
	Waluty->Show();
}
// Działanie w przypadku wybrania trybu iloczynu wektorow - otwarcie nowego okna.
private: System::Void iloczynyWektorówToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	OknoWektory^ Wektory = gcnew OknoWektory();
	Wektory->Show();
}
// Działanie w przypadku wybrania objaśnień - otwarcie nowego okna.
private: System::Void objaśnieniaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Objasnienia^ okno_objasnien = gcnew Objasnienia();
	okno_objasnien->Show();
}
// Działanie w przypadku wybrania 'O programie' - otwarcie nowego okna.
private: System::Void oProgramieToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	O_programie^ okno_o_prog = gcnew O_programie();
	okno_o_prog->Show();
}
// Działanie w przypadku wybrania trybu zamiany jednostek - otwarcie nowego okna.
private: System::Void zamianaJednostekToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Jednostki^ jednostki = gcnew Jednostki();
	jednostki->Show();
}
// Działanie w przypadku wybrania opcji "Przypnij" - przypięcie aplikacji na wierzch
// lub odpięcie jej.
private: System::Void przypnijToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!przypnijToolStripMenuItem->Checked) {
		Kalkulator::FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		TopMost = true;
		przypnijToolStripMenuItem->Checked = true;
	}
	else {
		Kalkulator::FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
		TopMost = false;
		przypnijToolStripMenuItem->Checked = false;
	}
}
};
}
