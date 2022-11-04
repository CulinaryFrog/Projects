#pragma once

namespace GUITestApp {

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
	private: System::Windows::Forms::Label^ opLabel;
	private: System::Windows::Forms::Button^ addButton;
	private: System::Windows::Forms::Button^ minButton;
	private: System::Windows::Forms::Button^ multButton;
	private: System::Windows::Forms::Button^ divButton;
	protected:

	private: System::Windows::Forms::Label^ resultLabel;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	protected:

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
			this->opLabel = (gcnew System::Windows::Forms::Label());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->minButton = (gcnew System::Windows::Forms::Button());
			this->multButton = (gcnew System::Windows::Forms::Button());
			this->divButton = (gcnew System::Windows::Forms::Button());
			this->resultLabel = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// opLabel
			// 
			this->opLabel->AutoSize = true;
			this->opLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->opLabel->Location = System::Drawing::Point(168, 45);
			this->opLabel->Name = L"opLabel";
			this->opLabel->Size = System::Drawing::Size(33, 20);
			this->opLabel->TabIndex = 2;
			this->opLabel->Text = L"OP";
			// 
			// addButton
			// 
			this->addButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addButton->Location = System::Drawing::Point(153, 100);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(75, 23);
			this->addButton->TabIndex = 3;
			this->addButton->Text = L"+";
			this->addButton->UseVisualStyleBackColor = true;
			this->addButton->Click += gcnew System::EventHandler(this, &MyForm::addButton_Click);
			// 
			// minButton
			// 
			this->minButton->BackColor = System::Drawing::SystemColors::Control;
			this->minButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->minButton->ForeColor = System::Drawing::SystemColors::Highlight;
			this->minButton->Location = System::Drawing::Point(153, 148);
			this->minButton->Name = L"minButton";
			this->minButton->Size = System::Drawing::Size(75, 23);
			this->minButton->TabIndex = 4;
			this->minButton->Text = L"-";
			this->minButton->UseVisualStyleBackColor = true;
			this->minButton->Click += gcnew System::EventHandler(this, &MyForm::minButton_Click);
			// 
			// multButton
			// 
			this->multButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->multButton->Location = System::Drawing::Point(153, 203);
			this->multButton->Name = L"multButton";
			this->multButton->Size = System::Drawing::Size(75, 23);
			this->multButton->TabIndex = 5;
			this->multButton->Text = L"X";
			this->multButton->UseVisualStyleBackColor = true;
			this->multButton->Click += gcnew System::EventHandler(this, &MyForm::multButton_Click);
			// 
			// divButton
			// 
			this->divButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->divButton->ForeColor = System::Drawing::SystemColors::Highlight;
			this->divButton->Location = System::Drawing::Point(153, 254);
			this->divButton->Name = L"divButton";
			this->divButton->Size = System::Drawing::Size(75, 23);
			this->divButton->TabIndex = 6;
			this->divButton->Text = L"/";
			this->divButton->UseVisualStyleBackColor = true;
			this->divButton->Click += gcnew System::EventHandler(this, &MyForm::divButton_Click);
			// 
			// resultLabel
			// 
			this->resultLabel->AutoSize = true;
			this->resultLabel->Location = System::Drawing::Point(290, 103);
			this->resultLabel->Name = L"resultLabel";
			this->resultLabel->Size = System::Drawing::Size(55, 20);
			this->resultLabel->TabIndex = 7;
			this->resultLabel->Text = L"Result";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(27, 45);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 11;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Integer_Only_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(260, 45);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 12;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Integer_Only_KeyPress);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(377, 347);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->resultLabel);
			this->Controls->Add(this->divButton);
			this->Controls->Add(this->multButton);
			this->Controls->Add(this->minButton);
			this->Controls->Add(this->addButton);
			this->Controls->Add(this->opLabel);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	//Event functions for calculator

	//Addition button
	private: System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e) {
		int output = System::Convert::ToInt64(textBox1->Text) + System::Convert::ToInt64(textBox2->Text);
		resultLabel->Text = System::Convert::ToString(output);
	
	}

	//Subtraction button
	private: System::Void minButton_Click(System::Object^ sender, System::EventArgs^ e) {
		int output = System::Convert::ToInt64(textBox1->Text) - System::Convert::ToInt64(textBox2->Text);
		resultLabel->Text = System::Convert::ToString(output);
	
	}

	//Multiplication button
	private: System::Void multButton_Click(System::Object^ sender, System::EventArgs^ e) {
		int output = System::Convert::ToInt64(textBox1->Text) * System::Convert::ToInt64(textBox2->Text);
		resultLabel->Text = System::Convert::ToString(output);
	}
	
	//Division button
	private: System::Void divButton_Click(System::Object^ sender, System::EventArgs^ e) {
		int output = System::Convert::ToInt64(textBox1->Text) / System::Convert::ToInt64(textBox2->Text);
		resultLabel->Text = System::Convert::ToString(output);

	}


	//Restricts to only integers and backspaces for textbox input
	private: System::Void Integer_Only_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;

		}
	}

};
}
