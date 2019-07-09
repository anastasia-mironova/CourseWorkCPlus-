//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
 #include  "unitClass.h"

#include "MainUnit.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"



template <class T>
void  addToLine(std::vector<T*> obj, AnsiString adress){
   TStringList *text_line = new TStringList;
     for(unsigned int i = 0;i<obj.size();i++){
          for(int j=0; j<21;j++){
         text_line->Add(obj.at(i)->Arr(0)[j]);  };

     };
     text_line->SaveToFile(adress);
     delete text_line;
     };





TaddForm *addForm;
int n;
//---------------------------------------------------------------------------
__fastcall TaddForm::TaddForm(TComponent* Owner)
        : TForm(Owner)
{
      n=0;
   



}
//---------------------------------------------------------------------------



//---------------------------------------------------------------------------
CoffeeMachine* __fastcall TaddForm::addCoffee(){

    CoffeeMachine *obj = new CoffeeMachine(cost->Text,
               manufacturer->Text, name->Text, type->Text, addForm->quantity->Text
               , addForm->date->Text, seria->Text,
                model->Text, size->Text, color->Text,addForm->voltage->Text
                , addForm->power->Text, addForm->current->Text,
                efficiencyClass->Text,
                controlType->Text,additionalCommunication->Text,addForm->numberProgram->Text
                ,portability->Text,addForm->val1->Text,
               addForm->val2->Text, val3->Text);

    return obj;

}

DishWasher* __fastcall TaddForm::addWasher(){

    DishWasher *obj = new DishWasher(cost->Text,
               manufacturer->Text, name->Text, type->Text, addForm->quantity->Text
               , addForm->date->Text, seria->Text,
                model->Text, size->Text, color->Text,addForm->voltage->Text
                , addForm->power->Text, addForm->current->Text,
                efficiencyClass->Text,
                controlType->Text,additionalCommunication->Text,addForm->numberProgram->Text
                ,portability->Text,addForm->val1->Text,
               addForm->val2->Text, val3->Text);

    return obj;

}

Fridge* __fastcall TaddForm::addFridge(){

    Fridge *obj = new Fridge(cost->Text,
               manufacturer->Text, name->Text, type->Text, addForm->quantity->Text
               , addForm->date->Text, seria->Text,
                model->Text, size->Text, color->Text,addForm->voltage->Text
                , addForm->power->Text, addForm->current->Text,
                efficiencyClass->Text,
                controlType->Text,additionalCommunication->Text,addForm->numberProgram->Text
                ,portability->Text,addForm->val1->Text,
               addForm->val2->Text, val3->Text);

    return obj;

}

Juicer* __fastcall TaddForm::addJuicer(){

    Juicer *obj = new Juicer(cost->Text,
               manufacturer->Text, name->Text, type->Text, addForm->quantity->Text
               , addForm->date->Text, seria->Text,
                model->Text, size->Text, color->Text,addForm->voltage->Text
                , addForm->power->Text, addForm->current->Text,
                efficiencyClass->Text,
                controlType->Text,additionalCommunication->Text,addForm->numberProgram->Text
                ,portability->Text,addForm->val1->Text,
               addForm->val2->Text, val3->Text);

    return obj;

}
Microwave* __fastcall TaddForm::addMicrowave(){

    Microwave *obj = new Microwave(cost->Text,
               manufacturer->Text, name->Text, type->Text, addForm->quantity->Text
               , addForm->date->Text, seria->Text,
                model->Text, size->Text, color->Text,addForm->voltage->Text
                , addForm->power->Text, addForm->current->Text,
                efficiencyClass->Text,
                controlType->Text,additionalCommunication->Text,addForm->numberProgram->Text
                ,portability->Text,addForm->val1->Text,
               addForm->val2->Text, val3->Text);

    return obj;

}

Stove* __fastcall TaddForm::addStove(){

    Stove *obj = new Stove(cost->Text,
               manufacturer->Text, name->Text, type->Text, addForm->quantity->Text
               , addForm->date->Text, seria->Text,
                model->Text, size->Text, color->Text,addForm->voltage->Text
                , addForm->power->Text, addForm->current->Text,
                efficiencyClass->Text,
                controlType->Text,additionalCommunication->Text,addForm->numberProgram->Text
                ,portability->Text,addForm->val1->Text,
               addForm->val2->Text, val3->Text);

    return obj;

}


void __fastcall TaddForm::addBtnClick(TObject *Sender)
{

switch(typeDevice->ItemIndex){


  case 0: MainForm->coffeeVec.push_back(addForm->addCoffee());
          addToLine(MainForm->coffeeVec,"CoffeeMachine.txt");
          break;
  case 1:  MainForm->washerVec.push_back(addForm->addWasher());
           addToLine(MainForm->washerVec,"DishWasher.txt");
           break;
  case 2: MainForm->fridgeVec.push_back(addForm->addFridge());
    addToLine(MainForm->fridgeVec,"Fridge.txt");
         break;
  case 3: MainForm->juicerVec.push_back(addForm->addJuicer());
    addToLine(MainForm->juicerVec,"Juicer.txt");
         break;
  case 4: MainForm->microwaveVec.push_back(addForm->addMicrowave());
    addToLine(MainForm->microwaveVec,"Microwave.txt");
         break;
  case 5:  MainForm->stoveVec.push_back(addForm->addStove());
    addToLine(MainForm->stoveVec,"Stove.txt");
         break;

 };




}
//---------------------------------------------------------------------------




void __fastcall TaddForm::FormShow(TObject *Sender)
{
  buf = MainForm->buf;
  typeDevice->ItemIndex = buf;
  Label20->Visible = true;
  Label21->Visible = true;
  Label22->Visible = true;

  switch(typeDevice->ItemIndex){
  case 0:Label20->Caption = "Автоочищение";
         Label21->Caption = "Кофемолка";
         Label22->Caption = "Тип нагревателя";

         break;
  case 1: Label20->Caption = "Расход воды";
         Label21->Caption = "Сушка";
         Label22->Caption = "Тип загрузки";

         break;
  case 2:Label20->Caption = "Количество камер";
         Label21->Caption = "Разморозка";
         Label22->Caption = " Количество дверей";

         break;
  case 3:Label20->Caption = "Скорость вращения";
         Label21->Caption = "Индикатор уровня сока";
         Label22->Caption = "Противокапельная система";

         break;
  case 4:Label20->Caption = "Гриль";
         Label21->Caption = "Открывание дверцы";
         Label22->Caption = "Мощность микроволновки";

         break;
  case 5:Label20->Caption = "Число комфорок";
         Label21->Caption = "Конвекция";
         Label22->Caption = "Варочная панель";

         break;

          };
}
//---------------------------------------------------------------------------



void __fastcall TaddForm::costKeyPress(TObject *Sender, char &Key)
{
   if (( Key>='0') && (Key<='9')  || (Key==8)){

     } else { Key = 0;}        
}
//---------------------------------------------------------------------------


void __fastcall TaddForm::cancelBtnClick(TObject *Sender)
{
 addForm->Close();
}
//---------------------------------------------------------------------------




