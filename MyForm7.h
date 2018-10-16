#pragma once
#include <cstdlib>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <msclr\marshal.h>
#include <fstream>
using namespace System;
using namespace msclr::interop;
struct question
{
	char question_text[25]; // текст питання
	char v1[25]; // варіанти відповіді
	char v2[25];
	char v3[25];
	char v4[25];
	char v5[25];
	int answer; // номер правильної відповіді
};
struct question_list
{
	question question; // стрyктура питання
	question_list* next; // вказівник на наступне питання
	question_list* prev; // вказівник на попереднє питання
};
static question_list* head = NULL; //покажчик на голову списку
static question_list* tail = NULL; //покажчик на хвіст списку
static question_list* global_pointer; //глобальний покажчик
static bool edit_mode = false; //режим редагування

namespace pr004 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm7 : public System::Windows::Forms::Form
	{
	public:
		MyForm7(void)
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
		~MyForm7()
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
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  button6;
	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm7::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Font = (gcnew System::Drawing::Font(L"Georgia", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Indigo;
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Внесення";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm7::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Georgia", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::Indigo;
			this->button2->Location = System::Drawing::Point(13, 42);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Редагування";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm7::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Georgia", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::Indigo;
			this->button3->Location = System::Drawing::Point(105, 291);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Tag = L"1";
			this->button3->Text = L"Зберегти";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm7::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Georgia", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::Indigo;
			this->button4->Location = System::Drawing::Point(13, 291);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 3;
			this->button4->Tag = L"1";
			this->button4->Text = L"<-";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm7::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Georgia", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::Color::Indigo;
			this->button5->Location = System::Drawing::Point(197, 291);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 4;
			this->button5->Tag = L"1";
			this->button5->Text = L"->";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm7::button5_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(127, 45);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(151, 20);
			this->textBox1->TabIndex = 5;
			this->textBox1->Tag = L"1";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(158, 97);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 6;
			this->textBox2->Tag = L"1";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(158, 123);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 7;
			this->textBox3->Tag = L"1";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(158, 149);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 8;
			this->textBox4->Tag = L"1";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(158, 175);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 9;
			this->textBox5->Tag = L"1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Georgia", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::GreenYellow;
			this->label1->Location = System::Drawing::Point(182, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 16);
			this->label1->TabIndex = 10;
			this->label1->Tag = L"1";
			this->label1->Text = L"Питання";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::GreenYellow;
			this->label2->Location = System::Drawing::Point(147, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(131, 15);
			this->label2->TabIndex = 11;
			this->label2->Tag = L"1";
			this->label2->Text = L"Варіанти відповідей";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::GreenYellow;
			this->label3->Location = System::Drawing::Point(124, 231);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(154, 15);
			this->label3->TabIndex = 12;
			this->label3->Tag = L"1";
			this->label3->Text = L"№ правильної відповіді";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(158, 201);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 13;
			this->textBox6->Tag = L"1";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(158, 249);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 14;
			this->textBox7->Tag = L"1";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm7::timer1_Tick);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Georgia", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::Color::Indigo;
			this->button6->Location = System::Drawing::Point(13, 72);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(101, 23);
			this->button6->TabIndex = 15;
			this->button6->Text = L"Видалення всіх";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm7::button6_Click);
			// 
			// MyForm7
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(284, 337);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm7";
			this->Text = L"Тести";
			this->Load += gcnew System::EventHandler(this, &MyForm7::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		changeVisibility(false);
	}
			 void changeVisibility(bool state)
			 {
				 for each (Control^ c in this->Controls)
				 {
					 if (c->Tag == "1")
						 c->Visible = state;
				 }
			 }
			 void push_end(question_list* &head, question_list* &tail, char* question_text, char* v1,
				 char* v2, char* v3, char* v4, char* v5, int answer)
			 {
				 question_list *NewNode =(question_list*)malloc(sizeof(question_list));
				 strcpy(NewNode->question.question_text, question_text);
				 strcpy(NewNode->question.v1, v1);
				 strcpy(NewNode->question.v2, v2);
				 strcpy(NewNode->question.v3, v3);
				 strcpy(NewNode->question.v4, v4);
				 strcpy(NewNode->question.v5, v5);
				 NewNode->question.answer = answer;
				 if (head == NULL)
				 {
					 NewNode->next = NULL;
					 NewNode->prev = NULL;
					 tail = NewNode;
					 head = NewNode;
					 return;
				 }
				 else
				 {
					 NewNode->next = NULL;
					 tail->next = NewNode;
					 NewNode->prev = tail;
					 tail = NewNode;
				 }
			 }
			 void Delete(question_list* &head, question_list* &tail) 
			 {
				 question_list* temp = head;
				 while (head) 
				 {
					 head = head->next;
					 free(temp);
					 temp = head;
				 }
				 head = NULL;
				 tail = NULL;
			 }
			 char* System_to_char(String ^s)
			 {
				 using namespace Runtime::InteropServices;
				 const char* ptr = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
				 return (char*)ptr;
			 }
			 void print(question_list *p)
			 {
				 textBox1->Text = marshal_as<String^>(p->question.question_text);
				 textBox2->Text = marshal_as<String^>(p->question.v1);
				 textBox3->Text = marshal_as<String^>(p->question.v2);
				 textBox4->Text = marshal_as<String^>(p->question.v3);
				 textBox5->Text = marshal_as<String^>(p->question.v4);
				 textBox6->Text = marshal_as<String^>(p->question.v5);
				 textBox7->Text = p->question.answer.ToString();
			 }
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		button3->Enabled = false; 
		edit_mode = false; 
		changeVisibility(true);
		button4->Visible = false;
		button5->Visible = false;
		textBox1->Clear();
		textBox2->Clear();
		textBox3->Clear();
		textBox4->Clear();
		textBox5->Clear();
		textBox6->Clear();
		textBox7->Clear();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		button3->Enabled = false; 
		button4->Enabled = false;
		button5->Enabled = true;
		edit_mode = true; 
		if (head != NULL) Delete(head, tail); 
		question question1;
		FILE *f2;
		if ((f2 = fopen("Question_file.txt", "rb")) == NULL)
		{
			MessageBox::Show("Питання відсутні", "Помилка");
			return;
		};
		fread(&question1, sizeof(question1), 1, f2); 
		while (!feof(f2))
		{
			push_end(head, tail, question1.question_text, question1.v1, question1.v2, question1.v3, question1.v4, question1.v5, question1.answer);
			fread(&question1, sizeof(question1), 1, f2);
		}
		fclose(f2);
		global_pointer = head; 
		print(global_pointer); 
		changeVisibility(true); 
	}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		if ((textBox1->Text != "") && (textBox2->Text != "") && (textBox3->Text != "") &&
			(textBox4->Text != "") && (textBox5->Text != "") && (textBox6->Text != "") && (textBox7->Text != ""))
		{ 
			question question1;
			FILE *f;
			strcpy(question1.question_text, System_to_char(textBox1->Text)); 
			strcpy(question1.v1, System_to_char(textBox2->Text));
			strcpy(question1.v2, System_to_char(textBox3->Text));
			strcpy(question1.v3, System_to_char(textBox4->Text));
			strcpy(question1.v4, System_to_char(textBox5->Text));
			strcpy(question1.v5, System_to_char(textBox6->Text));
			question1.answer = Convert::ToInt64(textBox7->Text);
			if (edit_mode == true) 
			{
				strcpy(global_pointer->question.question_text,
					question1.question_text);
				strcpy(global_pointer->question.v1, question1.v1);
				strcpy(global_pointer->question.v2, question1.v2);
				strcpy(global_pointer->question.v3, question1.v3);
				strcpy(global_pointer->question.v4, question1.v4);
				strcpy(global_pointer->question.v5, question1.v5);
				global_pointer->question.answer = question1.answer;
				question_list* temp = head;
				f = fopen("Question_file.txt", "wb"); 
				fclose(f);
				f = fopen("Question_file.txt", "ab"); 
				while (temp)
				{
					fwrite(&(*temp), sizeof(question1), 1, f);
					temp = temp->next;
				}
				fclose(f);
			}
			else
			{ 
				f = fopen("Question_file.txt", "ab"); 
				fwrite(&question1, sizeof(question1), 1, f);
				fclose(f);
				textBox1->Clear();
				textBox2->Clear();
				textBox3->Clear();
				textBox4->Clear();
				textBox5->Clear();
				textBox6->Clear();
				textBox7->Clear();
			}
		}
		else MessageBox::Show("Заповніть всі поля", "Помилка");
		button3->Enabled = false; // зробимо кнопку Save неактивною
	}

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		button5->Enabled = true; // зробимо активною кнопку прокрутки вправо
		if (global_pointer->prev != NULL) // якщо попередній елемент існує
		{
			global_pointer = global_pointer->prev; // переходимо на попередній елемент
			print(global_pointer); // виводимо його
			if (global_pointer->prev == NULL)
				button4->Enabled = false;// якщо перед елеметом більше немає елементів робимо кнопку прокрутки неактивною
		}
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		button4->Enabled = true;
		if (global_pointer->next != NULL)
		{
			global_pointer = global_pointer->next;
			print(global_pointer);
			if (global_pointer->next == NULL) button5->Enabled = false;
		}
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text->Length == 0 || textBox2->Text->Length == 0 || textBox3->Text->Length == 0 || textBox4->Text->Length == 0 || textBox5->Text->Length == 0 || textBox6->Text->Length == 0 || textBox7->Text->Length == 0)
		{
			button3->Enabled = false;
		}
		else
		{
			button3->Enabled = true;
		}
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		button3->Visible = false;
		button4->Visible = false;
		button5->Visible = false;
		label1->Visible = false;
		label2->Visible = false;
		label3->Visible = false;
		textBox1->Visible = false;
		textBox2->Visible = false;
		textBox3->Visible = false;
		textBox4->Visible = false;
		textBox5->Visible = false;
		textBox6->Visible = false;
		textBox7->Visible = false;
		std::remove("Question_file.txt");
		MessageBox::Show("Питання тестів видаленно");
	}
};
}
