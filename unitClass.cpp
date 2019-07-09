//---------------------------------------------------------------------------


#pragma hdrstop

#include "unitClass.h"
 #include   <vcl.h>
//---------------------------------------------------------------------------

#pragma package(smart_init)


Product::Product(AnsiString _cost, AnsiString _manufacturer, AnsiString _name, AnsiString _type, AnsiString _quantity){
                      this->cost = _cost;
                      this->manufacturer = _manufacturer;
                      this->name = _name;
                      this->type = _type;
                      this->quantity = _quantity;
                    }


            AnsiString Product::getCost(){
               return this->cost;
                          }

          AnsiString Product::getManufacturer(){
               return this->manufacturer;
                                }

             AnsiString  Product::getName(){
                return this->name;
                                }

             AnsiString  Product::getType(){
                return this->type;
                                }

             AnsiString Product::getQuantity(){
                return this->quantity;
                                }

             void Product::setCost(AnsiString _cost){
                this->cost = _cost;
            }

             void Product::setManufacturer(AnsiString _manufacturer){
                this->manufacturer = _manufacturer;
            }

             void Product::setName(AnsiString _name){
                this->name = _name;
            }

             void Product::setType(AnsiString _type){
                this->type = _type;
            }

             void Product::setQuantity(AnsiString _quantity){
                this->quantity = _quantity;
            }


            Device::Device(AnsiString _date, AnsiString _seria, AnsiString _model, AnsiString _size, AnsiString _material,
            AnsiString _cost, AnsiString _manufacturer, AnsiString _name, AnsiString _type, AnsiString _quantity):
             Product( _cost,  _manufacturer,  _name,  _type,  _quantity){
                      this->date = _date;
                      this->seria = _seria;
                      this->model = _model;
                      this->size = _size;
                      this->material = _material;
                    }


            AnsiString Device::getDate(){
                return this->date;
                          }

             AnsiString Device::getSeria(){
                return this->seria;
                                }

             AnsiString  Device::getModel(){
                return this->model;
                                }

             AnsiString  Device::getSize(){
                return this->size;
                                }

             AnsiString Device::getMaterial(){
                return this->material;
                                }

             void Device::setDate(AnsiString _date){
                this->date = _date;
            }

             void Device::setSeria(AnsiString _seria){
                this->seria = _seria;
            }

            void Device::setModel(AnsiString _model){
                this->model = _model;
            }

             void Device::setSize(AnsiString _size){
                this->size = _size;
            }

            void Device::setMaterial(AnsiString _material){
                this->material = _material;
            }

                ElectroDevice:: ElectroDevice(AnsiString _voltage, AnsiString _power, AnsiString _current,
                AnsiString _efficiencyClass, AnsiString _controlType,
                AnsiString _date, AnsiString _seria, AnsiString _model, AnsiString _size, AnsiString _material,AnsiString _cost,
                AnsiString _manufacturer, AnsiString _name, AnsiString _type, AnsiString _quantity):Device( _date,  _seria,  _model,
                 _size,  _material, _cost,  _manufacturer,  _name,  _type, _quantity){
                  this->voltage = _voltage;
                  this->power = _power;
                  this->current = _current;
                  this->efficiencyClass = _efficiencyClass;
                  this->controlType = _controlType;
                }

                 AnsiString  ElectroDevice::getVoltage(){
                    return this->voltage;
                 }
                 AnsiString  ElectroDevice::getPower(){
                        return this->power;
                 }
                 AnsiString  ElectroDevice::getCurrent(){
                        return this->current;
                 }
                 AnsiString  ElectroDevice::getEfficiencyClass(){
                       return this->efficiencyClass;
                 }
                 AnsiString  ElectroDevice::getControlType(){
                        return this->controlType;
                 }

                 void  ElectroDevice::setVoltage(AnsiString _voltage){
                        this->voltage = _voltage;

                 }
                 void  ElectroDevice::setPower(AnsiString _power){
                        this->power = _power;
                 }
                 void  ElectroDevice::setCurrent(AnsiString _current){
                        this->current = _current;
                 }
                 void  ElectroDevice::setEfficiencyClass(AnsiString _efficiencyClass){
                        this->efficiencyClass = _efficiencyClass;
                 }
                 void  ElectroDevice::setControlType(AnsiString _controlType){
                        this->controlType = _controlType;
                 }

         AnsiString  ElectroDevice::getCost()  {
         return Product::getCost();
         }
         AnsiString  ElectroDevice::getManufacturer()  {
         return Product::manufacturer;
         }
         AnsiString  ElectroDevice::getName()  {
         return  this->name;
         }
         AnsiString  ElectroDevice::getType()  {
         return this->type;
         }
         AnsiString  ElectroDevice::getQuantity()  {
         return  this->quantity;
         }
         AnsiString  ElectroDevice::getDate() {
         return this->date;
         }
         AnsiString  ElectroDevice::getSeria() {
         return   this->seria;
         }
         AnsiString  ElectroDevice::getModel()  {
         return  this->model;
         }
         AnsiString  ElectroDevice::getSize()  {
         return this->size;
         }
         AnsiString  ElectroDevice::getMaterial()  {
         return this->material;
         }

         void  ElectroDevice::setCost(AnsiString _cost) {
          cost = _cost;
         }
         void  ElectroDevice::setManufacturer(AnsiString _manufacturer)  {
           this->manufacturer=_manufacturer;
         }
         void  ElectroDevice::setName(AnsiString _name) {
              this->name=_name;
         }
         void  ElectroDevice::setType(AnsiString _type) {
             this->type=_type;
         }
         void  ElectroDevice::setQuantity(AnsiString _quantity ) {
             this->quantity=_quantity;
         }
         void  ElectroDevice::setDate(AnsiString _date) {
              this->date=_date;
         }
         void  ElectroDevice::setSeria(AnsiString _seria) {
               this->seria= _seria;
         }
         void  ElectroDevice::setModel(AnsiString _model) {
                this->model = _model;
         }
         void  ElectroDevice::setSize(AnsiString _size) {
              this->size=_size;
         }
         void  ElectroDevice::setMaterial(AnsiString _material) {
              this->material= _material;
         }


            HouseholdAppliance::HouseholdAppliance(AnsiString _additionalCommunication, AnsiString _numberProgram,
             AnsiString  _portability,
            AnsiString _voltage, AnsiString _power, AnsiString _current, AnsiString _efficiencyClass, AnsiString _controlType,
                AnsiString _date, AnsiString _seria, AnsiString _model, AnsiString _size, AnsiString _material,AnsiString _cost,
                AnsiString _manufacturer, AnsiString _name, AnsiString _type, AnsiString _quantity):ElectroDevice( _voltage,  _power,
                 _current,  _efficiencyClass,  _controlType, _date,  _seria,  _model,  _size,  _material, _cost,
                 _manufacturer,  _name,  _type,  _quantity){
                this->additionalCommunication = _additionalCommunication;
                this->numberProgram = _numberProgram;
                this->portability = portability;
            }


             AnsiString HouseholdAppliance::getAdditionalCommunication(){
                      return this->additionalCommunication;
             }
             AnsiString HouseholdAppliance::getNumberProgram(){
                   return this->numberProgram;
             }
             AnsiString  HouseholdAppliance::getPortability(){
                        return this->portability;
             }

              void HouseholdAppliance::setAdditionalCommunication(AnsiString _additionalCommunication){
                      this->additionalCommunication = _additionalCommunication;
             }
             void HouseholdAppliance::setNumberProgram(AnsiString _numberProgram){
                     this->numberProgram = _numberProgram;
             }
             void  HouseholdAppliance::setPortability(AnsiString  _portability){
                     this->portability = _portability;
             }


             CoffeeMachine::CoffeeMachine(AnsiString _cost,
                AnsiString _manufacturer, AnsiString _name, AnsiString _type, AnsiString _quantity, AnsiString _date,
                 AnsiString _seria,
                 AnsiString _model, AnsiString _size, AnsiString _material,AnsiString _voltage, AnsiString _power,
                 AnsiString _current, AnsiString _efficiencyClass,
                 AnsiString _controlType,  AnsiString _additionalCommunication,AnsiString _numberProgram, AnsiString  _portability,
                AnsiString _autoCleaning,AnsiString _grinder,AnsiString _heater):HouseholdAppliance(
                _additionalCommunication, _numberProgram,   _portability, _voltage,  _power,  _current,  _efficiencyClass,  _controlType,
                 _date,  _seria,  _model,  _size,  _material, _cost,
                 _manufacturer,  _name,  _type,  _quantity){
                this->autoCleaning = _autoCleaning;
                this->grinder = _grinder;
                this->heater = _heater;
         }

       





         AnsiString CoffeeMachine::getAutoCleaning(){

               return this->autoCleaning;
         }
         AnsiString CoffeeMachine::getGrinder(){

               return this->grinder;

         }
         AnsiString CoffeeMachine::getHeater(){
               return this->heater;
         }



         void CoffeeMachine::setAutoCleaning(AnsiString _autoCleaning){
                 this->autoCleaning = _autoCleaning;
         }
         void CoffeeMachine::setGrinder(AnsiString _grinder){
              this->grinder = _grinder;
         }
         void CoffeeMachine::setHeater(AnsiString _heater){
            this->heater = _heater;
            }

         CoffeeMachine& CoffeeMachine::operator=(const CoffeeMachine &other){


               this->setCost(other.getCost());
              this->setManufacturer(other.getManufacturer());
              this->setName(other.getName());
              this->setType(other.getType());
              this->setQuantity(other.getQuantity());
              this->setDate(other.getDate());
              this->setSeria(other.getSeria());
              this->setModel(other.getModel());
              this->setSize(other.getSize());
              this->setMaterial(other.getMaterial());
              this->setVoltage(other.getVoltage());
              this->setPower(other.getPower());
              this->setCurrent(other.getCurrent());
              this->setEfficiencyClass(other.getEfficiencyClass());
              this->setControlType(other.getControlType());
              this->setAdditionalCommunication(other.getAdditionalCommunication());
              this->setNumberProgram(other.getNumberProgram());
              this->setPortability(other.getPortability());
               this->setAutoCleaning(other.getAutoCleaning());
                 this->setGrinder(other.getGrinder());
                 this->setHeater(other.getHeater());
                         return *this;
            }   


          void CoffeeMachine::setDifferentProp(AnsiString _autoCleaning,AnsiString _grinder,AnsiString _heater){
                 this->setAutoCleaning(_autoCleaning);
                 this->setGrinder(_grinder);
                 this->setHeater(_heater);
             }
       AnsiString*  CoffeeMachine::Arr(int flag){

        AnsiString *arr= new  AnsiString[21];
         if (flag==0){
         arr[0]=ElectroDevice::getCost();
         arr[1]=ElectroDevice::getManufacturer();
         arr[2]=ElectroDevice::getName();
         arr[3]=ElectroDevice::getType();
         arr[4]=ElectroDevice::getQuantity();
         arr[5]=ElectroDevice::getDate();
         arr[6]=ElectroDevice::getSeria();
         arr[7]=ElectroDevice::getModel();
         arr[8]=ElectroDevice::getSize();
         arr[9]=ElectroDevice::getMaterial();
         arr[10]=ElectroDevice::getVoltage();
         arr[11]=ElectroDevice::getPower();
         arr[12]=ElectroDevice::getCurrent();
         arr[13]=ElectroDevice::getEfficiencyClass();
         arr[14]=ElectroDevice::getControlType();
         arr[15]=HouseholdAppliance::getAdditionalCommunication();
         arr[16]=HouseholdAppliance::getNumberProgram();
         arr[17]=HouseholdAppliance::getPortability();
         arr[18]=getAutoCleaning();
         arr[19]=getGrinder();
         arr[20]=getHeater();


         return arr; }
         else {
           arr[0]="Стоимость: "+ElectroDevice::getCost();
         arr[1]="Производитель: "+ElectroDevice::getManufacturer();
         arr[2]="Название: "+ElectroDevice::getName();
         arr[3]="Тип: "+ElectroDevice::getType();
         arr[4]="Количество: "+ElectroDevice::getQuantity();
         arr[5]="Год выпуска: "+ElectroDevice::getDate();
         arr[6]="Серия: "+ElectroDevice::getSeria();
         arr[7]="Модель: "+ElectroDevice::getModel();
         arr[8]="Размер: "+ElectroDevice::getSize();
         arr[9]="Материал: "+ElectroDevice::getMaterial();
         arr[10]="Напряжение: "+ElectroDevice::getVoltage();
         arr[11]="Мощность: "+ElectroDevice::getPower();
         arr[12]="Ток: "+ElectroDevice::getCurrent();
         arr[13]="Класс эффективности: "+ElectroDevice::getEfficiencyClass();
         arr[14]="ТИп управления: "+ElectroDevice::getControlType();
         arr[15]="Дополнительные коммуникации: "+HouseholdAppliance::getAdditionalCommunication();
         arr[16]="Количество программ: "+HouseholdAppliance::getNumberProgram();
         arr[17]="Портативность: "+HouseholdAppliance::getPortability();
         arr[18]="Автоочищение: "+getAutoCleaning();
         arr[19]="Кофемолка: "+getGrinder();
         arr[20]="Тип нагревателя: "+getHeater();
         return arr;
         };
         }



               DishWasher::DishWasher(AnsiString _cost,
                AnsiString _manufacturer, AnsiString _name, AnsiString _type, AnsiString _quantity, AnsiString _date,
                AnsiString _seria,
                 AnsiString _model, AnsiString _size, AnsiString _material,AnsiString _voltage, AnsiString _power,
                  AnsiString _current, AnsiString _efficiencyClass,
                 AnsiString _controlType,  AnsiString _additionalCommunication,AnsiString _numberProgram, AnsiString  _portability,
                 AnsiString _waterConsumtion,AnsiString _drying,AnsiString _loadingType): HouseholdAppliance(_additionalCommunication,
                 _numberProgram,   _portability, _voltage,  _power,  _current,  _efficiencyClass,  _controlType,
                 _date,  _seria,  _model,  _size,  _material, _cost,
                 _manufacturer,  _name,  _type,  _quantity){
                this->waterConsumtion = _waterConsumtion;
                this->drying = _drying;
                this->loadingType = _loadingType;
         }
         AnsiString  DishWasher::getWaterConsumtion(){
           return this->waterConsumtion;
         }
         AnsiString  DishWasher::getDrying(){
               return this->drying;

         }
         AnsiString  DishWasher::getLoadingType(){
               return this->loadingType;
         }



         void  DishWasher::setWaterConsumtion(AnsiString _waterConsumtion){
                 this->waterConsumtion = _waterConsumtion;
         }
         void  DishWasher::setDrying(AnsiString _drying){
               this->drying = _drying;
         }
         void  DishWasher::setLoadingType(AnsiString _loadingType){
             this->loadingType = _loadingType;
         }

          AnsiString*  DishWasher::Arr(int flag){
            AnsiString *arr= new  AnsiString[21];
         if (flag==0){
         arr[0]=ElectroDevice::getCost();
         arr[1]=ElectroDevice::getManufacturer();
         arr[2]=ElectroDevice::getName();
         arr[3]=ElectroDevice::getType();
         arr[4]=ElectroDevice::getQuantity();
         arr[5]=ElectroDevice::getDate();
         arr[6]=ElectroDevice::getSeria();
         arr[7]=ElectroDevice::getModel();
         arr[8]=ElectroDevice::getSize();
         arr[9]=ElectroDevice::getMaterial();
         arr[10]=ElectroDevice::getVoltage();
         arr[11]=ElectroDevice::getPower();
         arr[12]=ElectroDevice::getCurrent();
         arr[13]=ElectroDevice::getEfficiencyClass();
         arr[14]=ElectroDevice::getControlType();
         arr[15]=HouseholdAppliance::getAdditionalCommunication();
         arr[16]=HouseholdAppliance::getNumberProgram();
         arr[17]=HouseholdAppliance::getPortability();
          arr[18]=getWaterConsumtion();
         arr[19]=getDrying();
         arr[20]=getLoadingType();


         return arr; }
         else {
           arr[0]="Стоимость: "+ElectroDevice::getCost();
         arr[1]="Производитель: "+ElectroDevice::getManufacturer();
         arr[2]="Название: "+ElectroDevice::getName();
         arr[3]="Тип: "+ElectroDevice::getType();
         arr[4]="Количество: "+ElectroDevice::getQuantity();
         arr[5]="Год выпуска: "+ElectroDevice::getDate();
         arr[6]="Серия: "+ElectroDevice::getSeria();
         arr[7]="Модель: "+ElectroDevice::getModel();
         arr[8]="Размер: "+ElectroDevice::getSize();
         arr[9]="Материал: "+ElectroDevice::getMaterial();
         arr[10]="Напряжение: "+ElectroDevice::getVoltage();
         arr[11]="Мощность: "+ElectroDevice::getPower();
         arr[12]="Ток: "+ElectroDevice::getCurrent();
         arr[13]="Класс эффективности: "+ElectroDevice::getEfficiencyClass();
         arr[14]="ТИп управления: "+ElectroDevice::getControlType();
         arr[15]="Дополнительные коммуникации: "+HouseholdAppliance::getAdditionalCommunication();
         arr[16]="Количество программ: "+HouseholdAppliance::getNumberProgram();
         arr[17]="Портативность: "+HouseholdAppliance::getPortability();
          arr[18]="Расход воды: "+getWaterConsumtion();
         arr[19]="Сушка: "+getDrying();
         arr[20]="Тип загрузки: "+getLoadingType();
         return arr;
         };
         }

          void DishWasher::setDifferentProp(AnsiString _waterConsumtion,AnsiString _drying,AnsiString _loadingType){
              this->setWaterConsumtion(_waterConsumtion);
              this->setDrying(_drying);
              this->setLoadingType(_loadingType);
          }

           
          DishWasher& DishWasher::operator =(const DishWasher &other){
              this->setCost(other.getCost());
              this->setManufacturer(other.getManufacturer());
              this->setName(other.getName());
              this->setType(other.getType());
              this->setQuantity(other.getQuantity());
              this->setDate(other.getDate());
              this->setSeria(other.getSeria());
              this->setModel(other.getModel());
              this->setSize(other.getSize());
              this->setMaterial(other.getMaterial());
              this->setVoltage(other.getVoltage());
              this->setPower(other.getPower());
              this->setCurrent(other.getCurrent());
              this->setEfficiencyClass(other.getEfficiencyClass());
              this->setControlType(other.getControlType());
              this->setAdditionalCommunication(other.getAdditionalCommunication());
              this->setNumberProgram(other.getNumberProgram());
              this->setPortability(other.getPortability());
              this->setWaterConsumtion(other.getWaterConsumtion());
              this->setDrying(other.getDrying());
              this->setLoadingType(other.getLoadingType());
              return *this;
            }
                Fridge::Fridge(AnsiString _cost,
                AnsiString _manufacturer, AnsiString _name, AnsiString _type, AnsiString _quantity, AnsiString _date,
                AnsiString _seria,
                 AnsiString _model, AnsiString _size, AnsiString _material,AnsiString _voltage, AnsiString _power,
                  AnsiString _current, AnsiString _efficiencyClass,
                 AnsiString _controlType,  AnsiString _additionalCommunication,AnsiString _numberProgram,
                 AnsiString  _portability,AnsiString _numOfCameras,
                 AnsiString _defrosting,AnsiString _numOfDoor):HouseholdAppliance(_additionalCommunication,
                 _numberProgram,   _portability, _voltage,  _power,  _current,  _efficiencyClass,  _controlType,
                 _date,  _seria,  _model,  _size,  _material, _cost,
                 _manufacturer,  _name,  _type,  _quantity){
                        this->numOfCameras = _numOfCameras;
                        this->defrosting = _defrosting;
                        this->numOfDoor = _numOfDoor;
                }



                AnsiString Fridge::getNumOfCameras(){
                        return this->numOfCameras;
                }

                AnsiString Fridge::getDefrosting(){

               return this->defrosting;
                }

                AnsiString Fridge::getNumOfDoor(){
                        return this->numOfDoor;
                }

                void Fridge::setNumOfCameras(AnsiString _numOfCameras){
                this->numOfCameras = _numOfCameras;
                }


                void Fridge::setDefrosting(AnsiString _defrosting){
                this->defrosting = _defrosting;
                }

                void Fridge::setNumOfDoor(AnsiString _numOfDoor){
                this->numOfDoor = _numOfDoor;
                }

                   AnsiString* Fridge::Arr(int flag){
           AnsiString *arr= new  AnsiString[21];
         if (flag==0){
         arr[0]=ElectroDevice::getCost();
         arr[1]=ElectroDevice::getManufacturer();
         arr[2]=ElectroDevice::getName();
         arr[3]=ElectroDevice::getType();
         arr[4]=ElectroDevice::getQuantity();
         arr[5]=ElectroDevice::getDate();
         arr[6]=ElectroDevice::getSeria();
         arr[7]=ElectroDevice::getModel();
         arr[8]=ElectroDevice::getSize();
         arr[9]=ElectroDevice::getMaterial();
         arr[10]=ElectroDevice::getVoltage();
         arr[11]=ElectroDevice::getPower();
         arr[12]=ElectroDevice::getCurrent();
         arr[13]=ElectroDevice::getEfficiencyClass();
         arr[14]=ElectroDevice::getControlType();
         arr[15]=HouseholdAppliance::getAdditionalCommunication();
         arr[16]=HouseholdAppliance::getNumberProgram();
         arr[17]=HouseholdAppliance::getPortability();
        arr[18]=getNumOfCameras();
         arr[19]=getDefrosting();
         arr[20]=getNumOfDoor();

         return arr; }
         else {
           arr[0]="Стоимость: "+ElectroDevice::getCost();
         arr[1]="Производитель: "+ElectroDevice::getManufacturer();
         arr[2]="Название: "+ElectroDevice::getName();
         arr[3]="Тип: "+ElectroDevice::getType();
         arr[4]="Количество: "+ElectroDevice::getQuantity();
         arr[5]="Год выпуска: "+ElectroDevice::getDate();
         arr[6]="Серия: "+ElectroDevice::getSeria();
         arr[7]="Модель: "+ElectroDevice::getModel();
         arr[8]="Размер: "+ElectroDevice::getSize();
         arr[9]="Материал: "+ElectroDevice::getMaterial();
         arr[10]="Напряжение: "+ElectroDevice::getVoltage();
         arr[11]="Мощность: "+ElectroDevice::getPower();
         arr[12]="Ток: "+ElectroDevice::getCurrent();
         arr[13]="Класс эффективности: "+ElectroDevice::getEfficiencyClass();
         arr[14]="ТИп управления: "+ElectroDevice::getControlType();
         arr[15]="Дополнительные коммуникации: "+HouseholdAppliance::getAdditionalCommunication();
         arr[16]="Количество программ: "+HouseholdAppliance::getNumberProgram();
         arr[17]="Портативность: "+HouseholdAppliance::getPortability();
         arr[18]=" Количество камер: "+getNumOfCameras();
         arr[19]="Разморозка: "+getDefrosting();
         arr[20]="Количество дверей: "+getNumOfDoor();
         return arr;
         };
         }




             void Fridge::setDifferentProp(AnsiString _numOfCameras,AnsiString _defrosting,AnsiString _numOfDoor){
                this->setNumOfCameras(_numOfCameras);
              this->setDefrosting(_defrosting);
              this->setNumOfDoor(_numOfDoor);

             }

             Fridge& Fridge::operator=(const Fridge &other){
              this->setCost(other.getCost());
              this->setManufacturer(other.getManufacturer());
              this->setName(other.getName());
              this->setType(other.getType());
              this->setQuantity(other.getQuantity());
              this->setDate(other.getDate());
              this->setSeria(other.getSeria());
              this->setModel(other.getModel());
              this->setSize(other.getSize());
              this->setMaterial(other.getMaterial());
              this->setVoltage(other.getVoltage());
              this->setPower(other.getPower());
              this->setCurrent(other.getCurrent());
              this->setEfficiencyClass(other.getEfficiencyClass());
              this->setControlType(other.getControlType());
              this->setAdditionalCommunication(other.getAdditionalCommunication());
              this->setNumberProgram(other.getNumberProgram());
              this->setPortability(other.getPortability());
              this->setNumOfCameras(other.getNumOfCameras());
              this->setDefrosting(other.getDefrosting());
              this->setNumOfDoor(other.getNumOfDoor());
              return *this;
            }
 Juicer::Juicer(AnsiString _cost,
                AnsiString _manufacturer, AnsiString _name, AnsiString _type, AnsiString _quantity, AnsiString _date,
                 AnsiString _seria,
                 AnsiString _model, AnsiString _size, AnsiString _material,AnsiString _voltage, AnsiString _power,
                 AnsiString _current, AnsiString _efficiencyClass,
                 AnsiString _controlType,  AnsiString _additionalCommunication,AnsiString _numberProgram,
                 AnsiString  _portability,AnsiString _dripStop,
                 AnsiString _juiceIndicator,AnsiString _rotationalSpeed):HouseholdAppliance(_additionalCommunication,
                 _numberProgram,   _portability, _voltage,  _power,  _current,  _efficiencyClass,  _controlType,
                 _date,  _seria,  _model,  _size,  _material, _cost,
                 _manufacturer,  _name,  _type,  _quantity){
                this->dripStop = _dripStop;
                this->juiceIndicator = _juiceIndicator;
                this->rotationalSpeed = _rotationalSpeed;
         }


         AnsiString  Juicer::getDripStop(){

               return this->dripStop;
         }
         AnsiString  Juicer::getJuiceIndicator(){


               return this->juiceIndicator;
         }
         AnsiString  Juicer::getRotationalSpeed(){
               return this->rotationalSpeed;
         }



         void  Juicer::setDripStop(AnsiString _dripStop){
                 this->dripStop = _dripStop;
         }
         void  Juicer::setJuiceIndicator(AnsiString _juiceIndicator){
              this->juiceIndicator = _juiceIndicator;
         }
         void  Juicer::setRotationalSpeed(AnsiString _rotationalSpeed){
            this->rotationalSpeed = _rotationalSpeed;
            }

             AnsiString*  Juicer::Arr(int flag){
          AnsiString *arr= new  AnsiString[21];
         if (flag==0){
         arr[0]=ElectroDevice::getCost();
         arr[1]=ElectroDevice::getManufacturer();
         arr[2]=ElectroDevice::getName();
         arr[3]=ElectroDevice::getType();
         arr[4]=ElectroDevice::getQuantity();
         arr[5]=ElectroDevice::getDate();
         arr[6]=ElectroDevice::getSeria();
         arr[7]=ElectroDevice::getModel();
         arr[8]=ElectroDevice::getSize();
         arr[9]=ElectroDevice::getMaterial();
         arr[10]=ElectroDevice::getVoltage();
         arr[11]=ElectroDevice::getPower();
         arr[12]=ElectroDevice::getCurrent();
         arr[13]=ElectroDevice::getEfficiencyClass();
         arr[14]=ElectroDevice::getControlType();
         arr[15]=HouseholdAppliance::getAdditionalCommunication();
         arr[16]=HouseholdAppliance::getNumberProgram();
         arr[17]=HouseholdAppliance::getPortability();
        arr[18]=getDripStop();
         arr[19]=getJuiceIndicator();
         arr[20]=getRotationalSpeed();


         return arr; }
         else {
           arr[0]="Стоимость: "+ElectroDevice::getCost();
         arr[1]="Производитель: "+ElectroDevice::getManufacturer();
         arr[2]="Название: "+ElectroDevice::getName();
         arr[3]="Тип: "+ElectroDevice::getType();
         arr[4]="Количество: "+ElectroDevice::getQuantity();
         arr[5]="Год выпуска: "+ElectroDevice::getDate();
         arr[6]="Серия: "+ElectroDevice::getSeria();
         arr[7]="Модель: "+ElectroDevice::getModel();
         arr[8]="Размер: "+ElectroDevice::getSize();
         arr[9]="Материал: "+ElectroDevice::getMaterial();
         arr[10]="Напряжение: "+ElectroDevice::getVoltage();
         arr[11]="Мощность: "+ElectroDevice::getPower();
         arr[12]="Ток: "+ElectroDevice::getCurrent();
         arr[13]="Класс эффективности: "+ElectroDevice::getEfficiencyClass();
         arr[14]="ТИп управления: "+ElectroDevice::getControlType();
         arr[15]="Дополнительные коммуникации: "+HouseholdAppliance::getAdditionalCommunication();
         arr[16]="Количество программ: "+HouseholdAppliance::getNumberProgram();
         arr[17]="Портативность: "+HouseholdAppliance::getPortability();
         arr[18]="Противокапельная система: "+getDripStop();
         arr[19]="Индикатор уровня сока: "+getJuiceIndicator();
         arr[20]="Скорость вращения: "+getRotationalSpeed();
         return arr;
         };
         }



            void Juicer::setDifferentProp(AnsiString _dripStop,AnsiString _juiceIndicator,AnsiString _rotationalSpeed){

               this->setDripStop(_dripStop);
              this->setJuiceIndicator(_juiceIndicator);
              this->setRotationalSpeed(_rotationalSpeed);
            }


         Juicer& Juicer::operator=(const Juicer &other){
              this->setCost(other.getCost());
              this->setManufacturer(other.getManufacturer());
              this->setName(other.getName());
              this->setType(other.getType());
              this->setQuantity(other.getQuantity());
              this->setDate(other.getDate());
              this->setSeria(other.getSeria());
              this->setModel(other.getModel());
              this->setSize(other.getSize());
              this->setMaterial(other.getMaterial());
              this->setVoltage(other.getVoltage());
              this->setPower(other.getPower());
              this->setCurrent(other.getCurrent());
              this->setEfficiencyClass(other.getEfficiencyClass());
              this->setControlType(other.getControlType());
              this->setAdditionalCommunication(other.getAdditionalCommunication());
              this->setNumberProgram(other.getNumberProgram());
              this->setPortability(other.getPortability());
              this->setDripStop(other.getDripStop());
              this->setJuiceIndicator(other.getJuiceIndicator());
              this->setRotationalSpeed(other.getRotationalSpeed());
              return *this;
            }
         Microwave::Microwave(AnsiString _cost,
                AnsiString _manufacturer, AnsiString _name, AnsiString _type, AnsiString _quantity, AnsiString _date,
                 AnsiString _seria,
                 AnsiString _model, AnsiString _size, AnsiString _material,AnsiString _voltage,
                 AnsiString _power, AnsiString _current, AnsiString _efficiencyClass,
                 AnsiString _controlType,  AnsiString _additionalCommunication,
                 AnsiString _numberProgram, AnsiString  _portability
                 ,AnsiString _radiationPower,AnsiString _grill,AnsiString _opening):HouseholdAppliance(_additionalCommunication,
                 _numberProgram,   _portability, _voltage,  _power,  _current,  _efficiencyClass,  _controlType,
                 _date,  _seria,  _model,  _size,  _material, _cost,
                 _manufacturer,  _name,  _type,  _quantity){
                this->radiationPower = _radiationPower;
                this->grill = _grill;
                this->opening = _opening;
         }


         AnsiString Microwave::getRadiationPower(){
           return this->radiationPower;
         }
         AnsiString Microwave::getGrill(){

               return this->grill;
         }
         AnsiString Microwave::getOpening(){
               return this->opening;
         }



         void Microwave::setRadiationPower(AnsiString _radiationPower){
                 this->radiationPower = _radiationPower;
         }
         void Microwave::setGrill(AnsiString _grill){
              this->grill = _grill;
         }
         void Microwave::setOpening(AnsiString _opening){
            this->opening = _opening;
            }

        AnsiString* Microwave::Arr(int flag){
           AnsiString *arr= new  AnsiString[21];
         if (flag==0){
         arr[0]=ElectroDevice::getCost();
         arr[1]=ElectroDevice::getManufacturer();
         arr[2]=ElectroDevice::getName();
         arr[3]=ElectroDevice::getType();
         arr[4]=ElectroDevice::getQuantity();
         arr[5]=ElectroDevice::getDate();
         arr[6]=ElectroDevice::getSeria();
         arr[7]=ElectroDevice::getModel();
         arr[8]=ElectroDevice::getSize();
         arr[9]=ElectroDevice::getMaterial();
         arr[10]=ElectroDevice::getVoltage();
         arr[11]=ElectroDevice::getPower();
         arr[12]=ElectroDevice::getCurrent();
         arr[13]=ElectroDevice::getEfficiencyClass();
         arr[14]=ElectroDevice::getControlType();
         arr[15]=HouseholdAppliance::getAdditionalCommunication();
         arr[16]=HouseholdAppliance::getNumberProgram();
         arr[17]=HouseholdAppliance::getPortability();
         arr[18]=getRadiationPower();
         arr[19]=getGrill();
         arr[20]=getOpening();


         return arr; }
         else {
           arr[0]="Стоимость: "+ElectroDevice::getCost();
         arr[1]="Производитель: "+ElectroDevice::getManufacturer();
         arr[2]="Название: "+ElectroDevice::getName();
         arr[3]="Тип: "+ElectroDevice::getType();
         arr[4]="Количество: "+ElectroDevice::getQuantity();
         arr[5]="Год выпуска: "+ElectroDevice::getDate();
         arr[6]="Серия: "+ElectroDevice::getSeria();
         arr[7]="Модель: "+ElectroDevice::getModel();
         arr[8]="Размер: "+ElectroDevice::getSize();
         arr[9]="Материал: "+ElectroDevice::getMaterial();
         arr[10]="Напряжение: "+ElectroDevice::getVoltage();
         arr[11]="Мощность: "+ElectroDevice::getPower();
         arr[12]="Ток: "+ElectroDevice::getCurrent();
         arr[13]="Класс эффективности: "+ElectroDevice::getEfficiencyClass();
         arr[14]="ТИп управления: "+ElectroDevice::getControlType();
         arr[15]="Дополнительные коммуникации: "+HouseholdAppliance::getAdditionalCommunication();
         arr[16]="Количество программ: "+HouseholdAppliance::getNumberProgram();
         arr[17]="Портативность: "+HouseholdAppliance::getPortability();
         arr[18]="Мощность приготовления: "+getRadiationPower();
         arr[19]="Гриль: "+getGrill();
         arr[20]="Тип открывания: "+getOpening();
         return arr;
         };
         }


             void Microwave::setDifferentProp(AnsiString  _radiationPower,AnsiString _grill,AnsiString _opening){

                this->setRadiationPower(_radiationPower);
              this->setGrill(_grill);
              this->setOpening(_opening);
             }
    Stove::Stove(AnsiString _cost,
                AnsiString _manufacturer, AnsiString _name, AnsiString _type, AnsiString _quantity, AnsiString _date,
                AnsiString _seria,
                 AnsiString _model, AnsiString _size, AnsiString _material,AnsiString _voltage, AnsiString _power,
                  AnsiString _current, AnsiString _efficiencyClass,
                 AnsiString _controlType,  AnsiString _additionalCommunication,AnsiString _numberProgram, AnsiString  _portability,
                 AnsiString _burner,AnsiString _convection, AnsiString _cooktop):HouseholdAppliance(_additionalCommunication,
                 _numberProgram,   _portability, _voltage,  _power,  _current,  _efficiencyClass,  _controlType,
                 _date,  _seria,  _model,  _size,  _material, _cost,
                 _manufacturer,  _name,  _type,  _quantity){
               this->burner = _burner;
               this->convection = _convection;
               this->cooktop = _cooktop;
               }


               AnsiString Stove::getBurner(){
                return this->burner;
               }
               AnsiString Stove::getConvection(){
               return this->convection;
               }
               AnsiString Stove::getCooktop(){
                 return this->cooktop;
               }

               void Stove::setBurner(AnsiString _burner){
                this->burner = _burner;
               }
               void Stove::setConvection(AnsiString _convection){
                this->convection = _convection;
               }
               void Stove::setCooktop(AnsiString _cooktop){
                        this->cooktop = _cooktop;
               }
           AnsiString* Stove::Arr(int flag){
          AnsiString *arr= new  AnsiString[21];
         if (flag==0){
         arr[0]=ElectroDevice::getCost();
         arr[1]=ElectroDevice::getManufacturer();
         arr[2]=ElectroDevice::getName();
         arr[3]=ElectroDevice::getType();
         arr[4]=ElectroDevice::getQuantity();
         arr[5]=ElectroDevice::getDate();
         arr[6]=ElectroDevice::getSeria();
         arr[7]=ElectroDevice::getModel();
         arr[8]=ElectroDevice::getSize();
         arr[9]=ElectroDevice::getMaterial();
         arr[10]=ElectroDevice::getVoltage();
         arr[11]=ElectroDevice::getPower();
         arr[12]=ElectroDevice::getCurrent();
         arr[13]=ElectroDevice::getEfficiencyClass();
         arr[14]=ElectroDevice::getControlType();
         arr[15]=HouseholdAppliance::getAdditionalCommunication();
         arr[16]=HouseholdAppliance::getNumberProgram();
         arr[17]=HouseholdAppliance::getPortability();
         arr[18]=getBurner();
         arr[19]=getConvection();
         arr[20]=getCooktop();


         return arr; }
         else {
           arr[0]="Стоимость: "+ElectroDevice::getCost();
         arr[1]="Производитель: "+ElectroDevice::getManufacturer();
         arr[2]="Название: "+ElectroDevice::getName();
         arr[3]="Тип: "+ElectroDevice::getType();
         arr[4]="Количество: "+ElectroDevice::getQuantity();
         arr[5]="Год выпуска: "+ElectroDevice::getDate();
         arr[6]="Серия: "+ElectroDevice::getSeria();
         arr[7]="Модель: "+ElectroDevice::getModel();
         arr[8]="Размер: "+ElectroDevice::getSize();
         arr[9]="Материал: "+ElectroDevice::getMaterial();
         arr[10]="Напряжение: "+ElectroDevice::getVoltage();
         arr[11]="Мощность: "+ElectroDevice::getPower();
         arr[12]="Ток: "+ElectroDevice::getCurrent();
         arr[13]="Класс эффективности: "+ElectroDevice::getEfficiencyClass();
         arr[14]="ТИп управления: "+ElectroDevice::getControlType();
         arr[15]="Дополнительные коммуникации: "+HouseholdAppliance::getAdditionalCommunication();
         arr[16]="Количество программ: "+HouseholdAppliance::getNumberProgram();
         arr[17]="Портативность: "+HouseholdAppliance::getPortability();
         arr[18]="Количество комфорок: "+getBurner();
         arr[19]="Конвекция: "+getConvection();
         arr[20]="Варочняа поверхность: "+getCooktop();
         return arr;
         };
         }

          

             void Stove::setDifferentProp(AnsiString  _burner,AnsiString _convection,AnsiString _cooktop){

             this->setBurner(_burner);
              this->setConvection(_convection);
              this->setCooktop(_cooktop);
             }

          Microwave& Microwave::operator =(Microwave &other){
              this->setCost(other.getCost());
              this->setManufacturer(other.getManufacturer());
              this->setName(other.getName());
              this->setType(other.getType());
              this->setQuantity(other.getQuantity());
              this->setDate(other.getDate());
              this->setSeria(other.getSeria());
              this->setModel(other.getModel());
              this->setSize(other.getSize());
              this->setMaterial(other.getMaterial());
              this->setVoltage(other.getVoltage());
              this->setPower(other.getPower());
              this->setCurrent(other.getCurrent());
              this->setEfficiencyClass(other.getEfficiencyClass());
              this->setControlType(other.getControlType());
              this->setAdditionalCommunication(other.getAdditionalCommunication());
              this->setNumberProgram(other.getNumberProgram());
              this->setPortability(other.getPortability());
              this->setRadiationPower(other.getRadiationPower());
              this->setGrill(other.getGrill());
              this->setOpening(other.getOpening());
              return *this;
            }


