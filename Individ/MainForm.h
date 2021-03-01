#pragma once

namespace Individ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ менюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ inputColorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ changeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clearToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel1;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->менюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->inputColorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->changeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clearToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->менюToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(333, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// менюToolStripMenuItem
			// 
			this->менюToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->inputColorToolStripMenuItem,
					this->changeToolStripMenuItem, this->clearToolStripMenuItem
			});
			this->менюToolStripMenuItem->Name = L"менюToolStripMenuItem";
			this->менюToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->менюToolStripMenuItem->Text = L"Меню";
			// 
			// inputColorToolStripMenuItem
			// 
			this->inputColorToolStripMenuItem->Name = L"inputColorToolStripMenuItem";
			this->inputColorToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->inputColorToolStripMenuItem->Text = L"Input color";
			this->inputColorToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::inputColorToolStripMenuItem_Click);
			// 
			// changeToolStripMenuItem
			// 
			this->changeToolStripMenuItem->Name = L"changeToolStripMenuItem";
			this->changeToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->changeToolStripMenuItem->Text = L"Change";
			this->changeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::changeToolStripMenuItem_Click);
			// 
			// clearToolStripMenuItem
			// 
			this->clearToolStripMenuItem->Name = L"clearToolStripMenuItem";
			this->clearToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->clearToolStripMenuItem->Text = L"Clear";
			this->clearToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::clearToolStripMenuItem_Click);
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel1->Location = System::Drawing::Point(0, 24);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(333, 237);
			this->panel1->TabIndex = 1;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(333, 261);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->Text = L"Задача вариант 11";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void inputColorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

	//параметры окон
	public: bool Up = false, Down = false, Red = false, Green = false, Blue = false;

		  //меняем цвет окна
	private: System::Void changeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//"обнуляем" позицию
		panel1->Location = System::Drawing::Point(0, 24);
		panel1->Size = System::Drawing::Size(333, 237);
		
		if (Up) 
		{
			panel1->Location = System::Drawing::Point(0, 24);
			panel1->Size = System::Drawing::Size(333, panel1->Size.Height / 2);
		}
		if (Down)
		{	
			panel1->Size = System::Drawing::Size(333, panel1->Size.Height / 2);
			panel1->Location = System::Drawing::Point(0, panel1->Location.Y + panel1->Height);
		}
		if (Down && Up) 
		{
			panel1->Location = System::Drawing::Point(0, 24);
			panel1->Size = System::Drawing::Size(333, 237);
		}

		if (Red) 
		{
			panel1->BackColor = Color::Red;
		}
		if (Green) 
		{
			panel1->BackColor = Color::Green;
		}
		if (Blue) {
			panel1->BackColor = Color::Blue;
		}
	}
	private: System::Void clearToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//сбрасываем цвет в первоначальный
		panel1->ResetBackColor();
	}
};
}
