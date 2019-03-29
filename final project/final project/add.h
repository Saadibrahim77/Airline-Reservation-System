#pragma once
#include<string.h>
namespace finalproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Summary for add
	/// </summary>
	public ref class add : public System::Windows::Forms::Form
	{
	public:
		add(void)
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
		~add()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  nation;
	protected: 
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::ComboBox^  numtic;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::ComboBox^  class1;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::ComboBox^  to;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::ComboBox^  from;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  time2;
	private: System::Windows::Forms::ComboBox^  year2;
	private: System::Windows::Forms::ComboBox^  month2;
	private: System::Windows::Forms::ComboBox^  day2;
	private: System::Windows::Forms::TextBox^  time1;
	private: System::Windows::Forms::ComboBox^  year1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::ComboBox^  month1;
	private: System::Windows::Forms::ComboBox^  day1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  onther;
	private: System::Windows::Forms::RadioButton^  oneway;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::RadioButton^  female;
	private: System::Windows::Forms::TextBox^  tid;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  male;


	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  id;
	private: System::Windows::Forms::TextBox^  num;
	private: System::Windows::Forms::TextBox^  passport;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  save;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  lname;

	private: System::Windows::Forms::TextBox^  fname;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::RadioButton^  oneway1;
	private: System::Windows::Forms::RadioButton^  onther1;
	private: System::Windows::Forms::TextBox^  tprice;
	private: System::Windows::Forms::Label^  totalprice;
	private: System::Windows::Forms::Button^  button5;



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
			this->nation = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->tprice = (gcnew System::Windows::Forms::TextBox());
			this->totalprice = (gcnew System::Windows::Forms::Label());
			this->numtic = (gcnew System::Windows::Forms::ComboBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->class1 = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->to = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->from = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->time2 = (gcnew System::Windows::Forms::TextBox());
			this->year2 = (gcnew System::Windows::Forms::ComboBox());
			this->month2 = (gcnew System::Windows::Forms::ComboBox());
			this->day2 = (gcnew System::Windows::Forms::ComboBox());
			this->time1 = (gcnew System::Windows::Forms::TextBox());
			this->year1 = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->month1 = (gcnew System::Windows::Forms::ComboBox());
			this->day1 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->onther = (gcnew System::Windows::Forms::RadioButton());
			this->oneway = (gcnew System::Windows::Forms::RadioButton());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->female = (gcnew System::Windows::Forms::RadioButton());
			this->tid = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->male = (gcnew System::Windows::Forms::RadioButton());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->id = (gcnew System::Windows::Forms::TextBox());
			this->num = (gcnew System::Windows::Forms::TextBox());
			this->passport = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->save = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->lname = (gcnew System::Windows::Forms::TextBox());
			this->fname = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->oneway1 = (gcnew System::Windows::Forms::RadioButton());
			this->onther1 = (gcnew System::Windows::Forms::RadioButton());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// nation
			// 
			this->nation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->nation->Location = System::Drawing::Point(209, 371);
			this->nation->Multiline = true;
			this->nation->Name = L"nation";
			this->nation->Size = System::Drawing::Size(158, 26);
			this->nation->TabIndex = 6;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Control;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->groupBox4);
			this->panel2->Controls->Add(this->to);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->from);
			this->panel2->Controls->Add(this->groupBox3);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->groupBox2);
			this->panel2->Location = System::Drawing::Point(428, 25);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(377, 543);
			this->panel2->TabIndex = 4;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->tprice);
			this->groupBox4->Controls->Add(this->totalprice);
			this->groupBox4->Controls->Add(this->numtic);
			this->groupBox4->Controls->Add(this->label13);
			this->groupBox4->Controls->Add(this->class1);
			this->groupBox4->Controls->Add(this->label12);
			this->groupBox4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Wide Latin", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(9, 338);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(350, 189);
			this->groupBox4->TabIndex = 14;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Ticket";
			// 
			// tprice
			// 
			this->tprice->Font = (gcnew System::Drawing::Font(L"Wide Latin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tprice->Location = System::Drawing::Point(219, 140);
			this->tprice->Multiline = true;
			this->tprice->Name = L"tprice";
			this->tprice->Size = System::Drawing::Size(114, 29);
			this->tprice->TabIndex = 16;
			// 
			// totalprice
			// 
			this->totalprice->AutoSize = true;
			this->totalprice->Font = (gcnew System::Drawing::Font(L"Wide Latin", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->totalprice->Location = System::Drawing::Point(3, 151);
			this->totalprice->Name = L"totalprice";
			this->totalprice->Size = System::Drawing::Size(184, 18);
			this->totalprice->TabIndex = 15;
			this->totalprice->Text = L"Price Of Ticket";
			// 
			// numtic
			// 
			this->numtic->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->numtic->FormattingEnabled = true;
			this->numtic->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9", 
				L"10"});
			this->numtic->Location = System::Drawing::Point(250, 93);
			this->numtic->Name = L"numtic";
			this->numtic->Size = System::Drawing::Size(61, 28);
			this->numtic->TabIndex = 13;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Wide Latin", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(3, 96);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(218, 18);
			this->label13->TabIndex = 14;
			this->label13->Text = L"Number Of Ticket";
			// 
			// class1
			// 
			this->class1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->class1->FormattingEnabled = true;
			this->class1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"BussinessClass", L"FirstClass ", L"EconomyClass "});
			this->class1->Location = System::Drawing::Point(175, 48);
			this->class1->Name = L"class1";
			this->class1->Size = System::Drawing::Size(158, 28);
			this->class1->TabIndex = 12;
			//this->class1->SelectedIndexChanged += gcnew System::EventHandler(this, &add::class1_SelectedIndexChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Wide Latin", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(6, 48);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(72, 18);
			this->label12->TabIndex = 9;
			this->label12->Text = L"Class";
			// 
			// to
			// 
			this->to->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->to->FormattingEnabled = true;
			this->to->Items->AddRange(gcnew cli::array< System::Object^  >(20) {L"Egypt", L"Emirates", L"Saudi", L"Senegal", L"Kuwait", 
				L"Turkey", L"Jaban", L"China", L"USA", L"South america", L"North america", L"England", L"France", L"Belgium", L"Croatia", L"Switzerland", 
				L"Spain", L"Germany", L"Portugal", L"Argentina"});
			this->to->Location = System::Drawing::Point(201, 68);
			this->to->Name = L"to";
			this->to->Size = System::Drawing::Size(158, 28);
			this->to->TabIndex = 9;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Wide Latin", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(6, 66);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(132, 18);
			this->label8->TabIndex = 13;
			this->label8->Text = L"To Airport";
			// 
			// from
			// 
			this->from->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->from->FormattingEnabled = true;
			this->from->Items->AddRange(gcnew cli::array< System::Object^  >(20) {L"Egypt", L"Emirates", L"Saudi", L"Senegal", L"Kuwait", 
				L"Turkey", L"Jaban", L"China", L"USA", L"South america", L"North america", L"England", L"France", L"Belgium", L"Croatia", L"Switzerland", 
				L"Spain", L"Germany", L"Portugal", L"Argentina"});
			this->from->Location = System::Drawing::Point(201, 17);
			this->from->Name = L"from";
			this->from->Size = System::Drawing::Size(158, 28);
			this->from->TabIndex = 8;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button1);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->time2);
			this->groupBox3->Controls->Add(this->year2);
			this->groupBox3->Controls->Add(this->month2);
			this->groupBox3->Controls->Add(this->day2);
			this->groupBox3->Controls->Add(this->time1);
			this->groupBox3->Controls->Add(this->year1);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->month1);
			this->groupBox3->Controls->Add(this->day1);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Wide Latin", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(9, 169);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(353, 163);
			this->groupBox3->TabIndex = 11;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Date of Travel";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(400, 129);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 43);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Save Data";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Wide Latin", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(114, 88);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(136, 18);
			this->label10->TabIndex = 19;
			this->label10->Text = L"Back Time";
			this->label10->Visible = false;
			// 
			// time2
			// 
			this->time2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->time2->Location = System::Drawing::Point(250, 117);
			this->time2->Multiline = true;
			this->time2->Name = L"time2";
			this->time2->Size = System::Drawing::Size(83, 26);
			this->time2->TabIndex = 21;
			this->time2->TabStop = false;
			this->time2->Text = L"Time";
			this->time2->Visible = false;
			// 
			// year2
			// 
			this->year2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->year2->FormattingEnabled = true;
			this->year2->Items->AddRange(gcnew cli::array< System::Object^  >(14) {L"2017", L"2018", L"2019", L"2020", L"2021", L"2022", 
				L"2023", L"2024", L"2025", L"2026", L"2027", L"2028", L"2029", L"2030"});
			this->year2->Location = System::Drawing::Point(179, 117);
			this->year2->Name = L"year2";
			this->year2->Size = System::Drawing::Size(65, 28);
			this->year2->TabIndex = 20;
			this->year2->TabStop = false;
			this->year2->Text = L"year";
			this->year2->Visible = false;
			// 
			// month2
			// 
			this->month2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->month2->FormattingEnabled = true;
			this->month2->Items->AddRange(gcnew cli::array< System::Object^  >(12) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9", 
				L"10", L"11", L"12"});
			this->month2->Location = System::Drawing::Point(87, 117);
			this->month2->Name = L"month2";
			this->month2->Size = System::Drawing::Size(83, 28);
			this->month2->TabIndex = 19;
			this->month2->TabStop = false;
			this->month2->Text = L"Month";
			this->month2->Visible = false;
			// 
			// day2
			// 
			this->day2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->day2->FormattingEnabled = true;
			this->day2->Items->AddRange(gcnew cli::array< System::Object^  >(31) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9", 
				L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26", L"27", 
				L"28", L"29", L"30", L"31"});
			this->day2->Location = System::Drawing::Point(6, 117);
			this->day2->Name = L"day2";
			this->day2->Size = System::Drawing::Size(75, 28);
			this->day2->TabIndex = 18;
			this->day2->TabStop = false;
			this->day2->Text = L"Day";
			this->day2->Visible = false;
			// 
			// time1
			// 
			this->time1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->time1->Location = System::Drawing::Point(249, 54);
			this->time1->Multiline = true;
			this->time1->Name = L"time1";
			this->time1->Size = System::Drawing::Size(84, 26);
			this->time1->TabIndex = 17;
			this->time1->TabStop = false;
			this->time1->Text = L"Time";
			// 
			// year1
			// 
			this->year1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->year1->FormattingEnabled = true;
			this->year1->Items->AddRange(gcnew cli::array< System::Object^  >(14) {L"2017", L"2018", L"2019", L"2020", L"2021", L"2022", 
				L"2023", L"2024", L"2025", L"2026", L"2027", L"2028", L"2029", L"2030"});
			this->year1->Location = System::Drawing::Point(179, 52);
			this->year1->Name = L"year1";
			this->year1->Size = System::Drawing::Size(65, 28);
			this->year1->TabIndex = 16;
			this->year1->TabStop = false;
			this->year1->Text = L"year";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Wide Latin", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(101, 18);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(181, 18);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Time To Leave";
			// 
			// month1
			// 
			this->month1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->month1->FormattingEnabled = true;
			this->month1->Items->AddRange(gcnew cli::array< System::Object^  >(12) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9", 
				L"10", L"11", L"12"});
			this->month1->Location = System::Drawing::Point(87, 52);
			this->month1->Name = L"month1";
			this->month1->Size = System::Drawing::Size(83, 28);
			this->month1->TabIndex = 15;
			this->month1->TabStop = false;
			this->month1->Text = L"Month";
			// 
			// day1
			// 
			this->day1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->day1->FormattingEnabled = true;
			this->day1->Items->AddRange(gcnew cli::array< System::Object^  >(31) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9", 
				L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26", L"27", 
				L"28", L"29", L"30", L"31"});
			this->day1->Location = System::Drawing::Point(6, 52);
			this->day1->Name = L"day1";
			this->day1->Size = System::Drawing::Size(75, 28);
			this->day1->TabIndex = 14;
			this->day1->TabStop = false;
			this->day1->Text = L"Day";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Wide Latin", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(3, 17);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(170, 18);
			this->label7->TabIndex = 10;
			this->label7->Text = L"From Airport";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->onther);
			this->groupBox2->Controls->Add(this->oneway);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Wide Latin", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(9, 98);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(353, 65);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Your Trip is :";
			// 
			// onther
			// 
			this->onther->AutoSize = true;
			this->onther->Font = (gcnew System::Drawing::Font(L"Wide Latin", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->onther->Location = System::Drawing::Point(234, 23);
			this->onther->Name = L"onther";
			this->onther->Size = System::Drawing::Size(113, 22);
			this->onther->TabIndex = 13;
			this->onther->Text = L"Onther";
			this->onther->UseVisualStyleBackColor = true;
			this->onther->CheckedChanged += gcnew System::EventHandler(this, &add::onther_CheckedChanged);
			// 
			// oneway
			// 
			this->oneway->AutoSize = true;
			this->oneway->Font = (gcnew System::Drawing::Font(L"Wide Latin", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->oneway->Location = System::Drawing::Point(6, 23);
			this->oneway->Name = L"oneway";
			this->oneway->Size = System::Drawing::Size(134, 22);
			this->oneway->TabIndex = 12;
			this->oneway->Text = L"One Way";
			this->oneway->UseVisualStyleBackColor = true;
			this->oneway->CheckedChanged += gcnew System::EventHandler(this, &add::oneway_CheckedChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Wide Latin", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(7, 371);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(145, 18);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Nationality";
			// 
			// female
			// 
			this->female->AutoSize = true;
			this->female->Font = (gcnew System::Drawing::Font(L"Wide Latin", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->female->Location = System::Drawing::Point(231, 21);
			this->female->Name = L"female";
			this->female->Size = System::Drawing::Size(118, 22);
			this->female->TabIndex = 7;
			this->female->Text = L"Female";
			this->female->UseVisualStyleBackColor = true;
			// 
			// tid
			// 
			this->tid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tid->Location = System::Drawing::Point(209, 434);
			this->tid->Multiline = true;
			this->tid->Name = L"tid";
			this->tid->Size = System::Drawing::Size(158, 26);
			this->tid->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Wide Latin", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(17, 437);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 18);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Trip ID";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->female);
			this->groupBox1->Controls->Add(this->male);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Wide Latin", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(10, 298);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(361, 55);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Gender";
			// 
			// male
			// 
			this->male->AutoSize = true;
			this->male->Font = (gcnew System::Drawing::Font(L"Wide Latin", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->male->Location = System::Drawing::Point(6, 21);
			this->male->Name = L"male";
			this->male->Size = System::Drawing::Size(87, 22);
			this->male->TabIndex = 68;
			this->male->Text = L"Male";
			this->male->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Wide Latin", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(7, 80);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(136, 18);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Last Name";
			// 
			// id
			// 
			this->id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->id->Location = System::Drawing::Point(191, 131);
			this->id->Multiline = true;
			this->id->Name = L"id";
			this->id->Size = System::Drawing::Size(158, 26);
			this->id->TabIndex = 2;
			// 
			// num
			// 
			this->num->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->num->Location = System::Drawing::Point(191, 184);
			this->num->Multiline = true;
			this->num->Name = L"num";
			this->num->Size = System::Drawing::Size(158, 26);
			this->num->TabIndex = 3;
			// 
			// passport
			// 
			this->passport->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->passport->Location = System::Drawing::Point(191, 237);
			this->passport->Multiline = true;
			this->passport->Name = L"passport";
			this->passport->Size = System::Drawing::Size(158, 26);
			this->passport->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Wide Latin", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(3, 240);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(178, 18);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Your Passport";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Wide Latin", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(6, 187);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(170, 18);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Your Number";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Wide Latin", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(7, 134);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(105, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Your ID";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Wide Latin", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(6, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(143, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"First Name";
			// 
			// save
			// 
			this->save->Font = (gcnew System::Drawing::Font(L"Wide Latin", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->save->Location = System::Drawing::Point(1013, 450);
			this->save->Name = L"save";
			this->save->Size = System::Drawing::Size(154, 47);
			this->save->TabIndex = 14;
			this->save->Text = L"Booking";
			this->save->UseVisualStyleBackColor = true;
			this->save->Click += gcnew System::EventHandler(this, &add::save_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->groupBox5);
			this->panel1->Controls->Add(this->nation);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->tid);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel1->Location = System::Drawing::Point(12, 25);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(394, 543);
			this->panel1->TabIndex = 3;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->lname);
			this->groupBox5->Controls->Add(this->label1);
			this->groupBox5->Controls->Add(this->fname);
			this->groupBox5->Controls->Add(this->passport);
			this->groupBox5->Controls->Add(this->label4);
			this->groupBox5->Controls->Add(this->label6);
			this->groupBox5->Controls->Add(this->label2);
			this->groupBox5->Controls->Add(this->label3);
			this->groupBox5->Controls->Add(this->num);
			this->groupBox5->Controls->Add(this->id);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Wide Latin", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBox5->Location = System::Drawing::Point(10, 3);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(361, 289);
			this->groupBox5->TabIndex = 13;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Travaler";
			// 
			// lname
			// 
			this->lname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lname->Location = System::Drawing::Point(191, 80);
			this->lname->Multiline = true;
			this->lname->Name = L"lname";
			this->lname->Size = System::Drawing::Size(158, 26);
			this->lname->TabIndex = 1;
			// 
			// fname
			// 
			this->fname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->fname->Location = System::Drawing::Point(191, 32);
			this->fname->Multiline = true;
			this->fname->Name = L"fname";
			this->fname->Size = System::Drawing::Size(158, 26);
			this->fname->TabIndex = 0;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Wide Latin", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(858, 504);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(154, 47);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Clear Data";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &add::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Wide Latin", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(1173, 506);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(154, 47);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &add::button2_Click_1);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Wide Latin", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(901, 31);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(385, 36);
			this->label14->TabIndex = 11;
			this->label14->Text = L"If Traveler Registered Before \r\n      Shoud search form ID";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(1149, 143);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(158, 43);
			this->textBox1->TabIndex = 19;
			this->textBox1->TabStop = false;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Wide Latin", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(891, 143);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(154, 43);
			this->button4->TabIndex = 20;
			this->button4->Text = L"Search";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &add::button4_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Wide Latin", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(849, 247);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(458, 54);
			this->label15->TabIndex = 14;
			this->label15->Text = L"     If The Traveler Is not Registered \r\n      Complete traveler data  And Then\r\n" 
				L"                  Use There Buttons";
			// 
			// oneway1
			// 
			this->oneway1->AutoSize = true;
			this->oneway1->Font = (gcnew System::Drawing::Font(L"Wide Latin", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->oneway1->Location = System::Drawing::Point(878, 88);
			this->oneway1->Name = L"oneway1";
			this->oneway1->Size = System::Drawing::Size(134, 22);
			this->oneway1->TabIndex = 17;
			this->oneway1->Text = L"One Way";
			this->oneway1->UseVisualStyleBackColor = true;
			this->oneway1->CheckedChanged += gcnew System::EventHandler(this, &add::oneway1_CheckedChanged);
			// 
			// onther1
			// 
			this->onther1->AutoSize = true;
			this->onther1->Font = (gcnew System::Drawing::Font(L"Wide Latin", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->onther1->Location = System::Drawing::Point(1173, 89);
			this->onther1->Name = L"onther1";
			this->onther1->Size = System::Drawing::Size(113, 22);
			this->onther1->TabIndex = 18;
			this->onther1->Text = L"Onther";
			this->onther1->UseVisualStyleBackColor = true;
			this->onther1->CheckedChanged += gcnew System::EventHandler(this, &add::onther1_CheckedChanged);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Wide Latin", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(829, 364);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(516, 47);
			this->button5->TabIndex = 21;
			this->button5->Text = L"Checked The Traveler Data are Complete";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &add::button5_Click);
			// 
			// add
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1369, 592);
			this->ControlBox = false;
			this->Controls->Add(this->button5);
			this->Controls->Add(this->onther1);
			this->Controls->Add(this->oneway1);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->save);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"add";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"add";
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: void clear()
		  {
			  fname->Text="";
			  lname->Text="";
			  id->Text="";
			  tid->Text="";
			  from->SelectedIndex=-1;
			  to->SelectedIndex=-1;;
			  oneway->Checked=false;
			  onther->Checked=false;
			  oneway1->Checked=false;
			  onther1->Checked=false;
			  nation->Text="";
			  num->Text="";
			  passport->Text="";
			  numtic->SelectedIndex=-1;
			  class1->SelectedIndex=-1;
			  male->Checked=false;
			  female->Checked=false;
			  day2->SelectedIndex=-1;
			  month2->SelectedIndex=-1;
			  year2->SelectedIndex=-1;
			  time2->Text="Time";
			  day1->SelectedIndex=-1;
			  month1->SelectedIndex=-1;
			  year1->SelectedIndex=-1;
			  time1->Text="Time";
			  textBox1->Text="";
			  tprice->Text="";
		 }
private: System::Void onther1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 visible();
		 }
private: System::Void oneway1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 invisible();
		 }

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(oneway->Checked==true)
			 {
				 checkoneway();
				 
			 }
			 else
			 {
				 checktwoway();
				

			 }
		 }
			
 private:void visible()
		{
					 
			day2->Visible=(true);
			month2->Visible=(true);
			year2->Visible=(true);
			time2->Visible=(true);
			label10->Visible=(true);
		}
private:void invisible()
		{
					 
			day2->Visible=(false);
			month2->Visible=(false);
			year2->Visible=(false);
			time2->Visible=(false);
			label10->Visible=(false);
		}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 clear();
		 }
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) 
		 {
			 this->Close();
		 }
private: System::Void oneway_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 invisible();
		 }
private: System::Void onther_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 visible();
		 }
private:void checkoneway()
		{
			if(fname->Text=="")
			 {
				 MessageBox::Show("enter your first name ","Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 fname->Focus();
			 }
			 
			 if(lname->Text=="")
			 {
				 MessageBox::Show("enter your last name ","Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 lname->Focus();
			 }
			 if(id->Text=="")
			 {
				 MessageBox::Show("enter your ID ","Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 id->Focus();
			 }
			 if(num->Text=="")
			 {
				 MessageBox::Show("enter your number","Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 num->Focus();
			 }
			 if(passport->Text=="")
			 {
				 MessageBox::Show("enter your passport ID","Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 passport->Focus();
			 }
			 if(nation->Text=="")
			 {
				 MessageBox::Show("enter your Nationality","Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 nation->Focus();
			 }
			 if(tid->Text=="")
			 {
				 MessageBox::Show("enter your Trip ID ","Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 tid->Focus();
		     }
			 if(male->Checked==false &&female->Checked==false)
			 {
				 MessageBox::Show("enter your Gender ","Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 groupBox1->Focus();
			 }
			 if(from->SelectedItem==-1)
			 {
				 MessageBox::Show("Enter Airport The traveler Go From ","Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 from->Focus();
			 }
			 if(to->SelectedItem==-1)
			 {
				 MessageBox::Show("Enter Airport The traveler Go To ","Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 to->Focus();
			 }
			 if(day1->SelectedItem==-1)
			 {
				 MessageBox::Show("Enter The Day Of Travel ","Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 day1->Focus();
			 }
			 if(month1->SelectedItem==-1)
			 {
				 MessageBox::Show("Enter The Month Of Travel ","Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 month1->Focus();
			 }
			 if(year1->SelectedItem==-1)
			 {
				 MessageBox::Show("Enter The Year Of Travel ","Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 year1->Focus();
			 }
			 if(time1->Text=="")
			 {
				 MessageBox::Show("Enter The Time Of Travel ","Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 time1->Focus();
			 }
			 if(class1->SelectedItem==-1)
			 {
				 MessageBox::Show("Enter Class Of Ticket","Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 class1->Focus();
			 }
			 if(numtic->SelectedItem==-1)
			 {
				 MessageBox::Show("Enter Number Of Ticket","Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 numtic->Focus();
			 }
		}
private:void checktwoway()
		  {
			   if(fname->Text=="")
			 {
				 MessageBox::Show("enter your first name ","Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 fname->Focus();
			 }
			 if(lname->Text=="")
			 {
				 MessageBox::Show("enter your last name ","Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 lname->Focus();
			 }
			 if(id->Text=="")
			 {
				 MessageBox::Show("enter your ID ","Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 id->Focus();
			 }
			 if(num->Text=="")
			 {
				 MessageBox::Show("enter your number","Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 num->Focus();
			 }
			 if(passport->Text=="")
			 {
				 MessageBox::Show("enter your passport ID","Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 passport->Focus();
			 }
			 if(nation->Text=="")
			 {
				 MessageBox::Show("enter your Nationality","Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 nation->Focus();
			 }
			 if(tid->Text=="")
			 {
				 MessageBox::Show("enter your Trip ID ","Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 tid->Focus();
			}
			 if(male->Checked==false &&female->Checked==false)
			 {
				 MessageBox::Show("enter your Gender ","Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 groupBox1->Focus();
			 }
			 if(from->SelectedItem==-1)
			 {
				 MessageBox::Show("Enter Airport The traveler Go From ","Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 from->Focus();
			 }
			 if(to->SelectedItem==-1)
			 {
				 MessageBox::Show("Enter Airport The traveler Go To ","Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 to->Focus();
			 }
			 if(day1->SelectedItem==-1)
			 {
				 MessageBox::Show("Enter The Day Of Travel ","Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 day1->Focus();
			 }
			 if(month1->SelectedItem==-1)
			 {
				 MessageBox::Show("Enter The Month Of Travel ","Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 month1->Focus();
			 }
			 if(year1->SelectedItem==-1)
			 {
				 MessageBox::Show("Enter The Year Of Travel ","Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 year1->Focus();
			 }
			 if(time1->Text=="")
			 {
				 MessageBox::Show("Enter The Time Of Travel ","Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 time1->Focus();
			 }
			  if(day2->SelectedItem==-1)
			 {
				 MessageBox::Show("Enter The Day Of Travel Back ","Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 day2->Focus();
			 }
			 if(month2->SelectedItem==-1)
			 {
				 MessageBox::Show("Enter The Month Of Travel Back ","Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 month2->Focus();
			 }
			 if(year2->SelectedItem==-1)
			 {
				 MessageBox::Show("Enter The Year Of Travel Back ","Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 year2->Focus();
			 }
			 if(time2->Text=="")
			 {
				 MessageBox::Show("Enter The Time Of Travel Back ","Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 time2->Focus();
			 }
			 if(class1->SelectedItem==-1)
			 {
				 MessageBox::Show("Enter Class Of Ticket","Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 class1->Focus();
			 }
			 if(numtic->SelectedItem==-1)
			 {
				 MessageBox::Show("Enter Number Of Ticket","Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 numtic->Focus();
			 }
		 }
		 
private: System::Void save_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			  if(oneway->Checked==true)
			 {
			 checkoneway();
			 StreamWriter ^ outfile =gcnew StreamWriter ("addtrip1.txt",true);
			 String ^ x="";  String ^ y="";  String ^ z="";String ^ full="";
			 if(male->Checked==true)
			 {
				 x=fname->Text+"\t"+lname->Text+"\t"+id->Text+"\t"+num->Text+"\t"+passport->Text+"\t"+"male\t"+nation->Text+"\t"+tid->Text+"\t"+
					 from->SelectedItem->ToString()+"\t"+to->SelectedItem->ToString();
			 }
			 else if(female->Checked==true)
			 {
				 x=fname->Text+"\t"+lname->Text+"\t"+id->Text+"\t"+num->Text+"\t"+passport->Text+"\t"+"female\t"+nation->Text+"\t"+tid->Text+
					 "\t"+from->SelectedItem->ToString()+"\t"+to->SelectedItem->ToString();
			 }
			 
			 y=day1->SelectedItem->ToString()+"\t"+month1->SelectedItem->ToString()+"\t"+year1->SelectedItem->ToString()+
			 "\t"+time1->Text+"\t"+class1->SelectedItem->ToString()+"\t"+numtic->SelectedItem->ToString()+"\t"+tprice->Text;
			 full=x+"\t"+y+"\t";
			 outfile->WriteLine(full);
			 outfile->Close();
			 MessageBox::Show("Done");
			 }
			 else if(onther->Checked==true)
			 {
			 StreamWriter ^ outfile =gcnew StreamWriter ("addtrip2.txt",true);
			 String ^ x="";  String ^ y="";  String ^ z="";String ^ full="";
			 if(male->Checked==true)
			 {
				 x=fname->Text+"\t"+lname->Text+"\t"+id->Text+"\t"+num->Text+"\t"+passport->Text+"\t"+"male\t"+nation->Text+"\t"+tid->Text+"\t"+from->SelectedItem->ToString()+"\t"+to->SelectedItem->ToString();
			 }
			 else if(female->Checked==true)
			 {
				 x=fname->Text+"\t"+lname->Text+"\t"+id->Text+"\t"+num->Text+"\t"+passport->Text+"\t"+"female\t"+nation->Text+"\t"+tid->Text+"\t"+from->SelectedItem->ToString()+"\t"+to->SelectedItem->ToString();
			 }
			 
		     y=day1->Text+"\t"+month1->Text+"\t"+year1->Text+"\t"+time1->Text+"\t"+class1->Text+"\t"+numtic->Text;
			 z=day2->Text+"\t"+month2->Text+"\t"+year2->Text+"\t"+time2->Text+"\t"+tprice->Text;
			 full=x+"\t"+y+"\t"+z;
			 outfile->WriteLine(full);
			 outfile->Close();
			 MessageBox::Show("Done");
			  }
				 
			 
		 

			 
		 }
		 

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(oneway1->Checked==true)
			 {
				 
				 StreamReader ^read = gcnew StreamReader("addtrip1.txt");
				 while (! read->EndOfStream) 
				 {
				  String ^data = read->ReadLine()->ToString();
				  array<String^>^result;
				 array<Char>^splitChars = {'\t'};
				 result = data->Split(splitChars , StringSplitOptions::None );
				 if (result[2] == textBox1->Text)
				 {
				 oneway->Checked=true;
				 fname->Text=result[0];
				 lname->Text=result[1];
				 id->Text=result[2];
				 num->Text=result[3];
				 passport->Text=result[4];
				 if(result[5]="male")
				 {
					 male->Checked=true;
				 }
				 else
				 {
					 female->Checked=true;
				 }
				 nation->Text=result[6];
				 tid->Text=result[7]; 
				 from->SelectedItem=result[8];
				 to->SelectedItem=result[9];
				 day1->SelectedItem=result[10];
				 month1->SelectedItem=result[11];
				 year1->SelectedItem=result[12];
				 time1->Text=result[13];
				 class1->SelectedItem=result[14];
				 numtic->SelectedItem=result[15];
				 tprice->Text=result[16];
				 }
				
		       }
				  read->Close();
			 }
			 else if(onther1->Checked==true)
			{ 
				 StreamReader ^read = gcnew StreamReader("addtrip2.txt");
				 while (! read->EndOfStream) 
				 {
				  String ^data = read->ReadLine()->ToString();
				  array<String^>^result;
				 array<Char>^splitChars = {'\t'};
				 result = data->Split(splitChars , StringSplitOptions::None );
				 if (result[2] == textBox1->Text)
				 {
				 onther->Checked=true;
				 fname->Text=result[0];
				 lname->Text=result[1];
				 id->Text=result[2];
				 num->Text=result[3];
				 passport->Text=result[4];
				 if(result[5]="male")
				 {
					 male->Checked=true;
				 }
				 else
				 {
					 female->Checked=true;
				 }
				 nation->Text=result[6];
				 tid->Text=result[7]; 
				 from->SelectedItem=result[8];
				 to->SelectedItem=result[9];
				 day1->SelectedItem=result[10];
				 month1->SelectedItem=result[11];
				 year1->SelectedItem=result[12];
				 time1->Text=result[13];
				 class1->SelectedItem=result[14];
				 numtic->SelectedItem=result[15];
				 day2->SelectedItem=result[16];
				 month2->SelectedItem=result[17];
				 year2->SelectedItem=result[18];
				 time2->Text=result[19];
				 tprice->Text=result[20];
				 }
				
		       }
				  read->Close();
			 
			 }

		 }
		 

};
}
