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


//---------------------------------------------------------------------------
struct AddLvl {
int u;
int v;
int node;
TEdit *edit;
AddLvl *next;
};
struct AddLvl * cur = NULL;
struct AddLvl * top = NULL;
int N=1;
int left_pos = 240;
vector<vector<AddLvl>> Vec;
//---------------------------------------------------------------------------
 void dfs(int val) {
  Form1->Result->Text="";
 top->u=Form1->Number1->Text.ToInt();
 top->v=Form1->Number2->Text.ToInt();
  Vec.resize(N+1);
 top = new AddLvl();
 top->edit = new TEdit(Form1);
 top->edit->Parent=Form1;
 top->edit->Name="Leave"+IntToStr(top->v);
 top->edit->Text=Form1->Number2->Text;
 top->edit->Width=60;
 top->edit->Height=21;
 top->edit->Font->Size=10;
 top->edit->Top = 100;
 top->edit->Alignment=taCenter;
 top->edit->Left = left_pos;
 top->next = cur;

 cur = top;
 left_pos += 120;
 Vec[top->u].push_back(top->v);
 //	Form1->Result->Text+=val;
	for(top->node: Vec[val]) {
	   dfs(top->node);
	}

}

//---------------------------------------------------------------------------
void __fastcall TForm1::AddRootClick(TObject *Sender)
{
 Number1->Visible=true;
 Number2->Visible=true;
 Result->Visible=true;
 AddLeaves->Visible=true;
 Root->Visible=true;
 AddRoot->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AddLeavesClick(TObject *Sender)
{
 dfs(1);
}
