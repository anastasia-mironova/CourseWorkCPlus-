//---------------------------------------------------------------------------




#include <vcl.h>
#pragma hdrstop
 #include <vector>

#include "MainUnit.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"
#include  "unitClass.h"
#include <Math.hpp>
#include <math.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
template <class T>
void rowSort(std::vector<T*> &obj, int sortCol){

AnsiString buf = "";
T *temp = new T(buf,buf,buf,buf,buf,buf,buf, buf,buf,buf,buf,buf,buf,buf,buf,buf,buf,buf,buf,buf,buf   );
   for(unsigned int k=0;k<obj.size();k++ ){
for (unsigned int i = 0;i<obj.size()-1;i++ ){
    if((sortCol==0) || (sortCol ==5) ){

       if (StrToInt(obj[i]->Arr(0)[sortCol])<StrToInt(obj[i+1]->Arr(0)[sortCol])){


  temp=obj.at(i);

    obj[i]=obj[i+1];

      obj.at(i+1)=temp;

       };

    } else{


      if (obj[i]->Arr(0)[sortCol]<obj[i+1]->Arr(0)[sortCol]){


  temp=obj.at(i);

    obj[i]=obj[i+1];

      obj.at(i+1)=temp;

       };

    };
 };

      };
}
template <class T>
void  addToEdit(std::vector<T*> obj, int selectObj){
     editForm->cost->Text=obj.at(selectObj)->Arr(0)[0];
     editForm->manufacturer->Text=obj.at(selectObj)->Arr(0)[1];
     editForm->name->Text=obj.at(selectObj)->Arr(0)[2];
     editForm->quantity->Text=obj.at(selectObj)->Arr(0)[4];
     editForm->type->Text=obj.at(selectObj)->Arr(0)[3];
     editForm->date->Text=obj.at(selectObj)->Arr(0)[5];
     editForm->seria->Text=obj.at(selectObj)->Arr(0)[6];
     editForm->model->Text=obj.at(selectObj)->Arr(0)[7];
     editForm->size->Text=obj.at(selectObj)->Arr(0)[8];
     editForm->color->Text=obj.at(selectObj)->Arr(0)[9];
     editForm->voltage->Text=obj.at(selectObj)->Arr(0)[10];
     editForm->power->Text=obj.at(selectObj)->Arr(0)[11];
     editForm->current->Text=obj.at(selectObj)->Arr(0)[12];
     editForm->efficiencyClass->Text=obj.at(selectObj)->Arr(0)[13];
     editForm->controlType->Text=obj.at(selectObj)->Arr(0)[14];
     editForm->additionalCommunication->Text=obj.at(selectObj)->Arr(0)[15];
     editForm->numberProgram->Text=obj.at(selectObj)->Arr(0)[16];
     editForm->portability->Text=obj.at(selectObj)->Arr(0)[17];
     editForm->val1->Text=obj.at(selectObj)->Arr(0)[18];
     editForm->val2->Text=obj.at(selectObj)->Arr(0)[19];
     editForm->val3->Text=obj.at(selectObj)->Arr(0)[20];
  }

template <class T>
void  redactObj(std::vector<T*> &obj, int selectObj){
   obj.at(selectObj)->setCost(editForm->cost->Text);
   obj.at(selectObj)->setManufacturer(editForm->manufacturer->Text);
   obj.at(selectObj)->setName(editForm->name->Text);
     obj.at(selectObj)->setQuantity(editForm->quantity->Text);
     obj.at(selectObj)->setType(editForm->type->Text);
     obj.at(selectObj)->setDate( editForm->date->Text);
     obj.at(selectObj)->setSeria(editForm->seria->Text);
      obj.at(selectObj)->setModel(editForm->model->Text);
     obj.at(selectObj)->setSize( editForm->size->Text);
     obj.at(selectObj)->setMaterial(editForm->color->Text);
     obj.at(selectObj)->setVoltage(editForm->voltage->Text);
     obj.at(selectObj)->setPower(editForm->power->Text);
     obj.at(selectObj)->setCurrent(editForm->current->Text);
      obj.at(selectObj)->setEfficiencyClass(editForm->efficiencyClass->Text);
      obj.at(selectObj)->setControlType(editForm->controlType->Text);
      obj.at(selectObj)->setAdditionalCommunication(editForm->additionalCommunication->Text);
      obj.at(selectObj)->setNumberProgram(editForm->numberProgram->Text);
      obj.at(selectObj)->setPortability(editForm->portability->Text);
     obj.at(selectObj)->setDifferentProp(editForm->val1->Text,editForm->val2->Text,editForm->val3->Text);

  }

template <class T>
void memoShow(T* obj, TMemo *memo){
        memo->Clear();
         for(int i=0 ; i<21;i++){
                 memo->Lines->Add(obj->Arr(1)[i]);

   };
}

template <class T>
void deleteObj(std::vector<T*> &obj, AnsiString adress, TStringGrid *sg){

  /* if(sg->RowCount !=1){
       if(sg->Row == sg->RowCount-1){
          obj.erase(obj.end()-1);
        }
       else{
          obj.erase(obj.begin()+sg->Row-1);}; }
   */
   // else {ShowMessage("В списке больше нет элементов");};

          obj.erase(obj.begin()+sg->Row-1);

    addToLine(obj,adress);
    showGrid(obj,sg);

}


template <class T>
void  addToLine(std::vector<T*> obj, AnsiString adress){
   TStringList *text_line = new TStringList;
   if(obj.size()!=0){


     for(unsigned int i = 0;i<obj.size();i++){
          for(int j=0; j<21;j++){
         text_line->Add(obj.at(i)->Arr(0)[j]);  };

     };
       
      text_line->SaveToFile(adress);

     }
      else {

        text_line->LoadFromFile(adress);
        for(int i; i <text_line->Count;i++){
             text_line->Delete(i);

        };
        text_line->Clear();
        text_line->SaveToFile(adress);
     };

      };

template <class T>
void  showGrid(std::vector<T*> obj, TStringGrid *sg){
       MainForm->sgClear();
      for(unsigned  int i=0; i<obj.size();i++ ){
          for(unsigned int j=0; j<9;j++){
        sg->Cells[j][i+1]=obj.at(i)->Arr(0)[j];

        };  };
      MainForm->allDevice->RowCount = obj.size()+1;
     };


           template <class T>
void  addByFile(std::vector<T*> &obj, AnsiString adress){
   TStringList *tx = new TStringList;
   tx->LoadFromFile(adress);

   int num =  tx->Count/21;
    if (num>0){
     for(int i = 0;i<num;i++){
     T *temp = new T(
     tx->Strings[0+i*21],tx->Strings[1+i*21],tx->Strings[2+i*21],tx->Strings[3+i*21],tx->Strings[4+i*21],tx->Strings[5+i*21],
     tx->Strings[6+i*21],tx->Strings[7+i*21],tx->Strings[8+i*21],tx->Strings[9+i*21],tx->Strings[10+i*21],tx->Strings[11+i*21],
     tx->Strings[12+i*21],tx->Strings[13+i*21],tx->Strings[14+i*21],tx->Strings[15+i*21],tx->Strings[16+i*21],
     tx->Strings[17+i*21],tx->Strings[18+i*21],tx->Strings[19+i*21],tx->Strings[20+i*21]);
    obj.push_back(temp);
     };  };
     };


 template <class T>
void actSort(T &obj){
switch(MainForm->sortCB->ItemIndex){
   case 0: rowSort(obj,0);break;
   case 1: rowSort(obj,3);
   break;
   case 2:rowSort(obj,1);
   break;
   case 3: rowSort(obj,5);
   break;
   };
}
TMainForm *MainForm;
int selectNode;
std::vector<CoffeeMachine*> coffeeVec;
std::vector<DishWasher*>  washerVec;
std::vector<Fridge*> fridgeVec ;
std::vector<Juicer*> juicerVec ;
std::vector<Stove*> stoveVec ;
std::vector<Microwave*> microwaveVec;


//---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner)
        : TForm(Owner){
 allDevice->Cells[0][0]="Цена";
   allDevice->Cells[1][0]="Производитель";
    allDevice->Cells[2][0]="Название";
     allDevice->Cells[3][0]="Тип";
      allDevice->Cells[4][0]="Количество";
        allDevice->Cells[5][0]="Год Выпуска";
         allDevice->Cells[6][0]="Серия";
          allDevice->Cells[7][0]="Модель";
           allDevice->Cells[8][0]="Размер";



   


}
//---------------------------------------------------------------------------



void __fastcall TMainForm::addBtnClick(TObject *Sender)
{   addForm->cost->Text="";
   addForm->manufacturer->Text="";
   addForm->name->Text="";
   addForm->quantity->Text="";
   addForm->type->Text="";
   addForm->date->Text="";
   addForm->seria->Text="";
   addForm->model->Text="";
   addForm->size->Text="";
   addForm->color->Text="";
   addForm->voltage->Text="";
   addForm->power->Text="";
   addForm->current->Text="";
   addForm->efficiencyClass->Text="";
   addForm->controlType->Text="";
   addForm->additionalCommunication->Text="";
   addForm->numberProgram->Text="";
   addForm->portability->Text="";
   addForm->val1->Text="";
   addForm->val2->Text="";
   addForm->val3->Text="";
  /* addForm->cost->Text="2456";
   addForm->manufacturer->Text="2fdg";
   addForm->name->Text="sgs";
   addForm->quantity->Text="54";
   addForm->type->Text="sdfg";
   addForm->date->Text="454";
   addForm->seria->Text="srg";
   addForm->model->Text="rtg";
   addForm->size->Text="ret";
   addForm->color->Text="ewrt";
   addForm->voltage->Text="54";
   addForm->power->Text="345";
   addForm->current->Text="345";
   addForm->efficiencyClass->Text="dfg";
   addForm->controlType->Text="fgf";
   addForm->additionalCommunication->Text="sdfg";
   addForm->numberProgram->Text="5";
   addForm->portability->Text="fgs";
   addForm->val1->Text="sdgf";
   addForm->val2->Text="dfg";
   addForm->val3->Text="gdf";*/
   buf = selectNode;
   addForm->ShowModal();
   actNode();


}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------


 void __fastcall TMainForm::sgClear(){
    for (int i=1; i<allDevice->RowCount;i++){

     allDevice->Rows[i]->Clear();
    };
 }

 void __fastcall TMainForm::actNode()
{
 switch( DeviceTree->Selected->Index){
  case 0:
  selectNodeSB->Panels->Items[0]->Text = "Кофемашины";
  selectNode = 0;
  showGrid(coffeeVec, allDevice);
  break;
   case 1:selectNode = 1;
   selectNodeSB->Panels->Items[0]->Text = "Посудомоечные машины";
   showGrid(washerVec,allDevice);

  break;
  case 2: selectNode= 2;
  selectNodeSB->Panels->Items[0]->Text = "Холодильники";
  showGrid(fridgeVec,allDevice);
  break;
  case 3: selectNode = 3;
  selectNodeSB->Panels->Items[0]->Text = "Соковыжималки";
  showGrid(juicerVec,allDevice);
  break;
  case 4:selectNode = 4;
  selectNodeSB->Panels->Items[0]->Text = "Микроволновки";
   showGrid(microwaveVec, allDevice);
  break;
  case 5: selectNode = 5;
  selectNodeSB->Panels->Items[0]->Text = "Электрические плиты";
  showGrid(stoveVec, allDevice);
  break;

 };

}




void __fastcall TMainForm::DeviceTreeClick(TObject *Sender)
{
 allInform->Clear();
 actNode();
 if (allDevice->RowCount!=1){
 allDeviceClick(allDevice); };
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::actStart(){
 startP->Visible = true;
 MainMenu->Items->Items[1]->Items[0]->Visible= false;
MainMenu->Items->Items[2]->Enabled= false;
typeUser->Visible = false;
allInform->Visible= false;
sortCB->Visible = false;
Label1->Visible = false;
     allDevice->Visible= false;
     DeviceTree->Visible= false;
     editBtn->Visible= false;
     deleteBtn->Visible= false;
     addBtn->Visible= false;
     searchBtn->Visible= false;
     more->Visible=false;
     selectNodeSB->Visible= false;
}
void __fastcall TMainForm::FormCreate(TObject *Sender)
{
       allInform->Clear();
     addByFile(coffeeVec, "CoffeeMachine.txt");
     showGrid(coffeeVec, allDevice);
     addByFile(washerVec,"DishWasher.txt");
    addByFile(fridgeVec,"Fridge.txt");
    addByFile(juicerVec,"Juicer.txt");
    addByFile(microwaveVec,"Microwave.txt");
    addByFile(stoveVec,"Stove.txt");
     selectNode = 0;
       selectNodeSB->Panels->Add();
     selectNodeSB->Panels->Items[0]->Text = "Кофемашина";
     memoShow(coffeeVec[allDevice->Row-1], allInform);
     actStart();


}

//---------------------------------------------------------------------------

void __fastcall TMainForm::searchBtnClick(TObject *Sender)
{
    searchForm->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TMainForm::deleteBtnClick(TObject *Sender)
{      if (allDevice->RowCount>1){
       switch( DeviceTree->Selected->Index){
  case 0:
  deleteObj(coffeeVec, "CoffeeMachine.txt",allDevice);
  break;
   case 1:
   deleteObj(washerVec,"DishWasher.txt",allDevice);
  break;
  case 2:
  deleteObj(fridgeVec,"Fridge.txt",allDevice);
  break;
  case 3:deleteObj(juicerVec,"Juicer.txt",allDevice);
  break;
  case 4: deleteObj(microwaveVec,"Microwave.txt",allDevice);
  break;
  case 5: deleteObj(stoveVec,"Stove.txt",allDevice);
  break;
 }; };



}
//---------------------------------------------------------------------------



void __fastcall TMainForm::allDeviceClick(TObject *Sender)
{ if(allDevice->Row!=0)  {
  switch( DeviceTree->Selected->Index){
  case 0:
  memoShow(coffeeVec.at(allDevice->Row-1),allInform);
  break;
   case 1:
   memoShow(washerVec.at(allDevice->Row-1),allInform);
  break;
  case 2:
 memoShow(fridgeVec.at(allDevice->Row-1),allInform);
  break;
  case 3:memoShow(juicerVec.at(allDevice->Row-1),allInform);
  break;
  case 4:memoShow(microwaveVec.at(allDevice->Row-1),allInform);
  break;
  case 5: memoShow(stoveVec.at(allDevice->Row-1),allInform);
  break;

 };  };
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::editBtnClick(TObject *Sender)
{

buf = selectNode;
switch(buf){
case 0: addToEdit(coffeeVec, allDevice->Row-1);
        break;
case 1: addToEdit(washerVec, allDevice->Row-1);
        break;
case 2: addToEdit(fridgeVec, allDevice->Row-1);
        break;
case 3: addToEdit(juicerVec, allDevice->Row-1);
        break;
case 4: addToEdit(microwaveVec, allDevice->Row-1);
        break;
case 5: addToEdit(stoveVec, allDevice->Row-1);
        break;
};
editForm->ShowModal();
switch(buf){
case 0: redactObj(coffeeVec, allDevice->Row-1);
 //memoShow(coffeeVec.at(allDevice->Row-1),allInform);
 addToLine(coffeeVec, "CoffeeMachine.txt");
        break;
case 1: redactObj(washerVec, allDevice->Row-1);
 //memoShow(washerVec.at(allDevice->Row-1),allInform);
 addToLine(washerVec, "DishWasher.txt");
        break;
case 2: redactObj(fridgeVec, allDevice->Row-1);
 //memoShow(fridgeVec.at(allDevice->Row-1),allInform);
 addToLine(fridgeVec, "Fridge.txt");
        break;
case 3:redactObj(juicerVec, allDevice->Row-1);
 //memoShow(juicerVec.at(allDevice->Row-1),allInform);
 addToLine(juicerVec, "Juicer.txt");
        break;
case 4: redactObj(microwaveVec, allDevice->Row-1);
// memoShow(microwaveVec.at(allDevice->Row-1),allInform);
 addToLine(microwaveVec, "Microwave.txt");
        break;
case 5: redactObj(stoveVec, allDevice->Row-1);
// memoShow(stoveVec.at(allDevice->Row-1),allInform);
 addToLine(stoveVec, "Stove.txt");
        break;
};
 actNode();

}
//---------------------------------------------------------------------------


void __fastcall TMainForm::N4Click(TObject *Sender)
{
 MainForm->Close();        
}
//---------------------------------------------------------------------------


void __fastcall TMainForm::helpItemClick(TObject *Sender)
{
      AboutBox->ShowModal();
}
//---------------------------------------------------------------------------




void __fastcall TMainForm::logINClick(TObject *Sender)
{  actStart();
startPage->ShowModal();
if (startPage->typeUser == "admin"){
sortCB->Visible = true;
Label1->Visible = true;
MainMenu->Items->Items[1]->Items[0]->Visible= true;
   MainMenu->Items->Items[2]->Enabled= true;
    startP->Visible = false;
    welcome->Visible = false;
    allInform->Visible= true;
     allDevice->Visible= true;
     DeviceTree->Visible= true;
     editBtn->Visible= true;
     deleteBtn->Visible= true;
     addBtn->Visible= true;
     searchBtn->Visible= true;
     more->Visible=true;
     selectNodeSB->Visible= true;
     typeUser->Visible = true;
     typeUser->Caption="Администратор: "+ startPage->login->Text;
     login=startPage->login->Text;
     
};
if (startPage->typeUser == "user"){
login = "";
sortCB->Visible = true;
Label1->Visible = true;
    startP->Visible = false;
    welcome->Visible = false;
    allInform->Enabled= true;
     allInform->Visible= true;
     allDevice->Visible= true;
     DeviceTree->Visible= true;
     editBtn->Visible= false;
     deleteBtn->Visible= false;
     addBtn->Visible= false;
     searchBtn->Visible= true;
     more->Visible=true;
     selectNodeSB->Visible= true;
    typeUser->Caption= "Пользователь";
};
 typeUser->Visible = true;
}
//---------------------------------------------------------------------------






void __fastcall TMainForm::addAdmClick(TObject *Sender)
{
        newAdmin->ShowModal();
        TStringList *record = new TStringList;
        record->LoadFromFile("admin.txt");
        record->Add(newAdmin->login->Text+newAdmin->password->Text);
        record->SaveToFile("admin.txt");

}
//---------------------------------------------------------------------------



void __fastcall TMainForm::helpItemsClick(TObject *Sender)
{

  ShellExecute(Handle,"open","CHelp.chm",NULL,NULL,SW_SHOWNORMAL);

}
//---------------------------------------------------------------------------


void __fastcall TMainForm::sortCBClick(TObject *Sender)
{
     switch( DeviceTree->Selected->Index){
  case 0:
  actSort(coffeeVec);
  showGrid(coffeeVec, allDevice);
  break;
   case 1:
   actSort(washerVec);
   showGrid(washerVec, allDevice);
  break;
  case 2:
  actSort(fridgeVec);
  showGrid(fridgeVec, allDevice);
  break;
  case 3:actSort(juicerVec);
  showGrid(juicerVec, allDevice);
  break;
  case 4: actSort(microwaveVec);
  showGrid(microwaveVec, allDevice);
  break;
  case 5: actSort(stoveVec);
  showGrid(stoveVec, allDevice);
  break;
 };


}
//---------------------------------------------------------------------------

