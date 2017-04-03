#pragma once

namespace nowyFilman {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;



	


	/// <summary>
	/// Summary for okno
	/// </summary>
	public ref class okno : public System::Windows::Forms::Form
	{
	public:
		okno(void)
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
		~okno()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl;
	protected:
	private: System::Windows::Forms::TabPage^  tab_sprzedaz;
	private: System::Windows::Forms::Button^  bt_S_szukaj;
	private: System::Windows::Forms::TabPage^  tab_filmy;
	private: System::Windows::Forms::TabPage^  tab_kontrahent;
	private: System::Windows::Forms::DataGridView^  dgw_Sprzedaz;
	private: System::Windows::Forms::TextBox^  txt_S_szukaj;

			 //konfiguracja mysql
	private: String^ konfigruacja = L"datasource=db4free.net; port=3306;username=admin2142;password=admin1234;database=baza2142";
	//private: String^ konfigruacja = L"datasource=localhost; port=3306;username=root;password=1234;database=baza";
	private: System::Windows::Forms::TextBox^  txt_S_nazwisko;


	private: System::Windows::Forms::TextBox^  txt_S_imie;

	private: System::Windows::Forms::TextBox^  txt_S_tytul;

	private: System::Windows::Forms::Button^  bt_S_usun;
	private: System::Windows::Forms::Button^  bt_S_modyfikuj;

	private: System::Windows::Forms::Button^  bt_S_dodaj;

	private: System::Windows::Forms::TextBox^  txt_S_wartosc;
	private: System::Windows::Forms::TextBox^  txt_S_dni;
	private: System::Windows::Forms::Label^  lbl_S_wartosc;
	private: System::Windows::Forms::Label^  lbl_S_dni;
	private: System::Windows::Forms::Label^  lbl_S_nazwisko;
	private: System::Windows::Forms::Label^  lbl_S_imie;
	private: System::Windows::Forms::Label^  lbl_S_tytul;
	private: System::Windows::Forms::Label^  lbl_F_ilosc;
	private: System::Windows::Forms::TextBox^  txt_F_ilosc;
	private: System::Windows::Forms::Label^  lbl_F_ogrWiek;
	private: System::Windows::Forms::Label^  lbl_F_cena;
	private: System::Windows::Forms::Label^  lbl_F_gatunek;
	private: System::Windows::Forms::Label^  lbl_F_rezyser;
	private: System::Windows::Forms::Label^  lbl_F_tytul;
	private: System::Windows::Forms::TextBox^  txt_F_ogrWiek;

	private: System::Windows::Forms::TextBox^  txt_F_cena;

	private: System::Windows::Forms::TextBox^  txt_F_gatunek;

	private: System::Windows::Forms::TextBox^  txt_F_rezyser;

	private: System::Windows::Forms::TextBox^  txt_F_tytul;

	private: System::Windows::Forms::Button^  bt_F_usun;

	private: System::Windows::Forms::Button^  bt_F_modyfikuj;

	private: System::Windows::Forms::Button^  bt_F_dodaj;

	private: System::Windows::Forms::DataGridView^  dgw_Film;

	private: System::Windows::Forms::TextBox^  txt_F_szukaj;
	private: System::Windows::Forms::Button^  bt_F_szukaj;
	private: System::Windows::Forms::Label^  lbl_K_miasto;

	private: System::Windows::Forms::Label^  lbl_K_adres;

	private: System::Windows::Forms::Label^  lbl_K_nazwisko;

	private: System::Windows::Forms::Label^  lbl_K_imie;
	private: System::Windows::Forms::Label^  lbl_K_wiek;
	private: System::Windows::Forms::TextBox^  txt_K_miasto;



	private: System::Windows::Forms::TextBox^  txt_K_adres;

	private: System::Windows::Forms::TextBox^  txt_K_nazwisko;

	private: System::Windows::Forms::TextBox^  txt_K_imie;
	private: System::Windows::Forms::TextBox^  txt_K_wiek;
	private: System::Windows::Forms::Button^  bt_K_usun;



	private: System::Windows::Forms::Button^  bt_K_modyfikuj;

	private: System::Windows::Forms::Button^  bt_K_dodaj;
private: System::Windows::Forms::DataGridView^  dgw_kontrahent;


	private: System::Windows::Forms::TextBox^  txt_K_szukaj;
	private: System::Windows::Forms::Button^  bt_K_szukaj;
private: System::Windows::Forms::DataGridView^  dgw_FS;
private: System::Windows::Forms::DataGridView^  dgw_KS;
private: System::Windows::Forms::TextBox^  txt_FS_szukaj;
private: System::Windows::Forms::TextBox^  txt_KS_szukaj;
private: System::Windows::Forms::Button^  bt_FS_szukaj;
private: System::Windows::Forms::Button^  bt_KS_szukaj;
private: System::Windows::Forms::Button^  bt_przelicz;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::TextBox^  txt_rabat;
private: System::Windows::Forms::PictureBox^  pictureBox1;
private: System::Windows::Forms::Label^  label2;

private: System::ComponentModel::IContainer^  components;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(okno::typeid));
			this->tabControl = (gcnew System::Windows::Forms::TabControl());
			this->tab_sprzedaz = (gcnew System::Windows::Forms::TabPage());
			this->bt_przelicz = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_rabat = (gcnew System::Windows::Forms::TextBox());
			this->txt_FS_szukaj = (gcnew System::Windows::Forms::TextBox());
			this->txt_KS_szukaj = (gcnew System::Windows::Forms::TextBox());
			this->bt_FS_szukaj = (gcnew System::Windows::Forms::Button());
			this->bt_KS_szukaj = (gcnew System::Windows::Forms::Button());
			this->dgw_FS = (gcnew System::Windows::Forms::DataGridView());
			this->dgw_KS = (gcnew System::Windows::Forms::DataGridView());
			this->lbl_S_wartosc = (gcnew System::Windows::Forms::Label());
			this->lbl_S_dni = (gcnew System::Windows::Forms::Label());
			this->lbl_S_nazwisko = (gcnew System::Windows::Forms::Label());
			this->lbl_S_imie = (gcnew System::Windows::Forms::Label());
			this->lbl_S_tytul = (gcnew System::Windows::Forms::Label());
			this->txt_S_wartosc = (gcnew System::Windows::Forms::TextBox());
			this->txt_S_dni = (gcnew System::Windows::Forms::TextBox());
			this->txt_S_nazwisko = (gcnew System::Windows::Forms::TextBox());
			this->txt_S_imie = (gcnew System::Windows::Forms::TextBox());
			this->txt_S_tytul = (gcnew System::Windows::Forms::TextBox());
			this->bt_S_usun = (gcnew System::Windows::Forms::Button());
			this->bt_S_modyfikuj = (gcnew System::Windows::Forms::Button());
			this->bt_S_dodaj = (gcnew System::Windows::Forms::Button());
			this->dgw_Sprzedaz = (gcnew System::Windows::Forms::DataGridView());
			this->txt_S_szukaj = (gcnew System::Windows::Forms::TextBox());
			this->bt_S_szukaj = (gcnew System::Windows::Forms::Button());
			this->tab_filmy = (gcnew System::Windows::Forms::TabPage());
			this->lbl_F_ilosc = (gcnew System::Windows::Forms::Label());
			this->txt_F_ilosc = (gcnew System::Windows::Forms::TextBox());
			this->lbl_F_ogrWiek = (gcnew System::Windows::Forms::Label());
			this->lbl_F_cena = (gcnew System::Windows::Forms::Label());
			this->lbl_F_gatunek = (gcnew System::Windows::Forms::Label());
			this->lbl_F_rezyser = (gcnew System::Windows::Forms::Label());
			this->lbl_F_tytul = (gcnew System::Windows::Forms::Label());
			this->txt_F_ogrWiek = (gcnew System::Windows::Forms::TextBox());
			this->txt_F_cena = (gcnew System::Windows::Forms::TextBox());
			this->txt_F_gatunek = (gcnew System::Windows::Forms::TextBox());
			this->txt_F_rezyser = (gcnew System::Windows::Forms::TextBox());
			this->txt_F_tytul = (gcnew System::Windows::Forms::TextBox());
			this->bt_F_usun = (gcnew System::Windows::Forms::Button());
			this->bt_F_modyfikuj = (gcnew System::Windows::Forms::Button());
			this->bt_F_dodaj = (gcnew System::Windows::Forms::Button());
			this->dgw_Film = (gcnew System::Windows::Forms::DataGridView());
			this->txt_F_szukaj = (gcnew System::Windows::Forms::TextBox());
			this->bt_F_szukaj = (gcnew System::Windows::Forms::Button());
			this->tab_kontrahent = (gcnew System::Windows::Forms::TabPage());
			this->lbl_K_miasto = (gcnew System::Windows::Forms::Label());
			this->lbl_K_adres = (gcnew System::Windows::Forms::Label());
			this->lbl_K_nazwisko = (gcnew System::Windows::Forms::Label());
			this->lbl_K_imie = (gcnew System::Windows::Forms::Label());
			this->lbl_K_wiek = (gcnew System::Windows::Forms::Label());
			this->txt_K_miasto = (gcnew System::Windows::Forms::TextBox());
			this->txt_K_adres = (gcnew System::Windows::Forms::TextBox());
			this->txt_K_nazwisko = (gcnew System::Windows::Forms::TextBox());
			this->txt_K_imie = (gcnew System::Windows::Forms::TextBox());
			this->txt_K_wiek = (gcnew System::Windows::Forms::TextBox());
			this->bt_K_usun = (gcnew System::Windows::Forms::Button());
			this->bt_K_modyfikuj = (gcnew System::Windows::Forms::Button());
			this->bt_K_dodaj = (gcnew System::Windows::Forms::Button());
			this->dgw_kontrahent = (gcnew System::Windows::Forms::DataGridView());
			this->txt_K_szukaj = (gcnew System::Windows::Forms::TextBox());
			this->bt_K_szukaj = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabControl->SuspendLayout();
			this->tab_sprzedaz->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgw_FS))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgw_KS))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgw_Sprzedaz))->BeginInit();
			this->tab_filmy->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgw_Film))->BeginInit();
			this->tab_kontrahent->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgw_kontrahent))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl
			// 
			this->tabControl->Controls->Add(this->tab_sprzedaz);
			this->tabControl->Controls->Add(this->tab_filmy);
			this->tabControl->Controls->Add(this->tab_kontrahent);
			this->tabControl->Location = System::Drawing::Point(12, 43);
			this->tabControl->Name = L"tabControl";
			this->tabControl->SelectedIndex = 0;
			this->tabControl->Size = System::Drawing::Size(1004, 513);
			this->tabControl->TabIndex = 0;
			// 
			// tab_sprzedaz
			// 
			this->tab_sprzedaz->Controls->Add(this->bt_przelicz);
			this->tab_sprzedaz->Controls->Add(this->label1);
			this->tab_sprzedaz->Controls->Add(this->txt_rabat);
			this->tab_sprzedaz->Controls->Add(this->txt_FS_szukaj);
			this->tab_sprzedaz->Controls->Add(this->txt_KS_szukaj);
			this->tab_sprzedaz->Controls->Add(this->bt_FS_szukaj);
			this->tab_sprzedaz->Controls->Add(this->bt_KS_szukaj);
			this->tab_sprzedaz->Controls->Add(this->dgw_FS);
			this->tab_sprzedaz->Controls->Add(this->dgw_KS);
			this->tab_sprzedaz->Controls->Add(this->lbl_S_wartosc);
			this->tab_sprzedaz->Controls->Add(this->lbl_S_dni);
			this->tab_sprzedaz->Controls->Add(this->lbl_S_nazwisko);
			this->tab_sprzedaz->Controls->Add(this->lbl_S_imie);
			this->tab_sprzedaz->Controls->Add(this->lbl_S_tytul);
			this->tab_sprzedaz->Controls->Add(this->txt_S_wartosc);
			this->tab_sprzedaz->Controls->Add(this->txt_S_dni);
			this->tab_sprzedaz->Controls->Add(this->txt_S_nazwisko);
			this->tab_sprzedaz->Controls->Add(this->txt_S_imie);
			this->tab_sprzedaz->Controls->Add(this->txt_S_tytul);
			this->tab_sprzedaz->Controls->Add(this->bt_S_usun);
			this->tab_sprzedaz->Controls->Add(this->bt_S_modyfikuj);
			this->tab_sprzedaz->Controls->Add(this->bt_S_dodaj);
			this->tab_sprzedaz->Controls->Add(this->dgw_Sprzedaz);
			this->tab_sprzedaz->Controls->Add(this->txt_S_szukaj);
			this->tab_sprzedaz->Controls->Add(this->bt_S_szukaj);
			this->tab_sprzedaz->Location = System::Drawing::Point(4, 22);
			this->tab_sprzedaz->Name = L"tab_sprzedaz";
			this->tab_sprzedaz->Padding = System::Windows::Forms::Padding(3);
			this->tab_sprzedaz->Size = System::Drawing::Size(996, 487);
			this->tab_sprzedaz->TabIndex = 0;
			this->tab_sprzedaz->Text = L"Sprzeda¿";
			this->tab_sprzedaz->UseVisualStyleBackColor = true;
			// 
			// bt_przelicz
			// 
			this->bt_przelicz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->bt_przelicz->Location = System::Drawing::Point(93, 297);
			this->bt_przelicz->Name = L"bt_przelicz";
			this->bt_przelicz->Size = System::Drawing::Size(217, 34);
			this->bt_przelicz->TabIndex = 24;
			this->bt_przelicz->Text = L"Przelicz";
			this->bt_przelicz->UseVisualStyleBackColor = true;
			this->bt_przelicz->Click += gcnew System::EventHandler(this, &okno::bt_przelicz_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 274);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 13);
			this->label1->TabIndex = 23;
			this->label1->Text = L"Rabat %";
			// 
			// txt_rabat
			// 
			this->txt_rabat->Location = System::Drawing::Point(93, 271);
			this->txt_rabat->Name = L"txt_rabat";
			this->txt_rabat->Size = System::Drawing::Size(217, 20);
			this->txt_rabat->TabIndex = 22;
			this->txt_rabat->Text = L"0";
			// 
			// txt_FS_szukaj
			// 
			this->txt_FS_szukaj->Location = System::Drawing::Point(373, 327);
			this->txt_FS_szukaj->Name = L"txt_FS_szukaj";
			this->txt_FS_szukaj->Size = System::Drawing::Size(177, 20);
			this->txt_FS_szukaj->TabIndex = 21;
			// 
			// txt_KS_szukaj
			// 
			this->txt_KS_szukaj->Location = System::Drawing::Point(373, 168);
			this->txt_KS_szukaj->Name = L"txt_KS_szukaj";
			this->txt_KS_szukaj->Size = System::Drawing::Size(177, 20);
			this->txt_KS_szukaj->TabIndex = 20;
			// 
			// bt_FS_szukaj
			// 
			this->bt_FS_szukaj->Location = System::Drawing::Point(572, 325);
			this->bt_FS_szukaj->Name = L"bt_FS_szukaj";
			this->bt_FS_szukaj->Size = System::Drawing::Size(75, 23);
			this->bt_FS_szukaj->TabIndex = 19;
			this->bt_FS_szukaj->Text = L"Szukaj";
			this->bt_FS_szukaj->UseVisualStyleBackColor = true;
			this->bt_FS_szukaj->Click += gcnew System::EventHandler(this, &okno::bt_FS_szukaj_Click);
			// 
			// bt_KS_szukaj
			// 
			this->bt_KS_szukaj->Location = System::Drawing::Point(572, 166);
			this->bt_KS_szukaj->Name = L"bt_KS_szukaj";
			this->bt_KS_szukaj->Size = System::Drawing::Size(75, 23);
			this->bt_KS_szukaj->TabIndex = 18;
			this->bt_KS_szukaj->Text = L"Szukaj";
			this->bt_KS_szukaj->UseVisualStyleBackColor = true;
			this->bt_KS_szukaj->Click += gcnew System::EventHandler(this, &okno::bt_KS_szukaj_Click);
			// 
			// dgw_FS
			// 
			this->dgw_FS->AllowUserToAddRows = false;
			this->dgw_FS->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgw_FS->Location = System::Drawing::Point(346, 356);
			this->dgw_FS->Name = L"dgw_FS";
			this->dgw_FS->Size = System::Drawing::Size(644, 125);
			this->dgw_FS->TabIndex = 17;
			this->dgw_FS->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &okno::dgw_FS_CellClick);
			// 
			// dgw_KS
			// 
			this->dgw_KS->AllowUserToAddRows = false;
			this->dgw_KS->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgw_KS->Location = System::Drawing::Point(346, 196);
			this->dgw_KS->Name = L"dgw_KS";
			this->dgw_KS->Size = System::Drawing::Size(644, 120);
			this->dgw_KS->TabIndex = 16;
			this->dgw_KS->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &okno::dgw_KS_CellClick);
			// 
			// lbl_S_wartosc
			// 
			this->lbl_S_wartosc->AutoSize = true;
			this->lbl_S_wartosc->Location = System::Drawing::Point(21, 248);
			this->lbl_S_wartosc->Name = L"lbl_S_wartosc";
			this->lbl_S_wartosc->Size = System::Drawing::Size(47, 13);
			this->lbl_S_wartosc->TabIndex = 15;
			this->lbl_S_wartosc->Text = L"Wartoœæ";
			// 
			// lbl_S_dni
			// 
			this->lbl_S_dni->AutoSize = true;
			this->lbl_S_dni->Location = System::Drawing::Point(21, 222);
			this->lbl_S_dni->Name = L"lbl_S_dni";
			this->lbl_S_dni->Size = System::Drawing::Size(46, 13);
			this->lbl_S_dni->TabIndex = 14;
			this->lbl_S_dni->Text = L"Iloœæ dni";
			// 
			// lbl_S_nazwisko
			// 
			this->lbl_S_nazwisko->AutoSize = true;
			this->lbl_S_nazwisko->Location = System::Drawing::Point(21, 196);
			this->lbl_S_nazwisko->Name = L"lbl_S_nazwisko";
			this->lbl_S_nazwisko->Size = System::Drawing::Size(53, 13);
			this->lbl_S_nazwisko->TabIndex = 13;
			this->lbl_S_nazwisko->Text = L"Nazwisko";
			// 
			// lbl_S_imie
			// 
			this->lbl_S_imie->AutoSize = true;
			this->lbl_S_imie->Location = System::Drawing::Point(21, 170);
			this->lbl_S_imie->Name = L"lbl_S_imie";
			this->lbl_S_imie->Size = System::Drawing::Size(26, 13);
			this->lbl_S_imie->TabIndex = 12;
			this->lbl_S_imie->Text = L"Imie";
			// 
			// lbl_S_tytul
			// 
			this->lbl_S_tytul->AutoSize = true;
			this->lbl_S_tytul->Location = System::Drawing::Point(21, 144);
			this->lbl_S_tytul->Name = L"lbl_S_tytul";
			this->lbl_S_tytul->Size = System::Drawing::Size(30, 13);
			this->lbl_S_tytul->TabIndex = 11;
			this->lbl_S_tytul->Text = L"Tytul";
			// 
			// txt_S_wartosc
			// 
			this->txt_S_wartosc->Location = System::Drawing::Point(93, 245);
			this->txt_S_wartosc->Name = L"txt_S_wartosc";
			this->txt_S_wartosc->Size = System::Drawing::Size(217, 20);
			this->txt_S_wartosc->TabIndex = 10;
			this->txt_S_wartosc->Text = L"0";
			// 
			// txt_S_dni
			// 
			this->txt_S_dni->Location = System::Drawing::Point(93, 219);
			this->txt_S_dni->Name = L"txt_S_dni";
			this->txt_S_dni->Size = System::Drawing::Size(217, 20);
			this->txt_S_dni->TabIndex = 9;
			this->txt_S_dni->Text = L"0";
			// 
			// txt_S_nazwisko
			// 
			this->txt_S_nazwisko->Location = System::Drawing::Point(93, 193);
			this->txt_S_nazwisko->Name = L"txt_S_nazwisko";
			this->txt_S_nazwisko->Size = System::Drawing::Size(217, 20);
			this->txt_S_nazwisko->TabIndex = 8;
			// 
			// txt_S_imie
			// 
			this->txt_S_imie->Location = System::Drawing::Point(93, 167);
			this->txt_S_imie->Name = L"txt_S_imie";
			this->txt_S_imie->Size = System::Drawing::Size(217, 20);
			this->txt_S_imie->TabIndex = 7;
			// 
			// txt_S_tytul
			// 
			this->txt_S_tytul->Location = System::Drawing::Point(93, 141);
			this->txt_S_tytul->Name = L"txt_S_tytul";
			this->txt_S_tytul->Size = System::Drawing::Size(217, 20);
			this->txt_S_tytul->TabIndex = 6;
			// 
			// bt_S_usun
			// 
			this->bt_S_usun->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->bt_S_usun->Location = System::Drawing::Point(226, 360);
			this->bt_S_usun->Name = L"bt_S_usun";
			this->bt_S_usun->Size = System::Drawing::Size(101, 100);
			this->bt_S_usun->TabIndex = 5;
			this->bt_S_usun->Text = L"Usuñ";
			this->bt_S_usun->UseVisualStyleBackColor = true;
			this->bt_S_usun->Click += gcnew System::EventHandler(this, &okno::bt_S_usun_Click);
			// 
			// bt_S_modyfikuj
			// 
			this->bt_S_modyfikuj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->bt_S_modyfikuj->Location = System::Drawing::Point(119, 360);
			this->bt_S_modyfikuj->Name = L"bt_S_modyfikuj";
			this->bt_S_modyfikuj->Size = System::Drawing::Size(101, 100);
			this->bt_S_modyfikuj->TabIndex = 4;
			this->bt_S_modyfikuj->Text = L"Modyfikuj";
			this->bt_S_modyfikuj->UseVisualStyleBackColor = true;
			this->bt_S_modyfikuj->Click += gcnew System::EventHandler(this, &okno::bt_S_modyfikuj_Click);
			// 
			// bt_S_dodaj
			// 
			this->bt_S_dodaj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->bt_S_dodaj->Location = System::Drawing::Point(12, 360);
			this->bt_S_dodaj->Name = L"bt_S_dodaj";
			this->bt_S_dodaj->Size = System::Drawing::Size(101, 100);
			this->bt_S_dodaj->TabIndex = 3;
			this->bt_S_dodaj->Text = L"Dodaj";
			this->bt_S_dodaj->UseVisualStyleBackColor = true;
			this->bt_S_dodaj->Click += gcnew System::EventHandler(this, &okno::bt_S_dodaj_Click);
			// 
			// dgw_Sprzedaz
			// 
			this->dgw_Sprzedaz->AllowUserToAddRows = false;
			this->dgw_Sprzedaz->AllowUserToOrderColumns = true;
			this->dgw_Sprzedaz->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgw_Sprzedaz->Location = System::Drawing::Point(346, 6);
			this->dgw_Sprzedaz->Name = L"dgw_Sprzedaz";
			this->dgw_Sprzedaz->Size = System::Drawing::Size(644, 151);
			this->dgw_Sprzedaz->TabIndex = 2;
			this->dgw_Sprzedaz->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &okno::dgw_Sprzedaz_CellClick);
			// 
			// txt_S_szukaj
			// 
			this->txt_S_szukaj->Location = System::Drawing::Point(24, 35);
			this->txt_S_szukaj->Name = L"txt_S_szukaj";
			this->txt_S_szukaj->Size = System::Drawing::Size(303, 20);
			this->txt_S_szukaj->TabIndex = 1;
			// 
			// bt_S_szukaj
			// 
			this->bt_S_szukaj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->bt_S_szukaj->Location = System::Drawing::Point(36, 61);
			this->bt_S_szukaj->Name = L"bt_S_szukaj";
			this->bt_S_szukaj->Size = System::Drawing::Size(274, 38);
			this->bt_S_szukaj->TabIndex = 0;
			this->bt_S_szukaj->Text = L"Szukaj";
			this->bt_S_szukaj->UseVisualStyleBackColor = true;
			this->bt_S_szukaj->Click += gcnew System::EventHandler(this, &okno::bt_S_szukaj_Click);
			// 
			// tab_filmy
			// 
			this->tab_filmy->Controls->Add(this->lbl_F_ilosc);
			this->tab_filmy->Controls->Add(this->txt_F_ilosc);
			this->tab_filmy->Controls->Add(this->lbl_F_ogrWiek);
			this->tab_filmy->Controls->Add(this->lbl_F_cena);
			this->tab_filmy->Controls->Add(this->lbl_F_gatunek);
			this->tab_filmy->Controls->Add(this->lbl_F_rezyser);
			this->tab_filmy->Controls->Add(this->lbl_F_tytul);
			this->tab_filmy->Controls->Add(this->txt_F_ogrWiek);
			this->tab_filmy->Controls->Add(this->txt_F_cena);
			this->tab_filmy->Controls->Add(this->txt_F_gatunek);
			this->tab_filmy->Controls->Add(this->txt_F_rezyser);
			this->tab_filmy->Controls->Add(this->txt_F_tytul);
			this->tab_filmy->Controls->Add(this->bt_F_usun);
			this->tab_filmy->Controls->Add(this->bt_F_modyfikuj);
			this->tab_filmy->Controls->Add(this->bt_F_dodaj);
			this->tab_filmy->Controls->Add(this->dgw_Film);
			this->tab_filmy->Controls->Add(this->txt_F_szukaj);
			this->tab_filmy->Controls->Add(this->bt_F_szukaj);
			this->tab_filmy->Location = System::Drawing::Point(4, 22);
			this->tab_filmy->Name = L"tab_filmy";
			this->tab_filmy->Padding = System::Windows::Forms::Padding(3);
			this->tab_filmy->Size = System::Drawing::Size(996, 487);
			this->tab_filmy->TabIndex = 1;
			this->tab_filmy->Text = L"Film";
			this->tab_filmy->UseVisualStyleBackColor = true;
			// 
			// lbl_F_ilosc
			// 
			this->lbl_F_ilosc->AutoSize = true;
			this->lbl_F_ilosc->Location = System::Drawing::Point(21, 275);
			this->lbl_F_ilosc->Name = L"lbl_F_ilosc";
			this->lbl_F_ilosc->Size = System::Drawing::Size(29, 13);
			this->lbl_F_ilosc->TabIndex = 33;
			this->lbl_F_ilosc->Text = L"Iloœæ";
			// 
			// txt_F_ilosc
			// 
			this->txt_F_ilosc->Location = System::Drawing::Point(93, 272);
			this->txt_F_ilosc->Name = L"txt_F_ilosc";
			this->txt_F_ilosc->Size = System::Drawing::Size(217, 20);
			this->txt_F_ilosc->TabIndex = 32;
			// 
			// lbl_F_ogrWiek
			// 
			this->lbl_F_ogrWiek->AutoSize = true;
			this->lbl_F_ogrWiek->Location = System::Drawing::Point(21, 248);
			this->lbl_F_ogrWiek->Name = L"lbl_F_ogrWiek";
			this->lbl_F_ogrWiek->Size = System::Drawing::Size(55, 13);
			this->lbl_F_ogrWiek->TabIndex = 31;
			this->lbl_F_ogrWiek->Text = L"Ogr. wiek.";
			// 
			// lbl_F_cena
			// 
			this->lbl_F_cena->AutoSize = true;
			this->lbl_F_cena->Location = System::Drawing::Point(21, 222);
			this->lbl_F_cena->Name = L"lbl_F_cena";
			this->lbl_F_cena->Size = System::Drawing::Size(32, 13);
			this->lbl_F_cena->TabIndex = 30;
			this->lbl_F_cena->Text = L"Cena";
			// 
			// lbl_F_gatunek
			// 
			this->lbl_F_gatunek->AutoSize = true;
			this->lbl_F_gatunek->Location = System::Drawing::Point(21, 196);
			this->lbl_F_gatunek->Name = L"lbl_F_gatunek";
			this->lbl_F_gatunek->Size = System::Drawing::Size(48, 13);
			this->lbl_F_gatunek->TabIndex = 29;
			this->lbl_F_gatunek->Text = L"Gatunek";
			// 
			// lbl_F_rezyser
			// 
			this->lbl_F_rezyser->AutoSize = true;
			this->lbl_F_rezyser->Location = System::Drawing::Point(21, 170);
			this->lbl_F_rezyser->Name = L"lbl_F_rezyser";
			this->lbl_F_rezyser->Size = System::Drawing::Size(45, 13);
			this->lbl_F_rezyser->TabIndex = 28;
			this->lbl_F_rezyser->Text = L"Re¿yser";
			// 
			// lbl_F_tytul
			// 
			this->lbl_F_tytul->AutoSize = true;
			this->lbl_F_tytul->Location = System::Drawing::Point(21, 144);
			this->lbl_F_tytul->Name = L"lbl_F_tytul";
			this->lbl_F_tytul->Size = System::Drawing::Size(30, 13);
			this->lbl_F_tytul->TabIndex = 27;
			this->lbl_F_tytul->Text = L"Tytul";
			// 
			// txt_F_ogrWiek
			// 
			this->txt_F_ogrWiek->Location = System::Drawing::Point(93, 245);
			this->txt_F_ogrWiek->Name = L"txt_F_ogrWiek";
			this->txt_F_ogrWiek->Size = System::Drawing::Size(217, 20);
			this->txt_F_ogrWiek->TabIndex = 26;
			// 
			// txt_F_cena
			// 
			this->txt_F_cena->Location = System::Drawing::Point(93, 219);
			this->txt_F_cena->Name = L"txt_F_cena";
			this->txt_F_cena->Size = System::Drawing::Size(217, 20);
			this->txt_F_cena->TabIndex = 25;
			// 
			// txt_F_gatunek
			// 
			this->txt_F_gatunek->Location = System::Drawing::Point(93, 193);
			this->txt_F_gatunek->Name = L"txt_F_gatunek";
			this->txt_F_gatunek->Size = System::Drawing::Size(217, 20);
			this->txt_F_gatunek->TabIndex = 24;
			// 
			// txt_F_rezyser
			// 
			this->txt_F_rezyser->Location = System::Drawing::Point(93, 167);
			this->txt_F_rezyser->Name = L"txt_F_rezyser";
			this->txt_F_rezyser->Size = System::Drawing::Size(217, 20);
			this->txt_F_rezyser->TabIndex = 23;
			// 
			// txt_F_tytul
			// 
			this->txt_F_tytul->Location = System::Drawing::Point(93, 141);
			this->txt_F_tytul->Name = L"txt_F_tytul";
			this->txt_F_tytul->Size = System::Drawing::Size(217, 20);
			this->txt_F_tytul->TabIndex = 22;
			// 
			// bt_F_usun
			// 
			this->bt_F_usun->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->bt_F_usun->Location = System::Drawing::Point(226, 360);
			this->bt_F_usun->Name = L"bt_F_usun";
			this->bt_F_usun->Size = System::Drawing::Size(101, 100);
			this->bt_F_usun->TabIndex = 21;
			this->bt_F_usun->Text = L"Usuñ";
			this->bt_F_usun->UseVisualStyleBackColor = true;
			this->bt_F_usun->Click += gcnew System::EventHandler(this, &okno::bt_F_usun_Click);
			// 
			// bt_F_modyfikuj
			// 
			this->bt_F_modyfikuj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->bt_F_modyfikuj->Location = System::Drawing::Point(119, 360);
			this->bt_F_modyfikuj->Name = L"bt_F_modyfikuj";
			this->bt_F_modyfikuj->Size = System::Drawing::Size(101, 100);
			this->bt_F_modyfikuj->TabIndex = 20;
			this->bt_F_modyfikuj->Text = L"Modyfikuj";
			this->bt_F_modyfikuj->UseVisualStyleBackColor = true;
			this->bt_F_modyfikuj->Click += gcnew System::EventHandler(this, &okno::bt_F_modyfikuj_Click);
			// 
			// bt_F_dodaj
			// 
			this->bt_F_dodaj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->bt_F_dodaj->Location = System::Drawing::Point(12, 360);
			this->bt_F_dodaj->Name = L"bt_F_dodaj";
			this->bt_F_dodaj->Size = System::Drawing::Size(101, 100);
			this->bt_F_dodaj->TabIndex = 19;
			this->bt_F_dodaj->Text = L"Dodaj";
			this->bt_F_dodaj->UseVisualStyleBackColor = true;
			this->bt_F_dodaj->Click += gcnew System::EventHandler(this, &okno::bt_F_dodaj_Click);
			// 
			// dgw_Film
			// 
			this->dgw_Film->AllowUserToAddRows = false;
			this->dgw_Film->AllowUserToOrderColumns = true;
			this->dgw_Film->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgw_Film->Location = System::Drawing::Point(343, 6);
			this->dgw_Film->Name = L"dgw_Film";
			this->dgw_Film->Size = System::Drawing::Size(644, 463);
			this->dgw_Film->TabIndex = 18;
			this->dgw_Film->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &okno::dgw_Film_CellClick);
			// 
			// txt_F_szukaj
			// 
			this->txt_F_szukaj->Location = System::Drawing::Point(24, 35);
			this->txt_F_szukaj->Name = L"txt_F_szukaj";
			this->txt_F_szukaj->Size = System::Drawing::Size(303, 20);
			this->txt_F_szukaj->TabIndex = 17;
			// 
			// bt_F_szukaj
			// 
			this->bt_F_szukaj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->bt_F_szukaj->Location = System::Drawing::Point(36, 61);
			this->bt_F_szukaj->Name = L"bt_F_szukaj";
			this->bt_F_szukaj->Size = System::Drawing::Size(274, 38);
			this->bt_F_szukaj->TabIndex = 16;
			this->bt_F_szukaj->Text = L"Szukaj";
			this->bt_F_szukaj->UseVisualStyleBackColor = true;
			this->bt_F_szukaj->Click += gcnew System::EventHandler(this, &okno::bt_F_szukaj_Click);
			// 
			// tab_kontrahent
			// 
			this->tab_kontrahent->Controls->Add(this->lbl_K_miasto);
			this->tab_kontrahent->Controls->Add(this->lbl_K_adres);
			this->tab_kontrahent->Controls->Add(this->lbl_K_nazwisko);
			this->tab_kontrahent->Controls->Add(this->lbl_K_imie);
			this->tab_kontrahent->Controls->Add(this->lbl_K_wiek);
			this->tab_kontrahent->Controls->Add(this->txt_K_miasto);
			this->tab_kontrahent->Controls->Add(this->txt_K_adres);
			this->tab_kontrahent->Controls->Add(this->txt_K_nazwisko);
			this->tab_kontrahent->Controls->Add(this->txt_K_imie);
			this->tab_kontrahent->Controls->Add(this->txt_K_wiek);
			this->tab_kontrahent->Controls->Add(this->bt_K_usun);
			this->tab_kontrahent->Controls->Add(this->bt_K_modyfikuj);
			this->tab_kontrahent->Controls->Add(this->bt_K_dodaj);
			this->tab_kontrahent->Controls->Add(this->dgw_kontrahent);
			this->tab_kontrahent->Controls->Add(this->txt_K_szukaj);
			this->tab_kontrahent->Controls->Add(this->bt_K_szukaj);
			this->tab_kontrahent->Location = System::Drawing::Point(4, 22);
			this->tab_kontrahent->Name = L"tab_kontrahent";
			this->tab_kontrahent->Padding = System::Windows::Forms::Padding(3);
			this->tab_kontrahent->Size = System::Drawing::Size(996, 487);
			this->tab_kontrahent->TabIndex = 2;
			this->tab_kontrahent->Text = L"Kontrahent";
			this->tab_kontrahent->UseVisualStyleBackColor = true;
			// 
			// lbl_K_miasto
			// 
			this->lbl_K_miasto->AutoSize = true;
			this->lbl_K_miasto->Location = System::Drawing::Point(21, 219);
			this->lbl_K_miasto->Name = L"lbl_K_miasto";
			this->lbl_K_miasto->Size = System::Drawing::Size(38, 13);
			this->lbl_K_miasto->TabIndex = 31;
			this->lbl_K_miasto->Text = L"Miasto";
			// 
			// lbl_K_adres
			// 
			this->lbl_K_adres->AutoSize = true;
			this->lbl_K_adres->Location = System::Drawing::Point(21, 193);
			this->lbl_K_adres->Name = L"lbl_K_adres";
			this->lbl_K_adres->Size = System::Drawing::Size(34, 13);
			this->lbl_K_adres->TabIndex = 30;
			this->lbl_K_adres->Text = L"Adres";
			// 
			// lbl_K_nazwisko
			// 
			this->lbl_K_nazwisko->AutoSize = true;
			this->lbl_K_nazwisko->Location = System::Drawing::Point(21, 167);
			this->lbl_K_nazwisko->Name = L"lbl_K_nazwisko";
			this->lbl_K_nazwisko->Size = System::Drawing::Size(53, 13);
			this->lbl_K_nazwisko->TabIndex = 29;
			this->lbl_K_nazwisko->Text = L"Nazwisko";
			// 
			// lbl_K_imie
			// 
			this->lbl_K_imie->AutoSize = true;
			this->lbl_K_imie->Location = System::Drawing::Point(21, 144);
			this->lbl_K_imie->Name = L"lbl_K_imie";
			this->lbl_K_imie->Size = System::Drawing::Size(26, 13);
			this->lbl_K_imie->TabIndex = 28;
			this->lbl_K_imie->Text = L"Imie";
			// 
			// lbl_K_wiek
			// 
			this->lbl_K_wiek->AutoSize = true;
			this->lbl_K_wiek->Location = System::Drawing::Point(21, 245);
			this->lbl_K_wiek->Name = L"lbl_K_wiek";
			this->lbl_K_wiek->Size = System::Drawing::Size(32, 13);
			this->lbl_K_wiek->TabIndex = 27;
			this->lbl_K_wiek->Text = L"Wiek";
			// 
			// txt_K_miasto
			// 
			this->txt_K_miasto->Location = System::Drawing::Point(93, 219);
			this->txt_K_miasto->Name = L"txt_K_miasto";
			this->txt_K_miasto->Size = System::Drawing::Size(217, 20);
			this->txt_K_miasto->TabIndex = 26;
			// 
			// txt_K_adres
			// 
			this->txt_K_adres->Location = System::Drawing::Point(93, 193);
			this->txt_K_adres->Name = L"txt_K_adres";
			this->txt_K_adres->Size = System::Drawing::Size(217, 20);
			this->txt_K_adres->TabIndex = 25;
			// 
			// txt_K_nazwisko
			// 
			this->txt_K_nazwisko->Location = System::Drawing::Point(93, 167);
			this->txt_K_nazwisko->Name = L"txt_K_nazwisko";
			this->txt_K_nazwisko->Size = System::Drawing::Size(217, 20);
			this->txt_K_nazwisko->TabIndex = 24;
			// 
			// txt_K_imie
			// 
			this->txt_K_imie->Location = System::Drawing::Point(93, 141);
			this->txt_K_imie->Name = L"txt_K_imie";
			this->txt_K_imie->Size = System::Drawing::Size(217, 20);
			this->txt_K_imie->TabIndex = 23;
			// 
			// txt_K_wiek
			// 
			this->txt_K_wiek->Location = System::Drawing::Point(93, 245);
			this->txt_K_wiek->Name = L"txt_K_wiek";
			this->txt_K_wiek->Size = System::Drawing::Size(217, 20);
			this->txt_K_wiek->TabIndex = 22;
			// 
			// bt_K_usun
			// 
			this->bt_K_usun->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->bt_K_usun->Location = System::Drawing::Point(226, 360);
			this->bt_K_usun->Name = L"bt_K_usun";
			this->bt_K_usun->Size = System::Drawing::Size(101, 100);
			this->bt_K_usun->TabIndex = 21;
			this->bt_K_usun->Text = L"Usuñ";
			this->bt_K_usun->UseVisualStyleBackColor = true;
			this->bt_K_usun->Click += gcnew System::EventHandler(this, &okno::bt_K_usun_Click);
			// 
			// bt_K_modyfikuj
			// 
			this->bt_K_modyfikuj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->bt_K_modyfikuj->Location = System::Drawing::Point(119, 360);
			this->bt_K_modyfikuj->Name = L"bt_K_modyfikuj";
			this->bt_K_modyfikuj->Size = System::Drawing::Size(101, 100);
			this->bt_K_modyfikuj->TabIndex = 20;
			this->bt_K_modyfikuj->Text = L"Modyfikuj";
			this->bt_K_modyfikuj->UseVisualStyleBackColor = true;
			this->bt_K_modyfikuj->Click += gcnew System::EventHandler(this, &okno::bt_K_modyfikuj_Click);
			// 
			// bt_K_dodaj
			// 
			this->bt_K_dodaj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->bt_K_dodaj->Location = System::Drawing::Point(12, 360);
			this->bt_K_dodaj->Name = L"bt_K_dodaj";
			this->bt_K_dodaj->Size = System::Drawing::Size(101, 100);
			this->bt_K_dodaj->TabIndex = 19;
			this->bt_K_dodaj->Text = L"Dodaj";
			this->bt_K_dodaj->UseVisualStyleBackColor = true;
			this->bt_K_dodaj->Click += gcnew System::EventHandler(this, &okno::bt_K_dodaj_Click);
			// 
			// dgw_kontrahent
			// 
			this->dgw_kontrahent->AllowUserToAddRows = false;
			this->dgw_kontrahent->AllowUserToOrderColumns = true;
			this->dgw_kontrahent->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgw_kontrahent->Location = System::Drawing::Point(343, 6);
			this->dgw_kontrahent->Name = L"dgw_kontrahent";
			this->dgw_kontrahent->Size = System::Drawing::Size(644, 462);
			this->dgw_kontrahent->TabIndex = 18;
			this->dgw_kontrahent->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &okno::dgw_kontrahent_CellClick);
			// 
			// txt_K_szukaj
			// 
			this->txt_K_szukaj->Location = System::Drawing::Point(24, 35);
			this->txt_K_szukaj->Name = L"txt_K_szukaj";
			this->txt_K_szukaj->Size = System::Drawing::Size(303, 20);
			this->txt_K_szukaj->TabIndex = 17;
			// 
			// bt_K_szukaj
			// 
			this->bt_K_szukaj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->bt_K_szukaj->Location = System::Drawing::Point(36, 61);
			this->bt_K_szukaj->Name = L"bt_K_szukaj";
			this->bt_K_szukaj->Size = System::Drawing::Size(274, 38);
			this->bt_K_szukaj->TabIndex = 16;
			this->bt_K_szukaj->Text = L"Szukaj";
			this->bt_K_szukaj->UseVisualStyleBackColor = true;
			this->bt_K_szukaj->Click += gcnew System::EventHandler(this, &okno::bt_K_szukaj_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(347, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(74, 58);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 40, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(427, 6);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(183, 55);
			this->label2->TabIndex = 2;
			this->label2->Text = L"filMan";
			// 
			// okno
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1022, 559);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->tabControl);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"okno";
			this->Text = L"filMan";
			this->Load += gcnew System::EventHandler(this, &okno::okno_Load);
			this->tabControl->ResumeLayout(false);
			this->tab_sprzedaz->ResumeLayout(false);
			this->tab_sprzedaz->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgw_FS))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgw_KS))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgw_Sprzedaz))->EndInit();
			this->tab_filmy->ResumeLayout(false);
			this->tab_filmy->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgw_Film))->EndInit();
			this->tab_kontrahent->ResumeLayout(false);
			this->tab_kontrahent->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgw_kontrahent))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//deklaracja zmiennych
		int id_rekordu = 0; //wybranie rekordu na ktorym pracuje - zmienna dla wszystkich
		int id_klienta = 0;
		int id_filmu = 0;

		private: void dodajDOTabeli(String ^zmienna)
		{
			
			MySqlConnection^ laczBaze = gcnew MySqlConnection(konfigruacja);
			MySqlCommand^ polecenie = laczBaze->CreateCommand();
			MySqlTransaction^ transakcja;
			laczBaze->Open();
			transakcja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);

			polecenie->Connection = laczBaze;
			polecenie->Transaction = transakcja;

			try
			{
				
				polecenie->CommandText = zmienna;
				polecenie->ExecuteNonQuery();
				transakcja->Commit();
			}
			catch (Exception^ komunikat)
			{
				MessageBox::Show(komunikat->Message);
				transakcja->Rollback();
			}
			laczBaze->Close();
		}

	private: System::Void okno_Load(System::Object^  sender, System::EventArgs^  e) {

		//wlaczanie programu
		//laczenie z baza2142 mysql
		MySqlConnection^ laczBaze = gcnew MySqlConnection(konfigruacja);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("", laczBaze);
		pokaz_pola("SELECT sprzedaz.sprzedaz_id AS 'ID', filmy.tytul AS 'Tytu³', klienci.imie AS 'Imie', klienci.nazwisko AS 'Nazwisko', sprzedaz.ilosc_dni AS 'Iloœæ dni', sprzedaz.wartosc AS 'Wartoœæ' FROM baza2142.filmy INNER JOIN baza2142.klienci, baza2142.sprzedaz WHERE sprzedaz.film_id = filmy.film_id AND sprzedaz.klient_id = klienci.klient_id; ", dgw_Sprzedaz);
		pokaz_pola("SELECT film_id AS 'ID', tytul AS 'Tytu³', rezyser AS 'Re¿yser', gatunek AS 'Gatunek', cena AS 'Cena', ogr_wiek AS 'Ogr. Wiek.', ilosc AS 'Iloœæ' FROM baza2142.filmy;", dgw_Film);
		pokaz_pola("SELECT film_id AS 'ID', tytul AS 'Tytu³', rezyser AS 'Re¿yser', gatunek AS 'Gatunek', cena AS 'Cena', ogr_wiek AS 'Ogr. Wiek.', ilosc AS 'Iloœæ' FROM baza2142.filmy;", dgw_FS);
		pokaz_pola("SELECT klient_id AS 'ID', imie AS 'Imie', nazwisko AS 'Nazwisko', adres AS 'Adres', miasto AS 'Miasto', wiek AS 'Wiek' FROM baza2142.klienci;", dgw_kontrahent);
		pokaz_pola("SELECT klient_id AS 'ID', imie AS 'Imie', nazwisko AS 'Nazwisko', adres AS 'Adres', miasto AS 'Miasto', wiek AS 'Wiek' FROM baza2142.klienci;", dgw_KS);
		Visible_BT_S(false); //ukrywanie przyciskow sprzedazy
		Visible_BT_F(false); //ukrywanie przyciskow filmow
		Visible_BT_K(false); //ukrywanie przyciskow klientow
	}

	//pokazuje/ukrywa przyciski sprzedazy
	private: void Visible_BT_S(bool zmienna)
	{
		bt_S_modyfikuj->Visible = zmienna;
		bt_S_usun->Visible = zmienna;
		bt_przelicz->Visible = zmienna;
	}

			 //pokazuje/ukrywa przyciski filmy
	private: void Visible_BT_F(bool zmienna)
	{
		bt_F_modyfikuj->Visible = zmienna;
		bt_F_usun->Visible = zmienna;
	}


			 //pokazuje/ukrywa przyciski klienci
	private: void Visible_BT_K(bool zmienna)
	{
		bt_K_modyfikuj->Visible = zmienna;
		bt_K_usun->Visible = zmienna;
	}



			 //funkcja przycisku szukaj
	private: void szukaj(String^ pSzukaj, DataGridView^ dgw){
		MySqlConnection^ laczBaze = gcnew MySqlConnection(konfigruacja);
		MySqlCommand^ zapytanie = gcnew MySqlCommand(pSzukaj, laczBaze);

		try {
			MySqlDataAdapter^ moja = gcnew MySqlDataAdapter();
			moja->SelectCommand = zapytanie;
			DataTable^ tabela = gcnew DataTable();
			moja->Fill(tabela);

			BindingSource^ zrodlo = gcnew BindingSource();
			zrodlo->DataSource = tabela;
			dgw->DataSource = zrodlo;
			laczBaze->Close();
		}
		catch (Exception^ komunikat)
		{
			MessageBox::Show(komunikat->Message);
		}
	}

			 //dgw jest wybranym DataGridView gdzie maj¹ byæ wyœwietlane dane
			 //wyswietla pola tabeli podanej w parametrze
			 private: void pokaz_pola(String^ polecenie, DataGridView^ dgw)
			 {
				 MySqlConnection^ laczBaze = gcnew MySqlConnection(konfigruacja);
				 MySqlCommand^ zapytanie = gcnew MySqlCommand(polecenie, laczBaze);

				 try {
					 MySqlDataAdapter^ moja = gcnew MySqlDataAdapter();
					 moja->SelectCommand = zapytanie;
					 DataTable^ tabela = gcnew DataTable();
					 moja->Fill(tabela);

					 BindingSource^ zrodlo = gcnew BindingSource();
					 zrodlo->DataSource = tabela;
					 dgw->DataSource = zrodlo;
					 laczBaze->Close();
				 }
				 catch (Exception^ komunikat)
				 {
					 MessageBox::Show(komunikat->Message);
				 }
			 }

	//funkcja modyfikuj¹ca wybrane pole
	private: void modyfikujPole(String^ komenda)
	{
		MySqlConnection^ laczBaze = gcnew MySqlConnection(konfigruacja);
		MySqlCommand^ polecenie = laczBaze->CreateCommand();
		MySqlTransaction^ transakcja;
		laczBaze->Open();
		transakcja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);

		polecenie->Connection = laczBaze;
		polecenie->Transaction = transakcja;

		try
		{
			polecenie->CommandText = komenda;
			polecenie->ExecuteNonQuery();
			transakcja->Commit();
		}
		catch (Exception^ komunikat)
		{
			MessageBox::Show(komunikat->Message);
			transakcja->Rollback();
		}
		laczBaze->Close();
	}


			 //funkcja usuwajaca wybrany wiersz
			 private: void usunPola(String^ komenda)
			 {
				 MySqlConnection^ laczBaze = gcnew MySqlConnection(konfigruacja);
				 MySqlCommand^ polecenie = laczBaze->CreateCommand();
				 MySqlTransaction^ transakcja;
				 laczBaze->Open();
				 transakcja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);

				 polecenie->Connection = laczBaze;
				 polecenie->Transaction = transakcja;

				 try
				 {
					 if (MessageBox::Show("Czy na pewno chcesz usun¹æ?", "Uwaga!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
					 {
						 polecenie->CommandText = komenda;
						 polecenie->ExecuteNonQuery();
						 transakcja->Commit();
					 }
				 }
				 catch (Exception^ komunikat)
				 {
					 MessageBox::Show(komunikat->Message);
					 transakcja->Rollback();
				 }
				 laczBaze->Close();
			 }

					  //############################################## SPRZEDAZ #################################################################

			 //dzialanie przycisku szukaj
private: System::Void bt_S_szukaj_Click(System::Object^  sender, System::EventArgs^  e) {
	szukaj("SELECT sprzedaz.sprzedaz_id AS ID, filmy.tytul AS Tytu³, klienci.imie AS Imie, klienci.nazwisko AS Nazwisko, sprzedaz.ilosc_dni AS 'Iloœæ dni', sprzedaz.wartosc AS Wartoœæ FROM baza2142.filmy INNER JOIN baza2142.klienci, baza2142.sprzedaz WHERE sprzedaz.film_id = filmy.film_id AND sprzedaz.klient_id = klienci.klient_id AND CONCAT(filmy.tytul, ' ', klienci.imie, ' ', klienci.nazwisko, ' ', sprzedaz.ilosc_dni, ' ', sprzedaz.wartosc) LIKE '%" + txt_S_szukaj->Text + "%';", dgw_Sprzedaz);
}


		 //pobieranie danych z datagridview SPRZEDAZ do pol tekstowych
private: System::Void dgw_Sprzedaz_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

	Visible_BT_S(true);

	if (e->RowIndex >= 0)  //zapobiega pobieraniu blednych informacji przy uzyciu sortowania
	{
		id_rekordu = Convert::ToInt32(dgw_Sprzedaz->Rows[e->RowIndex]->Cells[0]->Value); // id rekordu na ktorym pracuje
		txt_S_tytul->Text = dgw_Sprzedaz->Rows[e->RowIndex]->Cells[1]->Value->ToString(); //tytul
		txt_S_imie->Text = dgw_Sprzedaz->Rows[e->RowIndex]->Cells[2]->Value->ToString(); //imie
		txt_S_nazwisko->Text = dgw_Sprzedaz->Rows[e->RowIndex]->Cells[3]->Value->ToString(); //nazwisko
		txt_S_dni->Text = dgw_Sprzedaz->Rows[e->RowIndex]->Cells[4]->Value->ToString(); //ilosc dni
		txt_S_wartosc->Text = dgw_Sprzedaz->Rows[e->RowIndex]->Cells[5]->Value->ToString(); //wartosc
	}
}
		 //dodawanie sprzedazy do bazy
	private: System::Void bt_S_dodaj_Click(System::Object^  sender, System::EventArgs^  e)
	{
		int ogr_wiek = Convert::ToInt32(txt_F_ogrWiek->Text);   //konwersja ze stringa do inta 
		int wiek = Convert::ToInt32(txt_K_wiek->Text);		//konwersja ze stringa do inta
		//sprawdzanie czy pola sa uzupelnione
		if (txt_S_tytul->Text->Length < 3 || txt_S_imie->Text->Length < 3 || txt_S_nazwisko->Text->Length < 3 || txt_S_dni->Text->Length < 1 || txt_S_wartosc->Text->Length < 1)
		{
			MessageBox::Show("uzupe³nij dane!");
		}
		else if (wiek < ogr_wiek)
		{
			MessageBox::Show("Klient nie spe³nia ograniczeñ wiekowych!");
		}
		else
		{
			int dni = Convert::ToInt32(txt_S_dni->Text);		//konwersja ze stringa do inta
			int wart = Convert::ToInt32(txt_S_wartosc->Text);   //konwersja ze stringa do inta
			

			dodajDOTabeli("INSERT INTO baza2142.sprzedaz SET ilosc_dni='" + dni + "', wartosc='" + wart + "', klient_id = '"+id_klienta+"', film_id = '"+id_filmu+"';");
		}
		pokaz_pola("SELECT sprzedaz.sprzedaz_id AS 'ID', filmy.tytul AS 'Tytu³', klienci.imie AS 'Imie', klienci.nazwisko AS 'Nazwisko', sprzedaz.ilosc_dni AS 'Iloœæ dni', sprzedaz.wartosc AS 'Wartoœæ' FROM baza2142.filmy INNER JOIN baza2142.klienci, baza2142.sprzedaz WHERE sprzedaz.film_id = filmy.film_id AND sprzedaz.klient_id = klienci.klient_id; ", dgw_Sprzedaz);
	}

			 //modyfikacja sprzedazy
private: System::Void bt_S_modyfikuj_Click(System::Object^  sender, System::EventArgs^  e) 
{
	int dni = Convert::ToInt32(txt_S_dni->Text);		//konwersja ze stringa do inta
	int wart = Convert::ToInt32(txt_S_wartosc->Text);   //konwersja ze stringa do inta

	if (txt_S_tytul->Text->Length < 3 || txt_S_imie->Text->Length < 3 || txt_S_nazwisko->Text->Length < 3 || txt_S_dni->Text->Length < 1 || txt_S_wartosc->Text->Length < 1)
	{
		MessageBox::Show("uzupe³nij dane!");
	}
	else
	{
		modyfikujPole("UPDATE baza2142.sprzedaz SET tytul='" + txt_S_tytul->Text + "', imie='" + txt_S_imie->Text + "', nazwisko='" + txt_S_nazwisko->Text + "', ilosc_dni='" + dni + "', wartosc='" + wart + "' WHERE sprzedaz_id = " + id_rekordu + ";");
	}
	pokaz_pola("SELECT sprzedaz.sprzedaz_id, filmy.tytul, klienci.imie, klienci.nazwisko, sprzedaz.ilosc_dni, sprzedaz.wartosc FROM baza2142.filmy INNER JOIN baza2142.klienci, baza2142.sprzedaz WHERE sprzedaz.film_id = filmy.film_id AND sprzedaz.klient_id = klienci.klient_id; ", dgw_Sprzedaz);
}

		 //usuniecie sprzedazy
private: System::Void bt_S_usun_Click(System::Object^  sender, System::EventArgs^  e) {

		int dni = Convert::ToInt32(txt_S_dni->Text);		//konwersja ze stringa do inta
		int wart = Convert::ToInt32(txt_S_wartosc->Text);   //konwersja ze stringa do inta

		usunPola("DELETE FROM baza2142.sprzedaz WHERE sprzedaz_id = " + id_rekordu + ";");
	
		txt_S_imie->Text = "";	//czyszczenie pól po usuniêciu
		txt_S_nazwisko->Text = "";
		txt_S_dni->Text = "";
		txt_S_tytul->Text = "";
		txt_S_wartosc->Text = "";
		pokaz_pola("SELECT sprzedaz.sprzedaz_id AS 'ID', filmy.tytul AS 'Tytu³', klienci.imie AS 'Imie', klienci.nazwisko AS 'Nazwisko', sprzedaz.ilosc_dni AS 'Iloœæ dni', sprzedaz.wartosc AS 'Wartoœæ' FROM baza2142.filmy INNER JOIN baza2142.klienci, baza2142.sprzedaz WHERE sprzedaz.film_id = filmy.film_id AND sprzedaz.klient_id = klienci.klient_id; ", dgw_Sprzedaz);
}


		 //############################################## FILMY #################################################################

		 //dzialanie przycisku szukaj
		 private: System::Void bt_F_szukaj_Click(System::Object^  sender, System::EventArgs^  e) {
			 szukaj("SELECT film_id AS 'ID', tytul AS 'Tytu³', rezyser AS 'Re¿yser', gatunek AS 'Gatunek', cena AS 'Cena', ogr_wiek AS 'Ogr. Wiek.', ilosc AS 'Iloœæ' FROM baza2142.filmy WHERE CONCAT(tytul, ' ', rezyser, ' ', gatunek, ' ', cena, ' ', ogr_wiek, ' ', ilosc) LIKE '%" + txt_F_szukaj->Text + "%';", dgw_Film);
		 }

		 //pobieranie danych z tabeli do pól tekstowych
	 private: System::Void dgw_Film_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 if (e->RowIndex >= 0)  //zapobiega pobieraniu blednych informacji przy uzyciu sortowania
		 {
			 id_rekordu = Convert::ToInt32(dgw_Film->Rows[e->RowIndex]->Cells[0]->Value); // id rekordu na ktorym pracuje
			 txt_F_tytul->Text = dgw_Film->Rows[e->RowIndex]->Cells[1]->Value->ToString(); //tytul
			 txt_F_rezyser->Text = dgw_Film->Rows[e->RowIndex]->Cells[2]->Value->ToString(); //rezyser
			 txt_F_gatunek->Text = dgw_Film->Rows[e->RowIndex]->Cells[3]->Value->ToString(); //gatunek
			 txt_F_cena->Text = dgw_Film->Rows[e->RowIndex]->Cells[4]->Value->ToString(); //cena
			 txt_F_ogrWiek->Text = dgw_Film->Rows[e->RowIndex]->Cells[5]->Value->ToString(); //ogr_wiek
	  	     txt_F_ilosc->Text = dgw_Film->Rows[e->RowIndex]->Cells[6]->Value->ToString(); //ilosc
		 }
		 Visible_BT_F(true);
	 }


		 //dodawanie filmu
private: System::Void bt_F_dodaj_Click(System::Object^  sender, System::EventArgs^  e) {

	int cena = Convert::ToDouble(txt_F_cena->Text);		//konwersja ze stringa do double
	int wiek = Convert::ToInt32(txt_F_ogrWiek->Text);   //konwersja ze stringa do inta
	int ilosc = Convert::ToInt32(txt_F_ilosc->Text);	//konwersja ze stringa do inta

	//sprawdzanie czy pola sa uzupelnione
	if (txt_F_tytul->Text->Length < 3 || txt_F_rezyser->Text->Length < 3 || txt_F_gatunek->Text->Length < 1 || txt_F_cena->Text->Length < 1 || txt_F_ogrWiek->Text->Length < 1 || txt_F_ilosc->Text->Length < 1)
	{
		MessageBox::Show("uzupe³nij dane!");
	}
	else
	{
		dodajDOTabeli("INSERT INTO baza2142.filmy SET tytul='" + txt_F_tytul->Text + "', rezyser='" + txt_F_rezyser->Text + "', gatunek='" + txt_F_gatunek->Text + "', cena='" + cena + "', ogr_wiek='" + wiek + "', ilosc='" + ilosc + "';");
	}
	pokaz_pola("SELECT film_id AS 'ID', tytul AS 'Tytu³', rezyser AS 'Re¿yser', gatunek AS 'Gatunek', cena AS 'Cena', ogr_wiek AS 'Ogr. Wiek.', ilosc AS 'Iloœæ' FROM baza2142.filmy;", dgw_Film);
}


		 //modyfikacja filmu
private: System::Void bt_F_modyfikuj_Click(System::Object^  sender, System::EventArgs^  e) {

	int cena = Convert::ToDouble(txt_F_cena->Text);		//konwersja ze stringa do double
	int wiek = Convert::ToInt32(txt_F_ogrWiek->Text);   //konwersja ze stringa do inta
	int ilosc = Convert::ToInt32(txt_F_ilosc->Text);	//konwersja ze stringa do inta

					//sprawdzanie czy pola sa uzupelnione
	if (txt_F_tytul->Text->Length < 3 || txt_F_rezyser->Text->Length < 3 || txt_F_gatunek->Text->Length < 1 || txt_F_cena->Text->Length < 1 || txt_F_ogrWiek->Text->Length < 1 || txt_F_ilosc->Text->Length < 1)
	{
		MessageBox::Show("uzupe³nij dane!");
	}
	else
	{
		modyfikujPole("UPDATE baza2142.filmy SET tytul='" + txt_F_tytul->Text + "', rezyser='" + txt_F_rezyser->Text + "', gatunek='" + txt_F_gatunek->Text + "', cena='" + cena + "', ogr_wiek='" + wiek + "', ilosc='" + ilosc + "' WHERE film_id = " + id_rekordu + " ;");
	}
	pokaz_pola("SELECT film_id AS 'ID', tytul AS 'Tytu³', rezyser AS 'Re¿yser', gatunek AS 'Gatunek', cena AS 'Cena', ogr_wiek AS 'Ogr. Wiek.', ilosc AS 'Iloœæ' FROM baza2142.filmy;", dgw_Film);
}


		 //usuwanie filmu
private: System::Void bt_F_usun_Click(System::Object^  sender, System::EventArgs^  e) {

	usunPola("DELETE FROM baza2142.filmy WHERE film_id = " + id_rekordu + ";");

	txt_F_tytul->Text = "";	//czyszczenie pól po usuniêciu
	txt_F_rezyser->Text = "";
	txt_F_gatunek->Text = "";
	txt_F_cena->Text = "";
	txt_F_ogrWiek->Text = "";
	txt_F_ilosc->Text = "";
	pokaz_pola("SELECT film_id AS 'ID', tytul AS 'Tytu³', rezyser AS 'Re¿yser', gatunek AS 'Gatunek', cena AS 'Cena', ogr_wiek AS 'Ogr. Wiek.', ilosc AS 'Iloœæ' FROM baza2142.filmy;", dgw_Film);
}


		 //############################################## KLIENCI #################################################################

private: System::Void bt_K_szukaj_Click(System::Object^  sender, System::EventArgs^  e) {
	szukaj("SELECT klient_id AS 'ID', imie AS 'Imie', nazwisko AS 'Nazwisko', adres AS 'Adres', miasto AS 'Miasto', wiek AS 'Wiek' FROM baza2142.klienci WHERE CONCAT(imie, ' ', nazwisko, ' ', adres, ' ', miasto, ' ', wiek) LIKE '%" + txt_K_szukaj->Text + "%';", dgw_kontrahent);
}


private: System::Void dgw_kontrahent_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	if (e->RowIndex >= 0)  //zapobiega pobieraniu blednych informacji przy uzyciu sortowania
	{
		id_rekordu = Convert::ToInt32(dgw_kontrahent->Rows[e->RowIndex]->Cells[0]->Value); // id rekordu na ktorym pracuje
		txt_K_imie->Text = dgw_kontrahent->Rows[e->RowIndex]->Cells[1]->Value->ToString(); //imie
		txt_K_nazwisko->Text = dgw_kontrahent->Rows[e->RowIndex]->Cells[2]->Value->ToString(); //nazwisko
		txt_K_adres->Text = dgw_kontrahent->Rows[e->RowIndex]->Cells[3]->Value->ToString(); //adres
		txt_K_miasto->Text = dgw_kontrahent->Rows[e->RowIndex]->Cells[4]->Value->ToString(); //miasto
		txt_K_wiek->Text = dgw_kontrahent->Rows[e->RowIndex]->Cells[5]->Value->ToString(); //wiek
	}
	Visible_BT_K(true);
}


		 //dodaj klienta
private: System::Void bt_K_dodaj_Click(System::Object^  sender, System::EventArgs^  e) {

	int wiek = Convert::ToInt32(txt_K_wiek->Text);		//konwersja ze stringa do inta

														//sprawdzanie czy pola sa uzupelnione
	if (txt_K_imie->Text->Length < 3 || txt_K_nazwisko->Text->Length < 3 || txt_K_adres->Text->Length < 1 || txt_K_miasto->Text->Length < 1 || txt_K_wiek->Text->Length < 1)
	{
		MessageBox::Show("uzupe³nij dane!");
	}
	else
	{
		dodajDOTabeli("INSERT INTO baza2142.klienci SET imie='" + txt_K_imie->Text + "', nazwisko='" + txt_K_nazwisko->Text + "', adres='" + txt_K_adres->Text + "', miasto='" + txt_K_miasto->Text + "', wiek= '"+wiek+"' ;");
	}
	pokaz_pola("SELECT klient_id AS 'ID', imie AS 'Imie', nazwisko AS 'Nazwisko', adres AS 'Adres', miasto AS 'Miasto', wiek AS 'Wiek' FROM baza2142.klienci;", dgw_kontrahent);
}

		 //modyfikuj pole klient
private: System::Void bt_K_modyfikuj_Click(System::Object^  sender, System::EventArgs^  e) {
	int wiek = Convert::ToInt32(txt_K_wiek->Text);		//konwersja ze stringa do inta

														//sprawdzanie czy pola sa uzupelnione
	if (txt_K_imie->Text->Length < 3 || txt_K_nazwisko->Text->Length < 3 || txt_K_adres->Text->Length < 1 || txt_K_miasto->Text->Length < 1 || txt_K_wiek->Text->Length < 1)
	{
		MessageBox::Show("uzupe³nij dane!");
	}
	else
	{
		modyfikujPole("UPDATE baza2142.klienci SET imie='" + txt_K_imie->Text + "', nazwisko='" + txt_K_nazwisko->Text + "', adres='" + txt_K_adres->Text + "', miasto='" + txt_K_miasto->Text + "', wiek= '" + wiek + "' WHERE klient_id = " + id_rekordu + " ;");
	}
	pokaz_pola("SELECT klient_id AS 'ID', imie AS 'Imie', nazwisko AS 'Nazwisko', adres AS 'Adres', miasto AS 'Miasto', wiek AS 'Wiek' FROM baza2142.klienci;", dgw_kontrahent);
}



private: System::Void bt_K_usun_Click(System::Object^  sender, System::EventArgs^  e) {

	usunPola("DELETE FROM baza2142.klienci WHERE klient_id = " + id_rekordu + ";");

	txt_K_imie->Text = "";	//czyszczenie pól po usuniêciu
	txt_K_nazwisko->Text = "";
	txt_K_adres->Text = "";
	txt_K_miasto->Text = "";
	txt_K_wiek->Text = "";
	pokaz_pola("SELECT klient_id AS 'ID', imie AS 'Imie', nazwisko AS 'Nazwisko', adres AS 'Adres', miasto AS 'Miasto', wiek AS 'Wiek' FROM baza2142.klienci;", dgw_kontrahent);
}

		 //nowe dgw szukaj
private: System::Void bt_FS_szukaj_Click(System::Object^  sender, System::EventArgs^  e) {
	szukaj("SELECT film_id AS 'ID', tytul AS 'Tytu³', rezyser AS 'Re¿yser', gatunek AS 'Gatunek', cena AS 'Cena', ogr_wiek AS 'Ogr. Wiek.', ilosc AS 'Iloœæ' FROM baza2142.filmy WHERE CONCAT(tytul, ' ', rezyser, ' ', gatunek, ' ', cena, ' ', ogr_wiek, ' ', ilosc) LIKE '%" + txt_FS_szukaj->Text + "%';", dgw_FS);
}



private: System::Void bt_KS_szukaj_Click(System::Object^  sender, System::EventArgs^  e) {
	szukaj("SELECT klient_id AS 'ID', imie AS 'Imie', nazwisko AS 'Nazwisko', adres AS 'Adres', miasto AS 'Miasto', wiek AS 'Wiek' FROM baza2142.klienci WHERE CONCAT(imie, ' ', nazwisko, ' ', adres, ' ', miasto, ' ', wiek) LIKE '%" + txt_KS_szukaj->Text + "%';", dgw_KS);
}



private: System::Void dgw_KS_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	Visible_BT_S(true); // pokazuje przyciski
	if (e->RowIndex >= 0)  //zapobiega pobieraniu blednych informacji przy uzyciu sortowania
	{
		id_klienta = Convert::ToInt32(dgw_KS->Rows[e->RowIndex]->Cells[0]->Value); // id rekordu na ktorym pracuje
		txt_S_imie->Text = dgw_KS->Rows[e->RowIndex]->Cells[1]->Value->ToString(); //imie
		txt_S_nazwisko->Text = dgw_KS->Rows[e->RowIndex]->Cells[2]->Value->ToString(); //nazwisko
		txt_K_wiek->Text = dgw_kontrahent->Rows[e->RowIndex]->Cells[5]->Value->ToString(); //wiek
	}
}


private: System::Void dgw_FS_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	Visible_BT_S(true); // pokazuje przyciski
	if (e->RowIndex >= 0)  //zapobiega pobieraniu blednych informacji przy uzyciu sortowania
	{
		id_filmu = Convert::ToInt32(dgw_FS->Rows[e->RowIndex]->Cells[0]->Value); // id rekordu na ktorym pracuje
		txt_S_tytul->Text = dgw_FS->Rows[e->RowIndex]->Cells[1]->Value->ToString(); //tytul
		txt_F_ogrWiek->Text = dgw_Film->Rows[e->RowIndex]->Cells[5]->Value->ToString(); //ogr_wiek
		txt_F_cena->Text = dgw_Film->Rows[e->RowIndex]->Cells[4]->Value->ToString(); //cena
	}
}
		 //przeliczanie wartosci / rabatu
private: System::Void bt_przelicz_Click(System::Object^  sender, System::EventArgs^  e) {
	int iloscDni = Convert::ToInt32(txt_S_dni->Text);
	double cena = Convert::ToDouble(txt_F_cena->Text);		//konwersja ze stringa do double
	double rabat = Convert::ToDouble(txt_rabat->Text);
	txt_S_wartosc->Text = Convert::ToString(iloscDni * cena * ((100-rabat)/100));
}
};
}
