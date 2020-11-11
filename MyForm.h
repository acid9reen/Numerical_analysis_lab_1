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

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  F_1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  F_2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^ initial_u;






	private: System::Windows::Forms::Label^ label6;


	private: System::Windows::Forms::TextBox^ initial_a;
	private: System::Windows::Forms::TextBox^ initial_c;


	private: System::Windows::Forms::TextBox^ initial_b;



	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ initial_u_der;

	private: System::Windows::Forms::Label^ label4;



	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::TextBox^ initial_eps;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::CheckBox^ step_control;
	private: System::Windows::Forms::TextBox^ initial_iter;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ X;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ function;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NM_function;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;













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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->initial_u = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->initial_a = (gcnew System::Windows::Forms::TextBox());
			this->initial_c = (gcnew System::Windows::Forms::TextBox());
			this->initial_b = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->initial_u_der = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->initial_eps = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->step_control = (gcnew System::Windows::Forms::CheckBox());
			this->initial_iter = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->X = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->function = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NM_function = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(37, 27);
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
			this->button1->Location = System::Drawing::Point(844, 475);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(189, 36);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Draw";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->X, this->function,
					this->NM_function, this->Column1, this->Column2, this->Column5, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(745, 37);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 49;
			this->dataGridView1->Size = System::Drawing::Size(756, 402);
			this->dataGridView1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(79, 485);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"a_x";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(119, 485);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(63, 22);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(79, 524);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(30, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"b_x";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(118, 524);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(64, 22);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(220, 485);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"h";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(244, 482);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(80, 22);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"0,01";
			// 
			// initial_u
			// 
			this->initial_u->Location = System::Drawing::Point(406, 482);
			this->initial_u->Margin = System::Windows::Forms::Padding(4);
			this->initial_u->Name = L"initial_u";
			this->initial_u->Size = System::Drawing::Size(80, 22);
			this->initial_u->TabIndex = 14;
			this->initial_u->Text = L"1,0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(362, 485);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 17);
			this->label6->TabIndex = 15;
			this->label6->Text = L"u(0)";
			// 
			// initial_a
			// 
			this->initial_a->Location = System::Drawing::Point(564, 482);
			this->initial_a->Margin = System::Windows::Forms::Padding(4);
			this->initial_a->Name = L"initial_a";
			this->initial_a->Size = System::Drawing::Size(32, 22);
			this->initial_a->TabIndex = 16;
			this->initial_a->Text = L"1,0";
			// 
			// initial_c
			// 
			this->initial_c->Location = System::Drawing::Point(564, 552);
			this->initial_c->Margin = System::Windows::Forms::Padding(4);
			this->initial_c->Name = L"initial_c";
			this->initial_c->Size = System::Drawing::Size(32, 22);
			this->initial_c->TabIndex = 17;
			this->initial_c->Text = L"1,0";
			// 
			// initial_b
			// 
			this->initial_b->Location = System::Drawing::Point(564, 517);
			this->initial_b->Margin = System::Windows::Forms::Padding(4);
			this->initial_b->Name = L"initial_b";
			this->initial_b->Size = System::Drawing::Size(32, 22);
			this->initial_b->TabIndex = 18;
			this->initial_b->Text = L"1,0";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(540, 482);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(16, 17);
			this->label7->TabIndex = 19;
			this->label7->Text = L"a";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(540, 519);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(16, 17);
			this->label8->TabIndex = 20;
			this->label8->Text = L"b";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(541, 552);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(15, 17);
			this->label9->TabIndex = 21;
			this->label9->Text = L"c";
			// 
			// initial_u_der
			// 
			this->initial_u_der->Location = System::Drawing::Point(404, 521);
			this->initial_u_der->Margin = System::Windows::Forms::Padding(4);
			this->initial_u_der->Name = L"initial_u_der";
			this->initial_u_der->Size = System::Drawing::Size(80, 22);
			this->initial_u_der->TabIndex = 22;
			this->initial_u_der->Text = L"1,0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(359, 522);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 17);
			this->label4->TabIndex = 23;
			this->label4->Text = L"u\'(0)";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(651, 482);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(59, 21);
			this->checkBox1->TabIndex = 24;
			this->checkBox1->Text = L"u\'(u)";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(651, 517);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(54, 21);
			this->checkBox2->TabIndex = 25;
			this->checkBox2->Text = L"u(x)";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(651, 551);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(57, 21);
			this->checkBox3->TabIndex = 26;
			this->checkBox3->Text = L"u\'(x)";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// initial_eps
			// 
			this->initial_eps->Location = System::Drawing::Point(244, 524);
			this->initial_eps->Margin = System::Windows::Forms::Padding(4);
			this->initial_eps->Name = L"initial_eps";
			this->initial_eps->Size = System::Drawing::Size(80, 22);
			this->initial_eps->TabIndex = 27;
			this->initial_eps->Text = L"0,001";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(220, 524);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(17, 17);
			this->label5->TabIndex = 28;
			this->label5->Text = L"E";
			// 
			// step_control
			// 
			this->step_control->AutoSize = true;
			this->step_control->Location = System::Drawing::Point(891, 526);
			this->step_control->Name = L"step_control";
			this->step_control->Size = System::Drawing::Size(96, 21);
			this->step_control->TabIndex = 29;
			this->step_control->Text = L"with contol";
			this->step_control->UseVisualStyleBackColor = true;
			// 
			// initial_iter
			// 
			this->initial_iter->Location = System::Drawing::Point(244, 563);
			this->initial_iter->Margin = System::Windows::Forms::Padding(4);
			this->initial_iter->Name = L"initial_iter";
			this->initial_iter->Size = System::Drawing::Size(80, 22);
			this->initial_iter->TabIndex = 30;
			this->initial_iter->Text = L"500";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(180, 563);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(57, 17);
			this->label10->TabIndex = 31;
			this->label10->Text = L"max Iter";
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
			this->function->HeaderText = L"u";
			this->function->MinimumWidth = 6;
			this->function->Name = L"function";
			this->function->ReadOnly = true;
			this->function->Width = 120;
			// 
			// NM_function
			// 
			this->NM_function->HeaderText = L"u\'";
			this->NM_function->MinimumWidth = 6;
			this->NM_function->Name = L"NM_function";
			this->NM_function->ReadOnly = true;
			this->NM_function->Width = 120;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"u2";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"h";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 70;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"err_est";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"c1*";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 50;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"c2/";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 50;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1514, 612);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->initial_iter);
			this->Controls->Add(this->step_control);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->initial_eps);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->initial_u_der);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->initial_b);
			this->Controls->Add(this->initial_c);
			this->Controls->Add(this->initial_a);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->initial_u);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
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
		PointPairList^ u_der_u_list = gcnew ZedGraph::PointPairList();
		PointPairList^ u_x_list = gcnew ZedGraph::PointPairList();
		PointPairList^ u_der_x_list = gcnew ZedGraph::PointPairList();

		// Интервал, где есть данные
		double xmin = Convert::ToDouble(textBox1->Text);
		double xmax = Convert::ToDouble(textBox2->Text);

		double step = Convert::ToDouble(textBox3->Text);


		double xmin_limit = xmin - 0.1;
		double xmax_limit = xmax + 0.1;
/*
		double ymin_limit = -1.0;
		double ymax_limit = 100.0;
*/
		// Список точек
		int i = 0;
		dataGridView1->Rows->Clear();
	

		double y1 = Convert::ToDouble(initial_u->Text);
		double y2 = Convert::ToDouble(initial_u_der->Text);
		double eps = Convert::ToDouble(initial_eps->Text);
		double max_Iter = Convert::ToDouble(initial_iter->Text);

		//Параметры второй задачи
		parameter param;
		param.a = Convert::ToDouble(initial_a->Text);
		param.b = Convert::ToDouble(initial_b->Text);
		param.c = Convert::ToDouble(initial_c->Text);
		
		if(checkBox1->Checked)
			u_der_u_list->Add(y1, y2);
		if (checkBox2->Checked)
			u_x_list->Add(xmin, y1);
		if (checkBox3->Checked)
			u_der_x_list->Add(xmin, y2);

		std::vector<double> new_point;
		double c1_multipl = 0, c2_division = 0;
		while(true)
		{

			//std::vector<double> y_funtion_1_RK_4 = utils::runge_kutta_4_system(
				//utils::calc_func_1,
			//	utils::calc_func_2,
			//	step, xmin, y1, y2, param);

			if (step_control->Checked == true)
			{
				new_point = utils::next_point_with_step_control(utils::runge_kutta_4_system, utils::calc_func_1, utils::calc_func_2, xmin, y1, y2, step, eps, param, max_Iter);
			}
			else
			{
				new_point = utils::next_point(utils::runge_kutta_4_system, utils::calc_func_1, utils::calc_func_2, xmin, y1, y2, step, param);
			}
			xmin = new_point[0];
			if (xmin > xmax)
				break;

			double y1_next = new_point[1];
			double y2_next = new_point[2];

			//Добавление на график
			/*f1_list->Add(x, y_function_1);*/
			if (checkBox1->Checked)
				u_der_u_list->Add(y1, y2);
			if (checkBox2->Checked)
				u_x_list->Add(xmin, y1);
			if (checkBox3->Checked)
				u_der_x_list->Add(xmin, y2);

			//Печать в таблицу
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = xmin;
			dataGridView1->Rows[i]->Cells[1]->Value = y1_next ;
			/*dataGridView1->Rows[i]->Cells[1]->Value = floor(y_function_1 * 1000) / 1000;*/
			dataGridView1->Rows[i]->Cells[2]->Value = floor(y2_next * 1000) / 1000;
			dataGridView1->Rows[i]->Cells[3]->Value = new_point[5]; //вывод у1 с половинным шагом
			dataGridView1->Rows[i]->Cells[4]->Value = new_point[4]; //вывод текущего шага
			dataGridView1->Rows[i]->Cells[5]->Value = new_point[7]; //вывод оценки погрешности
			dataGridView1->Rows[i]->Cells[6]->Value = c1_multipl; //вывод количества умножений шага
			dataGridView1->Rows[i]->Cells[7]->Value = c2_division += new_point[9]; //вывод количества делений шага
			c1_multipl += new_point[8];

			y1 = y1_next;
			y2 = y2_next;
			step = new_point[3];
			i++;
		}

		LineItem Curve1 = panel->AddCurve("u'(u)", u_der_u_list, Color::Red,SymbolType::None);
		LineItem^ Curve2 = panel->AddCurve("u(x)", u_x_list, Color::Blue, SymbolType::None);
		LineItem^ Curve3 = panel->AddCurve("u'(x)", u_der_x_list, Color::Green, SymbolType::None);

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


private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
