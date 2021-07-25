  //#include<SdFat.h>  // required
//#include <SdFatUtil.h>

//#include "RF_Iris.h"
// or
//#include "DT_Iris.h"
//and uncomment
//float irisSample[4] = {6.2, 2.8, 4.8, 1.8};
//#include "Iris_flowers_test.h"

//*************************************************************************************************

//#include "RF_Heart.h"
// or
//#include "DT_Heart.h"
//and uncomment
//float HeartSample[13] = {70, 1, 0, 145, 174, 0, 1, 125, 1, 2.6 , 0, 0, 3};
//#include "Heart_disease_test.h"

//*************************************************************************************************

//#include "RF_Cancer.h"
// or
//#include "DT_Cancer.h"
//and uncomment
//float CancerSample[30] = {1.340001,2.052001,8.864001,5.567002,1.1060,1.4690,1.4450, 8.172002,2.1160,7.325002,3.9060,9.3060,3.093000,3.367001,5.414003,2.265002,3.452002,1.334002,1.705002,4.005003,1.641001, 2.966001,1.133002,8.444002,1.5740,3.8560,5.1060,2.0510, 3.5850,1.1090};
//#include "Breast_cancer_test.h"

//*************************************************************************************************

//#include "RF_Digits.h"
// or
//#include "DT_Digits.h"
//and uncomment
//float DigitsSample[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 ,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,86,232,157,74,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,96,244,254,254,187,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,147,242,254,249,81,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,158,251,245,73,0 ,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,215,254,129,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,215,254,129,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 ,0,0,0,0,0,0,2,148,244,231,47,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,16,100,221,254,230,44,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,49,168,140,194,254,254,194,48,0,0,0,0,0,0,0
//,0,0,0,0,0,0,0,0,0,0,0,0,0,209,254,254,254,254,250,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,123,149,187,252,254,182,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,76,243,254,169,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,76,254,254,85,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,164,254,170,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,235,254,79,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,19,228,254,59,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,2,0,0,1,127,254,203,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,185,90,0,18,172,254,249,55,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,185,250,245,247,254,244,79,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,113,209,254,254,171,42,0,0,0,0,0,0
//,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
//#include "Digits_test.h"

//*************************************************************************************************

//#include "RF_Banknote.h"
// or
//#include "DT_Banknote.h"
//and uncomment
//float BanknoteSample[4] = {1.941, 0.46351, 4.6472,  1.0879};
//#include "Banknote_test.h"

//*************************************************************************************************

//#include "RF_Survival.h"
// or
//#include "DT_Survival.h"
//and uncomment
//float SurvivalSample[3] = {34,67,7};
//#include "Haberman_test.h"

//*************************************************************************************************

//#include "DT_Titanic.h"
// or
#include "RF_Titanic.h"
//and uncomment
float TitanicSample[6] = {0, 1, 1, 12, 6, 4};
//#include "Titanic_test.h"

//*************************************************************************************************

//Uncomment to load and execute the required type of trained classifier

//Eloquent::ML::Port::DecisionTree clf;
Eloquent::ML::Port::RandomForest clf;


void setup() {
    Serial.begin(115200);
//    Serial.println("Begin"); 
//    PgmPrint("Free RAM: ");
//    Serial.println(FreeRam());
}

void loop() {
    int temp1, temp2 = 0;
    int y_pred [] = {};
    int start = millis();
       
// Uncomment the data for which you want to find the unit inference time 
Serial.print("The unit inference result is:");
//    Serial.println(clf.predict(irisSample));
//    Serial.println(clf.predict(HeartSample));
//    Serial.println(clf.predict(CancerSample));
//    Serial.println(clf.predict(DigitsSample));
//    Serial.println(clf.predict(BanknoteSample));
//    Serial.println(clf.predict(SurvivalSample));
    Serial.println(clf.predict(TitanicSample));

    Serial.print("It took ");
    temp1 = millis() - start;
    Serial.print(temp1);
    Serial.print("ms to perform unit inference");
    Serial.println();
    delay(1000); 

// 
   
// Serial.print("The Predicted values are: ");
//    int start1 = millis();
//    for (int i = 0; i < DATASET_SIZE; i++) 
//    {
//        Serial.print(clf.predict(X[i])); 
//        }
//    
//    Serial.println("");
//    Serial.print("It took ");
//    temp2 = millis() - start1;
//    Serial.print(temp2);
//    Serial.print("ms to infer for ");
//    Serial.print(DATASET_SIZE);
//    Serial.print(" samples");
//    Serial.println();
//    
//    Serial.println("");
//    Serial.println("");
//    delay(1000); 

}   
      
