//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TeditForm : public TForm
{
__published:	// IDE-managed Components
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
        TEdit *cost;
        TEdit *name;
        TEdit *manufacturer;
        TEdit *type;
        TEdit *quantity;
        TEdit *date;
        TEdit *seria;
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
        TButton *editBtn;
        TButton *cancelBtn;
        TLabel *Label1;
        TComboBox *ComboBox1;
        void __fastcall FormShow(TObject *Sender);
        void __fastcall costKeyPress(TObject *Sender, char &Key);
private:	// User declarations
public:		// User declarations
        __fastcall TeditForm(TComponent* Owner);
        int buf;
};
//---------------------------------------------------------------------------
extern PACKAGE TeditForm *editForm;
//---------------------------------------------------------------------------
#endif
