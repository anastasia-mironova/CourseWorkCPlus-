//---------------------------------------------------------------------------

#ifndef Unit5H
#define Unit5H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <Mask.hpp>
//---------------------------------------------------------------------------
class TstartPage : public TForm
{
__published:	// IDE-managed Components
        TImage *backGRND;
        TMaskEdit *password;
        TEdit *login;
        TRadioGroup *rgUser;
        TLabel *Label1;
        TLabel *Label2;
        TButton *log;
        void __fastcall logClick(TObject *Sender);
        void __fastcall rgUserClick(TObject *Sender);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
        __fastcall TstartPage(TComponent* Owner);
        AnsiString typeUser;
};
//---------------------------------------------------------------------------
extern PACKAGE TstartPage *startPage;
//---------------------------------------------------------------------------
#endif
