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
			this->textBox_Zahl1->Location = System::Drawing::Point(42, 189);
			this->textBox_Zahl1->Name = L"textBox_Zahl1";
			this->textBox_Zahl1->Size = System::Drawing::Size(98, 20);
			this->textBox_Zahl1->TabIndex = 1;
			this->textBox_Zahl1->Text = L"0";
			// 
			// textBox_Zahl2
			// 
			this->textBox_Zahl2->Location = System::Drawing::Point(202, 189);
			this->textBox_Zahl2->Name = L"textBox_Zahl2";
			this->textBox_Zahl2->Size = System::Drawing::Size(98, 20);
			this->textBox_Zahl2->TabIndex = 2;
			this->textBox_Zahl2->Text = L"0";
			// 
			// label_Zahl1
			// 
			this->label_Zahl1->AutoSize = true;
			this->label_Zahl1->Location = System::Drawing::Point(39, 159);
			this->label_Zahl1->Name = L"label_Zahl1";
			this->label_Zahl1->Size = System::Drawing::Size(40, 13);
			this->label_Zahl1->TabIndex = 3;
			this->label_Zahl1->Text = L"Zahl 1:";
			// 
			// label_Zahl2
			// 
			this->label_Zahl2->AutoSize = true;
			this->label_Zahl2->Location = System::Drawing::Point(202, 158);
			this->label_Zahl2->Name = L"label_Zahl2";
			this->label_Zahl2->Size = System::Drawing::Size(40, 13);
			this->label_Zahl2->TabIndex = 4;
			this->label_Zahl2->Text = L"Zahl 2:";
			// 
			// button_ZahlenAddieren
			// 
			this->button_ZahlenAddieren->Location = System::Drawing::Point(354, 189);
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
			this->label_Beschreibung_Ergebnis_Summe->Location = System::Drawing::Point(492, 189);
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
			this->label_Summe->Location = System::Drawing::Point(578, 189);
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
			this->label_Fehlermeldung->Location = System::Drawing::Point(38, 100);
			this->label_Fehlermeldung->Name = L"label_Fehlermeldung";
			this->label_Fehlermeldung->Size = System::Drawing::Size(128, 20);
			this->label_Fehlermeldung->TabIndex = 8;
			this->label_Fehlermeldung->Text = L"Fehlermeldung";
			// 
			// Hauptfenster
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(762, 644);
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
}


};
}
