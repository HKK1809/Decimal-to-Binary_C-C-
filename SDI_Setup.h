#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SDISetup
	/// </summary>
	public ref class SDI_Setup : public System::Windows::Forms::Form
	{
	public:
		SDI_Setup(void)
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
		~SDI_Setup()
		{
			if (components)
			{
				delete components;
			}
		}

		String^ inputport1 = "00000000";
		String^ inputport2 = "00000000";
		String^ inputport3 = "00000000";
		String^ inputport4 = "00000000";
		String^ outputport1 = "00000000";
		String^ outputport2 = "00000000";
		String^ outputport3 = "00000000";
		String^ outputport4 = "00000000";
		String^ volume = "00000000";
		String^ brightness = "00000000";
		String^ contrast = "00000000";
		int int_volume = 00000000;
		int int_brightness = 00000000;
		int int_contrast = 00000000;

	private: System::Windows::Forms::Button^ button1;
	protected:


	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::Label^ label1;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;

	private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown6;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown7;
	private: System::ComponentModel::IContainer^ components;





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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.1F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1132, 1052);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(279, 77);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Enter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SDI_Setup::button1_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(85, 150);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(287, 57);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->Text = L"Input Port 1";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &SDI_Setup::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->Location = System::Drawing::Point(648, 150);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(287, 57);
			this->checkBox2->TabIndex = 8;
			this->checkBox2->Text = L"Input Port 2";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &SDI_Setup::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox3->Location = System::Drawing::Point(85, 268);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(287, 57);
			this->checkBox3->TabIndex = 9;
			this->checkBox3->Text = L"Input Port 3";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &SDI_Setup::checkBox3_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox4->Location = System::Drawing::Point(648, 268);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(287, 57);
			this->checkBox4->TabIndex = 10;
			this->checkBox4->Text = L"Input Port 4";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &SDI_Setup::checkBox4_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.9F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(79, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(658, 61);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Select the Input Ports in use";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(76, 454);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(282, 53);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Output Port 1";
			this->label2->Click += gcnew System::EventHandler(this, &SDI_Setup::label2_Click_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.9F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(79, 370);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(1488, 61);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Select the Input Port to be Displayed for respective Output Ports";
			this->label3->Click += gcnew System::EventHandler(this, &SDI_Setup::label3_Click_1);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(639, 455);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(282, 53);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Output Port 2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(81, 562);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(282, 53);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Output Port 3";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(639, 562);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(282, 53);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Output Port 4";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.9F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(74, 683);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(502, 61);
			this->label7->TabIndex = 24;
			this->label7->Text = L"Ausio Visual Settings";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(76, 802);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(168, 53);
			this->label8->TabIndex = 25;
			this->label8->Text = L"Volume";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown1->Location = System::Drawing::Point(356, 802);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(176, 62);
			this->numericUpDown1->TabIndex = 26;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &SDI_Setup::numericUpDown1_ValueChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(639, 802);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(221, 53);
			this->label9->TabIndex = 27;
			this->label9->Text = L"Brightness";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown2->Location = System::Drawing::Point(973, 800);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(176, 62);
			this->numericUpDown2->TabIndex = 28;
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &SDI_Setup::numericUpDown2_ValueChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(81, 937);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(182, 53);
			this->label10->TabIndex = 29;
			this->label10->Text = L"Contrast";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown3->Location = System::Drawing::Point(356, 928);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(176, 62);
			this->numericUpDown3->TabIndex = 30;
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &SDI_Setup::numericUpDown3_ValueChanged);
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(437, 455);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(120, 38);
			this->numericUpDown5->TabIndex = 32;
			this->numericUpDown5->ValueChanged += gcnew System::EventHandler(this, &SDI_Setup::numericUpDown5_ValueChanged);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(437, 562);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(120, 38);
			this->numericUpDown4->TabIndex = 33;
			this->numericUpDown4->ValueChanged += gcnew System::EventHandler(this, &SDI_Setup::numericUpDown4_ValueChanged);
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Location = System::Drawing::Point(998, 454);
			this->numericUpDown6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(120, 38);
			this->numericUpDown6->TabIndex = 34;
			this->numericUpDown6->ValueChanged += gcnew System::EventHandler(this, &SDI_Setup::numericUpDown6_ValueChanged);
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Location = System::Drawing::Point(998, 576);
			this->numericUpDown7->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(120, 38);
			this->numericUpDown7->TabIndex = 35;
			this->numericUpDown7->ValueChanged += gcnew System::EventHandler(this, &SDI_Setup::numericUpDown7_ValueChanged);
			// 
			// SDI_Setup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1842, 1191);
			this->Controls->Add(this->numericUpDown7);
			this->Controls->Add(this->numericUpDown6);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->numericUpDown5);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button1);
			this->Name = L"SDI_Setup";
			this->Text = L"SDISetup";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	//This is the check box for input port 2
	 inputport2 = "00000001";
}

private: System::Void label3_Click_1(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	//This is the check box for input port 1 
	inputport1 = "00000001";
}
private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	//This is the check box for input port 3 
	inputport3 = "00000001";
}
private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	//This is the check box for input port 4 
	inputport4 = "00000001";
}
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	//This is Volume 
	int V = (int)numericUpDown1->Value;
	int remainder, i = 1;

	while (V != 0)
	{
		remainder = V % 2;
		int_volume += remainder * i;
		i = i * 10;
		V = V / 2;
	}
	stringstream stream;
	stream << int_volume;
	volume = stream.str();
}
private: System::Void numericUpDown2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	//This is brightness
	int B = (int)numericUpDown2->Value;

	int remainder, i = 1;

	while (B != 0)
	{
		remainder = B % 2;
		int_brightness += remainder * i;
		i = i * 10;
		B = B / 2;
	}
	stringstream stream;
	stream << int_brightness;
	brightness = stream.str();
}
private: System::Void numericUpDown3_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	//This is contrast
	int C = (int)numericUpDown2->Value;

	int remainder, i = 1;

	while (C != 0)
	{
		remainder = C % 2;
		int_contrast += remainder * i;
		i = i * 10;
		C = C / 2;
	}
	stringstream stream;
	stream << int_contrast;
	contrast = stream.str();
	

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//This is Enter
	try {
		cout << "\nWriting  array contents to file...";
		//open file for writing
		ofstream fw("D:\\Study\\Winter_2023\\Capstone\\demo.txt", std::ofstream::out);
		//check if file was successfully opened for writing
		if (fw.is_open())
		{
				fw << inputport1 << "\n";
				fw << inputport2 << "\n";
				fw << inputport3 << "\n";
				fw << inputport4 << "\n";
				fw << outputport1 << "\n";
				fw << outputport2 << "\n";
				fw << outputport3 << "\n";
				fw << outputport4 << "\n";
				fw << volume << "\n";
				fw << brightness << "\n";
				fw << contrast<< "\n";
			fw.close();
		}
		else cout << "Problem with opening file";
	}
	catch (const char* msg) {
		cerr << msg << endl;
	}
	cout << "\nDone!";
	cout << "\nPress any key to exit...";
	getchar();


}
private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void numericUpDown5_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	// this is output Port 1
	if((numericUpDown5->Value) == 0)
	{
		outputport1 = "00000000";
	}
	else if ((numericUpDown5->Value) == 1)
	{
		outputport1 = "00000001";
	}
	else if ((numericUpDown5->Value) == 2)
	{
		outputport1 = "00000010";
	}
	else if ((numericUpDown5->Value) == 3)
	{
		outputport1 = "00000011";
	}
	else if ((numericUpDown5->Value) == 4)
	{
		outputport1 = "00000100";
	}
}
private: System::Void numericUpDown6_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	// this is output Port 2
	if ((numericUpDown6->Value) == 0)
	{
		outputport1 = "00000000";
	}
	else if ((numericUpDown6->Value) == 1)
	{
		outputport1 = "00000001";
	}
	else if ((numericUpDown6->Value) == 2)
	{
		outputport1 = "00000010";
	}
	else if ((numericUpDown6->Value) == 3)
	{
		outputport1 = "00000011";
	}
	else if ((numericUpDown6->Value) == 4)
	{
		outputport1 = "00000100";
	}
}
private: System::Void numericUpDown4_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	// this is output Port 3
	if ((numericUpDown4->Value) == 0)
	{
		outputport1 = "00000000";
	}
	else if ((numericUpDown4->Value) == 1)
	{
		outputport1 = "00000001";
	}
	else if ((numericUpDown4->Value) == 2)
	{
		outputport1 = "00000010";
	}
	else if ((numericUpDown4->Value) == 3)
	{
		outputport1 = "00000011";
	}
	else if ((numericUpDown4->Value) == 4)
	{
		outputport1 = "00000100";
	}
}
private: System::Void numericUpDown7_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	// this is output Port 4
	if ((numericUpDown7->Value) == 0)
	{
		outputport1 = "00000000";
	}
	else if ((numericUpDown7->Value) == 1)
	{
		outputport1 = "00000001";
	}
	else if ((numericUpDown7->Value) == 2)
	{
		outputport1 = "00000010";
	}
	else if ((numericUpDown7->Value) == 3)
	{
		outputport1 = "00000011";
	}
	else if ((numericUpDown7->Value) == 4)
	{
		outputport1 = "00000100";
	}
}
};
}
