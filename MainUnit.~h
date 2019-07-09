//---------------------------------------------------------------------------

#ifndef MainUnitH
#define MainUnitH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <Grids.hpp>
#include <Menus.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>

#include <vector>

#include "MainUnit.h"
#include "Unit2.h"
#include "Unit3.h"
#include  "CoffeeMachine.h"
#include  "DishWasher.h"
#include  "Fridge.h"
#include  "Juicer.h"
#include  "Stove.h"
#include  "Microwave.h"
#include "Product.h"
#include "Device.h"
#include "ElectroDevice.h"
#include "HouseholdAppliance.h"
//---------------------------------------------------------------------------
class TMainForm : public TForm
{
__published:	// IDE-managed Components
        TTreeView *DeviceTree;
        TStringGrid *allDevice;
        TButton *addBtn;
        TButton *deleteBtn;
        TButton *editBtn;
        TComboBox *sortCB;
        TLabel *Label1;
        TMemo *allInform;
        TLabel *more;
        TMainMenu *MainMenu;
        TMenuItem *fileItem;
        TMenuItem *replaceItem;
        TMenuItem *helpItem;
        TMenuItem *N4;
        TPopupMenu *SgPopupMenu;
        TMenuItem *addItem;
        TMenuItem *editItem;
        TMenuItem *deleteItem;
        TPopupMenu *TreePopupMenu;
        TMenuItem *N8;
        TButton *searchBtn;
        TStatusBar *selectNodeSB;
        TMenuItem *logIN;
        TStaticText *typeUser;
        TImage *startP;
        TLabel *welcome;
        TMenuItem *addAdm;
        TMenuItem *helpItems;
        void __fastcall addBtnClick(TObject *Sender);
        void __fastcall DeviceTreeClick(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall sgClear();
        void __fastcall actNode();
        void __fastcall searchBtnClick(TObject *Sender);
        void __fastcall deleteBtnClick(TObject *Sender);
        void __fastcall allDeviceClick(TObject *Sender);
        void __fastcall editBtnClick(TObject *Sender);
        void __fastcall N4Click(TObject *Sender);
        void __fastcall helpItemClick(TObject *Sender);
        void __fastcall logINClick(TObject *Sender);
        void __fastcall actStart();
        void __fastcall addAdmClick(TObject *Sender);
        void __fastcall helpItemsClick(TObject *Sender);
        void __fastcall sortCBClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TMainForm(TComponent* Owner);
        
        std::vector<CoffeeMachine*> coffeeVec;
         std::vector<DishWasher*>  washerVec;
 std::vector<Fridge*> fridgeVec ;
 std::vector<Juicer*> juicerVec ;
 std::vector<Stove*> stoveVec ;
 std::vector<Microwave*> microwaveVec;
 int selectNode;
 int buf;
 AnsiString login;


      
};
//---------------------------------------------------------------------------
extern PACKAGE TMainForm *MainForm;
//---------------------------------------------------------------------------
#endif
