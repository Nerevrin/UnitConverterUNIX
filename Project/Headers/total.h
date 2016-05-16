﻿#ifndef TOTAL
#define TOTAL

typedef struct entered_and_gated_parameters {
    double result, VOLUME;
    float version;
    char like_to_continue;
    char measurement_id[5];
    char MEASUREMENT[261];
} MainParameters;
// ÈÇÌÅÍÅÍÈÅ ÏÀÐÀÌÅÒÐÎÂ ÎÏÀÑÍÎ ÄËß ÆÈÇÍÈ;

typedef struct working_values {
    double gate;
    int id;
    int input_choice, output_choice;
    char in[5], out[5];
} FunctionsParameters;


// Ñëóæåáíûå ôóíêöèè;
double parsing(char *MEASUREMENT);
void convert(double RESULT);
int parsing_id(char *MEASUREMENT);


//СЕНЯ
double selectionswitchTemperature(double MEASUREMENT);
double selectionswitchMass(double MEASUREMENT);
double selectionswitchAmount(double MEASUREMENT);
double selectionswitchLength(double MEASUREMENT);
//КОЛЯ
double selectionswitchData(double MEASUREMENT);

//ПАХОМ

//РОМА
double selectionswitchPower(double MEASUREMENT);
double selectionswitchQuantityOfSubstance(double MEASUREMENT);
double selectionswitchAngle(double MEASUREMENT);
double selectionswitchFrequency(double MEASUREMENT);

//МИХА
double selectionswitchPression(double MEASUREMENT);
double selectionswitchSpeed(double MEASUREMENT);
double selectionswitchTime(double MEASUREMENT);
double selectionswitchEnergy(double MEASUREMENT);





// Ïðîòîòèïû ðàáî÷èõ ôóíêöèé;
double adjacentValuesUpward(double DATA);
double adjacentValuesToDecrease(double DATA);
double valuesBetweenOneUpward(double DATA);
double valuesBetweenOneToDecrease(double DATA);
double valuesBetweenTwoUpward(double DATA);
double valuesBetweenTwoToDecrease(double DATA);
double valuesBetweenThreeUpward(double DATA);
double valuesBetweenThreeToDecrease(double DATA);
double valuesBetweenFourUpward(double DATA);
double valuesBetweenFourToDecrease(double DATA);
double valuesBetweenFiveUpward(double DATA);
double valuesBetweenFiveToDecrease(double DATA);
double valuesBetweenSixUpward(double DATA);
double valuesBetweenSixToDecrease(double DATA);
double bitsTobytes(double DATA);
double bytesTobits(double DATA);
double bitsTokilobytes(double DATA);
double kilobytesTobits(double DATA);
double bitsTomegabytes(double DATA);
double megabytesTobits(double DATA);
double bitsTogigabytes(double DATA);
double gigabytesTobits(double DATA);
double bitsToterabytes(double DATA);
double terabytesTobits(double DATA);
double bitsTopetabytes(double DATA);
double petabytesTobits(double DATA);
double bitsToexabytes(double DATA);
double exabytesTobits(double DATA);
double bitsTozetabytes(double DATA);
double zetabytesTobits(double DATA);

//TIME
 double nsec_to_min ( double TIME);
 double mksec_to_min ( double TIME);
 double msec_to_min ( double TIME);
 double sec_to_min ( double TIME);
 double min_to_nsec ( double TIME);
 double min_to_mksec ( double TIME);
 double min_to_msec ( double TIME);
 double min_to_sec ( double TIME);
 double min_to_chas ( double TIME);
 double min_to_sut ( double TIME);
 double min_to_week ( double TIME);
 double min_to_year ( double TIME);
 double min_to_vek ( double TIME);
 double chas_to_min ( double TIME);
 double sut_to_min ( double TIME);
 double week_to_min ( double TIME);
 double year_to_min ( double TIME);
 double vek_to_min ( double TIME);

//ДАВЛЕНИЕ

//bar
double bar_to_mbar(double PRESS);	
double bar_to_paskal(double PRESS);
double bar_to_kpaskal(double PRESS);
double bar_to_Mpaskal(double PRESS);
double bar_to_gcm(double PRESS);
double bar_to_kgcm(double PRESS);
double bar_to_toncm(double PRESS);
double bar_to_kgm(double PRESS);
double bar_to_tonm(double PRESS);
double bar_to_newtoncm(double PRESS);
double bar_to_newtonm(double PRESS);
//mbar
double mbar_to_bar(double PRESS);
//paskal
double paskal_to_bar(double PRESS);
//kpaskal
double kpaskal_to_bar(double PRESS);
//Mpaskal
double Mpaskal_to_bar(double PRESS);
//gcm
double gcm_to_bar(double PRESS);
//kgcm
double kgcm_to_bar(double PRESS);
//toncm
double toncm_to_bar(double PRESS);
//kgm
double kgm_to_bar(double PRESS);
//tonm
double tonm_to_bar(double PRESS);
//newtoncm
double newtoncm_to_bar(double PRESS);
//newtonm
double newtonm_to_bar(double PRESS);

//ФУНКЦИИ КОНВЕРТИРОВАНИЯ РАЗЛИЧНЫХ ЕДИНИЦ ДЛИНЫ  
//Единица измерения миллиметр и её перевод
double millimeters_TO_meters(double LENGTH);
double millimeters_TO_centimeters(double LENGTH);
double millimeters_TO_decimeters(double LENGTH);
double millimeters_TO_kilometers(double LENGTH);
double millimeters_TO_fathoms(double LENGTH);
double millimeters_TO_arshins(double LENGTH);
double millimeters_TO_miles(double LENGTH);
double millimeters_TO_yards(double LENGTH);
double millimeters_TO_foots(double LENGTH);
double millimeters_TO_micrometers(double LENGTH);
double millimeters_TO_nanometers(double LENGTH);
double millimeters_TO_angstroms(double LENGTH);
double millimeters_TO_nauticalmiles(double LENGTH);
//Единица измерения метр и её перевод
double meters_TO_millimeters(double LENGTH);
double meters_TO_centimeters(double LENGTH);
double meters_TO_decimeters(double LENGTH);
double meters_TO_kilometers(double LENGTH);
double meters_TO_fathoms(double LENGTH);
double meters_TO_arshins(double LENGTH);
double meters_TO_miles(double LENGTH);
double meters_TO_yards(double LENGTH);
double meters_TO_foots(double LENGTH);
double meters_TO_micrometers(double LENGTH);
double meters_TO_nanometers(double LENGTH);
double meters_TO_angstroms(double LENGTH);
double meters_TO_nauticalmiles(double LENGTH);
//Единица измерения сантиметр и её перевод
double centimeters_TO_meters(double LENGTH);
double centimeters_TO_millimeters(double LENGTH);
double centimeters_TO_decimeters(double LENGTH);
double centimeters_TO_kilometers(double LENGTH);
double centimeters_TO_fathoms(double LENGTH);
double centimeters_TO_arshins(double LENGTH);
double centimeters_TO_miles(double LENGTH);
double centimeters_TO_yards(double LENGTH);
double centimeters_TO_foots(double LENGTH);
double centimeters_TO_micrometers(double LENGTH);
double centimeters_TO_nanometers(double LENGTH);
double centimeters_TO_angstroms(double LENGTH);
double centimeters_TO_nauticalmiles(double LENGTH);
//Единица измерения дециметр и её перевод
double decimeters_TO_centimeters(double LENGTH);
double decimeters_TO_meters(double LENGTH);
double decimeters_TO_millimeters(double LENGTH);
double decimeters_TO_kilometers(double LENGTH);
double decimeters_TO_fathoms(double LENGTH);
double decimeters_TO_arshins(double LENGTH);
double decimeters_TO_miles(double LENGTH);
double decimeters_TO_yards(double LENGTH);
double decimeters_TO_foots(double LENGTH);
double decimeters_TO_micrometers(double LENGTH);
double decimeters_TO_nanometers(double LENGTH);
double decimeters_TO_angstroms(double LENGTH);
double decimeters_TO_nauticalmiles(double LENGTH);
//Единица измерения километр и её перевод
double kilometers_TO_decimeters(double LENGTH);
double kilometers_TO_centimeters(double LENGTH);
double kilometers_TO_meters(double LENGTH);
double kilometers_TO_millimeters(double LENGTH);
double kilometers_TO_fathoms(double LENGTH);
double kilometers_TO_arshins(double LENGTH);
double kilometers_TO_miles(double LENGTH);
double kilometers_TO_yards(double LENGTH);
double kilometers_TO_foots(double LENGTH);
double kilometers_TO_micrometers(double LENGT);
double kilometers_TO_nanometers(double LENGTH);
double kilometers_TO_angstroms(double LENGTH);
double kilometers_TO_nauticalmiles(double LENGTH);
//Единица измерения сажень и её перевод
double fathoms_TO_kilometers(double LENGTH);
double fathoms_TO_decimeters(double LENGTH);
double fathoms_TO_centimeters(double LENGTH);
double fathoms_TO_meters(double LENGTH);
double fathoms_TO_millimeters(double LENGTH);
double fathoms_TO_arshins(double LENGTH);
double fathoms_TO_miles(double LENGTH);
double fathoms_TO_yards(double LENGTH);
double fathoms_TO_foots(double LENGTH);
double fathoms_TO_micrometers(double LENGTH);
double fathoms_TO_nanometers(double LENGTH);
double fathoms_TO_angstroms(double LENGTH);
double fathoms_TO_nauticalmiles(double LENGTH);
//Единица измерения аршин и её перевод
double arshins_TO_fathoms(double LENGTH);
double arshins_TO_kilometers(double LENGTH);
double arshins_TO_decimeters(double LENGTH);
double arshins_TO_centimeters(double LENGTH);
double arshins_TO_meters(double LENGTH);
double arshins_TO_millimeters(double LENGTH);
double arshins_TO_miles(double LENGTH);
double arshins_TO_yards(double LENGTH);
double arshins_TO_foots(double LENGTH);
double arshins_TO_micrometers(double LENGTH);
double arshins_TO_nanometers(double LENGTH);
double arshins_TO_angstroms(double LENGTH);
double arshins_TO_nauticalmiles(double LENGTH); 
//Единица измерения миля и её перевод
double miles_TO_arshins(double LENGTH);
double miles_TO_fathoms(double LENGTH);
double miles_TO_kilometers(double LENGTH);
double miles_TO_decimeters(double LENGTH);
double miles_TO_centimeters(double LENGTH);
double miles_TO_meters(double LENGTH);
double miles_TO_millimeters(double LENGTH);
double miles_TO_yards(double LENGTH);
double miles_TO_foots(double LENGTH);
double miles_TO_micrometers(double LENGTH);
double miles_TO_nanometers(double LENGTH);
double miles_TO_angstroms(double LENGTH);
double miles_TO_nauticalmiles(double LENGTH); 
//Единица измерения ярд и её перевод
double yards_TO_miles(double LENGTH);
double yards_TO_arshins(double LENGTH);
double yards_TO_fathoms(double LENGTH);
double yards_TO_kilometers(double LENGTH);
double yards_TO_decimeters(double LENGTH);
double yards_TO_centimeters(double LENGTH);
double yards_TO_meters(double LENGTH);
double yards_TO_millimeters(double LENGTH);
double yards_TO_foots(double LENGTH);
double yards_TO_micrometers(double LENGTH);
double yards_TO_nanometers(double LENGTH);
double yards_TO_angstroms(double LENGTH);
double yards_TO_nauticalmiles(double LENGTH); 
//Единица измерения фут и её перевод
double foots_TO_yards(double LENGTH);
double foots_TO_miles(double LENGTH);
double foots_TO_arshins(double LENGTH);
double foots_TO_fathoms(double LENGTH);
double foots_TO_kilometers(double LENGTH);
double foots_TO_decimeters(double LENGTH);
double foots_TO_centimeters(double LENGTH);
double foots_TO_meters(double LENGTH);
double foots_TO_millimeters(double LENGTH);
double foots_TO_micrometers(double LENGTH);
double foots_TO_nanometers(double LENGTH);
double foots_TO_angstroms(double LENGTH);
double foots_TO_nauticalmiles(double LENGTH); 
//Единица измерения микрометр и её перевод
double micrometers_TO_foots(double LENGTH);
double micrometers_TO_yards(double LENGTH);
double micrometers_TO_miles(double LENGTH);
double micrometers_TO_arshins(double LENGTH);
double micrometers_TO_fathoms(double LENGTH);
double micrometers_TO_kilometers(double LENGTH);
double micrometers_TO_decimeters(double LENGTH);
double micrometers_TO_centimeters(double LENGTH);
double micrometers_TO_meters(double LENGTH);
double micrometers_TO_millimeters(double LENGTH);
double micrometers_TO_nanometers(double LENGTH);
double micrometers_TO_angstroms(double LENGTH);
double micrometers_TO_nauticalmiles(double LENGTH); 
//Единица измерения нанометр и её перевод
double nanometers_TO_micrometers(double LENGTH);
double nanometers_TO_foots(double LENGTH);
double nanometers_TO_yards(double LENGTH);
double nanometers_TO_miles(double LENGTH);
double nanometers_TO_arshins(double LENGTH);
double nanometers_TO_fathoms(double LENGTH);
double nanometers_TO_kilometers(double LENGTH);
double nanometers_TO_decimeters(double LENGTH);
double nanometers_TO_centimeters(double LENGTH);
double nanometers_TO_meters(double LENGTH);
double nanometers_TO_millimeters(double LENGTH);
double nanometers_TO_angstroms(double LENGTH);
double nanometers_TO_nauticalmiles(double LENGTH); 
//Единица измерения ангстрем и её перевод
double angstroms_TO_nanometers(double LENGTH);
double angstroms_TO_micrometers(double LENGTH);
double angstroms_TO_foots(double LENGTH);
double angstroms_TO_yards(double LENGTH);
double angstroms_TO_miles(double LENGTH);
double angstroms_TO_arshins(double LENGTH);
double angstroms_TO_fathoms(double LENGTH);
double angstroms_TO_kilometers(double LENGTH);
double angstroms_TO_decimeters(double LENGTH);
double angstroms_TO_centimeters(double LENGTH);
double angstroms_TO_meters(double LENGTH);
double angstroms_TO_meters(double LENGTH);
double angstroms_TO_millimeter(double LENGTH);
double angstroms_TO_nauticalmiles(double LENGTH); 
//Единица измерения морская миля
double nauticalmiles_TO_angstroms(double LENGTH);
double nauticalmiles_TO_nanometers(double LENGTH);
double nauticalmiles_TO_micrometers(double LENGTH);
double nauticalmiles_TO_foots(double LENGTH);
double nauticalmiles_TO_yards(double LENGTH);
double nauticalmiles_TO_miles(double LENGTH);
double nauticalmiles_TO_arshins(double LENGTH);
double nauticalmiles_TO_fathoms(double LENGTH);
double nauticalmiles_TO_kilometers(double LENGTH);
double nauticalmiles_TO_decimeters(double LENGTH);
double nauticalmiles_TO_centimeters(double LENGTH);
double nauticalmiles_TO_meters(double LENGTH);
double nauticalmiles_TO_millimeters(double LENGTH);

// прототипы функций конвентирования различных величин КОЛИЧЕСТВА ВЕЩЕСТВА
double Mole2mMole(double QOS);
double mMole2Mole(double QOS);
double Mole2kMole(double QOS);
double kMole2Mole(double QOS);
double Mole2PoundMole(double QOS);
double PoundMole2Mole(double QOS);
double Mole2MkMole(double QOS);
double MkMole2Mole(double QOS);
double Mole2MgMole(double QOS);
double MgMole2Mole(double QOS);



//прототип функций конвентирования различных величин массы
//Единица измерения Грамм и её перевод
double Grams_TO_Kilograms(double MASS);
double Grams_TO_Quintals(double MASS);
double Grams_TO_Tonnes(double MASS);
double Grams_TO_Carats(double MASS);
double Grams_TO_Stones(double MASS);
double Grams_TO_Funts(double MASS);
double Grams_TO_Ounces(double MASS);
double Grams_TO_Drachmas(double MASS);
double Grams_TO_Grains(double MASS);
//Единица измерения Центнер и её перевод
double Quintals_TO_Kilograms(double MASS);
double Quintals_TO_Grams(double MASS);
double Quintals_TO_Tonnes(double MASS);
double Quintals_TO_Carats(double MASS);
double Quintals_TO_Stones(double MASS);
double Quintals_TO_Funts(double MASS);
double Quintals_TO_Ounces(double MASS);
double Quintals_TO_Drachmas(double MASS);
double Quintals_TO_Grains(double MASS);
//Единица измерения Тонна и её перевод
double Tonnes_TO_Quintals(double MASS);
double Tonnes_TO_Kilograms(double MASS);
double Tonnes_TO_Grams(double MASS);
double Tonnes_TO_Carat(double MASS);
double Tonnes_TO_Stone(double MASS);
double Tonnes_TO_Funts(double MASS);
double Tonnes_TO_Ounces(double MASS);
double Tonnes_TO_Drachmas(double MASS);
double Tonnes_TO_Grains(double MASS);
//Единица измерения Карат и её перевод
double Carats_TO_Tonnes(double MASS);
double Carats_TO_Quintals(double MASS);
double Carats_TO_Kilograms(double MASS);
double Carats_TO_Grams(double MASS);
double Carats_TO_Stones(double MASS);
double Carats_TO_Funts(double MASS);
double Carats_TO_Ounces(double MASS);
double Carats_TO_Drachmas(double MASS);
double Carats_TO_Grains(double MASS);
//Единица измерения Стоун и её перевод
double Stones_TO_Carats(double MASS);
double Stones_TO_Tonnes(double MASS);
double Stones_TO_Quintals(double MASS);
double Stones_TO_Kilograms(double MASS);
double Stones_TO_Grams(double MASS);
double Stones_TO_Funts(double MASS);
double Stones_TO_Ounces(double MASS);
double Stones_TO_Drachmas(double MASS);
double Stones_TO_Grains(double MASS);
//Единица измерения Фунт и её перевод
double Funts_TO_Stones(double MASS);
double Funts_TO_Carats(double MASS);
double Funts_TO_Tonnes(double MASS);
double Funts_TO_Quintals(double MASS);
double Funts_TO_Kilograms(double MASS);
double Funts_TO_Grams(double MASS);
double Funts_TO_Ounces(double MASS);
double Funts_TO_Drachmas(double MASS);
double Funts_TO_Grains(double MASS);
//Единица измерения Унция и её перевод
double Ounces_TO_Funts(double MASS);
double Ounces_TO_Stones(double MASS);
double Ounces_TO_Carats(double MASS);
double Ounces_TO_Tonnes(double MASS);
double Ounces_TO_Quintals(double MASS);
double Ounces_TO_Kilograms(double MASS);
double Ounces_TO_Grams(double MASS);
double Ounces_TO_Drachmas(double MASS);
double Ounces_TO_Grains(double MASS);
//Единица измерения Драхма и её перевод
double Drachmas_TO_Ounces(double MASS);
double Drachmas_TO_Funts(double MASS);
double Drachmas_TO_Stones(double MASS);
double Drachmas_TO_Carats(double MASS);
double Drachmas_TO_Tonnes(double MASS);
double Drachmas_TO_Quintals(double MASS);
double Drachmas_TO_Kilograms(double MASS);
double Drachmas_TO_Grams(double MASS);
double Drachmas_TO_Grains(double MASS);
//Единица измерения Гран и её перевод
double Grains_TO_Drachma(double MASS);
double Grains_TO_Ounce(double MASS);
double Grains_TO_Funts(double MASS);
double Grains_TO_Stones(double MASS);
double Grains_TO_Carats(double MASS);
double Grains_TO_Tonnes(double MASS);
double Grains_TO_Quintals(double MASS);
double Grains_TO_Kilograms(double MASS);
double Grains_TO_Grams(double MASS);
//Единица измерения кило и её перевод
double Kilograms_TO_Grams(double MASS);
double Kilograms_TO_Quintals(double MASS);
double Kilograms_TO_Tonnes(double MASS);
double Kilograms_TO_Carats(double MASS);
double Kilograms_TO_Stones(double MASS);
double Kilograms_TO_Funts(double MASS);
double Kilograms_TO_Ounces(double MASS);
double Kilograms_TO_Drachmas(double MASS);
double Kilograms_TO_Grains(double MASS);


// прототипы функций конвентирования различных величин МОЩНОСТИ
double Vat2kVat(double POWER);
double kVat2Vat(double POWER);
double Vat2mVat(double POWER);
double mVat2Vat(double POWER);
double kgSilaMvS2Vat(double POWER);
double Vat2kgSilaMvS(double POWER);
double Vat2ErgS(double POWER);
double ErgS2Vat(double POWER);
double Vat2HorsePowMetr(double POWER);
double HorsePowMetr2Vat(double POWER);
double Vat2HorsePowEng(double POWER);
double HorsePowEng2Vat(double POWER);
double Vat2MlVat(double POWER);
double MlVat2Vat(double POWER);
double Vat2MkVat(double POWER);
double MkVat2Vat(double POWER);

//прототип функций конвентирования различных величин объема
//Единица измерения Кубический километр и её перевод 
double squaredkilometers_TO_squaredmeters(double AMOUNT);
double squaredkilometers_TO_squareddecimeters(double AMOUNT);
double squaredkilometers_TO_squaredcentimeters(double AMOUNT);
double squaredkilometers_TO_squaredmillimeters(double AMOUNT);
double squaredkilometers_TO_liters(double AMOUNT);
double squaredkilometers_TO_mililiters(double AMOUNT);
double squaredkilometers_TO_gallons(double AMOUNT);
double squaredkilometers_TO_barrels(double AMOUNT);
double squaredkilometers_TO_quarts(double AMOUNT);
double squaredkilometers_TO_pints(double AMOUNT);
double squaredkilometers_TO_flozs(double AMOUNT);
//Единица измерения Кубический метр и её перевод
double squaredmeters_TO_squaredkilometers(double AMOUNT);
double squaredmeters_TO_squareddecimeters(double AMOUNT);
double squaredmeters_TO_squaredcentimeters(double AMOUNT);
double squaredmeters_TO_squaredmillimeters(double AMOUNT);
double squaredmeters_TO_liters(double AMOUNT);
double squaredmeters_TO_mililiters(double AMOUNT);
double squaredmeters_TO_gallons(double AMOUNT);
double squaredmeters_TO_barrels(double AMOUNT);
double squaredmeters_TO_pints(double AMOUNT);
double squaredmeters_TO_quarts(double AMOUNT);
double squaredmeters_TO_flozs(double AMOUNT);
//Единица измерения кубический дециметр и её перевод
double squareddecimeters_TO_squaredmeters(double AMOUNT);
double squareddecimeters_TO_squaredkilometers(double AMOUNT);
double squareddecimeters_TO_squaredcentimeters(double AMOUNT);
double squareddecimeters_TO_squaredmillimeters(double AMOUNT);
double squareddecimeters_TO_liters(double AMOUNT);
double squareddecimeters_TO_mililiters(double AMOUNT);
double squareddecimeters_TO_gallons(double AMOUNT);
double squareddecimeters_TO_barrels(double AMOUNT);
double squareddecimeters_TO_pints(double AMOUNT);
double squareddecimeters_TO_quarts(double AMOUNT);
double squareddecimeters_TO_flozs(double AMOUNT);
//Единица измерения кубический дециметр и её перевод
double squaredcentimeters_TO_squareddecimeters(double AMOUNT);
double squaredcentimeters_TO_squaredmeters(double AMOUNT);
double squaredcentimeters_TO_squaredkilometers(double AMOUNT);
double squaredcentimeters_TO_squaredmillimeters(double AMOUNT);
double squaredcentimeters_TO_liters(double AMOUNT);
double squaredcentimeters_TO_mililiters(double AMOUNT);
double squaredcentimeters_TO_gallons(double AMOUNT);
double squaredcentimeters_TO_barrels(double AMOUNT);
double squaredcentimeters_TO_pints(double AMOUNT);
double squaredcentimeters_TO_quarts(double AMOUNT);
double squaredcentimeters_TO_flozs(double AMOUNT);
//Единица измерения кубический миллиметры её перевод
double squaredmillimeters_TO_squaredcentimeters(double AMOUNT);
double squaredmillimeters_TO_squareddecimeters(double AMOUNT);
double squaredmillimeters_TO_squaredmeters(double AMOUNT);
double squaredmillimeters_TO_squaredkilometers(double AMOUNT);
double squaredmillimeters_TO_liters(double AMOUNT);
double squaredmillimeters_TO_mililiters(double AMOUNT);
double squaredmillimeters_TO_gallons(double AMOUNT);
double squaredmillimeters_TO_barrels(double AMOUNT);
double squaredmillimeters_TO_pints(double AMOUNT);
double squaredmillimeters_TO_quarts(double AMOUNT);
double squaredmillimeters_TO_flozs(double AMOUNT);
//Единица измерения кубический миллиметры её перевод
double liters_TO_squaredmillimeters(double AMOUNT);
double liters_TO_squaredcentimeters(double AMOUNT);
double liters_TO_squareddecimeters(double AMOUNT);
double liters_TO_squaredmeters(double AMOUNT);
double liters_TO_squaredkilometers(double AMOUNT);
double liters_TO_mililiters(double AMOUNT);
double liters_TO_gallons(double AMOUNT);
double liters_TO_barrels(double AMOUNT);
double liters_TO_quarts(double AMOUNT);
double liters_TO_pints(double AMOUNT);
double liters_TO_flozs(double AMOUNT);
//Единица измерения миллитр её перевод
double mililiters_TO_liters(double AMOUNT);
double mililiters_TO_squaredmillimeters(double AMOUNT);
double mililiters_TO_squaredcentimeters(double AMOUNT);
double mililiters_TO_squareddecimeters(double AMOUNT);
double mililiters_TO_squaredmeters(double AMOUNT);
double mililiters_TO_squaredkilometers(double AMOUNT);
double mililiters_TO_gallons(double AMOUNT);
double mililiters_TO_barrels(double AMOUNT);
double mililiters_TO_quarts(double AMOUNT);
double mililiters_TO_pints(double AMOUNT);
double mililiters_TO_flozs(double AMOUNT);
//Единица измерения галлон её перевод
double gallons_TO_mililiters(double AMOUNT);
double gallons_TO_liters(double AMOUNT);
double gallons_TO_squaredmillimeters(double AMOUNT);
double gallons_TO_squaredcentimeters(double AMOUNT);
double gallons_TO_squareddecimeters(double AMOUNT);
double gallons_TO_squaredmeters(double AMOUNT);
double gallons_TO_squaredkilometers(double AMOUNT);
double gallons_TO_barrels(double AMOUNT);
double gallons_TO_quarts(double AMOUNT);
double gallons_TO_pints(double AMOUNT);
double gallons_TO_flozs(double AMOUNT);
//Единица измерения баррель (нефтяной) её перевод
double barrels_TO_gallons(double AMOUNT);
double barrels_TO_mililiters(double AMOUNT);
double barrels_TO_liters(double AMOUNT);
double barrels_TO_squaredmillimeters(double AMOUNT);
double barrels_TO_squaredcentimeters(double AMOUNT);
double barrels_TO_squareddecimeters(double AMOUNT);
double barrels_TO_squaredmeters(double AMOUNT);
double barrels_TO_squaredkilometers(double AMOUNT);
double barrels_TO_quarts(double AMOUNT);
double barrels_TO_pints(double AMOUNT);
double barrels_TO_floz(double AMOUNT);
//Единица измерения кварта  её перевод
double quarts_TO_barrels(double AMOUNT);
double quarts_TO_gallons(double AMOUNT);
double quarts_TO_mililiters(double AMOUNT);
double quarts_TO_liters(double AMOUNT);
double quarts_TO_squaredmillimeters(double AMOUNT);
double quarts_TO_squaredcentimeters(double AMOUNT);
double quarts_TO_squareddecimeters(double AMOUNT);
double quarts_TO_squaredmeters(double AMOUNT);
double quarts_TO_squaredkilometers(double AMOUNT);
double quarts_TO_pints(double AMOUNT);
double quarts_TO_flozs(double AMOUNT);
//Единица измерения пинта  её перевод
double pints_TO_quarts(double AMOUNT);
double pints_TO_barrels(double AMOUNT);
double pints_TO_gallons(double AMOUNT);
double pints_TO_mililiters(double AMOUNT);
double pints_TO_liters(double AMOUNT);
double pints_TO_squaredmillimeters(double AMOUNT);
double pints_TO_squaredcentimeters(double AMOUNT);
double pints_TO_squareddecimeters(double AMOUNT);
double pints_TO_squaredmeters(double AMOUNT);
double pints_TO_squaredkilometers(double AMOUNT);
double pints_TO_flozs(double AMOUNT);
//Единица жидкая унция  её перевод
double flozs_TO_pints(double AMOUNT);
double flozs_TO_quarts(double AMOUNT);
double flozs_TO_barrels(double AMOUNT);
double flozs_TO_gallons(double AMOUNT);
double flozs_TO_mililiters(double AMOUNT);
double flozs_TO_liters(double AMOUNT);
double flozs_TO_squaredmillimeters(double AMOUNT);
double flozs_TO_squaredmillimeters(double AMOUNT);
double flozs_TO_squareddecimeters(double AMOUNT);
double flozs_TO_squaredmeters(double AMOUNT);
double flozs_TO_squaredkilometers(double AMOUNT);
double flozs_TO_squaredcentimeters(double AMOUNT);



// Прототипы для температуры;
double CelsiusTOFahrenheits(double TEMPERATURE);
double CelsiusTOKelvins(double TEMPERATURE);
double CelsiusTOReaumurs(double TEMPERATURE);
double CelsiusTORankines(double TEMPERATURE);
double CelsiusTONewtons(double TEMPERATURE);
double CelsiusTORomers(double TEMPERATURE);
double CelsiusTODelisles(double TEMPERATURE);
double FahrenheitsTOCelsius(double TEMPERATURE);
double FahrenheitsTOKelvins(double TEMPERATURE);
double FahrenheitsTOReaumurs(double TEMPERATURE);
double FahrenheitsTORankines(double TEMPERATURE);
double FahrenheitsTONewtons(double TEMPERATURE);
double FahrenheitsTORomers(double TEMPERATURE);
double FahrenheitsTODelisles(double TEMPERATURE);
double KelvinsTOFahrenheits(double TEMPERATURE);
double KelvinsTOCelsius(double TEMPERATURE);
double KelvinsTOReaumurs(double TEMPERATURE);
double KelvinsTORankines(double TEMPERATURE);
double KelvinsTONewtons(double TEMPERATURE);
double KelvinsTORomers(double TEMPERATURE);
double KelvinsTODelisles(double TEMPERATURE);
double ReaumursTOKelvins(double TEMPERATURE);
double ReaumursTOFahrenheits(double TEMPERATURE);
double ReaumursTOCelsius(double TEMPERATURE);
double ReaumursTORankines(double TEMPERATURE);
double ReaumursTONewtons(double TEMPERATURE);
double ReaumursTORomers(double TEMPERATURE);
double ReaumursTODelisles(double TEMPERATURE);
double RankinesTOReaumurs(double TEMPERATURE);
double RankinesTOKelvins(double TEMPERATURE);
double RankinesTOFahrenheits(double TEMPERATURE);
double RankinesTOCelsius(double TEMPERATURE);
double RankinesTONewtons(double TEMPERATURE);
double RankinesTORomers(double TEMPERATURE);
double RankinesTODelisles(double TEMPERATURE);
double NewtonsTORankines(double TEMPERATURE);
double NewtonsTOReaumurs(double TEMPERATURE);
double NewtonsTOKelvins(double TEMPERATURE);
double NewtonsTOFahrenheits(double TEMPERATURE);
double NewtonsTOCelsius(double TEMPERATURE);
double NewtonsTORomers(double TEMPERATURE);
double NewtonsTODelisles(double TEMPERATURE);
double RomersTONewtons(double TEMPERATURE);
double RomersTORankines(double TEMPERATURE);
double RomersTOReaumurs(double TEMPERATURE);
double RomersTOKelvins(double TEMPERATURE);
double RomersTOFahrenheits(double TEMPERATURE);
double RomersTOCelsius(double TEMPERATURE);
double RomersTODelisles(double TEMPERATURE);
double DelislesTORomers(double TEMPERATURE);
double DelislesTONewtons(double TEMPERATURE);
double DelislesTORankines(double TEMPERATURE);
double DelislesTOReaumurs(double TEMPERATURE);
double DelislesTOKelvins(double TEMPERATURE);
double DelislesTOFahrenheits(double TEMPERATURE);
double DelislesTOCelsius(double TEMPERATURE);



// прототипы функций конвентирования различных величин УГЛА
double Degree2Radian(double ANGLE);
double Radian2Degree(double ANGLE);
double Degree2Min(double ANGLE);
double Min2Degree(double ANGLE);
double Degree2Sec(double ANGLE);
double Sec2Degree(double ANGLE);
double Degree2Grad(double ANGLE);
double Grad2Degree(double ANGLE);
double Sextant2Degree(double ANGLE);
double Degree2Sextant(double ANGLE);
double Rumb2Degree(double ANGLE);
double Degree2Rumb(double ANGLE);


// прототипы функций конвентирования различных величин ЧАСТОТЫ
double Herz2kHerz(double FREQUENCY);
double kHerz2Herz(double FREQUENCY);
double Herz2MlHerz(double FREQUENCY);
double MlHerz2Herz(double FREQUENCY);
double Herz2MkHerz(double FREQUENCY);
double MkHerz2Herz(double FREQUENCY);
double Herz2MgHerz(double FREQUENCY);
double MgHerz2Herz(double FREQUENCY);
double Herz2Frenel(double FREQUENCY);
double Frenel2Herz(double FREQUENCY);
double Herz2RadSec(double FREQUENCY);
double RadSec2Herz(double FREQUENCY);


//ПРОТАТИПЫ СКОРОСТИ
double kmch_to_mc (double SPEED);
double kmch_to_uzl (double SPEED);
double kmch_to_mah (double SPEED);
double kmch_to_milch (double SPEED);
double uzl_to_kmch (double SPEED);
double mah_to_kmch (double SPEED);
double milch_to_kmch (double SPEED);
double mc_to_kmch (double SPEED);


//Прототипы конвертирования ЭНЕРГИИ
//джоули
double joule_to_kvatch (double ENERGY);
double joule_to_electronvolt (double ENERGY);
double joule_to_kall (double ENERGY);
double joule_to_tnt (double ENERGY);
//Киловатт-час
double kvatch_to_joule (double ENERGY);
//Электронвольт
double electronvolt_to_joule (double ENERGY);
//Калории
double kall_to_joule (double ENERGY);
//Тратиловый эквивалент
double tnt_to_joule (double ENERGY);


#endif
