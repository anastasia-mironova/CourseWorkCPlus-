//---------------------------------------------------------------------------

#ifndef Unit6H
#define Unit6H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class ThelpF : public TForm
{
__published:	// IDE-managed Components
        TButton *okbtn;
        TMemo *Memo1;
private:	// User declarations
public:		// User declarations
        __fastcall ThelpF(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE ThelpF *helpF;
//---------------------------------------------------------------------------
#endif
