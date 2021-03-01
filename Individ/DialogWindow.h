#pragma once
#include "MainForm.h"	//подключаем главную форму, чтобы обращаться к ее компонентам\полям

namespace Individ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для DialogWindow
	/// </summary>
	public ref class DialogWindow : public System::Windows::Forms::Form
	{
	public:
		DialogWindow(MainForm^ parent)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			parentForm = parent;
		}
	private: 
		MainForm^ parentForm;

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~DialogWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::RadioButton^ radioButton_Blue;
	private: System::Windows::Forms::RadioButton^ radioButton_Green;
	private: System::Windows::Forms::RadioButton^ radioButton_Red;
	private: System::Windows::Forms::CheckBox^ checkBox_Down;
	private: System::Windows::Forms::CheckBox^ checkBox_Up;
	private: System::Windows::Forms::Button^ btnOK;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->checkBox_Up = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_Down = (gcnew System::Windows::Forms::CheckBox());
			this->radioButton_Red = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_Green = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_Blue = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton_Blue);
			this->groupBox1->Controls->Add(this->radioButton_Green);
			this->groupBox1->Controls->Add(this->radioButton_Red);
			this->groupBox1->Controls->Add(this->checkBox_Down);
			this->groupBox1->Controls->Add(this->checkBox_Up);
			this->groupBox1->Location = System::Drawing::Point(13, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(222, 116);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(160, 135);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(75, 23);
			this->btnOK->TabIndex = 0;
			this->btnOK->Text = L"Применить";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &DialogWindow::btnOK_Click);
			// 
			// checkBox_Up
			// 
			this->checkBox_Up->AutoSize = true;
			this->checkBox_Up->Location = System::Drawing::Point(3, 16);
			this->checkBox_Up->Name = L"checkBox_Up";
			this->checkBox_Up->Size = System::Drawing::Size(40, 17);
			this->checkBox_Up->TabIndex = 0;
			this->checkBox_Up->Text = L"Up";
			this->checkBox_Up->UseVisualStyleBackColor = true;
			// 
			// checkBox_Down
			// 
			this->checkBox_Down->AutoSize = true;
			this->checkBox_Down->Location = System::Drawing::Point(3, 39);
			this->checkBox_Down->Name = L"checkBox_Down";
			this->checkBox_Down->Size = System::Drawing::Size(54, 17);
			this->checkBox_Down->TabIndex = 1;
			this->checkBox_Down->Text = L"Down";
			this->checkBox_Down->UseVisualStyleBackColor = true;
			// 
			// radioButton_Red
			// 
			this->radioButton_Red->AutoSize = true;
			this->radioButton_Red->Location = System::Drawing::Point(93, 16);
			this->radioButton_Red->Name = L"radioButton_Red";
			this->radioButton_Red->Size = System::Drawing::Size(45, 17);
			this->radioButton_Red->TabIndex = 2;
			this->radioButton_Red->TabStop = true;
			this->radioButton_Red->Text = L"Red";
			this->radioButton_Red->UseVisualStyleBackColor = true;
			// 
			// radioButton_Green
			// 
			this->radioButton_Green->AutoSize = true;
			this->radioButton_Green->Location = System::Drawing::Point(93, 39);
			this->radioButton_Green->Name = L"radioButton_Green";
			this->radioButton_Green->Size = System::Drawing::Size(54, 17);
			this->radioButton_Green->TabIndex = 3;
			this->radioButton_Green->TabStop = true;
			this->radioButton_Green->Text = L"Green";
			this->radioButton_Green->UseVisualStyleBackColor = true;
			// 
			// radioButton_Blue
			// 
			this->radioButton_Blue->AutoSize = true;
			this->radioButton_Blue->Location = System::Drawing::Point(93, 63);
			this->radioButton_Blue->Name = L"radioButton_Blue";
			this->radioButton_Blue->Size = System::Drawing::Size(46, 17);
			this->radioButton_Blue->TabIndex = 4;
			this->radioButton_Blue->TabStop = true;
			this->radioButton_Blue->Text = L"Blue";
			this->radioButton_Blue->UseVisualStyleBackColor = true;
			// 
			// DialogWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(247, 169);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->groupBox1);
			this->Name = L"DialogWindow";
			this->Text = L"Input color";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//Передаем параметры
			parentForm->Up = checkBox_Up->Checked;
			parentForm->Down = checkBox_Down->Checked;
			parentForm->Red = radioButton_Red->Checked;
			parentForm->Green = radioButton_Green->Checked;
			parentForm->Blue = radioButton_Blue->Checked;
		Close();
	}
};
}
