#include <msclr\marshal_cppstd.h>
#include <string>

namespace WindowsFormsApp1 {
    public ref class MyForm : public System::Windows::Forms::Form {
    public:
        MyForm() {
            InitializeComponent();
        }

    private:
        System::Windows::Forms::TextBox^ textBox1;
        System::Windows::Forms::Button^ button1;
        System::Windows::Forms::Label^ label1;

        void InitializeComponent() {
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(12, 12);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(260, 20);
            this->textBox1->TabIndex = 0;
            this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(12, 38);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(260, 23);
            this->button1->TabIndex = 1;
            this->button1->Text = L"Submit";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(12, 64);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(0, 13);
            this->label1->TabIndex = 2;
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(284, 91);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->textBox1);
            this->Name = L"MyForm";
            this->Text = L"My Form";
            this->ResumeLayout(false);
            this->PerformLayout();
        }

    private:
        void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
            if (!Char::IsDigit(e->KeyChar) && e->KeyChar != static_cast<char>(Keys::Back)) {
                e->Handled = true;
                MessageBox::Show("Пожалуйста, вводите только цифры.");
            }
        }

        void button1_Click(System::Object^ sender, System::EventArgs^ e) {
            std::string input = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
            try {
                int number = std::stoi(input);
                this->label1->Text = "Введено число: " + number.ToString();
            }
            catch (std::invalid_argument&) {
                this->label1->Text = "Ошибка: Введено не число.";
            }
        }
    };
}

int main() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew WindowsFormsApp1::MyForm());
    return 0;
}
