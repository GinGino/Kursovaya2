//---------------------------------------------------------------------------

#include <vcl.h>
#include <string.h>
#include<sstream>
#include <iostream>
#include <vector>
#pragma hdrstop
#include "Unit1.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
using namespace std;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
	 struct AddLvl {
	 int level = NULL;
	 TEdit *edit;
	 AddLvl *next;
	 };

struct AddLvl * cur = NULL;
struct AddLvl * top = NULL;
	 vector<vector<int>> Vec;
	 int N = 1;
	 int k = NULL;
	 void ShowTreeFun(int value)
		{
		   Form1->Edit1->Text += IntToStr(value)+" ";
		   for(const int& node: Vec[value])
		   {
			 if(k==NULL)
			{
			 top = new AddLvl();
			 top->edit = new TEdit(Form1);
			 top->edit->Parent=Form1;
			 top->edit->Text=IntToStr(value);
			 top->edit->Width=60;
			 top->edit->Height=21;
			 top->edit->Font->Size=10;
			 top->edit->Top = 8 + 30 * top->level;
			 top->edit->Alignment=taCenter;
			 top->edit->Left = 310;
			 top->next = cur;
			 k++;
			}

				if(value)
				{
					if(node>value+1)
					{
					top->level++;
					top->edit = new TEdit(Form1);
					top->edit->Parent=Form1;
					top->edit->Text=IntToStr(value);
					top->edit->Width=60;
					top->edit->Height=21;
					top->edit->Font->Size=10;
					top->edit->Top = 8*top->level;
					top->edit->Top = 8 + 30 * top->level;
					top->edit->Alignment=taCenter;
					top->edit->Left= 310;
					top->next = cur;
					}
					top->edit = new TEdit(Form1);
					top->edit->Parent=Form1;
					top->edit->Text=IntToStr(node);
					top->edit->Width=60;
					top->edit->Height=21;
					top->edit->Font->Size=10;
					top->edit->Top = 8 + 30 * top->level;
					top->edit->Alignment=taCenter;
					top->edit->Left=430;
					top->next = cur;
				}
			ShowTreeFun(node);
		}
		}
		void AddLeave(int u,int v)
		{
			Vec.resize(N+1);
			Vec[u].push_back(v);

		}
void __fastcall TForm1::AddLeavesClick(TObject *Sender)
{
 N++;
 AddLeave(StrToInt(Number1->Text),StrToInt(Number2->Text));
 // AddLeave(1,2);
 // AddLeave(1,3);
 // AddLeave(2,4);
 // AddLeave(2,5);
 // AddLeave(2,6);
 // AddLeave(3,7);
 Form1->Result->Lines->Add(Form1->Number1->Text+" - "+Form1->Number2->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ShowTreeClick(TObject *Sender)
{
 ShowTreeFun(1);
}
//---------------------------------------------------------------------------

