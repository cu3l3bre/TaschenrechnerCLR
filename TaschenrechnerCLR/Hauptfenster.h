#pragma once

namespace TaschenrechnerCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Hauptfenster
	/// </summary>
	public ref class Hauptfenster : public System::Windows::Forms::Form
	{
	public:
		Hauptfenster(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Hauptfenster()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label_Ueberschrift;
	private: System::Windows::Forms::TextBox^  textBox_Zahl1;
	private: System::Windows::Forms::TextBox^  textBox_Zahl2;
	private: System::Windows::Forms::Label^  label_Zahl1;
	private: System::Windows::Forms::Label^  label_Zahl2;
	private: System::Windows::Forms::Button^  button_ZahlenAddieren;
	private: System::Windows::Forms::Label^  label_Beschreibung_Ergebnis_Summe;
	private: System::Windows::Forms::Label^  label_Summe;
	private: System::Windows::Forms::Label^  label_Fehlermeldung;
	private: System::Windows::Forms::Button^  button_num1;
	private: System::Windows::Forms::Button^  button_num2;
	private: System::Windows::Forms::Button^  button_num3;
	private: System::Windows::Forms::Button^  button_num0;
	private: System::Windows::Forms::Button^  button_num4;
	private: System::Windows::Forms::Button^  button_num5;
	private: System::Windows::Forms::Button^  button_num6;
	private: System::Windows::Forms::Button^  button_num7;
	private: System::Windows::Forms::Button^  button_num8;
	private: System::Windows::Forms::Button^  button_num9;
	private: System::Windows::Forms::Button^  button_calc;
	private: System::Windows::Forms::TextBox^  textBox_InOut;
	private: System::Windows::Forms::Button^  button_add;
	private: System::Windows::Forms::Label^  label_InOut;
	private: System::Windows::Forms::Button^  button_clear;
	private: System::Windows::Forms::Button^  button_sub;
	private: System::Windows::Forms::Button^  button_mul;
	private: System::Windows::Forms::Button^  button_div;
	private: System::Windows::Forms::Button^  button_dot;
	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Hauptfenster::typeid));
			this->label_Ueberschrift = (gcnew System::Windows::Forms::Label());
			this->textBox_Zahl1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Zahl2 = (gcnew System::Windows::Forms::TextBox());
			this->label_Zahl1 = (gcnew System::Windows::Forms::Label());
			this->label_Zahl2 = (gcnew System::Windows::Forms::Label());
			this->button_ZahlenAddieren = (gcnew System::Windows::Forms::Button());
			this->label_Beschreibung_Ergebnis_Summe = (gcnew System::Windows::Forms::Label());
			this->label_Summe = (gcnew System::Windows::Forms::Label());
			this->label_Fehlermeldung = (gcnew System::Windows::Forms::Label());
			this->button_num1 = (gcnew System::Windows::Forms::Button());
			this->button_num2 = (gcnew System::Windows::Forms::Button());
			this->button_num3 = (gcnew System::Windows::Forms::Button());
			this->button_num0 = (gcnew System::Windows::Forms::Button());
			this->button_num4 = (gcnew System::Windows::Forms::Button());
			this->button_num5 = (gcnew System::Windows::Forms::Button());
			this->button_num6 = (gcnew System::Windows::Forms::Button());
			this->button_num7 = (gcnew System::Windows::Forms::Button());
			this->button_num8 = (gcnew System::Windows::Forms::Button());
			this->button_num9 = (gcnew System::Windows::Forms::Button());
			this->button_calc = (gcnew System::Windows::Forms::Button());
			this->textBox_InOut = (gcnew System::Windows::Forms::TextBox());
			this->button_add = (gcnew System::Windows::Forms::Button());
			this->label_InOut = (gcnew System::Windows::Forms::Label());
			this->button_clear = (gcnew System::Windows::Forms::Button());
			this->button_sub = (gcnew System::Windows::Forms::Button());
			this->button_mul = (gcnew System::Windows::Forms::Button());
			this->button_div = (gcnew System::Windows::Forms::Button());
			this->button_dot = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_Ueberschrift
			// 
			this->label_Ueberschrift->AutoSize = true;
			this->label_Ueberschrift->Font = (gcnew System::Drawing::Font(L"Calibri", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_Ueberschrift->Location = System::Drawing::Point(12, 9);
			this->label_Ueberschrift->Name = L"label_Ueberschrift";
			this->label_Ueberschrift->Size = System::Drawing::Size(337, 59);
			this->label_Ueberschrift->TabIndex = 0;
			this->label_Ueberschrift->Text = L"Taschenrechner";
			// 
			// textBox_Zahl1
			// 
			this->textBox_Zahl1->Location = System::Drawing::Point(42, 139);
			this->textBox_Zahl1->Name = L"textBox_Zahl1";
			this->textBox_Zahl1->Size = System::Drawing::Size(98, 20);
			this->textBox_Zahl1->TabIndex = 1;
			this->textBox_Zahl1->Text = L"0";
			// 
			// textBox_Zahl2
			// 
			this->textBox_Zahl2->Location = System::Drawing::Point(202, 139);
			this->textBox_Zahl2->Name = L"textBox_Zahl2";
			this->textBox_Zahl2->Size = System::Drawing::Size(98, 20);
			this->textBox_Zahl2->TabIndex = 2;
			this->textBox_Zahl2->Text = L"0";
			// 
			// label_Zahl1
			// 
			this->label_Zahl1->AutoSize = true;
			this->label_Zahl1->Location = System::Drawing::Point(39, 109);
			this->label_Zahl1->Name = L"label_Zahl1";
			this->label_Zahl1->Size = System::Drawing::Size(40, 13);
			this->label_Zahl1->TabIndex = 3;
			this->label_Zahl1->Text = L"Zahl 1:";
			// 
			// label_Zahl2
			// 
			this->label_Zahl2->AutoSize = true;
			this->label_Zahl2->Location = System::Drawing::Point(202, 108);
			this->label_Zahl2->Name = L"label_Zahl2";
			this->label_Zahl2->Size = System::Drawing::Size(40, 13);
			this->label_Zahl2->TabIndex = 4;
			this->label_Zahl2->Text = L"Zahl 2:";
			// 
			// button_ZahlenAddieren
			// 
			this->button_ZahlenAddieren->Location = System::Drawing::Point(354, 139);
			this->button_ZahlenAddieren->Name = L"button_ZahlenAddieren";
			this->button_ZahlenAddieren->Size = System::Drawing::Size(98, 20);
			this->button_ZahlenAddieren->TabIndex = 5;
			this->button_ZahlenAddieren->Text = L"Zahlen addieren";
			this->button_ZahlenAddieren->UseVisualStyleBackColor = true;
			this->button_ZahlenAddieren->Click += gcnew System::EventHandler(this, &Hauptfenster::button_ZahlenAddieren_Click);
			// 
			// label_Beschreibung_Ergebnis_Summe
			// 
			this->label_Beschreibung_Ergebnis_Summe->AutoSize = true;
			this->label_Beschreibung_Ergebnis_Summe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_Beschreibung_Ergebnis_Summe->Location = System::Drawing::Point(492, 139);
			this->label_Beschreibung_Ergebnis_Summe->Name = L"label_Beschreibung_Ergebnis_Summe";
			this->label_Beschreibung_Ergebnis_Summe->Size = System::Drawing::Size(85, 20);
			this->label_Beschreibung_Ergebnis_Summe->TabIndex = 6;
			this->label_Beschreibung_Ergebnis_Summe->Text = L"Ergebnis:";
			// 
			// label_Summe
			// 
			this->label_Summe->AutoSize = true;
			this->label_Summe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Summe->Location = System::Drawing::Point(578, 139);
			this->label_Summe->Name = L"label_Summe";
			this->label_Summe->Size = System::Drawing::Size(19, 20);
			this->label_Summe->TabIndex = 7;
			this->label_Summe->Text = L"0";
			// 
			// label_Fehlermeldung
			// 
			this->label_Fehlermeldung->AutoSize = true;
			this->label_Fehlermeldung->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Fehlermeldung->ForeColor = System::Drawing::Color::Red;
			this->label_Fehlermeldung->Location = System::Drawing::Point(38, 81);
			this->label_Fehlermeldung->Name = L"label_Fehlermeldung";
			this->label_Fehlermeldung->Size = System::Drawing::Size(128, 20);
			this->label_Fehlermeldung->TabIndex = 8;
			this->label_Fehlermeldung->Text = L"Fehlermeldung";
			// 
			// button_num1
			// 
			this->button_num1->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_num1->Location = System::Drawing::Point(302, 366);
			this->button_num1->Name = L"button_num1";
			this->button_num1->Size = System::Drawing::Size(60, 60);
			this->button_num1->TabIndex = 9;
			this->button_num1->Text = L"1";
			this->button_num1->UseVisualStyleBackColor = true;
			this->button_num1->Click += gcnew System::EventHandler(this, &Hauptfenster::button_num1_Click);
			// 
			// button_num2
			// 
			this->button_num2->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_num2->Location = System::Drawing::Point(368, 366);
			this->button_num2->Name = L"button_num2";
			this->button_num2->Size = System::Drawing::Size(60, 60);
			this->button_num2->TabIndex = 10;
			this->button_num2->Text = L"2";
			this->button_num2->UseVisualStyleBackColor = true;
			this->button_num2->Click += gcnew System::EventHandler(this, &Hauptfenster::button_num2_Click);
			// 
			// button_num3
			// 
			this->button_num3->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_num3->Location = System::Drawing::Point(434, 366);
			this->button_num3->Name = L"button_num3";
			this->button_num3->Size = System::Drawing::Size(60, 60);
			this->button_num3->TabIndex = 11;
			this->button_num3->Text = L"3";
			this->button_num3->UseVisualStyleBackColor = true;
			this->button_num3->Click += gcnew System::EventHandler(this, &Hauptfenster::button_num3_Click);
			// 
			// button_num0
			// 
			this->button_num0->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_num0->Location = System::Drawing::Point(368, 432);
			this->button_num0->Name = L"button_num0";
			this->button_num0->Size = System::Drawing::Size(60, 60);
			this->button_num0->TabIndex = 12;
			this->button_num0->Text = L"0";
			this->button_num0->UseVisualStyleBackColor = true;
			this->button_num0->Click += gcnew System::EventHandler(this, &Hauptfenster::button_num0_Click);
			// 
			// button_num4
			// 
			this->button_num4->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_num4->Location = System::Drawing::Point(302, 300);
			this->button_num4->Name = L"button_num4";
			this->button_num4->Size = System::Drawing::Size(60, 60);
			this->button_num4->TabIndex = 13;
			this->button_num4->Text = L"4";
			this->button_num4->UseVisualStyleBackColor = true;
			this->button_num4->Click += gcnew System::EventHandler(this, &Hauptfenster::button_num4_Click);
			// 
			// button_num5
			// 
			this->button_num5->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_num5->Location = System::Drawing::Point(368, 300);
			this->button_num5->Name = L"button_num5";
			this->button_num5->Size = System::Drawing::Size(60, 60);
			this->button_num5->TabIndex = 14;
			this->button_num5->Text = L"5";
			this->button_num5->UseVisualStyleBackColor = true;
			this->button_num5->Click += gcnew System::EventHandler(this, &Hauptfenster::button_num5_Click);
			// 
			// button_num6
			// 
			this->button_num6->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_num6->Location = System::Drawing::Point(434, 300);
			this->button_num6->Name = L"button_num6";
			this->button_num6->Size = System::Drawing::Size(60, 60);
			this->button_num6->TabIndex = 15;
			this->button_num6->Text = L"6";
			this->button_num6->UseVisualStyleBackColor = true;
			this->button_num6->Click += gcnew System::EventHandler(this, &Hauptfenster::button_num6_Click);
			// 
			// button_num7
			// 
			this->button_num7->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_num7->Location = System::Drawing::Point(302, 234);
			this->button_num7->Name = L"button_num7";
			this->button_num7->Size = System::Drawing::Size(60, 60);
			this->button_num7->TabIndex = 16;
			this->button_num7->Text = L"7";
			this->button_num7->UseVisualStyleBackColor = true;
			this->button_num7->Click += gcnew System::EventHandler(this, &Hauptfenster::button_num7_Click);
			// 
			// button_num8
			// 
			this->button_num8->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_num8->Location = System::Drawing::Point(368, 234);
			this->button_num8->Name = L"button_num8";
			this->button_num8->Size = System::Drawing::Size(60, 60);
			this->button_num8->TabIndex = 17;
			this->button_num8->Text = L"8";
			this->button_num8->UseVisualStyleBackColor = true;
			this->button_num8->Click += gcnew System::EventHandler(this, &Hauptfenster::button_num8_Click);
			// 
			// button_num9
			// 
			this->button_num9->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_num9->Location = System::Drawing::Point(434, 234);
			this->button_num9->Name = L"button_num9";
			this->button_num9->Size = System::Drawing::Size(60, 60);
			this->button_num9->TabIndex = 18;
			this->button_num9->Text = L"9";
			this->button_num9->UseVisualStyleBackColor = true;
			this->button_num9->Click += gcnew System::EventHandler(this, &Hauptfenster::button_num9_Click);
			// 
			// button_calc
			// 
			this->button_calc->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_calc->Location = System::Drawing::Point(500, 432);
			this->button_calc->Name = L"button_calc";
			this->button_calc->Size = System::Drawing::Size(60, 60);
			this->button_calc->TabIndex = 20;
			this->button_calc->Text = L"=";
			this->button_calc->UseVisualStyleBackColor = true;
			this->button_calc->Click += gcnew System::EventHandler(this, &Hauptfenster::button_calc_Click);
			// 
			// textBox_InOut
			// 
			this->textBox_InOut->Location = System::Drawing::Point(12, 458);
			this->textBox_InOut->Name = L"textBox_InOut";
			this->textBox_InOut->Size = System::Drawing::Size(258, 20);
			this->textBox_InOut->TabIndex = 21;
			this->textBox_InOut->Text = L"0";
			this->textBox_InOut->TextChanged += gcnew System::EventHandler(this, &Hauptfenster::textBox_InOut_TextChanged);
			// 
			// button_add
			// 
			this->button_add->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_add->Location = System::Drawing::Point(500, 366);
			this->button_add->Name = L"button_add";
			this->button_add->Size = System::Drawing::Size(60, 60);
			this->button_add->TabIndex = 22;
			this->button_add->Text = L"+";
			this->button_add->UseVisualStyleBackColor = true;
			this->button_add->Click += gcnew System::EventHandler(this, &Hauptfenster::button_add_Click);
			// 
			// label_InOut
			// 
			this->label_InOut->AutoSize = true;
			this->label_InOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_InOut->Location = System::Drawing::Point(300, 175);
			this->label_InOut->Name = L"label_InOut";
			this->label_InOut->Size = System::Drawing::Size(0, 20);
			this->label_InOut->TabIndex = 23;
			// 
			// button_clear
			// 
			this->button_clear->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_clear->Location = System::Drawing::Point(302, 432);
			this->button_clear->Name = L"button_clear";
			this->button_clear->Size = System::Drawing::Size(60, 60);
			this->button_clear->TabIndex = 24;
			this->button_clear->Text = L"C";
			this->button_clear->UseVisualStyleBackColor = true;
			this->button_clear->Click += gcnew System::EventHandler(this, &Hauptfenster::button_clear_Click);
			// 
			// button_sub
			// 
			this->button_sub->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_sub->Location = System::Drawing::Point(500, 300);
			this->button_sub->Name = L"button_sub";
			this->button_sub->Size = System::Drawing::Size(60, 60);
			this->button_sub->TabIndex = 25;
			this->button_sub->Text = L"-";
			this->button_sub->UseVisualStyleBackColor = true;
			this->button_sub->Click += gcnew System::EventHandler(this, &Hauptfenster::button_sub_Click);
			// 
			// button_mul
			// 
			this->button_mul->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_mul->Location = System::Drawing::Point(500, 234);
			this->button_mul->Name = L"button_mul";
			this->button_mul->Size = System::Drawing::Size(60, 60);
			this->button_mul->TabIndex = 26;
			this->button_mul->Text = L"*";
			this->button_mul->UseVisualStyleBackColor = true;
			this->button_mul->Click += gcnew System::EventHandler(this, &Hauptfenster::button_mul_Click);
			// 
			// button_div
			// 
			this->button_div->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_div->Location = System::Drawing::Point(500, 168);
			this->button_div->Name = L"button_div";
			this->button_div->Size = System::Drawing::Size(60, 60);
			this->button_div->TabIndex = 27;
			this->button_div->Text = L"/";
			this->button_div->UseVisualStyleBackColor = true;
			this->button_div->Click += gcnew System::EventHandler(this, &Hauptfenster::button_div_Click);
			// 
			// button_dot
			// 
			this->button_dot->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_dot->Location = System::Drawing::Point(434, 432);
			this->button_dot->Name = L"button_dot";
			this->button_dot->Size = System::Drawing::Size(60, 60);
			this->button_dot->TabIndex = 28;
			this->button_dot->Text = L".";
			this->button_dot->UseVisualStyleBackColor = true;
			this->button_dot->Click += gcnew System::EventHandler(this, &Hauptfenster::button_dot_Click);
			// 
			// Hauptfenster
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(762, 644);
			this->Controls->Add(this->button_dot);
			this->Controls->Add(this->button_div);
			this->Controls->Add(this->button_mul);
			this->Controls->Add(this->button_sub);
			this->Controls->Add(this->button_clear);
			this->Controls->Add(this->label_InOut);
			this->Controls->Add(this->button_add);
			this->Controls->Add(this->textBox_InOut);
			this->Controls->Add(this->button_calc);
			this->Controls->Add(this->button_num9);
			this->Controls->Add(this->button_num8);
			this->Controls->Add(this->button_num7);
			this->Controls->Add(this->button_num6);
			this->Controls->Add(this->button_num5);
			this->Controls->Add(this->button_num4);
			this->Controls->Add(this->button_num0);
			this->Controls->Add(this->button_num3);
			this->Controls->Add(this->button_num2);
			this->Controls->Add(this->button_num1);
			this->Controls->Add(this->label_Fehlermeldung);
			this->Controls->Add(this->label_Summe);
			this->Controls->Add(this->label_Beschreibung_Ergebnis_Summe);
			this->Controls->Add(this->button_ZahlenAddieren);
			this->Controls->Add(this->label_Zahl2);
			this->Controls->Add(this->label_Zahl1);
			this->Controls->Add(this->textBox_Zahl2);
			this->Controls->Add(this->textBox_Zahl1);
			this->Controls->Add(this->label_Ueberschrift);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Hauptfenster";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Taschenrechner";
			this->Load += gcnew System::EventHandler(this, &Hauptfenster::Hauptfenster_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void button_ZahlenAddieren_Click(System::Object^  sender, System::EventArgs^  e)
	{
		// Beide Zahlen aus den Textboxen lesen
		String^ zahl1_text = textBox_Zahl1->Text;
		String^ zahl2_text = textBox_Zahl2->Text;


		//if ((zahl1_text != "") && (zahl2_text != ""))
		//{

		// Versuche den nachfolgenden Block auszuführen
		try
		{
			label_Fehlermeldung->Text = "";

			// die ZahlenTexte in Zahlen umwandlen (Typkonvertierung: String^ nach double)
			double zahl1 = double::Parse(zahl1_text);
			double zahl2 = double::Parse(zahl2_text);


			// Ergebnis der Addition berechnen
			double ergbnisSumme = zahl1 + zahl2;


			// Zahl Ergebnis in Ergbnistext konvertieren (Typkonvertierung: double nach String^)
			String^ textSumme = ergbnisSumme.ToString();


			// das Ergebnis in der GUI anzeigen
			label_Summe->ForeColor = Color::Black;
			label_Summe->Text = textSumme;
		}
		// es ist zu einem Fehler gekommen -> Fehler abzufangen / Fehler behandeln
		catch(Exception^ ausnahme)
		{
			label_Summe->ForeColor = Color::Red;
			label_Summe->Text = "Zahlen eingeben!";
			//label_Fehlermeldung->Text = "Zahlen eingeben!";
			label_Fehlermeldung->Text = ausnahme->Message;
		}
	}


private: System::Void Hauptfenster_Load(System::Object^  sender, System::EventArgs^  e) {


	label_Fehlermeldung->Text = "";
	button_add->Hide();
	button_sub->Hide();
	button_mul->Hide();
	button_div->Hide();
	button_calc->Hide();

}


private: System::Void textBox_InOut_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	textBox_InOut->Text = "halloo";
}

private: System::Void button_clear_Click(System::Object^  sender, System::EventArgs^  e)
{
	label_InOut->Text = "";
	button_add->Hide();
	button_sub->Hide();
	button_mul->Hide();
	button_div->Hide();
	button_calc->Hide();
	button_dot->Hide();
}
private: System::Void button_num0_Click(System::Object^  sender, System::EventArgs^  e)
{
	label_InOut->Text += "0";

}
private: System::Void button_num1_Click(System::Object^  sender, System::EventArgs^  e)
{
	label_InOut->Text += "1";
	checkForOperation();
}
private: System::Void button_num2_Click(System::Object^  sender, System::EventArgs^  e)
{
	label_InOut->Text += "2";
	checkForOperation();
}
private: System::Void button_num3_Click(System::Object^  sender, System::EventArgs^  e)
{
	label_InOut->Text += "3";
	checkForOperation();
}
private: System::Void button_num4_Click(System::Object^  sender, System::EventArgs^  e)
{
	label_InOut->Text += "4";
	checkForOperation();
}
private: System::Void button_num5_Click(System::Object^  sender, System::EventArgs^  e)
{
	label_InOut->Text += "5";
	checkForOperation();
}
private: System::Void button_num6_Click(System::Object^  sender, System::EventArgs^  e)
{
	label_InOut->Text += "6";
	checkForOperation();
}
private: System::Void button_num7_Click(System::Object^  sender, System::EventArgs^  e)
{
	label_InOut->Text += "7";
	checkForOperation();
}
private: System::Void button_num8_Click(System::Object^  sender, System::EventArgs^  e)
{
	label_InOut->Text += "8";
	checkForOperation();
}
private: System::Void button_num9_Click(System::Object^  sender, System::EventArgs^  e)
{
	label_InOut->Text += "9";
	checkForOperation();
}
private: System::Void button_add_Click(System::Object^  sender, System::EventArgs^  e)
{
	label_InOut->Text += "+";
	button_add->Hide();
	button_sub->Hide();
	button_mul->Hide();
	button_div->Hide();
}
 private: System::Void button_sub_Click(System::Object^  sender, System::EventArgs^  e)
 {
	 label_InOut->Text += "-";
	 button_add->Hide();
	 button_sub->Hide();
	 button_mul->Hide();
	 button_div->Hide();
	 button_calc->Hide();
 }
private: System::Void button_mul_Click(System::Object^  sender, System::EventArgs^  e)
{
	label_InOut->Text += "*";
	button_add->Hide();
	button_sub->Hide();
	button_mul->Hide();
	button_div->Hide();
}
 private: System::Void button_div_Click(System::Object^  sender, System::EventArgs^  e)
 {
	 label_InOut->Text += "/";
	 button_add->Hide();
	 button_sub->Hide();
	 button_mul->Hide();
	 button_div->Hide();
 }

private: System::Void button_dot_Click(System::Object^  sender, System::EventArgs^  e)
{
	label_InOut->Text += ".";
}



private: System::Void button_calc_Click(System::Object^  sender, System::EventArgs^  e)
{

	char usedOperation = char(0);

	String^ TempString = label_InOut->Text;
	
	
	int IndexSign = TempString->IndexOf('-');
	
	label_InOut->Text = IndexSign.ToString();


	if (TempString->IndexOf('+') != -1)
	{
		usedOperation = '+';

	}
	else if (TempString->IndexOf('-') != -1)
	{
		usedOperation = '-';
	}
	else if (TempString->IndexOf('*') != -1)
	{
		usedOperation = '*';
	}
	else if (TempString->IndexOf('/') != -1)
	{
		usedOperation = '/';
	}
	else
	{
		// TODO bla bla
	}
	
	array<String^> ^StringArray = TempString->Split('+', '-', '*', '/');
	String^ stringNumber1 = StringArray[0];
	String^ stringNumber2 = StringArray[1];

	double number1 = double::Parse(stringNumber1);
	double number2 = double::Parse(stringNumber2);

	double result = 0.0;

	switch (usedOperation)
	{
	case '+': result = number1 + number2;  break;
	case '-': result = number1 - number2;  break;
	case '*': result = number1 * number2;  break;
	case '/': result = number1 / number2;  break;
	default: result = 0; break;
	}

	label_InOut->Text = result.ToString();
}



		 void checkForOperation()
		 {
			 if (label_InOut->Text->Contains("+") ||
				 label_InOut->Text->Contains("-") ||
				 label_InOut->Text->Contains("*") ||
				 label_InOut->Text->Contains("/"))
			 {
				 button_add->Hide();
				 button_sub->Hide();
				 button_mul->Hide();
				 button_div->Hide();
				 button_calc->Show();
			 }
			 else
			 {
				 button_add->Show();
				 button_sub->Show();
				 button_mul->Show();
				 button_div->Show();
			 }
		 }


};
}
