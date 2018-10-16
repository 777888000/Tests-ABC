#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <msclr\marshal.h>
#include "Header.h"
#include "Header2.h"


using namespace msclr::interop;
using namespace System;


static int questions_counter = 0;
static int i;
static float count;
static float mark = 0;
struct question0
{
	char question_text[25];
	char v1[25];
	char v2[25];
	char v3[25];
	char v4[25];
	char v5[25];
	int answer;
};

struct question_list0 {
	question0 question0;
	question_list0* next;
	question_list0* prev;
};

static question_list0* global_pointer0;


namespace pr004 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace dll3;

	/// <summary>
	/// Сводка для MyForm3
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		char* name;
		MyForm1(char* name_)
		{
			InitializeComponent();
			name = name_;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label3;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(276, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Питання";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(142, 65);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(328, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(257, 119);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(106, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Варіанти відповідей";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(260, 135);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(85, 17);
			this->radioButton1->TabIndex = 3;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"radioButton1";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(260, 158);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(85, 17);
			this->radioButton2->TabIndex = 4;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"radioButton2";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::radioButton1_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(260, 181);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(85, 17);
			this->radioButton3->TabIndex = 5;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"radioButton3";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::radioButton1_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(260, 204);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(85, 17);
			this->radioButton4->TabIndex = 6;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"radioButton4";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::radioButton1_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(260, 227);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(85, 17);
			this->radioButton5->TabIndex = 7;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"radioButton5";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::radioButton1_CheckedChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(142, 306);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"<-";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(270, 306);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Відповісти";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(395, 306);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 10;
			this->button3->Text = L"->";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm1::timer1_Tick);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 16);
			this->label3->TabIndex = 11;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGreen;
			this->ClientSize = System::Drawing::Size(621, 352);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->radioButton5);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm1";
			this->Text = L"Проходження тестування";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void push_end(question_list0* &head, question_list0* &tail, char* question_text, char* v1, char* v2, char* v3, char* v4, char* v5, int answer)
		{
			question_list0 *NewNode = (question_list0*)malloc(sizeof(question_list0));
			strcpy(NewNode->question0.question_text, question_text);
			strcpy(NewNode->question0.v1, v1);
			strcpy(NewNode->question0.v2, v2);
			strcpy(NewNode->question0.v3, v3);
			strcpy(NewNode->question0.v4, v4);
			strcpy(NewNode->question0.v5, v5);
			NewNode->question0.answer = answer;
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

		//////
		void print(question_list0 *p)
		{
			textBox1->Text = marshal_as<String^>(p->question0.question_text);
			radioButton1->Text = marshal_as<String^>(p->question0.v1);
			radioButton2->Text = marshal_as<String^>(p->question0.v2);
			radioButton3->Text = marshal_as<String^>(p->question0.v3);
			radioButton4->Text = marshal_as<String^>(p->question0.v4);
			radioButton5->Text = marshal_as<String^>(p->question0.v5);
		}

		/////

		int who_Checked()
		{
			if (radioButton1->Checked == true)
			{
				radioButton1->Checked = false;
				return 1;
			}
			if (radioButton2->Checked == true)
			{
				radioButton2->Checked = false;
				return 2;
			}
			if (radioButton3->Checked == true)
			{
				radioButton3->Checked = false;
				return 3;
			}
			if (radioButton4->Checked == true)
			{
				radioButton4->Checked = false;
				return 4;
			}
			if (radioButton5->Checked == true)
			{
				radioButton5->Checked = false;
				return 5;
			}
		}

#pragma endregion
		Class1 ^dll = gcnew Class1;

	private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
		textBox1->ReadOnly = true;
		FILE *f7;
		f7 = fopen("count.txt", "r");
		fscanf(f7, "%f", &count);
		fclose(f7);
		question_list0* head = NULL;
		question_list0* tail = NULL;
		bool mas[15];
		dll->get_rand(mas, count);
		button1->Enabled = false;
		button2->Enabled = false;
		question0 question01;
		FILE *f1;
		if ((f1 = fopen("Question_file.txt", "rb")) == NULL)
		{
			MessageBox::Show("Питання відсутні", "Помилка");
			Close();
			return;
		};
		fread(&question01, sizeof(question01), 1, f1);
		int i = 0;
		while (!feof(f1))
		{
			if (mas[i] == true) push_end(head, tail, question01.question_text, question01.v1, question01.v2, question01.v3, question01.v4, question01.v5, question01.answer);
			i++;
			fread(&question01, sizeof(question01), 1, f1);
		}
		fclose(f1);
		global_pointer0 = head;
		print(global_pointer0);
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		questions_counter++;
		if (who_Checked() == global_pointer0->question0.answer) mark += 1 / (count / 5);
		question_list0* temp = global_pointer0;

		if (global_pointer0->next != NULL)
		{
			if (global_pointer0->prev != NULL) button1->Enabled = true;
			global_pointer0 = global_pointer0->next;
			print(global_pointer0);
			if (global_pointer0->next == NULL) button3->Enabled = false;
		}
		else
			if (global_pointer0->prev != NULL)
			{
				button3->Enabled = false;
				global_pointer0 = global_pointer0->prev;
				print(global_pointer0);
				if (global_pointer0->prev == NULL) button1->Enabled = false;
			}

		if (temp->next != NULL) temp->next->prev = temp->prev;
		if (temp->prev != NULL) temp->prev->next = temp->next;
		free(temp);

		if (questions_counter == count)
		{
			mark = zaoukrug(mark);
			FILE *f2;
			f2 = fopen("rez_file.txt", "a");
			fprintf(f2, "Ім'я: %s - Оцінка: %.2f\n", name, mark);
			fclose(f2);
			timer1->Enabled = false;
			MessageBox::Show("Тест завершено\n Оцінка - " + mark);
			this->Close();
			questions_counter = 0;

			i = 0;
			count = 0;
			mark = 0;
		}
		button2->Enabled = false;
	}

	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		button2->Enabled = true;
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		button1->Enabled = true;
		if (global_pointer0->next != NULL)
		{
			global_pointer0 = global_pointer0->next;
			print(global_pointer0);
			if (global_pointer0->next == NULL) button3->Enabled = false;
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		button3->Enabled = true;
		if (global_pointer0->prev != NULL)
		{
			global_pointer0 = global_pointer0->prev;
			print(global_pointer0);
			if (global_pointer0->prev == NULL) button1->Enabled = false;
		}
	}

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		i--;
		if (i == -1)
		{
			timer1->Enabled = false;
			FILE *f2;
			f2 = fopen("rez_file.txt", "a");
			fprintf(f2, "Name: %s - Mark: %.2f\n", name, mark);
			fclose(f2);
			MessageBox::Show("Тест завершено\n Оцінка - 0");

			Close();
		}
		if (secunda(i) < 10)
		{
			label3->Text = "Часу залишилось: " + minute(i).ToString() + " хв 0" + secunda(i).ToString() + " сек ";
		}
		else label3->Text = "Часу залишилось: " + minute(i).ToString() + " хв " + secunda(i).ToString() + " сек ";
		if (i < 60)
		{
			this->label3->ForeColor = System::Drawing::Color::Red;
		}
	}
	};
}
