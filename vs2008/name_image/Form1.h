#pragma once


namespace name_image {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 の概要
	///
	/// 警告: このクラスの名前を変更する場合、このクラスが依存するすべての .resx ファイルに関連付けられた
	///          マネージ リソース コンパイラ ツールに対して 'Resource File Name' プロパティを
	///          変更する必要があります。この変更を行わないと、
	///          デザイナと、このフォームに関連付けられたローカライズ済みリソースとが、
	///          正しく相互に利用できなくなります。
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクタ コードを追加します
			//
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  buttonStart;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::TextBox^  textBoxInputFilename;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::TextBox^  textBoxCaption;
	private: System::Windows::Forms::TextBox^  textBoxExt;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownFontSizeFactor;

	protected: 

	private:
		/// <summary>
		/// 必要なデザイナ変数です。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナ サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディタで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonStart = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->textBoxInputFilename = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBoxCaption = (gcnew System::Windows::Forms::TextBox());
			this->textBoxExt = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownFontSizeFactor = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownFontSizeFactor))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonStart
			// 
			this->buttonStart->Location = System::Drawing::Point(152, 177);
			this->buttonStart->Name = L"buttonStart";
			this->buttonStart->Size = System::Drawing::Size(222, 73);
			this->buttonStart->TabIndex = 0;
			this->buttonStart->Text = L"Start";
			this->buttonStart->UseVisualStyleBackColor = true;
			this->buttonStart->Click += gcnew System::EventHandler(this, &Form1::buttonStart_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// textBoxInputFilename
			// 
			this->textBoxInputFilename->Location = System::Drawing::Point(12, 12);
			this->textBoxInputFilename->Name = L"textBoxInputFilename";
			this->textBoxInputFilename->Size = System::Drawing::Size(457, 19);
			this->textBoxInputFilename->TabIndex = 1;
			this->textBoxInputFilename->Text = L"Prefix of the name of files to process";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(475, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(18, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"...";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(86, 132);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {100000, 0, 0, 0});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(152, 19);
			this->numericUpDown1->TabIndex = 3;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(317, 132);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {100000, 0, 0, 0});
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(152, 19);
			this->numericUpDown2->TabIndex = 4;
			this->numericUpDown2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBoxCaption
			// 
			this->textBoxCaption->Location = System::Drawing::Point(12, 66);
			this->textBoxCaption->Name = L"textBoxCaption";
			this->textBoxCaption->Size = System::Drawing::Size(457, 19);
			this->textBoxCaption->TabIndex = 5;
			this->textBoxCaption->Text = L"Prefix of the caption";
			// 
			// textBoxExt
			// 
			this->textBoxExt->Location = System::Drawing::Point(12, 37);
			this->textBoxExt->Name = L"textBoxExt";
			this->textBoxExt->Size = System::Drawing::Size(457, 19);
			this->textBoxExt->TabIndex = 6;
			this->textBoxExt->Text = L".JPG";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 97);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 12);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Font size factor";
			// 
			// numericUpDownFontSizeFactor
			// 
			this->numericUpDownFontSizeFactor->Location = System::Drawing::Point(114, 95);
			this->numericUpDownFontSizeFactor->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10000, 0, 0, 0});
			this->numericUpDownFontSizeFactor->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDownFontSizeFactor->Name = L"numericUpDownFontSizeFactor";
			this->numericUpDownFontSizeFactor->Size = System::Drawing::Size(152, 19);
			this->numericUpDownFontSizeFactor->TabIndex = 8;
			this->numericUpDownFontSizeFactor->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->numericUpDownFontSizeFactor->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {100, 0, 0, 0});
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(539, 262);
			this->Controls->Add(this->numericUpDownFontSizeFactor);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxExt);
			this->Controls->Add(this->textBoxCaption);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxInputFilename);
			this->Controls->Add(this->buttonStart);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownFontSizeFactor))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonStart_Click(System::Object^  sender, System::EventArgs^  e) {

				 for(int n = (int)numericUpDown1->Value; n <= (int)numericUpDown2->Value; n++){
					AddName(textBoxInputFilename->Text + n.ToString() + textBoxExt->Text,
							textBoxInputFilename->Text + n.ToString() + "-2" + textBoxExt->Text,
							textBoxCaption->Text + n.ToString() + textBoxExt->Text);
				}
			}

			void	PutStr(System::Drawing::Image^ img, System::String^ str, const float siz){
				System::Drawing::Font^ fnt = gcnew System::Drawing::Font("MS UI Gothic", siz);
				System::Drawing::Graphics^ g = System::Drawing::Graphics::FromImage(img);

				const	float	d = siz / 30.;

				g->DrawString(str, fnt, System::Drawing::Brushes::White, -d,  0);
				g->DrawString(str, fnt, System::Drawing::Brushes::White,  0, -d);
				g->DrawString(str, fnt, System::Drawing::Brushes::White,  d,  0);
				g->DrawString(str, fnt, System::Drawing::Brushes::White,  0,  d);

				g->DrawString(str, fnt, System::Drawing::Brushes::White,  d, -d);
				g->DrawString(str, fnt, System::Drawing::Brushes::White,  d,  d);
				g->DrawString(str, fnt, System::Drawing::Brushes::White, -d,  d);
				g->DrawString(str, fnt, System::Drawing::Brushes::White, -d, -d);

				g->DrawString(str, fnt, System::Drawing::Brushes::Blue, 0, 0);
			}

			void	AddName(System::String^ nameIn, System::String^ nameOut, System::String^ caption){
				if (!System::IO::File::Exists(nameIn)) {
					return;
				}
				System::Drawing::Bitmap^ bmp = gcnew System::Drawing::Bitmap(nameIn);
				System::Drawing::Image^ img = bmp;
				const	int	div = 20;
				const	float	size = img->Height / img->VerticalResolution / div * 72 * (float)numericUpDownFontSizeFactor->Value / 100.;
				PutStr(img, caption, size);
				img->Save(nameOut);
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK){
					 textBoxInputFilename->Text = openFileDialog1->FileName;
					 textBoxCaption->Text = openFileDialog1->FileName;
				 }
			 }
};
}

