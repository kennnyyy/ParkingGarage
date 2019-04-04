#pragma once

namespace Test2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Handicap_Background;
	protected:

	protected:

	private: System::Windows::Forms::NumericUpDown^  Handicap_Num;



	private: System::Windows::Forms::Label^  Handicap_Cover;

	private: System::Windows::Forms::Button^  Section_E_Background;
	private: System::Windows::Forms::NumericUpDown^  Section_E_Num;
	private: System::Windows::Forms::Label^  Section_E_Cover;

	
	private: System::Windows::Forms::Button^  Premium_Background;
	private: System::Windows::Forms::NumericUpDown^  Premium_Num;

	private: System::Windows::Forms::Label^  Premium_Cover;
	
	private: System::Windows::Forms::Button^  Section_B_Background;
	private: System::Windows::Forms::NumericUpDown^  Section_B_Num;

	private: System::Windows::Forms::Label^  Section_B_Cover;
	
	private: System::Windows::Forms::Button^  Section_D_Background;
	private: System::Windows::Forms::NumericUpDown^  Section_D_Num;

	private: System::Windows::Forms::Label^  Section_D_Cover;
	
	private: System::Windows::Forms::Button^  Section_A_Background;
	private: System::Windows::Forms::NumericUpDown^  Section_A_Num;

	private: System::Windows::Forms::Label^  Section_A_Cover;
	




	private: System::Windows::Forms::Label^  Handicap_Label1;
	private: System::Windows::Forms::Label^  Handicap_Label2;

	private: System::Windows::Forms::Label^  Handicap_Label3;
	private: System::Windows::Forms::Label^  Premium_Label1;
	private: System::Windows::Forms::Label^  Premium_Label2;
	private: System::Windows::Forms::Label^  Premium_Label3;
	private: System::Windows::Forms::Label^  Section_A_Label1;
	private: System::Windows::Forms::Label^  Section_A_Label2;
	private: System::Windows::Forms::Label^  Section_A_Label3;
	private: System::Windows::Forms::Label^  Section_B_Label1;
	private: System::Windows::Forms::Label^  Section_B_Label2;
	private: System::Windows::Forms::Label^  Section_B_Label3;
	private: System::Windows::Forms::Button^  Section_C_Background;

	private: System::Windows::Forms::NumericUpDown^  Section_C_Num;

	private: System::Windows::Forms::Label^  Section_C_Cover;
	private: System::Windows::Forms::Label^  Section_C_Label1;
	private: System::Windows::Forms::Label^  Section_C_Label2;
	private: System::Windows::Forms::Label^  Section_C_Label3;
	private: System::Windows::Forms::Label^  Section_D_Label3;
	private: System::Windows::Forms::Label^  Section_D_Label2;
	private: System::Windows::Forms::Label^  Section_D_Label1;
	private: System::Windows::Forms::Label^  Section_E_Label1;


	private: System::Windows::Forms::Label^  Section_E_Label2;

	private: System::Windows::Forms::Label^  Section_E_Label3;










	private: System::ComponentModel::IContainer^  components;



















	protected:

	protected:

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
			this->Handicap_Background = (gcnew System::Windows::Forms::Button());
			this->Handicap_Num = (gcnew System::Windows::Forms::NumericUpDown());
			this->Handicap_Cover = (gcnew System::Windows::Forms::Label());
			this->Section_E_Background = (gcnew System::Windows::Forms::Button());
			this->Section_E_Num = (gcnew System::Windows::Forms::NumericUpDown());
			this->Section_E_Cover = (gcnew System::Windows::Forms::Label());
			this->Premium_Background = (gcnew System::Windows::Forms::Button());
			this->Premium_Num = (gcnew System::Windows::Forms::NumericUpDown());
			this->Premium_Cover = (gcnew System::Windows::Forms::Label());
			this->Section_B_Background = (gcnew System::Windows::Forms::Button());
			this->Section_B_Num = (gcnew System::Windows::Forms::NumericUpDown());
			this->Section_B_Cover = (gcnew System::Windows::Forms::Label());
			this->Section_D_Background = (gcnew System::Windows::Forms::Button());
			this->Section_D_Num = (gcnew System::Windows::Forms::NumericUpDown());
			this->Section_D_Cover = (gcnew System::Windows::Forms::Label());
			this->Section_A_Background = (gcnew System::Windows::Forms::Button());
			this->Section_A_Num = (gcnew System::Windows::Forms::NumericUpDown());
			this->Section_A_Cover = (gcnew System::Windows::Forms::Label());
			this->Handicap_Label1 = (gcnew System::Windows::Forms::Label());
			this->Handicap_Label2 = (gcnew System::Windows::Forms::Label());
			this->Handicap_Label3 = (gcnew System::Windows::Forms::Label());
			this->Premium_Label1 = (gcnew System::Windows::Forms::Label());
			this->Premium_Label2 = (gcnew System::Windows::Forms::Label());
			this->Premium_Label3 = (gcnew System::Windows::Forms::Label());
			this->Section_A_Label1 = (gcnew System::Windows::Forms::Label());
			this->Section_A_Label2 = (gcnew System::Windows::Forms::Label());
			this->Section_A_Label3 = (gcnew System::Windows::Forms::Label());
			this->Section_B_Label1 = (gcnew System::Windows::Forms::Label());
			this->Section_B_Label2 = (gcnew System::Windows::Forms::Label());
			this->Section_B_Label3 = (gcnew System::Windows::Forms::Label());
			this->Section_C_Background = (gcnew System::Windows::Forms::Button());
			this->Section_C_Num = (gcnew System::Windows::Forms::NumericUpDown());
			this->Section_C_Cover = (gcnew System::Windows::Forms::Label());
			this->Section_C_Label1 = (gcnew System::Windows::Forms::Label());
			this->Section_C_Label2 = (gcnew System::Windows::Forms::Label());
			this->Section_C_Label3 = (gcnew System::Windows::Forms::Label());
			this->Section_D_Label3 = (gcnew System::Windows::Forms::Label());
			this->Section_D_Label2 = (gcnew System::Windows::Forms::Label());
			this->Section_D_Label1 = (gcnew System::Windows::Forms::Label());
			this->Section_E_Label1 = (gcnew System::Windows::Forms::Label());
			this->Section_E_Label2 = (gcnew System::Windows::Forms::Label());
			this->Section_E_Label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Handicap_Num))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Section_E_Num))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Premium_Num))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Section_B_Num))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Section_D_Num))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Section_A_Num))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Section_C_Num))->BeginInit();
			this->SuspendLayout();
			// 
			// Handicap_Background
			// 
			this->Handicap_Background->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Handicap_Background->Enabled = false;
			this->Handicap_Background->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
			this->Handicap_Background->FlatAppearance->BorderSize = 0;
			this->Handicap_Background->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Handicap_Background->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Handicap_Background->Location = System::Drawing::Point(442, 1);
			this->Handicap_Background->Name = L"Handicap_Background";
			this->Handicap_Background->Size = System::Drawing::Size(75, 153);
			this->Handicap_Background->TabIndex = 0;
			this->Handicap_Background->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->Handicap_Background->UseVisualStyleBackColor = false;
			this->Handicap_Background->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Handicap_Num
			// 
			this->Handicap_Num->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Handicap_Num->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Handicap_Num->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Handicap_Num->Location = System::Drawing::Point(425, 82);
			this->Handicap_Num->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->Handicap_Num->Name = L"Handicap_Num";
			this->Handicap_Num->Size = System::Drawing::Size(90, 16);
			this->Handicap_Num->TabIndex = 1;
			this->Handicap_Num->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Handicap_Num->UpDownAlign = System::Windows::Forms::LeftRightAlignment::Left;
			this->Handicap_Num->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->Handicap_Num->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// Handicap_Cover
			// 
			this->Handicap_Cover->AutoSize = true;
			this->Handicap_Cover->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Handicap_Cover->Location = System::Drawing::Point(418, 81);
			this->Handicap_Cover->Name = L"Handicap_Cover";
			this->Handicap_Cover->Size = System::Drawing::Size(24, 17);
			this->Handicap_Cover->TabIndex = 3;
			this->Handicap_Cover->Text = L"    ";
			// 
			// Section_E_Background
			// 
			this->Section_E_Background->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Section_E_Background->Enabled = false;
			this->Section_E_Background->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
			this->Section_E_Background->FlatAppearance->BorderSize = 0;
			this->Section_E_Background->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Section_E_Background->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Section_E_Background->Location = System::Drawing::Point(-3, 1);
			this->Section_E_Background->Name = L"Section_E_Background";
			this->Section_E_Background->Size = System::Drawing::Size(75, 387);
			this->Section_E_Background->TabIndex = 0;
			this->Section_E_Background->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->Section_E_Background->UseVisualStyleBackColor = false;
			// 
			// Section_E_Num
			// 
			this->Section_E_Num->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Section_E_Num->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Section_E_Num->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Section_E_Num->Location = System::Drawing::Point(-15, 196);
			this->Section_E_Num->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 12, 0, 0, 0 });
			this->Section_E_Num->Name = L"Section_E_Num";
			this->Section_E_Num->Size = System::Drawing::Size(83, 16);
			this->Section_E_Num->TabIndex = 1;
			this->Section_E_Num->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Section_E_Num->UpDownAlign = System::Windows::Forms::LeftRightAlignment::Left;
			this->Section_E_Num->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 12, 0, 0, 0 });
			this->Section_E_Num->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// Section_E_Cover
			// 
			this->Section_E_Cover->AutoSize = true;
			this->Section_E_Cover->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Section_E_Cover->Location = System::Drawing::Point(-27, 195);
			this->Section_E_Cover->Name = L"Section_E_Cover";
			this->Section_E_Cover->Size = System::Drawing::Size(28, 17);
			this->Section_E_Cover->TabIndex = 3;
			this->Section_E_Cover->Text = L"     ";
			// 
			// Premium_Background
			// 
			this->Premium_Background->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Premium_Background->Enabled = false;
			this->Premium_Background->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
			this->Premium_Background->FlatAppearance->BorderSize = 0;
			this->Premium_Background->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Premium_Background->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Premium_Background->Location = System::Drawing::Point(442, 235);
			this->Premium_Background->Name = L"Premium_Background";
			this->Premium_Background->Size = System::Drawing::Size(75, 153);
			this->Premium_Background->TabIndex = 0;
			this->Premium_Background->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->Premium_Background->UseVisualStyleBackColor = false;
			// 
			// Premium_Num
			// 
			this->Premium_Num->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Premium_Num->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Premium_Num->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Premium_Num->Location = System::Drawing::Point(425, 316);
			this->Premium_Num->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->Premium_Num->Name = L"Premium_Num";
			this->Premium_Num->Size = System::Drawing::Size(90, 16);
			this->Premium_Num->TabIndex = 1;
			this->Premium_Num->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Premium_Num->UpDownAlign = System::Windows::Forms::LeftRightAlignment::Left;
			this->Premium_Num->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->Premium_Num->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// Premium_Cover
			// 
			this->Premium_Cover->AutoSize = true;
			this->Premium_Cover->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Premium_Cover->Location = System::Drawing::Point(418, 315);
			this->Premium_Cover->Name = L"Premium_Cover";
			this->Premium_Cover->Size = System::Drawing::Size(24, 17);
			this->Premium_Cover->TabIndex = 3;
			this->Premium_Cover->Text = L"    ";
			// 
			// Section_B_Background
			// 
			this->Section_B_Background->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Section_B_Background->Enabled = false;
			this->Section_B_Background->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
			this->Section_B_Background->FlatAppearance->BorderSize = 0;
			this->Section_B_Background->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Section_B_Background->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Section_B_Background->Location = System::Drawing::Point(292, 233);
			this->Section_B_Background->Name = L"Section_B_Background";
			this->Section_B_Background->Size = System::Drawing::Size(75, 153);
			this->Section_B_Background->TabIndex = 0;
			this->Section_B_Background->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->Section_B_Background->UseVisualStyleBackColor = false;
			// 
			// Section_B_Num
			// 
			this->Section_B_Num->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Section_B_Num->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Section_B_Num->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Section_B_Num->Location = System::Drawing::Point(275, 314);
			this->Section_B_Num->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->Section_B_Num->Name = L"Section_B_Num";
			this->Section_B_Num->Size = System::Drawing::Size(90, 16);
			this->Section_B_Num->TabIndex = 1;
			this->Section_B_Num->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Section_B_Num->UpDownAlign = System::Windows::Forms::LeftRightAlignment::Left;
			this->Section_B_Num->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->Section_B_Num->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// Section_B_Cover
			// 
			this->Section_B_Cover->AutoSize = true;
			this->Section_B_Cover->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Section_B_Cover->Location = System::Drawing::Point(268, 313);
			this->Section_B_Cover->Name = L"Section_B_Cover";
			this->Section_B_Cover->Size = System::Drawing::Size(24, 17);
			this->Section_B_Cover->TabIndex = 3;
			this->Section_B_Cover->Text = L"    ";
			// 
			// Section_D_Background
			// 
			this->Section_D_Background->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Section_D_Background->Enabled = false;
			this->Section_D_Background->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
			this->Section_D_Background->FlatAppearance->BorderSize = 0;
			this->Section_D_Background->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Section_D_Background->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Section_D_Background->Location = System::Drawing::Point(142, 233);
			this->Section_D_Background->Name = L"Section_D_Background";
			this->Section_D_Background->Size = System::Drawing::Size(75, 153);
			this->Section_D_Background->TabIndex = 0;
			this->Section_D_Background->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->Section_D_Background->UseVisualStyleBackColor = false;
			// 
			// Section_D_Num
			// 
			this->Section_D_Num->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Section_D_Num->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Section_D_Num->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Section_D_Num->Location = System::Drawing::Point(125, 314);
			this->Section_D_Num->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->Section_D_Num->Name = L"Section_D_Num";
			this->Section_D_Num->Size = System::Drawing::Size(90, 16);
			this->Section_D_Num->TabIndex = 1;
			this->Section_D_Num->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Section_D_Num->UpDownAlign = System::Windows::Forms::LeftRightAlignment::Left;
			this->Section_D_Num->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->Section_D_Num->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// Section_D_Cover
			// 
			this->Section_D_Cover->AutoSize = true;
			this->Section_D_Cover->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Section_D_Cover->Location = System::Drawing::Point(118, 313);
			this->Section_D_Cover->Name = L"Section_D_Cover";
			this->Section_D_Cover->Size = System::Drawing::Size(24, 17);
			this->Section_D_Cover->TabIndex = 3;
			this->Section_D_Cover->Text = L"    ";
			// 
			// Section_A_Background
			// 
			this->Section_A_Background->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Section_A_Background->Enabled = false;
			this->Section_A_Background->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
			this->Section_A_Background->FlatAppearance->BorderSize = 0;
			this->Section_A_Background->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Section_A_Background->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Section_A_Background->Location = System::Drawing::Point(292, 1);
			this->Section_A_Background->Name = L"Section_A_Background";
			this->Section_A_Background->Size = System::Drawing::Size(75, 153);
			this->Section_A_Background->TabIndex = 0;
			this->Section_A_Background->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->Section_A_Background->UseVisualStyleBackColor = false;
			// 
			// Section_A_Num
			// 
			this->Section_A_Num->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Section_A_Num->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Section_A_Num->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Section_A_Num->Location = System::Drawing::Point(275, 82);
			this->Section_A_Num->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->Section_A_Num->Name = L"Section_A_Num";
			this->Section_A_Num->Size = System::Drawing::Size(90, 16);
			this->Section_A_Num->TabIndex = 1;
			this->Section_A_Num->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Section_A_Num->UpDownAlign = System::Windows::Forms::LeftRightAlignment::Left;
			this->Section_A_Num->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->Section_A_Num->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// Section_A_Cover
			// 
			this->Section_A_Cover->AutoSize = true;
			this->Section_A_Cover->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Section_A_Cover->Location = System::Drawing::Point(268, 81);
			this->Section_A_Cover->Name = L"Section_A_Cover";
			this->Section_A_Cover->Size = System::Drawing::Size(24, 17);
			this->Section_A_Cover->TabIndex = 3;
			this->Section_A_Cover->Text = L"    ";
			// 
			// Handicap_Label1
			// 
			this->Handicap_Label1->AutoSize = true;
			this->Handicap_Label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Handicap_Label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Handicap_Label1->Location = System::Drawing::Point(449, 18);
			this->Handicap_Label1->Name = L"Handicap_Label1";
			this->Handicap_Label1->Size = System::Drawing::Size(61, 13);
			this->Handicap_Label1->TabIndex = 4;
			this->Handicap_Label1->Text = L"Handicap";
			this->Handicap_Label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Handicap_Label2
			// 
			this->Handicap_Label2->AutoSize = true;
			this->Handicap_Label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Handicap_Label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Handicap_Label2->Location = System::Drawing::Point(449, 31);
			this->Handicap_Label2->Name = L"Handicap_Label2";
			this->Handicap_Label2->Size = System::Drawing::Size(50, 13);
			this->Handicap_Label2->TabIndex = 4;
			this->Handicap_Label2->Text = L"Parking";
			this->Handicap_Label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Handicap_Label2->Click += gcnew System::EventHandler(this, &MyForm::Handicap_label2_Click);
			// 
			// Handicap_Label3
			// 
			this->Handicap_Label3->AutoSize = true;
			this->Handicap_Label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Handicap_Label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Handicap_Label3->Location = System::Drawing::Point(449, 60);
			this->Handicap_Label3->Name = L"Handicap_Label3";
			this->Handicap_Label3->Size = System::Drawing::Size(59, 13);
			this->Handicap_Label3->TabIndex = 4;
			this->Handicap_Label3->Text = L"Available";
			this->Handicap_Label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Handicap_Label3->Click += gcnew System::EventHandler(this, &MyForm::Handicap_label2_Click);
			// 
			// Premium_Label1
			// 
			this->Premium_Label1->AutoSize = true;
			this->Premium_Label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Premium_Label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Premium_Label1->Location = System::Drawing::Point(449, 252);
			this->Premium_Label1->Name = L"Premium_Label1";
			this->Premium_Label1->Size = System::Drawing::Size(54, 13);
			this->Premium_Label1->TabIndex = 4;
			this->Premium_Label1->Text = L"Premium";
			this->Premium_Label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Premium_Label2
			// 
			this->Premium_Label2->AutoSize = true;
			this->Premium_Label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Premium_Label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Premium_Label2->Location = System::Drawing::Point(449, 265);
			this->Premium_Label2->Name = L"Premium_Label2";
			this->Premium_Label2->Size = System::Drawing::Size(50, 13);
			this->Premium_Label2->TabIndex = 4;
			this->Premium_Label2->Text = L"Parking";
			this->Premium_Label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Premium_Label3
			// 
			this->Premium_Label3->AutoSize = true;
			this->Premium_Label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Premium_Label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Premium_Label3->Location = System::Drawing::Point(449, 294);
			this->Premium_Label3->Name = L"Premium_Label3";
			this->Premium_Label3->Size = System::Drawing::Size(59, 13);
			this->Premium_Label3->TabIndex = 4;
			this->Premium_Label3->Text = L"Available";
			this->Premium_Label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Premium_Label3->Click += gcnew System::EventHandler(this, &MyForm::Handicap_label2_Click);
			// 
			// Section_A_Label1
			// 
			this->Section_A_Label1->AutoSize = true;
			this->Section_A_Label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Section_A_Label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Section_A_Label1->Location = System::Drawing::Point(299, 18);
			this->Section_A_Label1->Name = L"Section_A_Label1";
			this->Section_A_Label1->Size = System::Drawing::Size(62, 13);
			this->Section_A_Label1->TabIndex = 4;
			this->Section_A_Label1->Text = L"Section A";
			this->Section_A_Label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Section_A_Label2
			// 
			this->Section_A_Label2->AutoSize = true;
			this->Section_A_Label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Section_A_Label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Section_A_Label2->Location = System::Drawing::Point(299, 31);
			this->Section_A_Label2->Name = L"Section_A_Label2";
			this->Section_A_Label2->Size = System::Drawing::Size(50, 13);
			this->Section_A_Label2->TabIndex = 4;
			this->Section_A_Label2->Text = L"Parking";
			this->Section_A_Label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Section_A_Label3
			// 
			this->Section_A_Label3->AutoSize = true;
			this->Section_A_Label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Section_A_Label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Section_A_Label3->Location = System::Drawing::Point(299, 60);
			this->Section_A_Label3->Name = L"Section_A_Label3";
			this->Section_A_Label3->Size = System::Drawing::Size(59, 13);
			this->Section_A_Label3->TabIndex = 4;
			this->Section_A_Label3->Text = L"Available";
			this->Section_A_Label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Section_B_Label1
			// 
			this->Section_B_Label1->AutoSize = true;
			this->Section_B_Label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Section_B_Label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Section_B_Label1->Location = System::Drawing::Point(299, 252);
			this->Section_B_Label1->Name = L"Section_B_Label1";
			this->Section_B_Label1->Size = System::Drawing::Size(62, 13);
			this->Section_B_Label1->TabIndex = 4;
			this->Section_B_Label1->Text = L"Section B";
			this->Section_B_Label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Section_B_Label2
			// 
			this->Section_B_Label2->AutoSize = true;
			this->Section_B_Label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Section_B_Label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Section_B_Label2->Location = System::Drawing::Point(299, 265);
			this->Section_B_Label2->Name = L"Section_B_Label2";
			this->Section_B_Label2->Size = System::Drawing::Size(50, 13);
			this->Section_B_Label2->TabIndex = 4;
			this->Section_B_Label2->Text = L"Parking";
			this->Section_B_Label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Section_B_Label3
			// 
			this->Section_B_Label3->AutoSize = true;
			this->Section_B_Label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Section_B_Label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Section_B_Label3->Location = System::Drawing::Point(299, 294);
			this->Section_B_Label3->Name = L"Section_B_Label3";
			this->Section_B_Label3->Size = System::Drawing::Size(59, 13);
			this->Section_B_Label3->TabIndex = 4;
			this->Section_B_Label3->Text = L"Available";
			this->Section_B_Label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Section_C_Background
			// 
			this->Section_C_Background->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Section_C_Background->Enabled = false;
			this->Section_C_Background->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
			this->Section_C_Background->FlatAppearance->BorderSize = 0;
			this->Section_C_Background->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Section_C_Background->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Section_C_Background->Location = System::Drawing::Point(142, 1);
			this->Section_C_Background->Name = L"Section_C_Background";
			this->Section_C_Background->Size = System::Drawing::Size(75, 153);
			this->Section_C_Background->TabIndex = 0;
			this->Section_C_Background->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->Section_C_Background->UseVisualStyleBackColor = false;
			// 
			// Section_C_Num
			// 
			this->Section_C_Num->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Section_C_Num->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Section_C_Num->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Section_C_Num->Location = System::Drawing::Point(125, 82);
			this->Section_C_Num->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->Section_C_Num->Name = L"Section_C_Num";
			this->Section_C_Num->Size = System::Drawing::Size(90, 16);
			this->Section_C_Num->TabIndex = 1;
			this->Section_C_Num->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Section_C_Num->UpDownAlign = System::Windows::Forms::LeftRightAlignment::Left;
			this->Section_C_Num->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->Section_C_Num->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// Section_C_Cover
			// 
			this->Section_C_Cover->AutoSize = true;
			this->Section_C_Cover->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Section_C_Cover->Location = System::Drawing::Point(118, 81);
			this->Section_C_Cover->Name = L"Section_C_Cover";
			this->Section_C_Cover->Size = System::Drawing::Size(24, 17);
			this->Section_C_Cover->TabIndex = 3;
			this->Section_C_Cover->Text = L"    ";
			// 
			// Section_C_Label1
			// 
			this->Section_C_Label1->AutoSize = true;
			this->Section_C_Label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Section_C_Label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Section_C_Label1->Location = System::Drawing::Point(149, 20);
			this->Section_C_Label1->Name = L"Section_C_Label1";
			this->Section_C_Label1->Size = System::Drawing::Size(62, 13);
			this->Section_C_Label1->TabIndex = 4;
			this->Section_C_Label1->Text = L"Section C";
			this->Section_C_Label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Section_C_Label2
			// 
			this->Section_C_Label2->AutoSize = true;
			this->Section_C_Label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Section_C_Label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Section_C_Label2->Location = System::Drawing::Point(149, 33);
			this->Section_C_Label2->Name = L"Section_C_Label2";
			this->Section_C_Label2->Size = System::Drawing::Size(50, 13);
			this->Section_C_Label2->TabIndex = 4;
			this->Section_C_Label2->Text = L"Parking";
			this->Section_C_Label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Section_C_Label3
			// 
			this->Section_C_Label3->AutoSize = true;
			this->Section_C_Label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Section_C_Label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Section_C_Label3->Location = System::Drawing::Point(149, 62);
			this->Section_C_Label3->Name = L"Section_C_Label3";
			this->Section_C_Label3->Size = System::Drawing::Size(59, 13);
			this->Section_C_Label3->TabIndex = 4;
			this->Section_C_Label3->Text = L"Available";
			this->Section_C_Label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Section_D_Label3
			// 
			this->Section_D_Label3->AutoSize = true;
			this->Section_D_Label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Section_D_Label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Section_D_Label3->Location = System::Drawing::Point(149, 294);
			this->Section_D_Label3->Name = L"Section_D_Label3";
			this->Section_D_Label3->Size = System::Drawing::Size(59, 13);
			this->Section_D_Label3->TabIndex = 4;
			this->Section_D_Label3->Text = L"Available";
			this->Section_D_Label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Section_D_Label2
			// 
			this->Section_D_Label2->AutoSize = true;
			this->Section_D_Label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Section_D_Label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Section_D_Label2->Location = System::Drawing::Point(149, 265);
			this->Section_D_Label2->Name = L"Section_D_Label2";
			this->Section_D_Label2->Size = System::Drawing::Size(50, 13);
			this->Section_D_Label2->TabIndex = 4;
			this->Section_D_Label2->Text = L"Parking";
			this->Section_D_Label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Section_D_Label2->Click += gcnew System::EventHandler(this, &MyForm::Section_D_Label2_Click);
			// 
			// Section_D_Label1
			// 
			this->Section_D_Label1->AutoSize = true;
			this->Section_D_Label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Section_D_Label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Section_D_Label1->Location = System::Drawing::Point(149, 252);
			this->Section_D_Label1->Name = L"Section_D_Label1";
			this->Section_D_Label1->Size = System::Drawing::Size(63, 13);
			this->Section_D_Label1->TabIndex = 4;
			this->Section_D_Label1->Text = L"Section D";
			this->Section_D_Label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Section_E_Label1
			// 
			this->Section_E_Label1->AutoSize = true;
			this->Section_E_Label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Section_E_Label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Section_E_Label1->Location = System::Drawing::Point(5, 85);
			this->Section_E_Label1->Name = L"Section_E_Label1";
			this->Section_E_Label1->Size = System::Drawing::Size(62, 13);
			this->Section_E_Label1->TabIndex = 4;
			this->Section_E_Label1->Text = L"Section E";
			this->Section_E_Label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Section_E_Label2
			// 
			this->Section_E_Label2->AutoSize = true;
			this->Section_E_Label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Section_E_Label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Section_E_Label2->Location = System::Drawing::Point(5, 98);
			this->Section_E_Label2->Name = L"Section_E_Label2";
			this->Section_E_Label2->Size = System::Drawing::Size(50, 13);
			this->Section_E_Label2->TabIndex = 4;
			this->Section_E_Label2->Text = L"Parking";
			this->Section_E_Label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Section_E_Label2->Click += gcnew System::EventHandler(this, &MyForm::Section_D_Label2_Click);
			// 
			// Section_E_Label3
			// 
			this->Section_E_Label3->AutoSize = true;
			this->Section_E_Label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Section_E_Label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Section_E_Label3->Location = System::Drawing::Point(5, 170);
			this->Section_E_Label3->Name = L"Section_E_Label3";
			this->Section_E_Label3->Size = System::Drawing::Size(59, 13);
			this->Section_E_Label3->TabIndex = 4;
			this->Section_E_Label3->Text = L"Available";
			this->Section_E_Label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(624, 386);
			this->Controls->Add(this->Premium_Label3);
			this->Controls->Add(this->Handicap_Label3);
			this->Controls->Add(this->Handicap_Label2);
			this->Controls->Add(this->Premium_Label2);
			this->Controls->Add(this->Premium_Label1);
			this->Controls->Add(this->Section_E_Label3);
			this->Controls->Add(this->Section_D_Label3);
			this->Controls->Add(this->Section_C_Label3);
			this->Controls->Add(this->Section_B_Label3);
			this->Controls->Add(this->Section_A_Label3);
			this->Controls->Add(this->Section_E_Label2);
			this->Controls->Add(this->Section_D_Label2);
			this->Controls->Add(this->Section_C_Label2);
			this->Controls->Add(this->Section_B_Label2);
			this->Controls->Add(this->Section_A_Label2);
			this->Controls->Add(this->Section_E_Label1);
			this->Controls->Add(this->Section_D_Label1);
			this->Controls->Add(this->Section_C_Label1);
			this->Controls->Add(this->Section_B_Label1);
			this->Controls->Add(this->Section_A_Label1);
			this->Controls->Add(this->Handicap_Label1);
			this->Controls->Add(this->Section_E_Cover);
			this->Controls->Add(this->Section_C_Cover);
			this->Controls->Add(this->Section_B_Cover);
			this->Controls->Add(this->Premium_Cover);
			this->Controls->Add(this->Section_D_Cover);
			this->Controls->Add(this->Section_A_Cover);
			this->Controls->Add(this->Handicap_Cover);
			this->Controls->Add(this->Section_E_Num);
			this->Controls->Add(this->Section_C_Num);
			this->Controls->Add(this->Section_B_Num);
			this->Controls->Add(this->Premium_Num);
			this->Controls->Add(this->Section_D_Num);
			this->Controls->Add(this->Section_A_Num);
			this->Controls->Add(this->Handicap_Num);
			this->Controls->Add(this->Section_E_Background);
			this->Controls->Add(this->Section_C_Background);
			this->Controls->Add(this->Section_B_Background);
			this->Controls->Add(this->Premium_Background);
			this->Controls->Add(this->Section_D_Background);
			this->Controls->Add(this->Section_A_Background);
			this->Controls->Add(this->Handicap_Background);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm";
			this->Text = L"Map Display";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Handicap_Num))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Section_E_Num))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Premium_Num))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Section_B_Num))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Section_D_Num))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Section_A_Num))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Section_C_Num))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
{ 
	if ((Premium_Num->Value)  == 0)
	{
		//background
		Premium_Background->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//num
		this->Premium_Num->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//label 1
		Premium_Label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//label 2
		Premium_Label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//label 3
		Premium_Label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	}
	else
	{
		// PREMIUM START
		//background
		Premium_Background->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//num
		Premium_Num->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//label 1
		Premium_Label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//label 2
		Premium_Label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//label 3
		Premium_Label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	//PREMIUM END
}
	//HANDICAP START
	if ((Handicap_Num->Value) == 0)
	{
		//background
		Handicap_Background->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//num
		this->Handicap_Num->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//label 1
		Handicap_Label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//label 2
		Handicap_Label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//label 3
		Handicap_Label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	}
	else
	{
		//background
		Handicap_Background->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
		//num
		Handicap_Num->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(255)));
		//label 1
		Handicap_Label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(255)));
		//label 2
		Handicap_Label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(255)));
		//label 3
		Handicap_Label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(255)));

	}
	//HANDICAP END

	//SECTION A START
	if ((Section_A_Num->Value) == 0)
	{
		//background
		Section_A_Background->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//num
		Section_A_Num->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//label 1
		Section_A_Label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//label 2
		Section_A_Label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//label 3
		Section_A_Label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	}
	else
	{
		//background
		Section_A_Background->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//num
		Section_A_Num->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//label 1
		Section_A_Label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//label 2
		Section_A_Label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//label 3
		Section_A_Label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));

	}
	//SECTION A END

	//SECTION B START
	if ((Section_B_Num->Value) == 0)
	{
		//background
		Section_B_Background->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//num
		Section_B_Num->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//label 1
		Section_B_Label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//label 2
		Section_B_Label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//label 3
		Section_B_Label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	}
	else
	{
		//background
		Section_B_Background->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//num
		Section_B_Num->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//label 1
		Section_B_Label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//label 2
		Section_B_Label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//label 3
		Section_B_Label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));

	}
	//SECTION B END

	//SECTION C START
	if ((Section_C_Num->Value) == 0)
	{
		//background
		Section_C_Background->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//num
		Section_C_Num->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//label 1
		Section_C_Label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//label 2
		Section_C_Label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//label 3
		Section_C_Label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	}
	else
	{
		//background
		Section_C_Background->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//num
		Section_C_Num->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//label 1
		Section_C_Label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//label 2
		Section_C_Label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//label 3
		Section_C_Label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));

	}
	//SECTION C END

	//SECTION D START
	if ((Section_D_Num->Value) == 0)
	{
		//background
		Section_D_Background->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//num
		Section_D_Num->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//label 1
		Section_D_Label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//label 2
		Section_D_Label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//label 3
		Section_D_Label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	}
	else
	{
		//background
		Section_D_Background->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//num
		Section_D_Num->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//label 1
		Section_D_Label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//label 2
		Section_D_Label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//label 3
		Section_D_Label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));

	}
	//SECTION D END

	//SECTION E START
	if ((Section_E_Num->Value) == 0)
	{
		//background
		Section_E_Background->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//num
		Section_E_Num->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//label 1
		Section_E_Label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//label 2
		Section_E_Label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//label 3
		Section_E_Label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	}
	else
	{
		//background
		Section_E_Background->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//num
		Section_E_Num->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//label 1
		Section_E_Label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//label 2
		Section_E_Label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		//label 3
		Section_E_Label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));

	}
	//SECTION E END
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Handicap_label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Section_D_Label2_Click(System::Object^  sender, System::EventArgs^  e) {
}

};
}
