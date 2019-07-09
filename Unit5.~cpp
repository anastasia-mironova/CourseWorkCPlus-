//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
#include "MainUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TstartPage *startPage;
//---------------------------------------------------------------------------
__fastcall TstartPage::TstartPage(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TstartPage::logClick(TObject *Sender)
{     
 TStringList *userDate =  new TStringList;
   if (rgUser->ItemIndex == 0){
      userDate->LoadFromFile("admin.txt");
      for(int i =0; i<userDate->Count;i++){

        if ((login->Text + password->Text)== userDate->Strings[i]){
          typeUser = "admin";
          break;
        } else{typeUser = "none";};

      };

     if(typeUser == "none"){
         ShowMessage("Неверный логин или пароль.Попробуйте войти снова");
         };
   };

   if (rgUser->ItemIndex == 1){

          typeUser = "user";
      };

  
}
//---------------------------------------------------------------------------
void __fastcall TstartPage::rgUserClick(TObject *Sender)
{     login->Text="";
     password->Text="";
      if(rgUser->ItemIndex == 0 ){
      login->Visible=true;
      password->Visible=true;
      Label1->Visible =true;
      Label2->Visible = true;
     } ;
     if(rgUser->ItemIndex == 1){
        login->Visible=false;
      password->Visible=false;
      Label1->Visible =false;
      Label2->Visible = false;
     } ;

}
//---------------------------------------------------------------------------
void __fastcall TstartPage::FormShow(TObject *Sender)
{
login->Text="";
password->Text="";
}
//---------------------------------------------------------------------------


void __fastcall TstartPage::FormClose(TObject *Sender,
      TCloseAction &Action)
{    MainForm->actStart();
}
//---------------------------------------------------------------------------

