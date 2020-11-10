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
vector<vector<int>> Vec;

void dfs(int val) {
	Form1->Result->Text+=val;
	for(const int& node: Vec[val]) {
	   dfs(node);
	}

}
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}


//---------------------------------------------------------------------------
struct AddLvl {
int info;
TEdit *edit;
TButton *button;
AddLvl *next;
};
struct AddLvl * cur = NULL;
struct AddLvl * top = NULL;

int left_pos = 240;


//---------------------------------------------------------------------------


//---------------------------------------------------------------------------












 int N=1;
 int k=1;

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
  Result->Text="";
  int u,v;
  N++;
   u=Number1->Text.ToInt();
  v=Number2->Text.ToInt();
  Vec.resize(N+1);

  if(k<u)
  {
	  left_pos = 240;
  }
  k=u;
 top = new AddLvl();
 top->edit = new TEdit(Form1);
 top->edit->Parent=Form1;
 top->edit->Name="Leave"+v;
 top->edit->Text=Number2->Text;
 top->edit->Width=60;
 top->edit->Height=21;
 top->edit->Font->Size=10;
 top->edit->Top = 100*k;
 top->edit->Alignment=taCenter;
 top->edit->Left = left_pos;
 top->next = cur;

 cur = top;
 left_pos += 120;
 Vec[u].push_back(v);
 dfs(1);

}
//---------------------------------------------------------------------------


