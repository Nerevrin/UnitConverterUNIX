#include <stdio.h>
#include <math.h>




// <миллиметр> ---> <метр> //
double millimeters_TO_meters(double LENGTH) {
	LENGTH = LENGTH / 1000;  
	return LENGTH;
}

// <миллиметр> ---> <сантиметр> //
double millimeters_TO_centimeters(double LENGTH) {
	LENGTH = LENGTH / 10;  
	return LENGTH;
}


// <миллиметр> ---> <дециметр> //
double millimeters_TO_decimeters(double LENGTH) {
	LENGTH = LENGTH / 100;  
	return LENGTH;
}

// <миллиметр> ---> <километр> //
double millimeters_TO_kilometers(double LENGTH) {
	LENGTH = LENGTH / 1000000;  
	return LENGTH;
}

// <миллиметр> ---> <сажень> //
double millimeters_TO_fathoms(double LENGTH) {
	LENGTH = LENGTH * 0.0004686914135733;  
	return LENGTH;
}

// <миллиметр> ---> <аршин> //
double millimeters_TO_arshins(double LENGTH) {
	LENGTH = LENGTH * 0.00140607424072;  
	return LENGTH;
}

// <миллиметр> ---> <миля> //
double millimeters_TO_miles(double LENGTH) {
	LENGTH = LENGTH *  6.213711922373 * (pow(10,-7)); 
	return LENGTH;
}

// <миллиметр> ---> <ярд> //
double millimeters_TO_yards(double LENGTH) {
	LENGTH = LENGTH *  0.001093613298338;  
	return LENGTH;
}

// <миллиметр> ---> <фут> //
double millimeters_TO_foots(double LENGTH) {
	LENGTH = LENGTH *  0.003280839895013;  
	return LENGTH;
}

// <миллиметр> ---> <микрометр> //
double millimeters_TO_micrometers(double LENGTH) {
	LENGTH = LENGTH  *  1000;  
	return LENGTH;
}

// <миллиметр> ---> <нанометр> //
double millimeters_TO_nanometers(double LENGTH) {
	LENGTH = LENGTH  *  1000000;  
	return LENGTH;
}

// <миллиметр> ---> <ангстрем> //
double millimeters_TO_angstroms(double LENGTH) {
	LENGTH = LENGTH  *  10000000;  
	return LENGTH;
}

// <миллиметр> ---> <морская миля> //
double millimeters_TO_nauticalmiles(double LENGTH) {
	LENGTH = LENGTH  / 1851851.851851;
	return LENGTH;
}

/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------Единица измерения метр и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <метр> ---> <миллиметр> //
double meters_TO_millimeters(double LENGTH) {
	LENGTH = LENGTH * 1000;  
	return LENGTH;
}

// <метр> ---> <сантиметр> //
double meters_TO_centimeters(double LENGTH) {
	LENGTH = LENGTH * 100;  
	return LENGTH;
}

// <метр> ---> <дециметр> //
double meters_TO_decimeters(double LENGTH) {
	LENGTH = LENGTH * 10;  
	return LENGTH;
}

// <метр> ---> <километр> //
double meters_TO_kilometers(double LENGTH) {
	LENGTH = LENGTH / 1000;  
	return LENGTH;
}

// <метр> ---> <сажень> //
double meters_TO_fathoms(double LENGTH) {
	LENGTH = LENGTH * 0.4686914135733;  
	return LENGTH;
}

// <метр> ---> <аршин> //
double meters_TO_arshins(double LENGTH) {
	LENGTH = LENGTH * 1.40607424072;  
	return LENGTH;
}

// <метр> ---> <миля> //
double meters_TO_miles(double LENGTH) {
	LENGTH = LENGTH * 0.0006213711922373;  
	return LENGTH;
}

// <метр> ---> <ярд> //
double meters_TO_yards(double LENGTH) {
	LENGTH = LENGTH * 1.093613298338;  
	return LENGTH;
}

// <метр> ---> <фут> //
double meters_TO_foots(double LENGTH) {
	LENGTH = LENGTH * 3.280839895013;  
	return LENGTH;
}

// <метр> ---> <микрометр> //
double meters_TO_micrometers(double LENGTH) {
	LENGTH = LENGTH * 1000000;  
	return LENGTH;
}

// <метр> ---> <нанометр> //
double meters_TO_nanometers(double LENGTH) {
	LENGTH = LENGTH * 1000000000;  
	return LENGTH;
}

// <метр> ---> <ангстрем> //
double meters_TO_angstroms(double LENGTH) {
	LENGTH = LENGTH * 10000000000;  
	return LENGTH;
}

// <метр> ---> <морская миля> //
double meters_TO_nauticalmiles(double LENGTH) {
	LENGTH = LENGTH / 1851.798302;  
	return LENGTH;
}
/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------Единица измерения сантиметр и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <сантиметр> ---> <метр> //
double centimeters_TO_meters(double LENGTH) {
	LENGTH = LENGTH / 100;  
	return LENGTH;
}

// <сантиметр> ---> <миллиметр> //
double centimeters_TO_millimeters(double LENGTH) {
	LENGTH = LENGTH * 10;  
	return LENGTH;
}

// <сантиметр> ---> <дециметр> //
double centimeters_TO_decimeters(double LENGTH) {
	LENGTH = LENGTH / 10;  
	return LENGTH;
}

// <сантиметр> ---> <километр> //
double centimeters_TO_kilometers(double LENGTH) {
	LENGTH = LENGTH / 100000;  
	return LENGTH;
}

// <сантиметр> ---> <сажень> //
double centimeters_TO_fathoms(double LENGTH) {
	LENGTH = LENGTH * 0.004686914135733;  
	return LENGTH;
}

// <сантиметр> ---> <аршин> //
double centimeters_TO_arshins(double LENGTH) {
	LENGTH = LENGTH * 0.0140607424072;  
	return LENGTH;
}

// <сантиметр> ---> <миля> //
double centimeters_TO_miles(double LENGTH) {
	LENGTH = LENGTH * 0.000006213711922373;  
	return LENGTH;
}

// <сантиметр> ---> <ярд> //
double centimeters_TO_yards(double LENGTH) {
	LENGTH = LENGTH * 0.01093613298338;  
	return LENGTH;
}

// <сантиметр> ---> <фут> //
double centimeters_TO_foots(double LENGTH) {
	LENGTH = LENGTH * 0.03280839895013;  
	return LENGTH;
}

// <сантиметр> ---> <микрометр> //
double centimeters_TO_micrometers(double LENGTH) {
	LENGTH = LENGTH * 10000;  
	return LENGTH;
}

// <сантиметр> ---> <нанометр> //
double centimeters_TO_nanometers(double LENGTH) {
	LENGTH = LENGTH * 10000000;  
	return LENGTH;
}

// <сантиметр> ---> <ангстрем> //
double centimeters_TO_angstroms(double LENGTH) {
	LENGTH = LENGTH * 100000000;  
	return LENGTH;
}

// <сантиметр> ---> <морская миля> //
double centimeters_TO_nauticalmiles(double LENGTH) {
	LENGTH = LENGTH * 0.000005395931899023;  
	return LENGTH;
}

/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------Единица измерения дециметр и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <дециметр> ---> <сантиметр> //
double decimeters_TO_centimeters(double LENGTH) {
	LENGTH = LENGTH * 10;  
	return LENGTH;
}

// <дециметр> ---> <метр> //
double decimeters_TO_meters(double LENGTH) {
	LENGTH = LENGTH / 10;  
	return LENGTH;
}

// <дециметр> ---> <миллиметр> //
double decimeters_TO_millimeters(double LENGTH) {
	LENGTH = LENGTH * 100;  
	return LENGTH;
}

// <дециметр> ---> <километр> //
double decimeters_TO_kilometers(double LENGTH) {
	LENGTH = LENGTH / 10000;  
	return LENGTH;
}

// <дециметр> ---> <сажень> //
double decimeters_TO_fathoms(double LENGTH) {
	LENGTH = LENGTH * 0.04686914135733;  
	return LENGTH;
}

// <дециметр> ---> <аршин> //
double decimeters_TO_arshins(double LENGTH) {
	LENGTH = LENGTH * 0.140607424072;  
	return LENGTH;
}

// <дециметр> ---> <миля> //
double decimeters_TO_miles(double LENGTH) {
	LENGTH = LENGTH * 0.00006213711922373;  
	return LENGTH;
}

// <дециметр> ---> <ярд> //
double decimeters_TO_yards(double LENGTH) {
	LENGTH = LENGTH * 0.1093613298338;  
	return LENGTH;
}

// <дециметр> ---> <фут> //
double decimeters_TO_foots(double LENGTH) {
	LENGTH = LENGTH * 0.3280839895013;  
	return LENGTH;
}

// <дециметр> ---> <микрометр> //
double decimeters_TO_micrometers(double LENGTH) {
	LENGTH = LENGTH * 100000;  
	return LENGTH;
}

// <дециметр> ---> <нанометр> //
double decimeters_TO_nanometers(double LENGTH) {
	LENGTH = LENGTH * 100000000;  
	return LENGTH;
}

// <дециметр> ---> <ангстрем> //
double decimeters_TO_angstroms(double LENGTH) {
	LENGTH = LENGTH * 1000000000;  
	return LENGTH;
}

// <дециметр> ---> <морская миля> //
double decimeters_TO_nauticalmiles(double LENGTH) {
	LENGTH = LENGTH * 0.00005399568034557;  
	return LENGTH;
}

/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------Единица измерения километр и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <километр> ---> <дециметр> //
double kilometers_TO_decimeters(double LENGTH) {
	LENGTH = LENGTH * 10000;  
	return LENGTH;
}

// <километр> ---> <сантиметр> //
double kilometers_TO_centimeters(double LENGTH) {
	LENGTH = LENGTH * 100000;  
	return LENGTH;
}

// <километр> ---> <метр> //
double kilometers_TO_meters(double LENGTH) {
	LENGTH = LENGTH * 1000;  
	return LENGTH;
}

// <километр> ---> <миллиметр> //
double kilometers_TO_millimeters(double LENGTH) {
	LENGTH = LENGTH * 1000000;  
	return LENGTH;
}

// <километр> ---> <сажень> //
double kilometers_TO_fathoms(double LENGTH) {
	LENGTH = LENGTH * 468.6914135733;  
	return LENGTH;
}

// <километр> ---> <аршин> //
double kilometers_TO_arshins(double LENGTH) {
	LENGTH = LENGTH * 1406.07424072;  
	return LENGTH;
}

// <километр> ---> <миля> //
double kilometers_TO_miles(double LENGTH) {
	LENGTH = LENGTH * 0.6213711922373;  
	return LENGTH;
}

// <километр> ---> <ярд> //
double kilometers_TO_yards(double LENGTH) {
	LENGTH = LENGTH * 1093.613298338;  
	return LENGTH;
}

// <километр> ---> <фут> //
double kilometers_TO_foots(double LENGTH) {
	LENGTH = LENGTH * 3280.839895013;  
	return LENGTH;
}

// <километр> ---> <микрометр> //
double kilometers_TO_micrometers(double LENGTH) {
	LENGTH = LENGTH * 1000000000;  
	return LENGTH;
}

// <километр> ---> <нанометр> //
double kilometers_TO_nanometers(double LENGTH) {
	LENGTH = LENGTH * 1000000000000;  
	return LENGTH;
}

// <километр> ---> <ангстрем> //
double kilometers_TO_angstroms(double LENGTH) {
	LENGTH = LENGTH * 1 * (pow(10, 13));  
	return LENGTH;
}

// <километр> ---> <морская миля> //
double kilometers_TO_nauticalmiles(double LENGTH) {
	LENGTH = LENGTH * 0.5399568034557;  
	return LENGTH;
}

/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------Единица измерения сажень и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <сажень> ---> <километр> //
double fathoms_TO_kilometers(double LENGTH) {
	LENGTH = LENGTH * 0.0021336;  
	return LENGTH;
}

// <сажень> ---> <дециметр> //
double fathoms_TO_decimeters(double LENGTH) {
	LENGTH = LENGTH * 21.336;  
	return LENGTH;
}

// <сажень> ---> <сантиметр> //
double fathoms_TO_centimeters(double LENGTH) {
	LENGTH = LENGTH * 213.36;  
	return LENGTH;
}

// <сажень> ---> <метр> //
double fathoms_TO_meters(double LENGTH) {
	LENGTH = LENGTH * 2.1336;  
	return LENGTH;
}

// <сажень> ---> <миллиметр> //
double fathoms_TO_millimeters(double LENGTH) {
	LENGTH = LENGTH * 2133.6;  
	return LENGTH;
}

// <сажень> ---> <аршин> //
double fathoms_TO_arshins(double LENGTH) {
	LENGTH = LENGTH * 3;  
	return LENGTH;
}

// <сажень> ---> <миля> //
double fathoms_TO_miles(double LENGTH) {
	LENGTH = LENGTH * 0.001325757575758;  
	return LENGTH;
}

// <сажень> ---> <ярд> //
double fathoms_TO_yards(double LENGTH) {
	LENGTH = LENGTH * 2.333333333333;  
	return LENGTH;
}

// <сажень> ---> <фут> //
double fathoms_TO_foots(double LENGTH) {
	LENGTH = LENGTH * 7;  
	return LENGTH;
}

// <сажень> ---> <микрометр> //
double fathoms_TO_micrometers(double LENGTH) {
	LENGTH = LENGTH * 2133600;  
	return LENGTH;
}

// <сажень> ---> <нанометр> //
double fathoms_TO_nanometers(double LENGTH) {
	LENGTH = LENGTH * 2133600000;  
	return LENGTH;
}

// <сажень> ---> <ангстрем> //
double fathoms_TO_angstroms(double LENGTH) {
	LENGTH = LENGTH * 21336000000;  
	return LENGTH;
}

// <сажень> ---> <морская миля> //
double fathoms_TO_nauticalmiles(double LENGTH) {
	LENGTH = LENGTH * 0.001152051835853;  
	return LENGTH;
}
/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------Единица измерения аршин и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <аршин> ---> <сажень> //
double arshins_TO_fathoms(double LENGTH) {
	LENGTH = LENGTH / 3;  
	return LENGTH;
}

// <аршин> ---> <километр> //
double arshins_TO_kilometers(double LENGTH) {
	LENGTH = LENGTH * 0.0007112;  
	return LENGTH;
}

// <аршин> ---> <дециметр> //
double arshins_TO_decimeters(double LENGTH) {
	LENGTH = LENGTH * 7.112;  
	return LENGTH;
}

// <аршин> ---> <сантиметр> //
double arshins_TO_centimeters(double LENGTH) {
	LENGTH = LENGTH * 71.12;  
	return LENGTH;
}

// <аршин> ---> <метр> //
double arshins_TO_meters(double LENGTH) {
	LENGTH = LENGTH * 0.7112;  
	return LENGTH;
}

// <аршин> ---> <миллиметр> //
double arshins_TO_millimeters(double LENGTH) {
	LENGTH = LENGTH * 711.2;  
	return LENGTH;
}

// <аршин> ---> <миля> //
double arshins_TO_miles(double LENGTH) {
	LENGTH = LENGTH * 0.0004419191919192;  
	return LENGTH;
}

// <аршин> ---> <ярд> //
double arshins_TO_yards(double LENGTH) {
	LENGTH = LENGTH * 0.7777777777778;  
	return LENGTH;
}

// <аршин> ---> <фут> //
double arshins_TO_foots(double LENGTH) {
	LENGTH = LENGTH * 2.333333333333;  
	return LENGTH;
}

// <аршин> ---> <микрометр> //
double arshins_TO_micrometers(double LENGTH) {
	LENGTH = LENGTH * 711200;  
	return LENGTH;
}

// <аршин> ---> <нанометр> //
double arshins_TO_nanometers(double LENGTH) {
	LENGTH = LENGTH * 711200000;  
	return LENGTH;
}

// <аршин> ---> <ангстрем> //
double arshins_TO_angstroms(double LENGTH) {
	LENGTH = LENGTH * 7112000000;  
	return LENGTH;
}

// <аршин> ---> <морская миля> //
double arshins_TO_nauticalmiles(double LENGTH) {
	LENGTH = LENGTH * 0.0003840172786177;  
	return LENGTH;
}
/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------Единица измерения миля и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <миля> ---> <аршин> //
double miles_TO_arshins(double LENGTH) {
	LENGTH = LENGTH * 2262.857142857;  
	return LENGTH;
}

// <миля> ---> <сажень> //
double miles_TO_fathoms(double LENGTH) {
	LENGTH = LENGTH * 754.2857142857;  
	return LENGTH;
}

// <миля> ---> <километр> //
double miles_TO_kilometers(double LENGTH) {
	LENGTH = LENGTH * 1.609344;  
	return LENGTH;
}

// <миля> ---> <дециметр> //
double miles_TO_decimeters(double LENGTH) {
	LENGTH = LENGTH * 16093.44;  
	return LENGTH;
}

// <миля> ---> <сантиметр> //
double miles_TO_centimeters(double LENGTH) {
	LENGTH = LENGTH * 160934.4;  
	return LENGTH;
}

// <миля> ---> <метр> //
double miles_TO_meters(double LENGTH) {
	LENGTH = LENGTH * 1609.344;  
	return LENGTH;
}

// <миля> ---> <миллиметр> //
double miles_TO_millimeters(double LENGTH) {
	LENGTH = LENGTH * 1609344;  
	return LENGTH;
}

// <миля> ---> <ярд> //
double miles_TO_yards(double LENGTH) {
	LENGTH = LENGTH * 1760;  
	return LENGTH;
}

// <миля> ---> <фут> //
double miles_TO_foots(double LENGTH) {
	LENGTH = LENGTH * 5280;  
	return LENGTH;
}

// <миля> ---> <микрометр> //
double miles_TO_micrometers(double LENGTH) {
	LENGTH = LENGTH * 1609344000;  
	return LENGTH;
}

// <миля> ---> <нанометр> //
double miles_TO_nanometers(double LENGTH) {
	LENGTH = LENGTH * 1.609344 * (pow(10, 12));   
	return LENGTH;
}

// <миля> ---> <ангстрем> //
double miles_TO_angstroms(double LENGTH) {
	LENGTH = LENGTH * 1.609344 * (pow(10, 13));   
	return LENGTH;
}

// <миля> ---> <морская миля> //
double miles_TO_nauticalmiles(double LENGTH) {
	LENGTH = LENGTH * 0.8689762419006;  
	return LENGTH;
}

/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------Единица измерения ярд и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <ярд> ---> <миля> //
double yards_TO_miles(double LENGTH) {
	LENGTH = LENGTH * 0.0005681818181818;  
	return LENGTH;
}

// <ярд> ---> <аршин> //
double yards_TO_arshins(double LENGTH) {
	LENGTH = LENGTH * 1.285714285714;  
	return LENGTH;
}

// <ярд> ---> <сажень> //
double yards_TO_fathoms(double LENGTH) {
	LENGTH = LENGTH * 0.4285714285714;  
	return LENGTH;
}

// <ярд> ---> <километр> //
double yards_TO_kilometers(double LENGTH) {
	LENGTH = LENGTH * 0.0009144;  
	return LENGTH;
}

// <ярд> ---> <дециметр> //
double yards_TO_decimeters(double LENGTH) {
	LENGTH = LENGTH * 9.144;  
	return LENGTH;
}

// <ярд> ---> <сантиметр> //
double yards_TO_centimeters(double LENGTH) {
	LENGTH = LENGTH * 91.44;  
	return LENGTH;
}

// <ярд> ---> <метр> //
double yards_TO_meters(double LENGTH) {
	LENGTH = LENGTH * 0.9144;  
	return LENGTH;
}

// <ярд> ---> <миллиметр> //
double yards_TO_millimeters(double LENGTH) {
	LENGTH = LENGTH * 914.4;  
	return LENGTH;
}

// <ярд> ---> <фут> //
double yards_TO_foots(double LENGTH) {
	LENGTH = LENGTH * 3;  
	return LENGTH;
}

// <ярд> ---> <микрометр> //
double yards_TO_micrometers(double LENGTH) {
	LENGTH = LENGTH * 914400;  
	return LENGTH;
}

// <ярд> ---> <нанометр> //
double yards_TO_nanometers(double LENGTH) {
	LENGTH = LENGTH * 914400000;  
	return LENGTH;
}

// <ярд> ---> <ангстрем> //
double yards_TO_angstroms(double LENGTH) {
	LENGTH = LENGTH * 9144000000;  
	return LENGTH;
}

// <ярд> ---> <морская миля> //
double yards_TO_nauticalmiles(double LENGTH) {
	LENGTH = LENGTH * 0.0001645788336933;  
	return LENGTH;
}

/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------Единица измерения фут и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <фут> ---> <ярд> //
double foots_TO_yards(double LENGTH) {
	LENGTH = LENGTH / 3;  
	return LENGTH;
}

// <фут> ---> <миля> //
double foots_TO_miles(double LENGTH) {
	LENGTH = LENGTH * 0.0001893939393939;  
	return LENGTH;
}

// <фут> ---> <аршин> //
double foots_TO_arshins(double LENGTH) {
	LENGTH = LENGTH * 0.4285714285713;  
	return LENGTH;
}

// <фут> ---> <сажень> //
double foots_TO_fathoms(double LENGTH) {
	LENGTH = LENGTH * 0.1428571428571;  
	return LENGTH;
}

// <фут> ---> <километр> //
double foots_TO_kilometers(double LENGTH) {
	LENGTH = LENGTH * 0.0003048;  
	return LENGTH;
}

// <фут> ---> <дециметр> //
double foots_TO_decimeters(double LENGTH) {
	LENGTH = LENGTH * 3.048;  
	return LENGTH;
}

// <фут> ---> <сантиметр> //
double foots_TO_centimeters(double LENGTH) {
	LENGTH = LENGTH * 30.48;  
	return LENGTH;
}

// <фут> ---> <метр> //
double foots_TO_meters(double LENGTH) {
	LENGTH = LENGTH * 0.3048;  
	return LENGTH;
}

// <фут> ---> <миллиметр> //
double foots_TO_millimeters(double LENGTH) {
	LENGTH = LENGTH * 304.8;  
	return LENGTH;
}

// <фут> ---> <микрометр> //
double foots_TO_micrometers(double LENGTH) {
	LENGTH = LENGTH * 304.8;  
	return LENGTH;
}

// <фут> ---> <нанометр> //
double foots_TO_nanometers(double LENGTH) {
	LENGTH = LENGTH * 304800000;  
	return LENGTH;
}

// <фут> ---> <ангстрем> //
double foots_TO_angstroms(double LENGTH) {
	LENGTH = LENGTH * 3048000000;  
	return LENGTH;
}

// <фут> ---> <морская миля> //
double foots_TO_nauticalmiles(double LENGTH) {
	LENGTH = LENGTH * 0.0001645788336933;  
	return LENGTH;
}

/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------Единица измерения микрометр и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <микрометр> ---> <фут> //
double micrometers_TO_foots(double LENGTH) {
	LENGTH = LENGTH * 0.000003280839895013;  
	return LENGTH;
}

// <микрометр> ---> <ярд> //
double micrometers_TO_yards(double LENGTH) {
	LENGTH = LENGTH * 0.000001093613298338;  
	return LENGTH;
}

// <микрометр> ---> <миля> //
double micrometers_TO_miles(double LENGTH) {
	LENGTH = LENGTH * 6.213711922373 * (pow(10, -10));  
	return LENGTH;
}

// <микрометр> ---> <аршин> //
double micrometers_TO_arshins(double LENGTH) {
	LENGTH = LENGTH * 0.00000140607424072;  
	return LENGTH;
}

// <микрометр> ---> <сажень> //
double micrometers_TO_fathoms(double LENGTH) {
	LENGTH = LENGTH * 4.686914135733 * (pow(10, -10));   
	return LENGTH;
}

// <микрометр> ---> <километр> //
double micrometers_TO_kilometers(double LENGTH) {
	LENGTH = LENGTH * 1 * (pow(10, -9));   
	return LENGTH;
}

// <микрометр> ---> <дециметр> //
double micrometers_TO_decimeters(double LENGTH) {
	LENGTH = LENGTH / 100000;  
	return LENGTH;
}

// <микрометр> ---> <сантиметр> //
double micrometers_TO_centimeters(double LENGTH) {
	LENGTH = LENGTH / 10000;  
	return LENGTH;
}

// <микрометр> ---> <метр> //
double micrometers_TO_meters(double LENGTH) {
	LENGTH = LENGTH / 1000000;  
	return LENGTH;
}

// <микрометр> ---> <миллиметр> //
double micrometers_TO_millimeters(double LENGTH) {
	LENGTH = LENGTH / 1000;  
	return LENGTH;
}

// <микрометр> ---> <нанометр> //
double micrometers_TO_nanometers(double LENGTH) {
	LENGTH = LENGTH * 1000;  
	return LENGTH;
}

// <микрометр> ---> <ангстрем> //
double micrometers_TO_angstroms(double LENGTH) {
	LENGTH = LENGTH * 39.37007874016;  
	return LENGTH;
}

// <микрометр> ---> <морская миля> //
double micrometers_TO_nauticalmiles(double LENGTH) {
	LENGTH = LENGTH * 5.399568034557 * (pow(10, -10));   
	return LENGTH;
}

/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------Единица измерения нанометр и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <нанометр> ---> <микрометр> //
double nanometers_TO_micrometers(double LENGTH) {
	LENGTH = LENGTH / 1000;  
	return LENGTH;
}

// <нанометр> ---> <фут> //
double nanometers_TO_foots(double LENGTH) {
	LENGTH = LENGTH * 3.280839895013 * (pow(10, -9));  
	return LENGTH;
}

// <нанометр> ---> <ярд> //
double nanometers_TO_yards(double LENGTH) {
	LENGTH = LENGTH * 1.093613298338 * (pow(10, -9));  
	return LENGTH;
}

// <нанометр> ---> <миля> //
double nanometers_TO_miles(double LENGTH) {
	LENGTH = LENGTH * 6.213711922373 * (pow(10, -13));  
	return LENGTH;
}

// <нанометр> ---> <аршин> //
double nanometers_TO_arshins(double LENGTH) {
	LENGTH = LENGTH * 1.40607424072 * (pow(10, -9));  
	return LENGTH;
}

// <нанометр> ---> <сажень> //
double nanometers_TO_fathoms(double LENGTH) {
	LENGTH = LENGTH * 4.686914135733 * (pow(10, -10));  
    return LENGTH;
}

// <нанометр> ---> <километр> //
double nanometers_TO_kilometers(double LENGTH) {
	LENGTH = LENGTH * 1 * (pow(10, -12)); 
	return LENGTH;
}

// <нанометр> ---> <дециметр> //
double nanometers_TO_decimeters(double LENGTH) {
	LENGTH = LENGTH * 1 * (pow(10, -8));  
	return LENGTH;
}

// <нанометр> ---> <сантиметр> //
double nanometers_TO_centimeters(double LENGTH) {
	LENGTH = LENGTH * 1 * (pow(10, -7)); 
	return LENGTH;
}

// <нанометр> ---> <метр> //
double nanometers_TO_meters(double LENGTH) {
	LENGTH = LENGTH * 1 * (pow(10, -9));  
	return LENGTH;
}

// <нанометр> ---> <миллиметр> //
double nanometers_TO_millimeters(double LENGTH) {
	LENGTH = LENGTH / 1000000;  
	return LENGTH;
}

// <нанометр> ---> <ангстрем> //
double nanometers_TO_angstroms(double LENGTH) {
	LENGTH = LENGTH * 10;  
	return LENGTH;
}

// <нанометр> ---> <морская миля> //
double nanometers_TO_nauticalmiles(double LENGTH) {
	LENGTH = LENGTH * 5.399568 * pow(10, -13); 
	return LENGTH;
}

/*-----------------------------------------------------------------------------------------------------------*/
/*------------------------Единица измерения ангстрем и её перевод в выше перечисленные единицы измерения------------------------*/

// <ангстрем> ---> <нанометр> //
double angstroms_TO_nanometers(double LENGTH) {
	LENGTH = LENGTH / 10;  
	return LENGTH;
}

// <ангстрем> ---> <микрометр> //
double angstroms_TO_micrometers(double LENGTH) {
	LENGTH = LENGTH / 10000;  
	return LENGTH;
}

// <ангстрем> ---> <фут> //
double angstroms_TO_foots(double LENGTH) {
	LENGTH = LENGTH * 3.280839895013 * pow(10, -10);   
	return LENGTH;
}

// <ангстрем> ---> <ярд> //
double angstroms_TO_yards(double LENGTH) {
	LENGTH = LENGTH * 1.093613298338 * pow(10, -10);   
	return LENGTH;
}

// <ангстрем> ---> <миля> //
double angstroms_TO_miles(double LENGTH) {
	LENGTH = LENGTH * 6.213711922373 * pow(10, -14);   
	return LENGTH;
}

// <ангстрем> ---> <аршин> //
double angstroms_TO_arshins(double LENGTH) {
	LENGTH = LENGTH * 1.40607424072 * pow(10, -10);  
	return LENGTH;
}

// <ангстрем> ---> <сажень> //
double angstroms_TO_fathoms(double LENGTH) {
	LENGTH = LENGTH * 4.686914135733 * pow(10, -11);
	return LENGTH;
}

// <ангстрем> ---> <километр> //
double angstroms_TO_kilometers(double LENGTH) {
	LENGTH = LENGTH * 1 * pow(10, -13);  
	return LENGTH;
}

// <ангстрем> ---> <дециметр> //
double angstroms_TO_decimeters(double LENGTH) {
	LENGTH = LENGTH * 1 * pow(10, -9);  
	return LENGTH;
}

// <ангстрем> ---> <сантиметр> //
double angstroms_TO_centimeters(double LENGTH) {
	LENGTH = LENGTH * 1 * pow(10, -8);  
	return LENGTH;
}

// <ангстрем> ---> <метр> //
double angstroms_TO_meters(double LENGTH) {
	LENGTH = LENGTH * 1 * pow(10, -10);   
	return LENGTH;
}

// <ангстрем> ---> <миллиметр> //
double angstroms_TO_millimeter(double LENGTH) {
	LENGTH = LENGTH * 1 * pow(10, -7);  
	return LENGTH;
}

// <ангстрем> ---> <морская миля> //
double angstroms_TO_nauticalmiles(double LENGTH) {
	LENGTH = LENGTH * 5.399568034557 * pow(10, -14);   
	return LENGTH;
}

/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------Единица измерения морская миля и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <морская миля> ---> <ангстрем> //
double nauticalmiles_TO_angstroms(double LENGTH) {
	LENGTH = LENGTH * 1.852 * pow(10, 13);
	return LENGTH;
}

// <морская миля> ---> <нанометр> //
double nauticalmiles_TO_nanometers(double LENGTH) {
	LENGTH = LENGTH * 1.852 * pow(10, 12); 
	return LENGTH;
}

// <морская миля> ---> <нмикрометр> //
double nauticalmiles_TO_micrometers(double LENGTH) {
	LENGTH = LENGTH * 1852000000;  
	return LENGTH;
}

// <морская миля> ---> <фут> //
double nauticalmiles_TO_foots(double LENGTH) {
	LENGTH = LENGTH * 6076.115485564;  
	return LENGTH;
}

// <морская миля> ---> <ярд> //
double nauticalmiles_TO_yards(double LENGTH) {
	LENGTH = LENGTH * 2025.371828521;  
	return LENGTH;
}

// <морская миля> ---> <миля> //
double nauticalmiles_TO_miles(double LENGTH) {
	LENGTH = LENGTH * 1.150779448024;  
	return LENGTH;
}

// <морская миля> ---> <аршин> //
double nauticalmiles_TO_arshins(double LENGTH) {
	LENGTH = LENGTH * 2604.049493813;  
	return LENGTH;
}

// <морская миля> ---> <сажень> //
double nauticalmiles_TO_fathoms(double LENGTH) {
	LENGTH = LENGTH * 868.0164979378;  
	return LENGTH;
}

// <морская миля> ---> <километр> //
double nauticalmiles_TO_kilometers(double LENGTH) {
	LENGTH = LENGTH * 1.852;  
	return LENGTH;
}

// <морская миля> ---> <дециметр> //
double nauticalmiles_TO_decimeters(double LENGTH) {
	LENGTH = LENGTH * 18520;  
	return LENGTH;
}

// <морская миля> ---> <сантиметр> //
double nauticalmiles_TO_centimeters(double LENGTH) {
	LENGTH = LENGTH * 185200;  
	return LENGTH;
}

// <морская миля> ---> <метр> //
double nauticalmiles_TO_meters(double LENGTH) {
	LENGTH = LENGTH * 1852;  
	return LENGTH;
}

// <морская миля> ---> <миллиметр> //
double nauticalmiles_TO_millimeters(double LENGTH) {
	LENGTH = LENGTH * 1852000;  
	return LENGTH;
}

/*-----------------------------------------------------------------------------------------------------------*/
