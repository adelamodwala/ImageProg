#pragma once

namespace ImageProg {

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
		Bitmap^ bmpFront;

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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  picImage;
	private: System::Windows::Forms::TrackBar^  trkBrightness;
	private: System::Windows::Forms::Label^  lblCPPAverage;
	private: System::Windows::Forms::OpenFileDialog^  dlgOpen;
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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->picImage = (gcnew System::Windows::Forms::PictureBox());
			this->trkBrightness = (gcnew System::Windows::Forms::TrackBar());
			this->lblCPPAverage = (gcnew System::Windows::Forms::Label());
			this->dlgOpen = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picImage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trkBrightness))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(426, 29);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->openToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(46, 25);
			this->fileToolStripMenuItem->Text = L"&File";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(152, 26);
			this->openToolStripMenuItem->Text = L"&Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(152, 26);
			this->exitToolStripMenuItem->Text = L"E&xit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// picImage
			// 
			this->picImage->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->picImage->Location = System::Drawing::Point(12, 32);
			this->picImage->Name = L"picImage";
			this->picImage->Size = System::Drawing::Size(402, 193);
			this->picImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picImage->TabIndex = 1;
			this->picImage->TabStop = false;
			// 
			// trkBrightness
			// 
			this->trkBrightness->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->trkBrightness->Enabled = false;
			this->trkBrightness->Location = System::Drawing::Point(13, 232);
			this->trkBrightness->Maximum = 255;
			this->trkBrightness->Minimum = -255;
			this->trkBrightness->Name = L"trkBrightness";
			this->trkBrightness->Size = System::Drawing::Size(247, 45);
			this->trkBrightness->TabIndex = 2;
			this->trkBrightness->TickFrequency = 16;
			// 
			// lblCPPAverage
			// 
			this->lblCPPAverage->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->lblCPPAverage->AutoSize = true;
			this->lblCPPAverage->Location = System::Drawing::Point(266, 232);
			this->lblCPPAverage->Name = L"lblCPPAverage";
			this->lblCPPAverage->Size = System::Drawing::Size(105, 20);
			this->lblCPPAverage->TabIndex = 3;
			this->lblCPPAverage->Text = L"C++ Average:";
			// 
			// dlgOpen
			// 
			this->dlgOpen->FileName = L"openFileDialog1";
			this->dlgOpen->Filter = L"Jpeg|*.jpg|PNG|*.png|Bitmap|*.bmp|All Files|*.*";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(426, 402);
			this->Controls->Add(this->lblCPPAverage);
			this->Controls->Add(this->trkBrightness);
			this->Controls->Add(this->picImage);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"MyForm";
			this->RightToLeftLayout = true;
			this->Text = L"Image Proc";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picImage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trkBrightness))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void fileToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
	private: System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		if (dlgOpen->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			try
			{
				bmpFront = (Bitmap^)Image::FromFile(dlgOpen->FileName);

				picImage->Image = bmpFront;

				trkBrightness->Enabled = true;
			}
			catch (...)
			{
				MessageBox::Show("This file could not be opened");
			}
		}
	}
	};
}
