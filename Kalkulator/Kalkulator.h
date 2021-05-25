#pragma once

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
		Kalkulator(void)
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
		~Kalkulator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ plikToolStripMenuItem;





	private: System::Windows::Forms::ToolStripMenuItem^ historiaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ wyjścieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ edycjaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pomocToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ historiaToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ widokToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ standardowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ naukowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ walutowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ iloczynyWektorówToolStripMenuItem1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ btnAC;
	private: System::Windows::Forms::Button^ btnBackspace;
	private: System::Windows::Forms::Button^ btnSigned;




	private: System::Windows::Forms::Button^ btnC;



















	private: System::Windows::Forms::Button^ btnDivide;

	private: System::Windows::Forms::Button^ btnMultiply;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btnSubstract;

	private: System::Windows::Forms::Button^ btn3;

	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btnAdd;


	private: System::Windows::Forms::Button^ btn6;

	private: System::Windows::Forms::Button^ btn5;

















	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn4;





	private: System::Windows::Forms::Button^ btn1;
private: System::Windows::Forms::Button^ btn0;
private: System::Windows::Forms::Button^ btnDot;
private: System::Windows::Forms::Button^ btnEquals;
private: System::Windows::Forms::Button^ btnExp;
private: System::Windows::Forms::Button^ btnOct;


private: System::Windows::Forms::Button^ btnMod;



private: System::Windows::Forms::Button^ btnE;

private: System::Windows::Forms::Button^ btnAbs;
private: System::Windows::Forms::Button^ btnHex;


private: System::Windows::Forms::Button^ btnTg;
private: System::Windows::Forms::Button^ btnBin;





private: System::Windows::Forms::Button^ btnCos;
private: System::Windows::Forms::Button^ btnDec;



private: System::Windows::Forms::Button^ btnSin;



private: System::Windows::Forms::Button^ btnSqrt;
private: System::Windows::Forms::Button^ btnPi;
private: System::Windows::Forms::Button^ btnLog;
private: System::Windows::Forms::Button^ btnLn;
private: System::Windows::Forms::Button^ btnFact;
private: System::Windows::Forms::Button^ btnPercent;
private: System::Windows::Forms::Button^ btnInverse;

private: System::Windows::Forms::Button^ btnSquared;
private: System::Windows::Forms::Button^ btnCubed;
private: System::Windows::Forms::ToolStripMenuItem^ zamianaJednostekToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ objaśnieniaToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ oProgramieToolStripMenuItem;




























	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Kalkulator::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->historiaToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->historiaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wyjścieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->edycjaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->btnDot = (gcnew System::Windows::Forms::Button());
			this->btnEquals = (gcnew System::Windows::Forms::Button());
			this->btnPi = (gcnew System::Windows::Forms::Button());
			this->btnE = (gcnew System::Windows::Forms::Button());
			this->btnSqrt = (gcnew System::Windows::Forms::Button());
			this->btnSquared = (gcnew System::Windows::Forms::Button());
			this->btnLog = (gcnew System::Windows::Forms::Button());
			this->btnSin = (gcnew System::Windows::Forms::Button());
			this->btnDec = (gcnew System::Windows::Forms::Button());
			this->btnCubed = (gcnew System::Windows::Forms::Button());
			this->btnLn = (gcnew System::Windows::Forms::Button());
			this->btnCos = (gcnew System::Windows::Forms::Button());
			this->btnBin = (gcnew System::Windows::Forms::Button());
			this->btnInverse = (gcnew System::Windows::Forms::Button());
			this->btnExp = (gcnew System::Windows::Forms::Button());
			this->btnTg = (gcnew System::Windows::Forms::Button());
			this->btnHex = (gcnew System::Windows::Forms::Button());
			this->btnAbs = (gcnew System::Windows::Forms::Button());
			this->btnFact = (gcnew System::Windows::Forms::Button());
			this->btnMod = (gcnew System::Windows::Forms::Button());
			this->btnOct = (gcnew System::Windows::Forms::Button());
			this->btnPercent = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->plikToolStripMenuItem,
					this->edycjaToolStripMenuItem, this->widokToolStripMenuItem, this->pomocToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(807, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->historiaToolStripMenuItem1,
					this->historiaToolStripMenuItem, this->wyjścieToolStripMenuItem
			});
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(46, 24);
			this->plikToolStripMenuItem->Text = L"Plik";
			this->plikToolStripMenuItem->Click += gcnew System::EventHandler(this, &Kalkulator::plikToolStripMenuItem_Click);
			// 
			// historiaToolStripMenuItem1
			// 
			this->historiaToolStripMenuItem1->Name = L"historiaToolStripMenuItem1";
			this->historiaToolStripMenuItem1->Size = System::Drawing::Size(224, 26);
			this->historiaToolStripMenuItem1->Text = L"Historia";
			// 
			// historiaToolStripMenuItem
			// 
			this->historiaToolStripMenuItem->Name = L"historiaToolStripMenuItem";
			this->historiaToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->historiaToolStripMenuItem->Text = L"Historia";
			// 
			// wyjścieToolStripMenuItem
			// 
			this->wyjścieToolStripMenuItem->Name = L"wyjścieToolStripMenuItem";
			this->wyjścieToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->wyjścieToolStripMenuItem->Text = L"Wyjście";
			// 
			// edycjaToolStripMenuItem
			// 
			this->edycjaToolStripMenuItem->Name = L"edycjaToolStripMenuItem";
			this->edycjaToolStripMenuItem->Size = System::Drawing::Size(66, 24);
			this->edycjaToolStripMenuItem->Text = L"Edycja";
			// 
			// widokToolStripMenuItem
			// 
			this->widokToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->standardowyToolStripMenuItem,
					this->naukowyToolStripMenuItem, this->walutowyToolStripMenuItem, this->zamianaJednostekToolStripMenuItem, this->iloczynyWektorówToolStripMenuItem1
			});
			this->widokToolStripMenuItem->Name = L"widokToolStripMenuItem";
			this->widokToolStripMenuItem->Size = System::Drawing::Size(66, 24);
			this->widokToolStripMenuItem->Text = L"Widok";
			// 
			// standardowyToolStripMenuItem
			// 
			this->standardowyToolStripMenuItem->Name = L"standardowyToolStripMenuItem";
			this->standardowyToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->standardowyToolStripMenuItem->Text = L"Standardowy";
			// 
			// naukowyToolStripMenuItem
			// 
			this->naukowyToolStripMenuItem->Name = L"naukowyToolStripMenuItem";
			this->naukowyToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->naukowyToolStripMenuItem->Text = L"Naukowy";
			// 
			// walutowyToolStripMenuItem
			// 
			this->walutowyToolStripMenuItem->Name = L"walutowyToolStripMenuItem";
			this->walutowyToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->walutowyToolStripMenuItem->Text = L"Walutowy";
			// 
			// zamianaJednostekToolStripMenuItem
			// 
			this->zamianaJednostekToolStripMenuItem->Name = L"zamianaJednostekToolStripMenuItem";
			this->zamianaJednostekToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->zamianaJednostekToolStripMenuItem->Text = L"Zamiana jednostek";
			// 
			// iloczynyWektorówToolStripMenuItem1
			// 
			this->iloczynyWektorówToolStripMenuItem1->Name = L"iloczynyWektorówToolStripMenuItem1";
			this->iloczynyWektorówToolStripMenuItem1->Size = System::Drawing::Size(224, 26);
			this->iloczynyWektorówToolStripMenuItem1->Text = L"Iloczyny wektorów";
			// 
			// pomocToolStripMenuItem
			// 
			this->pomocToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->objaśnieniaToolStripMenuItem,
					this->oProgramieToolStripMenuItem
			});
			this->pomocToolStripMenuItem->Name = L"pomocToolStripMenuItem";
			this->pomocToolStripMenuItem->Size = System::Drawing::Size(68, 24);
			this->pomocToolStripMenuItem->Text = L"Pomoc";
			// 
			// objaśnieniaToolStripMenuItem
			// 
			this->objaśnieniaToolStripMenuItem->Name = L"objaśnieniaToolStripMenuItem";
			this->objaśnieniaToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->objaśnieniaToolStripMenuItem->Text = L"Objaśnienia";
			// 
			// oProgramieToolStripMenuItem
			// 
			this->oProgramieToolStripMenuItem->Name = L"oProgramieToolStripMenuItem";
			this->oProgramieToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->oProgramieToolStripMenuItem->Text = L"O programie";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->Location = System::Drawing::Point(16, 33);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(368, 48);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnBackspace
			// 
			this->btnBackspace->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBackspace->Font = (gcnew System::Drawing::Font(L"Wingdings", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->btnBackspace->Location = System::Drawing::Point(16, 90);
			this->btnBackspace->Margin = System::Windows::Forms::Padding(4);
			this->btnBackspace->Name = L"btnBackspace";
			this->btnBackspace->Size = System::Drawing::Size(93, 86);
			this->btnBackspace->TabIndex = 7;
			this->btnBackspace->Text = L"";
			this->btnBackspace->UseVisualStyleBackColor = true;
			// 
			// btnAC
			// 
			this->btnAC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnAC->Location = System::Drawing::Point(108, 90);
			this->btnAC->Margin = System::Windows::Forms::Padding(4);
			this->btnAC->Name = L"btnAC";
			this->btnAC->Size = System::Drawing::Size(93, 86);
			this->btnAC->TabIndex = 2;
			this->btnAC->Text = L"AC";
			this->btnAC->UseVisualStyleBackColor = true;
			this->btnAC->Click += gcnew System::EventHandler(this, &Kalkulator::btnAC_Click);
			// 
			// btnC
			// 
			this->btnC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnC->Location = System::Drawing::Point(200, 90);
			this->btnC->Margin = System::Windows::Forms::Padding(4);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(93, 86);
			this->btnC->TabIndex = 4;
			this->btnC->Text = L"C";
			this->btnC->UseVisualStyleBackColor = true;
			// 
			// btnDivide
			// 
			this->btnDivide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDivide->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnDivide->Location = System::Drawing::Point(292, 90);
			this->btnDivide->Margin = System::Windows::Forms::Padding(4);
			this->btnDivide->Name = L"btnDivide";
			this->btnDivide->Size = System::Drawing::Size(93, 86);
			this->btnDivide->TabIndex = 42;
			this->btnDivide->Text = L"÷";
			this->btnDivide->UseVisualStyleBackColor = true;
			// 
			// btn7
			// 
			this->btn7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn7->Location = System::Drawing::Point(16, 175);
			this->btn7->Margin = System::Windows::Forms::Padding(4);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(93, 86);
			this->btn7->TabIndex = 75;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			// 
			// btn8
			// 
			this->btn8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn8->Location = System::Drawing::Point(108, 175);
			this->btn8->Margin = System::Windows::Forms::Padding(4);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(93, 86);
			this->btn8->TabIndex = 43;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			// 
			// btn9
			// 
			this->btn9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn9->Location = System::Drawing::Point(200, 175);
			this->btn9->Margin = System::Windows::Forms::Padding(4);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(93, 86);
			this->btn9->TabIndex = 44;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			// 
			// btnMultiply
			// 
			this->btnMultiply->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMultiply->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnMultiply->Location = System::Drawing::Point(292, 175);
			this->btnMultiply->Margin = System::Windows::Forms::Padding(4);
			this->btnMultiply->Name = L"btnMultiply";
			this->btnMultiply->Size = System::Drawing::Size(93, 86);
			this->btnMultiply->TabIndex = 46;
			this->btnMultiply->Text = L"×";
			this->btnMultiply->UseVisualStyleBackColor = true;
			// 
			// btn4
			// 
			this->btn4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn4->Location = System::Drawing::Point(16, 260);
			this->btn4->Margin = System::Windows::Forms::Padding(4);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(93, 86);
			this->btn4->TabIndex = 76;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			// 
			// btn5
			// 
			this->btn5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn5->Location = System::Drawing::Point(108, 260);
			this->btn5->Margin = System::Windows::Forms::Padding(4);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(93, 86);
			this->btn5->TabIndex = 47;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			// 
			// btn6
			// 
			this->btn6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn6->Location = System::Drawing::Point(200, 260);
			this->btn6->Margin = System::Windows::Forms::Padding(4);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(93, 86);
			this->btn6->TabIndex = 48;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			// 
			// btnSubstract
			// 
			this->btnSubstract->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSubstract->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnSubstract->Location = System::Drawing::Point(292, 260);
			this->btnSubstract->Margin = System::Windows::Forms::Padding(4);
			this->btnSubstract->Name = L"btnSubstract";
			this->btnSubstract->Size = System::Drawing::Size(93, 86);
			this->btnSubstract->TabIndex = 54;
			this->btnSubstract->Text = L"-";
			this->btnSubstract->UseVisualStyleBackColor = true;
			// 
			// btn1
			// 
			this->btn1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn1->Location = System::Drawing::Point(16, 345);
			this->btn1->Margin = System::Windows::Forms::Padding(4);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(93, 86);
			this->btn1->TabIndex = 81;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			// 
			// btn2
			// 
			this->btn2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn2->Location = System::Drawing::Point(108, 345);
			this->btn2->Margin = System::Windows::Forms::Padding(4);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(93, 86);
			this->btn2->TabIndex = 51;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			// 
			// btn3
			// 
			this->btn3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn3->Location = System::Drawing::Point(200, 345);
			this->btn3->Margin = System::Windows::Forms::Padding(4);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(93, 86);
			this->btn3->TabIndex = 52;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			// 
			// btnAdd
			// 
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnAdd->Location = System::Drawing::Point(292, 345);
			this->btnAdd->Margin = System::Windows::Forms::Padding(4);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(93, 86);
			this->btnAdd->TabIndex = 50;
			this->btnAdd->Text = L"+";
			this->btnAdd->UseVisualStyleBackColor = true;
			// 
			// btnSigned
			// 
			this->btnSigned->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSigned->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnSigned->Location = System::Drawing::Point(16, 430);
			this->btnSigned->Margin = System::Windows::Forms::Padding(4);
			this->btnSigned->Name = L"btnSigned";
			this->btnSigned->Size = System::Drawing::Size(93, 86);
			this->btnSigned->TabIndex = 5;
			this->btnSigned->Text = L"+/-";
			this->btnSigned->UseVisualStyleBackColor = true;
			// 
			// btn0
			// 
			this->btn0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn0->Location = System::Drawing::Point(108, 430);
			this->btn0->Margin = System::Windows::Forms::Padding(4);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(93, 86);
			this->btn0->TabIndex = 82;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			// 
			// btnDot
			// 
			this->btnDot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDot->Font = (gcnew System::Drawing::Font(L"Calibri", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnDot->Location = System::Drawing::Point(200, 430);
			this->btnDot->Margin = System::Windows::Forms::Padding(4);
			this->btnDot->Name = L"btnDot";
			this->btnDot->Size = System::Drawing::Size(93, 86);
			this->btnDot->TabIndex = 83;
			this->btnDot->Text = L".";
			this->btnDot->UseVisualStyleBackColor = true;
			// 
			// btnEquals
			// 
			this->btnEquals->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEquals->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnEquals->Location = System::Drawing::Point(292, 430);
			this->btnEquals->Margin = System::Windows::Forms::Padding(4);
			this->btnEquals->Name = L"btnEquals";
			this->btnEquals->Size = System::Drawing::Size(93, 86);
			this->btnEquals->TabIndex = 84;
			this->btnEquals->Text = L"=";
			this->btnEquals->UseVisualStyleBackColor = true;
			// 
			// btnPi
			// 
			this->btnPi->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPi->Font = (gcnew System::Drawing::Font(L"Cambria", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnPi->Location = System::Drawing::Point(419, 90);
			this->btnPi->Margin = System::Windows::Forms::Padding(4);
			this->btnPi->Name = L"btnPi";
			this->btnPi->Size = System::Drawing::Size(93, 86);
			this->btnPi->TabIndex = 88;
			this->btnPi->Text = L"π";
			this->btnPi->UseVisualStyleBackColor = true;
			// 
			// btnE
			// 
			this->btnE->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnE->Font = (gcnew System::Drawing::Font(L"Cambria", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnE->Location = System::Drawing::Point(511, 90);
			this->btnE->Margin = System::Windows::Forms::Padding(4);
			this->btnE->Name = L"btnE";
			this->btnE->Size = System::Drawing::Size(93, 86);
			this->btnE->TabIndex = 100;
			this->btnE->Text = L"e";
			this->btnE->UseVisualStyleBackColor = true;
			this->btnE->Click += gcnew System::EventHandler(this, &Kalkulator::button6_Click);
			// 
			// btnSqrt
			// 
			this->btnSqrt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSqrt->Font = (gcnew System::Drawing::Font(L"Cambria", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnSqrt->Location = System::Drawing::Point(603, 90);
			this->btnSqrt->Margin = System::Windows::Forms::Padding(4);
			this->btnSqrt->Name = L"btnSqrt";
			this->btnSqrt->Size = System::Drawing::Size(93, 86);
			this->btnSqrt->TabIndex = 86;
			this->btnSqrt->Text = L"√";
			this->btnSqrt->UseVisualStyleBackColor = true;
			// 
			// btnSquared
			// 
			this->btnSquared->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSquared->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnSquared->Location = System::Drawing::Point(695, 90);
			this->btnSquared->Margin = System::Windows::Forms::Padding(4);
			this->btnSquared->Name = L"btnSquared";
			this->btnSquared->Size = System::Drawing::Size(93, 86);
			this->btnSquared->TabIndex = 110;
			this->btnSquared->Text = L"x^2";
			this->btnSquared->UseVisualStyleBackColor = true;
			// 
			// btnLog
			// 
			this->btnLog->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLog->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnLog->Location = System::Drawing::Point(419, 175);
			this->btnLog->Margin = System::Windows::Forms::Padding(4);
			this->btnLog->Name = L"btnLog";
			this->btnLog->Size = System::Drawing::Size(93, 86);
			this->btnLog->TabIndex = 85;
			this->btnLog->Text = L"log";
			this->btnLog->UseVisualStyleBackColor = true;
			// 
			// btnSin
			// 
			this->btnSin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnSin->Location = System::Drawing::Point(511, 175);
			this->btnSin->Margin = System::Windows::Forms::Padding(4);
			this->btnSin->Name = L"btnSin";
			this->btnSin->Size = System::Drawing::Size(93, 86);
			this->btnSin->TabIndex = 90;
			this->btnSin->Text = L"sin";
			this->btnSin->UseVisualStyleBackColor = true;
			// 
			// btnDec
			// 
			this->btnDec->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnDec->Location = System::Drawing::Point(603, 175);
			this->btnDec->Margin = System::Windows::Forms::Padding(4);
			this->btnDec->Name = L"btnDec";
			this->btnDec->Size = System::Drawing::Size(93, 86);
			this->btnDec->TabIndex = 91;
			this->btnDec->Text = L"Dec";
			this->btnDec->UseVisualStyleBackColor = true;
			// 
			// btnCubed
			// 
			this->btnCubed->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCubed->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnCubed->Location = System::Drawing::Point(695, 175);
			this->btnCubed->Margin = System::Windows::Forms::Padding(4);
			this->btnCubed->Name = L"btnCubed";
			this->btnCubed->Size = System::Drawing::Size(93, 86);
			this->btnCubed->TabIndex = 111;
			this->btnCubed->Text = L"x^3";
			this->btnCubed->UseVisualStyleBackColor = true;
			// 
			// btnLn
			// 
			this->btnLn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnLn->Location = System::Drawing::Point(419, 260);
			this->btnLn->Margin = System::Windows::Forms::Padding(4);
			this->btnLn->Name = L"btnLn";
			this->btnLn->Size = System::Drawing::Size(93, 86);
			this->btnLn->TabIndex = 105;
			this->btnLn->Text = L"ln";
			this->btnLn->UseVisualStyleBackColor = true;
			// 
			// btnCos
			// 
			this->btnCos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnCos->Location = System::Drawing::Point(511, 260);
			this->btnCos->Margin = System::Windows::Forms::Padding(4);
			this->btnCos->Name = L"btnCos";
			this->btnCos->Size = System::Drawing::Size(93, 86);
			this->btnCos->TabIndex = 93;
			this->btnCos->Text = L"cos";
			this->btnCos->UseVisualStyleBackColor = true;
			// 
			// btnBin
			// 
			this->btnBin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnBin->Location = System::Drawing::Point(603, 260);
			this->btnBin->Margin = System::Windows::Forms::Padding(4);
			this->btnBin->Name = L"btnBin";
			this->btnBin->Size = System::Drawing::Size(93, 86);
			this->btnBin->TabIndex = 94;
			this->btnBin->Text = L"Bin";
			this->btnBin->UseVisualStyleBackColor = true;
			// 
			// btnInverse
			// 
			this->btnInverse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnInverse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnInverse->Location = System::Drawing::Point(695, 260);
			this->btnInverse->Margin = System::Windows::Forms::Padding(4);
			this->btnInverse->Name = L"btnInverse";
			this->btnInverse->Size = System::Drawing::Size(93, 86);
			this->btnInverse->TabIndex = 108;
			this->btnInverse->Text = L"1/x";
			this->btnInverse->UseVisualStyleBackColor = true;
			// 
			// btnExp
			// 
			this->btnExp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnExp->Location = System::Drawing::Point(419, 345);
			this->btnExp->Margin = System::Windows::Forms::Padding(4);
			this->btnExp->Name = L"btnExp";
			this->btnExp->Size = System::Drawing::Size(93, 86);
			this->btnExp->TabIndex = 104;
			this->btnExp->Text = L"exp";
			this->btnExp->UseVisualStyleBackColor = true;
			// 
			// btnTg
			// 
			this->btnTg->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnTg->Location = System::Drawing::Point(511, 345);
			this->btnTg->Margin = System::Windows::Forms::Padding(4);
			this->btnTg->Name = L"btnTg";
			this->btnTg->Size = System::Drawing::Size(93, 86);
			this->btnTg->TabIndex = 96;
			this->btnTg->Text = L"tg";
			this->btnTg->UseVisualStyleBackColor = true;
			// 
			// btnHex
			// 
			this->btnHex->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnHex->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnHex->Location = System::Drawing::Point(603, 345);
			this->btnHex->Margin = System::Windows::Forms::Padding(4);
			this->btnHex->Name = L"btnHex";
			this->btnHex->Size = System::Drawing::Size(93, 86);
			this->btnHex->TabIndex = 97;
			this->btnHex->Text = L"Hex";
			this->btnHex->UseVisualStyleBackColor = true;
			// 
			// btnAbs
			// 
			this->btnAbs->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAbs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnAbs->Location = System::Drawing::Point(695, 345);
			this->btnAbs->Margin = System::Windows::Forms::Padding(4);
			this->btnAbs->Name = L"btnAbs";
			this->btnAbs->Size = System::Drawing::Size(93, 86);
			this->btnAbs->TabIndex = 99;
			this->btnAbs->Text = L"|x|";
			this->btnAbs->UseVisualStyleBackColor = true;
			// 
			// btnFact
			// 
			this->btnFact->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnFact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnFact->Location = System::Drawing::Point(419, 430);
			this->btnFact->Margin = System::Windows::Forms::Padding(4);
			this->btnFact->Name = L"btnFact";
			this->btnFact->Size = System::Drawing::Size(93, 86);
			this->btnFact->TabIndex = 106;
			this->btnFact->Text = L"n!";
			this->btnFact->UseVisualStyleBackColor = true;
			// 
			// btnMod
			// 
			this->btnMod->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMod->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnMod->Location = System::Drawing::Point(511, 430);
			this->btnMod->Margin = System::Windows::Forms::Padding(4);
			this->btnMod->Name = L"btnMod";
			this->btnMod->Size = System::Drawing::Size(93, 86);
			this->btnMod->TabIndex = 102;
			this->btnMod->Text = L"mod";
			this->btnMod->UseVisualStyleBackColor = true;
			// 
			// btnOct
			// 
			this->btnOct->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnOct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnOct->Location = System::Drawing::Point(603, 430);
			this->btnOct->Margin = System::Windows::Forms::Padding(4);
			this->btnOct->Name = L"btnOct";
			this->btnOct->Size = System::Drawing::Size(93, 86);
			this->btnOct->TabIndex = 103;
			this->btnOct->Text = L"Oct";
			this->btnOct->UseVisualStyleBackColor = true;
			// 
			// btnPercent
			// 
			this->btnPercent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPercent->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnPercent->Location = System::Drawing::Point(695, 430);
			this->btnPercent->Margin = System::Windows::Forms::Padding(4);
			this->btnPercent->Name = L"btnPercent";
			this->btnPercent->Size = System::Drawing::Size(93, 86);
			this->btnPercent->TabIndex = 107;
			this->btnPercent->Text = L"%";
			this->btnPercent->UseVisualStyleBackColor = true;
			// 
			// Kalkulator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(807, 573);
			this->Controls->Add(this->btnCubed);
			this->Controls->Add(this->btnSquared);
			this->Controls->Add(this->btnInverse);
			this->Controls->Add(this->btnPercent);
			this->Controls->Add(this->btnFact);
			this->Controls->Add(this->btnLn);
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
			this->Controls->Add(this->btnDot);
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
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Kalkulator";
			this->Text = L"Kalkulator";
			this->Load += gcnew System::EventHandler(this, &Kalkulator::Kalkulator_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Kalkulator_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void plikToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnAC_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
