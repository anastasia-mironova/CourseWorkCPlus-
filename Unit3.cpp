//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "MainUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TsearchForm *searchForm;
//---------------------------------------------------------------------------
template <class T>
void  searchIn(std::vector<T*> obj, TStringGrid *sg, int numCol, AnsiString value,AnsiString value2){
  int val1,val2;
 if (value=="" ){value="0";};
  if (value2 == "") {value2="100000000";};

if (value!="" && value2 != ""){

      for(unsigned  int i=0; i<=obj.size()-1;i++ ){
        int t1 = StrToInt(obj.at(i)->Arr(0)[numCol]);
         if(t1 >=StrToInt(value) && t1 <=StrToInt(value2)){

          searchForm->flag+=1;
          sg->RowCount = sg->RowCount+1;

                for(unsigned int j=0; j<9;j++){

                    sg->Cells[j][sg->RowCount-1]=obj.at(i)->Arr(0)[j];

                };



        }; };  };  };


template <class T>
void  searchInOne(std::vector<T*> obj, TStringGrid *sg, int numCol, AnsiString value){

         for(unsigned  int i=0; i<obj.size();i++ ){
         if(obj.at(i)->Arr(0)[numCol] == value){
          searchForm->flag+=1;
            sg->RowCount = sg->RowCount+1;

                for(unsigned int j=0; j<9;j++){

                    sg->Cells[j][sg->RowCount-1]=obj.at(i)->Arr(0)[j];
                };

             };
                };
             };




__fastcall TsearchForm::TsearchForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TsearchForm::FormCreate(TObject *Sender)
{
 allDevice->Cells[0][0]="����";
   allDevice->Cells[1][0]="�������������";
    allDevice->Cells[2][0]="��������";
     allDevice->Cells[3][0]="���";
      allDevice->Cells[4][0]="����������";
        allDevice->Cells[5][0]="��� �������";
         allDevice->Cells[6][0]="�����";
          allDevice->Cells[7][0]="������";
           allDevice->Cells[8][0]="������";

           flag=0;



}
//---------------------------------------------------------------------------


 void __fastcall TsearchForm::sgClear(){
    for (int i=1; i<allDevice->RowCount;i++){

     allDevice->Rows[i]->Clear();
    };
    allDevice->RowCount=1;
 }
void __fastcall TsearchForm::cancelBtnClick(TObject *Sender)
{
   searchForm->Close();
}
//---------------------------------------------------------------------------

void __fastcall TsearchForm::saearchBtnClick(TObject *Sender)
{    searchForm->sgClear();
     if(rgType->ItemIndex==0){
     flag=0;
if (RadioGroup1->ItemIndex==0){
    searchIn(MainForm->coffeeVec, allDevice, 0, cost->Text, costMax->Text);
    searchIn(MainForm->washerVec, allDevice, 0, cost->Text, costMax->Text);
    searchIn(MainForm->fridgeVec, allDevice, 0, cost->Text, costMax->Text);
    searchIn(MainForm->juicerVec, allDevice, 0, cost->Text, costMax->Text);
    searchIn(MainForm->microwaveVec, allDevice, 0, cost->Text, costMax->Text);
    searchIn(MainForm->stoveVec, allDevice, 0, cost->Text, costMax->Text); };
    ;
if (RadioGroup1->ItemIndex==1){
    searchInOne(MainForm->coffeeVec, allDevice, 1, manf->Text);
    searchInOne(MainForm->washerVec, allDevice, 1, manf->Text);
    searchInOne(MainForm->fridgeVec, allDevice, 1, manf->Text);
    searchInOne(MainForm->juicerVec, allDevice, 1, manf->Text);
    searchInOne(MainForm->microwaveVec, allDevice, 1, manf->Text);
    searchInOne(MainForm->stoveVec, allDevice, 1, manf->Text); };
if (RadioGroup1->ItemIndex==2){
    searchIn(MainForm->coffeeVec, allDevice, 5, date->Text,dateMax->Text);
    searchIn(MainForm->washerVec, allDevice, 5, date->Text,dateMax->Text);
    searchIn(MainForm->fridgeVec, allDevice, 5, date->Text,dateMax->Text);
    searchIn(MainForm->juicerVec, allDevice, 5, date->Text, dateMax->Text);
    searchIn(MainForm->microwaveVec, allDevice, 5, date->Text,dateMax->Text);
    searchIn(MainForm->stoveVec, allDevice, 5, date->Text, dateMax->Text); };

     if (flag==0){
       ShowMessage("��� ��������� � ������ ����������! ���������� �����");
     };};

     if(rgType->ItemIndex==1){

           switch(typeDevice->ItemIndex){
  case 0: if (RadioGroup1->ItemIndex==0){
    searchIn(MainForm->coffeeVec, allDevice, 0, cost->Text, costMax->Text); };
if (RadioGroup1->ItemIndex==1){
    searchInOne(MainForm->coffeeVec, allDevice, 1, manf->Text); }
if (RadioGroup1->ItemIndex==2){
    searchIn(MainForm->coffeeVec, allDevice, 5, date->Text,dateMax->Text); };
         break;
  case 1: if (RadioGroup1->ItemIndex==0){
    searchIn(MainForm->washerVec, allDevice, 0, cost->Text, costMax->Text); }  ;
if (RadioGroup1->ItemIndex==1){
    searchInOne(MainForm->washerVec, allDevice, 1, manf->Text);};
if (RadioGroup1->ItemIndex==2){
    searchIn(MainForm->washerVec, allDevice, 5, date->Text,dateMax->Text); };
         break;
  case 2:if (RadioGroup1->ItemIndex==0){
    searchIn(MainForm->fridgeVec, allDevice, 0, cost->Text, costMax->Text); };
if (RadioGroup1->ItemIndex==1){
    searchInOne(MainForm->fridgeVec, allDevice, 1, manf->Text); };
if (RadioGroup1->ItemIndex==2){
    searchIn(MainForm->fridgeVec, allDevice, 5, date->Text,dateMax->Text); };

         break;
  case 3: if (RadioGroup1->ItemIndex==0){
    searchIn(MainForm->juicerVec, allDevice, 0, cost->Text, costMax->Text);
    };
if (RadioGroup1->ItemIndex==1){
    searchInOne(MainForm->juicerVec, allDevice, 1, manf->Text); };
if (RadioGroup1->ItemIndex==2){
    searchIn(MainForm->juicerVec, allDevice, 5, date->Text, dateMax->Text); };

         break;
  case 4: if (RadioGroup1->ItemIndex==0){
    searchIn(MainForm->microwaveVec, allDevice, 0, cost->Text, costMax->Text);};

if (RadioGroup1->ItemIndex==1){
    searchInOne(MainForm->microwaveVec, allDevice, 1, manf->Text);};
if (RadioGroup1->ItemIndex==2){
    searchIn(MainForm->microwaveVec, allDevice, 5, date->Text,dateMax->Text); };

         break;
  case 5: if (RadioGroup1->ItemIndex==0){

    searchIn(MainForm->stoveVec, allDevice, 0, cost->Text, costMax->Text); };
    ;
if (RadioGroup1->ItemIndex==1){
    searchInOne(MainForm->stoveVec, allDevice, 1, manf->Text); };
if (RadioGroup1->ItemIndex==2){
    searchIn(MainForm->stoveVec, allDevice, 5, date->Text, dateMax->Text); };
         break;

          };
     };
}
//---------------------------------------------------------------------------
void __fastcall TsearchForm::RadioGroup1Click(TObject *Sender)
{

  if (RadioGroup1->ItemIndex ==0){
    cost->Enabled=true;
    costMax->Enabled=true;
    cost->SetFocus();
    manf->Enabled = false;
    date->Enabled = false;
    dateMax->Enabled = false;
  };
 if (RadioGroup1->ItemIndex ==1){
    cost->Enabled=false;
    costMax->Enabled=false;
    manf->Enabled = true;
    manf->SetFocus();
    dateMax->Enabled = false;
    date->Enabled = false;
  };
     if (RadioGroup1->ItemIndex ==2){
    cost->Enabled=false;
    costMax->Enabled=false;
    manf->Enabled = false;
    date->Enabled = true;
    dateMax->Enabled = true;
    date->SetFocus();
  };
}
//---------------------------------------------------------------------------









void __fastcall TsearchForm::rgTypeClick(TObject *Sender)
{
   if(rgType->ItemIndex==0){ typeDevice->Enabled=false;
   };
   if(rgType->ItemIndex==1){ typeDevice->Enabled=true;
   };
}
//---------------------------------------------------------------------------

void __fastcall TsearchForm::FormShow(TObject *Sender)
{  typeDevice->ItemIndex=-1;
cost->Text = "";
costMax->Text = "";
manf->Text = "";
date->Text = "";
dateMax->Text = "";

}
//---------------------------------------------------------------------------


void __fastcall TsearchForm::costKeyPress(TObject *Sender, char &Key)
{
if (( Key>='0') && (Key<='9')  || (Key==8)){

     } else { Key = 0;}        
}
//---------------------------------------------------------------------------

