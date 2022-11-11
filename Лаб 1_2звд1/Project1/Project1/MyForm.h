#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::RadioButton^ radioButton9;
	private: System::Windows::Forms::RadioButton^ radioButton10;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(27, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(427, 35);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Виберіть колір тексту та фону";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(80, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(297, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Візуальне програмування MS Visual C++";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(30, 107);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Колір тексту";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(327, 107);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Колір фону";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(33, 126);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(93, 20);
			this->radioButton1->TabIndex = 4;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Червоний";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(33, 152);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(80, 20);
			this->radioButton2->TabIndex = 5;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Жовтий";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->Click += gcnew System::EventHandler(this, &MyForm::radioButton2_Click);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(33, 178);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(85, 20);
			this->radioButton3->TabIndex = 6;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Зелений";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->Click += gcnew System::EventHandler(this, &MyForm::radioButton3_Click);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(33, 204);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(67, 20);
			this->radioButton4->TabIndex = 7;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Синій ";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->Click += gcnew System::EventHandler(this, &MyForm::radioButton4_Click);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(33, 230);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(77, 20);
			this->radioButton5->TabIndex = 8;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Чорний";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->Click += gcnew System::EventHandler(this, &MyForm::radioButton5_Click);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(330, 126);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(77, 20);
			this->radioButton6->TabIndex = 9;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Чорний";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->Click += gcnew System::EventHandler(this, &MyForm::radioButton6_Click);
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(330, 152);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(64, 20);
			this->radioButton7->TabIndex = 10;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"Синій";
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->Click += gcnew System::EventHandler(this, &MyForm::radioButton7_Click);
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(330, 178);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(85, 20);
			this->radioButton8->TabIndex = 11;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"Зелений";
			this->radioButton8->UseVisualStyleBackColor = true;
			this->radioButton8->Click += gcnew System::EventHandler(this, &MyForm::radioButton8_Click);
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Location = System::Drawing::Point(330, 204);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(80, 20);
			this->radioButton9->TabIndex = 12;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"Жовтий";
			this->radioButton9->UseVisualStyleBackColor = true;
			this->radioButton9->Click += gcnew System::EventHandler(this, &MyForm::radioButton9_Click);
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Location = System::Drawing::Point(330, 230);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(96, 20);
			this->radioButton10->TabIndex = 13;
			this->radioButton10->TabStop = true;
			this->radioButton10->Text = L" Червоний";
			this->radioButton10->UseVisualStyleBackColor = true;
			this->radioButton10->Click += gcnew System::EventHandler(this, &MyForm::radioButton10_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(482, 309);
			this->Controls->Add(this->radioButton10);
			this->Controls->Add(this->radioButton9);
			this->Controls->Add(this->radioButton8);
			this->Controls->Add(this->radioButton7);
			this->Controls->Add(this->radioButton6);
			this->Controls->Add(this->radioButton5);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	label2->ForeColor = Color::Red;
	label1->ForeColor = Color::Red;
}

private: System::Void radioButton2_Click(System::Object^ sender, System::EventArgs^ e) {
	label2->ForeColor = Color::Yellow;
	label1->ForeColor = Color::Yellow;
}
private: System::Void radioButton3_Click(System::Object^ sender, System::EventArgs^ e) {
	label2->ForeColor = Color::Green;
	label1->ForeColor = Color::Green;
}
private: System::Void radioButton4_Click(System::Object^ sender, System::EventArgs^ e) {
	label2->ForeColor = Color::Blue;
	label1->ForeColor = Color::Blue;
}
private: System::Void radioButton5_Click(System::Object^ sender, System::EventArgs^ e) {
	label2->ForeColor = Color::Black;
	label1->ForeColor = Color::Black;
}
private: System::Void radioButton6_Click(System::Object^ sender, System::EventArgs^ e) {
	label2->BackColor=Color::Black;
	label1->BackColor=Color::Black;
}

private: System::Void radioButton7_Click(System::Object^ sender, System::EventArgs^ e) {
	label2->BackColor = Color::Blue;
	label1->BackColor = Color::Blue;
}
private: System::Void radioButton8_Click(System::Object^ sender, System::EventArgs^ e) {
	label2->BackColor = Color::Green;
	label1->BackColor = Color::Green;
}
private: System::Void radioButton9_Click(System::Object^ sender, System::EventArgs^ e) {
	label2->BackColor = Color::Yellow;
	label1->BackColor = Color::Yellow;
}

private: System::Void radioButton10_Click(System::Object^ sender, System::EventArgs^ e) {
	label2->BackColor = Color::Red;
	label1->BackColor = Color::Red;
}
};
}
