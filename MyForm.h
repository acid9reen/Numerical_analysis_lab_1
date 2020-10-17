#pragma once

#include "Utils.h"

namespace Graph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
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
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  X;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  F_1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  F_2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^ initial_x;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;

	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^ initial_u;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ function;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NM_function;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::CheckBox^ step_control;

	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::PageSetupDialog^ pageSetupDialog1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;




	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->X = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->function = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NM_function = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->initial_x = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->initial_u = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->step_control = (gcnew System::Windows::Forms::CheckBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pageSetupDialog1 = (gcnew System::Windows::Forms::PageSetupDialog());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(29, 37);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(5);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(668, 402);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(843, 494);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(233, 57);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Draw";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->X, this->function,
					this->NM_function, this->Column1
			});
			this->dataGridView1->Location = System::Drawing::Point(745, 37);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 49;
			this->dataGridView1->Size = System::Drawing::Size(413, 402);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// X
			// 
			this->X->HeaderText = L"X";
			this->X->MinimumWidth = 6;
			this->X->Name = L"X";
			this->X->ReadOnly = true;
			this->X->Width = 50;
			// 
			// function
			// 
			this->function->HeaderText = L"function";
			this->function->MinimumWidth = 6;
			this->function->Name = L"function";
			this->function->ReadOnly = true;
			this->function->Width = 120;
			// 
			// NM_function
			// 
			this->NM_function->HeaderText = L"NM_function";
			this->NM_function->MinimumWidth = 6;
			this->NM_function->Name = L"NM_function";
			this->NM_function->ReadOnly = true;
			this->NM_function->Width = 120;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"e";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 120;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 476);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"x(0)";
			// 
			// initial_x
			// 
			this->initial_x->Location = System::Drawing::Point(78, 477);
			this->initial_x->Margin = System::Windows::Forms::Padding(4);
			this->initial_x->Name = L"initial_x";
			this->initial_x->Size = System::Drawing::Size(63, 22);
			this->initial_x->TabIndex = 4;
			this->initial_x->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(218, 553);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"x_max";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(291, 553);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(64, 22);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(249, 476);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"h";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(273, 477);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(51, 22);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"0,001";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(291, 613);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(64, 22);
			this->textBox4->TabIndex = 13;
			this->textBox4->Text = L"1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(217, 613);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 17);
			this->label4->TabIndex = 12;
			this->label4->Text = L"y_max";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(292, 583);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(63, 22);
			this->textBox5->TabIndex = 11;
			this->textBox5->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(218, 583);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(45, 17);
			this->label5->TabIndex = 10;
			this->label5->Text = L"y_min";
			// 
			// initial_u
			// 
			this->initial_u->Location = System::Drawing::Point(78, 504);
			this->initial_u->Margin = System::Windows::Forms::Padding(4);
			this->initial_u->Name = L"initial_u";
			this->initial_u->Size = System::Drawing::Size(63, 22);
			this->initial_u->TabIndex = 14;
			this->initial_u->Text = L"1,0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(26, 504);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 17);
			this->label6->TabIndex = 15;
			this->label6->Text = L"u(0)";
			// 
			// step_control
			// 
			this->step_control->AutoSize = true;
			this->step_control->Location = System::Drawing::Point(896, 558);
			this->step_control->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->step_control->Name = L"step_control";
			this->step_control->Size = System::Drawing::Size(136, 21);
			this->step_control->TabIndex = 17;
			this->step_control->Text = L"With step control";
			this->step_control->UseVisualStyleBackColor = true;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(431, 476);
			this->textBox7->Margin = System::Windows::Forms::Padding(4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(80, 22);
			this->textBox7->TabIndex = 19;
			this->textBox7->Text = L"0,001";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(393, 478);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(32, 17);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Eps";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(25, 453);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(181, 20);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Начальные условия:";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(248, 453);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(46, 20);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Шаг:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(376, 453);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(250, 20);
			this->label11->TabIndex = 22;
			this->label11->Text = L"Параметр для контроля ЛП:";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(415, 553);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(87, 21);
			this->radioButton1->TabIndex = 23;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Test task";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(415, 583);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(101, 21);
			this->radioButton2->TabIndex = 24;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Main task 1";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(415, 613);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(101, 21);
			this->radioButton3->TabIndex = 25;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Main task 2";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1243, 658);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->step_control);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->initial_u);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->initial_x);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->zedGraphControl1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();
		PointPairList^ true_list = gcnew ZedGraph::PointPairList();
		PointPairList^ num_list = gcnew ZedGraph::PointPairList();

		// Интервал, где есть данные
		double xmin = Convert::ToDouble(initial_x->Text);
		double xmax = Convert::ToDouble(textBox2->Text);

		double step = Convert::ToDouble(textBox3->Text);
		double eps = Convert::ToDouble(textBox7->Text);


		double xmin_limit = xmin - 0.1;
		double xmax_limit = xmax + 0.1;

		/*double ymin_limit = -1.0;
		double ymax_limit = 100.0;*/

		// Список точек
		int i = 0;
		dataGridView1->Rows->Clear();
		double u0 = Convert::ToDouble(initial_u->Text);
		double u0_num;

		true_list->Add(xmin, u0);
		num_list->Add(xmin, u0);

		if (radioButton1->Checked) {
			u0_num = u0;

			double y_funtion_1_RK_4;
			double y_function_1;
			std::vector<double> new_point;

			while (true)
			{
				if (step_control->Checked == true)
				{
					new_point = utils::next_point_with_step_conrol(utils::runge_kutta_4, utils::function_1_derivative, xmin, u0_num, step, eps);
				}
				else
				{
					new_point = utils::next_point(utils::runge_kutta_4, utils::function_1_derivative, xmin, u0_num, step, eps);
				}

				xmin = new_point[0];
				if (xmin > xmax)
					break;

				y_funtion_1_RK_4 = new_point[1];
				y_function_1 = utils::function_1(xmin, u0);


				true_list->Add(xmin, y_function_1);
				num_list->Add(xmin, y_funtion_1_RK_4);

				dataGridView1->Rows->Add();
				dataGridView1->Rows[i]->Cells[0]->Value = xmin;
				dataGridView1->Rows[i]->Cells[1]->Value = floor(y_function_1 * 1000) / 1000;
				dataGridView1->Rows[i]->Cells[2]->Value = floor(y_funtion_1_RK_4 * 1000) / 1000;
				dataGridView1->Rows[i]->Cells[3]->Value = floor((y_function_1 - y_funtion_1_RK_4) * 1000) / 1000;
				u0_num = y_funtion_1_RK_4;
				step = new_point[2];
				i++;

			}
		}
		
		if (radioButton2->Checked) {
			//calc?
			u0_num = 1;

			double y_funtion_2_RK_4;
			std::vector<double> new_point;

			while (true)
			{
				if (step_control->Checked == true)
				{
					new_point = utils::next_point_with_step_conrol(utils::runge_kutta_4, utils::function_2_derivative, xmin, u0_num, step, eps);
				}
				else
				{
					new_point = utils::next_point(utils::runge_kutta_4, utils::function_2_derivative, xmin, u0_num, step, eps);
				}

				xmin = new_point[0];
				if (xmin > xmax)
					break;
				y_funtion_2_RK_4 = new_point[1];

				num_list->Add(xmin, y_funtion_2_RK_4);

				dataGridView1->Rows->Add();
				dataGridView1->Rows[i]->Cells[0]->Value = xmin;
				dataGridView1->Rows[i]->Cells[2]->Value = floor(y_funtion_2_RK_4 * 1000) / 1000;
				u0_num = y_funtion_2_RK_4;
				step = new_point[2];
				i++;
				

			}
		}
		//for (double x = xmin + step; x <= xmax; x += step)
		//{
		//	double y_function_1 = utils::function_1(x);
		//	double y_funtion_1_RK_4 = utils::runge_kutta_4(utils::function_1_derivative, step, x, y0);

		//	//Добавление на график
		//	f1_list->Add(x, y_function_1);
		//	f2_list->Add(x, y_funtion_1_RK_4);
		//	//Печать в таблицу
		//	dataGridView1->Rows->Add();
		//	dataGridView1->Rows[i]->Cells[0]->Value = x;
		//	dataGridView1->Rows[i]->Cells[1]->Value = floor(y_function_1 * 1000) / 1000;
		//	dataGridView1->Rows[i]->Cells[2]->Value = floor(y_funtion_1_RK_4 * 1000) / 1000;
		//	y0 = y_funtion_1_RK_4;
		//	i++;
		//}
		

		LineItem^ Curve1 = panel->AddCurve("Точное решение", true_list, Color::Red,SymbolType::None);
		LineItem^ Curve2 = panel->AddCurve("Численное решение", num_list, Color::Blue, SymbolType::None);

		// Устанавливаем интересующий нас интервал по оси X
		panel->XAxis->Scale->Min = xmin_limit;
		panel->XAxis->Scale->Max = xmax_limit;
/*
		// Устанавливаем интересующий нас интервал по оси Y
		panel->YAxis->Scale->Min = ymin_limit;
		panel->YAxis->Scale->Max = ymax_limit;
*/
		// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
		// В противном случае на рисунке будет показана только часть графика, 
		// которая умещается в интервалы по осям, установленные по умолчанию
		zedGraphControl1->AxisChange();
		// Обновляем график
		zedGraphControl1->Invalidate();

	}
	private: System::Void zedGraphControl1_Load(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	
	GraphPane^ panel = zedGraphControl1->GraphPane;
	double xmin = Convert::ToDouble(textBox5->Text);
	double xmax = Convert::ToDouble(textBox4->Text);
	// Устанавливаем интересующий нас интервал по оси X
	panel->XAxis->Scale->Min = xmin;
	panel->XAxis->Scale->Max = xmax;

	// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
	// В противном случае на рисунке будет показана только часть графика, 
	// которая умещается в интервалы по осям, установленные по умолчанию
	zedGraphControl1->AxisChange();
	// Обновляем график
	zedGraphControl1->Invalidate();

}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
