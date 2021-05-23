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
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;




	private: System::Windows::Forms::ToolStripMenuItem^ iloczynyWektorówToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ historiaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ wyjœcieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ edycjaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pomocToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ historiaToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ trybyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ standardowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ naukowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ walutowyToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Button^ button38;
	private: System::Windows::Forms::Button^ button39;
	private: System::Windows::Forms::Button^ button40;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->historiaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->iloczynyWektorówToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->edycjaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wyjœcieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pomocToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->historiaToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->trybyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->standardowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->naukowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->walutowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->fileToolStripMenuItem,
					this->edycjaToolStripMenuItem, this->trybyToolStripMenuItem, this->pomocToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1049, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->iloczynyWektorówToolStripMenuItem,
					this->historiaToolStripMenuItem1, this->historiaToolStripMenuItem, this->wyjœcieToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->fileToolStripMenuItem->Text = L"Plik";
			this->fileToolStripMenuItem->Click += gcnew System::EventHandler(this, &Kalkulator::fileToolStripMenuItem_Click);
			// 
			// historiaToolStripMenuItem
			// 
			this->historiaToolStripMenuItem->Name = L"historiaToolStripMenuItem";
			this->historiaToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->historiaToolStripMenuItem->Text = L"Historia";
			// 
			// iloczynyWektorówToolStripMenuItem
			// 
			this->iloczynyWektorówToolStripMenuItem->Name = L"iloczynyWektorówToolStripMenuItem";
			this->iloczynyWektorówToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->iloczynyWektorówToolStripMenuItem->Text = L"Iloczyny wektorów";
			// 
			// edycjaToolStripMenuItem
			// 
			this->edycjaToolStripMenuItem->Name = L"edycjaToolStripMenuItem";
			this->edycjaToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->edycjaToolStripMenuItem->Text = L"Edycja";
			// 
			// wyjœcieToolStripMenuItem
			// 
			this->wyjœcieToolStripMenuItem->Name = L"wyjœcieToolStripMenuItem";
			this->wyjœcieToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->wyjœcieToolStripMenuItem->Text = L"Wyjœcie";
			// 
			// pomocToolStripMenuItem
			// 
			this->pomocToolStripMenuItem->Name = L"pomocToolStripMenuItem";
			this->pomocToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->pomocToolStripMenuItem->Text = L"Pomoc";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 27);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(277, 40);
			this->textBox1->TabIndex = 1;
			// 
			// historiaToolStripMenuItem1
			// 
			this->historiaToolStripMenuItem1->Name = L"historiaToolStripMenuItem1";
			this->historiaToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->historiaToolStripMenuItem1->Text = L"Historia";
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(12, 73);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(70, 70);
			this->button1->TabIndex = 2;
			this->button1->Text = L"btn1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(81, 73);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(70, 70);
			this->button2->TabIndex = 3;
			this->button2->Text = L"btn1";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(219, 73);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(70, 70);
			this->button3->TabIndex = 5;
			this->button3->Text = L"btn1";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->Location = System::Drawing::Point(150, 73);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(70, 70);
			this->button4->TabIndex = 4;
			this->button4->Text = L"btn1";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->Location = System::Drawing::Point(219, 142);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(70, 70);
			this->button5->TabIndex = 9;
			this->button5->Text = L"btn1";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button6->Location = System::Drawing::Point(150, 142);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(70, 70);
			this->button6->TabIndex = 8;
			this->button6->Text = L"btn1";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button7->Location = System::Drawing::Point(81, 142);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(70, 70);
			this->button7->TabIndex = 7;
			this->button7->Text = L"btn1";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button8->Location = System::Drawing::Point(12, 142);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(70, 70);
			this->button8->TabIndex = 6;
			this->button8->Text = L"btn1";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button9->Location = System::Drawing::Point(219, 280);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(70, 70);
			this->button9->TabIndex = 17;
			this->button9->Text = L"btn1";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button10->Location = System::Drawing::Point(150, 280);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(70, 70);
			this->button10->TabIndex = 16;
			this->button10->Text = L"btn1";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button11->Location = System::Drawing::Point(81, 280);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(70, 70);
			this->button11->TabIndex = 15;
			this->button11->Text = L"btn1";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button12->Location = System::Drawing::Point(12, 280);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(70, 70);
			this->button12->TabIndex = 14;
			this->button12->Text = L"btn1";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button13->Location = System::Drawing::Point(219, 211);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(70, 70);
			this->button13->TabIndex = 13;
			this->button13->Text = L"btn1";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button14->Location = System::Drawing::Point(150, 211);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(70, 70);
			this->button14->TabIndex = 12;
			this->button14->Text = L"btn1";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button15->Location = System::Drawing::Point(81, 211);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(70, 70);
			this->button15->TabIndex = 11;
			this->button15->Text = L"btn1";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button16->Location = System::Drawing::Point(12, 211);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(70, 70);
			this->button16->TabIndex = 10;
			this->button16->Text = L"btn1";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button17->Location = System::Drawing::Point(219, 349);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(70, 70);
			this->button17->TabIndex = 21;
			this->button17->Text = L"btn1";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button18->Location = System::Drawing::Point(150, 349);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(70, 70);
			this->button18->TabIndex = 20;
			this->button18->Text = L"btn1";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button19->Location = System::Drawing::Point(81, 349);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(70, 70);
			this->button19->TabIndex = 19;
			this->button19->Text = L"btn1";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button20->Location = System::Drawing::Point(12, 349);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(70, 70);
			this->button20->TabIndex = 18;
			this->button20->Text = L"btn1";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// button21
			// 
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button21->Location = System::Drawing::Point(534, 349);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(70, 70);
			this->button21->TabIndex = 41;
			this->button21->Text = L"btn1";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// button22
			// 
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button22->Location = System::Drawing::Point(465, 349);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(70, 70);
			this->button22->TabIndex = 40;
			this->button22->Text = L"btn1";
			this->button22->UseVisualStyleBackColor = true;
			// 
			// button23
			// 
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button23->Location = System::Drawing::Point(396, 349);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(70, 70);
			this->button23->TabIndex = 39;
			this->button23->Text = L"btn1";
			this->button23->UseVisualStyleBackColor = true;
			// 
			// button24
			// 
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button24->Location = System::Drawing::Point(327, 349);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(70, 70);
			this->button24->TabIndex = 38;
			this->button24->Text = L"btn1";
			this->button24->UseVisualStyleBackColor = true;
			// 
			// button25
			// 
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button25->Location = System::Drawing::Point(534, 280);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(70, 70);
			this->button25->TabIndex = 37;
			this->button25->Text = L"btn1";
			this->button25->UseVisualStyleBackColor = true;
			// 
			// button26
			// 
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button26->Location = System::Drawing::Point(465, 280);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(70, 70);
			this->button26->TabIndex = 36;
			this->button26->Text = L"btn1";
			this->button26->UseVisualStyleBackColor = true;
			// 
			// button27
			// 
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button27->Location = System::Drawing::Point(396, 280);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(70, 70);
			this->button27->TabIndex = 35;
			this->button27->Text = L"btn1";
			this->button27->UseVisualStyleBackColor = true;
			// 
			// button28
			// 
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button28->Location = System::Drawing::Point(327, 280);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(70, 70);
			this->button28->TabIndex = 34;
			this->button28->Text = L"btn1";
			this->button28->UseVisualStyleBackColor = true;
			// 
			// button29
			// 
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button29->Location = System::Drawing::Point(534, 211);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(70, 70);
			this->button29->TabIndex = 33;
			this->button29->Text = L"btn1";
			this->button29->UseVisualStyleBackColor = true;
			// 
			// button30
			// 
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button30->Location = System::Drawing::Point(465, 211);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(70, 70);
			this->button30->TabIndex = 32;
			this->button30->Text = L"btn1";
			this->button30->UseVisualStyleBackColor = true;
			// 
			// button31
			// 
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button31->Location = System::Drawing::Point(396, 211);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(70, 70);
			this->button31->TabIndex = 31;
			this->button31->Text = L"btn1";
			this->button31->UseVisualStyleBackColor = true;
			// 
			// button32
			// 
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button32->Location = System::Drawing::Point(327, 211);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(70, 70);
			this->button32->TabIndex = 30;
			this->button32->Text = L"btn1";
			this->button32->UseVisualStyleBackColor = true;
			// 
			// button33
			// 
			this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button33->Location = System::Drawing::Point(534, 142);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(70, 70);
			this->button33->TabIndex = 29;
			this->button33->Text = L"btn1";
			this->button33->UseVisualStyleBackColor = true;
			// 
			// button34
			// 
			this->button34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button34->Location = System::Drawing::Point(465, 142);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(70, 70);
			this->button34->TabIndex = 28;
			this->button34->Text = L"btn1";
			this->button34->UseVisualStyleBackColor = true;
			// 
			// button35
			// 
			this->button35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button35->Location = System::Drawing::Point(396, 142);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(70, 70);
			this->button35->TabIndex = 27;
			this->button35->Text = L"btn1";
			this->button35->UseVisualStyleBackColor = true;
			// 
			// button36
			// 
			this->button36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button36->Location = System::Drawing::Point(327, 142);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(70, 70);
			this->button36->TabIndex = 26;
			this->button36->Text = L"btn1";
			this->button36->UseVisualStyleBackColor = true;
			// 
			// button37
			// 
			this->button37->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button37->Location = System::Drawing::Point(534, 73);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(70, 70);
			this->button37->TabIndex = 25;
			this->button37->Text = L"btn1";
			this->button37->UseVisualStyleBackColor = true;
			// 
			// button38
			// 
			this->button38->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button38->Location = System::Drawing::Point(465, 73);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(70, 70);
			this->button38->TabIndex = 24;
			this->button38->Text = L"btn1";
			this->button38->UseVisualStyleBackColor = true;
			// 
			// button39
			// 
			this->button39->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button39->Location = System::Drawing::Point(396, 73);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(70, 70);
			this->button39->TabIndex = 23;
			this->button39->Text = L"btn1";
			this->button39->UseVisualStyleBackColor = true;
			// 
			// button40
			// 
			this->button40->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button40->Location = System::Drawing::Point(327, 73);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(70, 70);
			this->button40->TabIndex = 22;
			this->button40->Text = L"btn1";
			this->button40->UseVisualStyleBackColor = true;
			// 
			// trybyToolStripMenuItem
			// 
			this->trybyToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->standardowyToolStripMenuItem,
					this->naukowyToolStripMenuItem, this->walutowyToolStripMenuItem
			});
			this->trybyToolStripMenuItem->Name = L"trybyToolStripMenuItem";
			this->trybyToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->trybyToolStripMenuItem->Text = L"Widok";
			// 
			// standardowyToolStripMenuItem
			// 
			this->standardowyToolStripMenuItem->Name = L"standardowyToolStripMenuItem";
			this->standardowyToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->standardowyToolStripMenuItem->Text = L"Standardowy";
			// 
			// naukowyToolStripMenuItem
			// 
			this->naukowyToolStripMenuItem->Name = L"naukowyToolStripMenuItem";
			this->naukowyToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->naukowyToolStripMenuItem->Text = L"Naukowy";
			// 
			// walutowyToolStripMenuItem
			// 
			this->walutowyToolStripMenuItem->Name = L"walutowyToolStripMenuItem";
			this->walutowyToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->walutowyToolStripMenuItem->Text = L"Walutowy";
			// 
			// Kalkulator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1049, 530);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button40);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
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
	private: System::Void fileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
