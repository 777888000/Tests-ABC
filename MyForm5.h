#pragma once
#include "MyForm2.h"
#include "MyForm6.h"
#include "MyForm7.h"

namespace pr004 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm5
	/// </summary>
	public ref class MyForm5 : public System::Windows::Forms::Form
	{
	public:
		MyForm5(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;

	private: System::Windows::Forms::Button^  button7;

	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::Label^  label1;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm5::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Georgia", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Indigo;
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(176, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Додати/Змінити питання";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm5::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Georgia", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::Indigo;
			this->button2->Location = System::Drawing::Point(12, 50);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Кількість питань";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm5::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Georgia", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::Indigo;
			this->button3->Location = System::Drawing::Point(12, 131);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(150, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Теорія";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm5::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Georgia", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::Indigo;
			this->button4->Location = System::Drawing::Point(12, 170);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(150, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Результати";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm5::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Georgia", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::Color::Indigo;
			this->button5->Location = System::Drawing::Point(12, 215);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(150, 22);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Очистити результати";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm5::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Georgia", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::Color::Indigo;
			this->button6->Location = System::Drawing::Point(12, 92);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(150, 23);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Обмеження в часі";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm5::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Georgia", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::Color::Indigo;
			this->button7->Location = System::Drawing::Point(240, 50);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(32, 23);
			this->button7->TabIndex = 7;
			this->button7->Text = L"ок";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm5::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Georgia", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::Color::Indigo;
			this->button8->Location = System::Drawing::Point(241, 91);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(31, 23);
			this->button8->TabIndex = 9;
			this->button8->Text = L"ок";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm5::button8_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(186, 53);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(39, 20);
			this->richTextBox1->TabIndex = 10;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(175, 95);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(39, 20);
			this->richTextBox2->TabIndex = 11;
			this->richTextBox2->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label1->ForeColor = System::Drawing::Color::GreenYellow;
			this->label1->Location = System::Drawing::Point(217, 101);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 12;
			this->label1->Text = L"хв";
			// 
			// MyForm5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm5";
			this->Text = L"Меню";
			this->Load += gcnew System::EventHandler(this, &MyForm5::MyForm5_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm2 ^ FS2 = gcnew MyForm2();
	FS2->Show();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm6 ^ FS6 = gcnew MyForm6();
	FS6->Show();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm7 ^ FS7 = gcnew MyForm7();
	FS7->Show();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	FILE * f;
	f = fopen("rez_file.txt", "w");
	fclose(f);
	MessageBox::Show("Історія результатів тестів очищена");
}
private: System::Void MyForm5_Load(System::Object^  sender, System::EventArgs^  e) {
	richTextBox1->Visible = false;
	richTextBox2->Visible = false;
	button7->Visible = false;
	button8->Visible = false;
	label1->Visible = false;
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	richTextBox2->Visible = true;
	button8->Visible = true;
	label1->Visible = true;
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	
	if (richTextBox2->Text == "")
	{
		MessageBox::Show("Поле пусте");
	}
	else
	{
		richTextBox2->Visible = false;
		button8->Visible = false;
		label1->Visible = false;
		FILE *f3;
		f3 = fopen("time.txt", "w");
		fprintf(f3, "%d", Convert::ToInt64(richTextBox2->Text) * 60);
		fclose(f3);
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	richTextBox1->Visible = true;
	button7->Visible = true;
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (richTextBox1->Text == "")
	{
		MessageBox::Show("Поле пусте");
	}
	else
	{
		richTextBox1->Visible = false;
		button7->Visible = false;
		FILE *f4;
		f4 = fopen("count.txt", "w");
		fprintf(f4, "%d", Convert::ToInt64(richTextBox1->Text));
		fclose(f4);
	}
}
};
}
