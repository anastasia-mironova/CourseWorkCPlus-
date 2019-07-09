//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>

#include  "unitClass.h"
#include "MainUnit.h"

//---------------------------------------------------------------------------
class TaddForm : public TForm
{
__published:	// IDE-managed Components
        TEdit *cost;
        TEdit *name;
        TEdit *manufacturer;
        TEdit *type;
        TEdit *quantity;
        TEdit *date;
        TEdit *seria;
        TComboBox *typeDevice;
        TEdit *model;
        TEdit *color;
        TEdit *size;
        TEdit *voltage;
        TEdit *power;
        TEdit *current;
        TEdit *efficiencyClass;
        TEdit *controlType;
        TEdit *numberProgram;
        TEdit *additionalCommunication;
        TEdit *portability;
        TEdit *val1;
        TEdit *val2;
        TEdit *val3;
        TButton *addBtn;
        TButton *cancelBtn;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label8;
        TLabel *Label9;
        TLabel *Label10;
        TLabel *Label11;
        TLabel *Label12;
        TLabel *Label13;
        TLabel *Label14;
        TLabel *Label15;
        TLabel *Label16;
        TLabel *Label17;
        TLabel *Label18;
        TLabel *Label19;
        TLabel *Label20;
        TLabel *Label21;
        TLabel *Label22;
        void __fastcall addBtnClick(TObject *Sender);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall costKeyPress(TObject *Sender, char &Key);
        void __fastcall cancelBtnClick(TObject *Sender);

private:	// User declarations

public:		// User declarations
        CoffeeMachine* __fastcall addCoffee();
        DishWasher* __fastcall addWasher();
         Fridge* __fastcall addFridge();
          Juicer* __fastcall addJuicer();
          Microwave* __fastcall addMicrowave();
           Stove* __fastcall addStove();
        __fastcall TaddForm(TComponent* Owner);

         int n;
         int buf; 
};
//---------------------------------------------------------------------------
extern PACKAGE TaddForm *addForm;
//---------------------------------------------------------------------------
#endif
