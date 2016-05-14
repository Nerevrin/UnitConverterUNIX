#include <stdio.h>
#include <math.h>

// DONE;
// ��������������� �������� ������� �� ������� � ������� � ��������, �� �������� ���������������� �� ����� � � ���;
double adjacentValuesUpward(double DATA)
{
    DATA = DATA/1024;
    return DATA;
}
double adjacentValuesToDecrease(double DATA)
{
    DATA = DATA*1024;
    return DATA;
}
//---------------------------------------------------------------------------------------------------------------//
// ��������������� ������� ����� 1 �� ������� � ������� � ��������, �� �������� ���������������� �� ����� � � ���;
double valuesBetweenOneUpward(double DATA)
{
    DATA = DATA/(pow(1024, 2));
    return DATA;
}
double valuesBetweenOneToDecrease(double DATA)
{
    DATA = DATA*(pow(1024, 2));
    return DATA;
}
//---------------------------------------------------------------------------------------------------------------//
// ��������������� ������� ����� 2 �� ������� � ������� � ��������, �� �������� ���������������� �� ����� � � ���;
double valuesBetweenTwoUpward(double DATA)
{
    DATA = DATA/(pow(1024, 3));
    return DATA;
}
double valuesBetweenTwoToDecrease(double DATA)
{
    DATA = DATA*(pow(1024, 3));
    return DATA;
}
//---------------------------------------------------------------------------------------------------------------//
// ��������������� ������� ����� 3 �� ������� � ������� � ��������, �� �������� ���������������� �� ����� � � ���;
double valuesBetweenThreeUpward(double DATA)
{
    DATA = DATA/(pow(1024, 4));
    return DATA;
}
double valuesBetweenThreeToDecrease(double DATA)
{
    DATA = DATA*(pow(1024, 4));
    return DATA;
}
//---------------------------------------------------------------------------------------------------------------//
// ��������������� ������� ����� 4 �� ������� � ������� � ��������, �� �������� ���������������� �� ����� � � ���;
double valuesBetweenFourUpward(double DATA)
{
    DATA = DATA/(pow(1024, 5));
    return DATA;
}
double valuesBetweenFourToDecrease(double DATA)
{
    DATA = DATA*(pow(1024, 5));
    return DATA;
}
//---------------------------------------------------------------------------------------------------------------//
// ��������������� ������� ����� 5 �� ������� � ������� � ��������, �� �������� ���������������� �� ����� � � ���;
double valuesBetweenFiveUpward(double DATA)
{
    DATA = DATA/(pow(1024, 6));
    return DATA;
}
double valuesBetweenFiveToDecrease(double DATA)
{
    DATA = DATA*(pow(1024, 6));
    return DATA;
}
//---------------------------------------------------------------------------------------------------------------//
// ��������������� ������� ����� 6 �� ������� � ������� � ��������, �� �������� ���������������� �� ����� � � ���;
double valuesBetweenSixUpward(double DATA)
{
    DATA = DATA/(pow(1024, 7));
    return DATA;
}
double valuesBetweenSixToDecrease(double DATA)
{
    DATA = DATA*(pow(1024, 7));
    return DATA;
}
//--------------------------------------------------------------//
// ����������� �������: ��������������� �� ����� � ����� � �������;
double bitsTobytes(double DATA)
{
    DATA = DATA/8;
    return DATA;
}
double bytesTobits(double DATA)
{
    DATA = DATA*8;
    return DATA;
}
//-------------------------------------------------------------------//
// ����������� �������: ��������������� �� ����� � ��������� � �������;
double bitsTokilobytes(double DATA)
{
    DATA = DATA/(1024*8);
    return DATA;
}
double kilobytesTobits(double DATA)
{
    DATA = DATA*(1024*8);
    return DATA;
}
//-------------------------------------------------------------------//
// ����������� �������: ��������������� �� ����� � ��������� � �������;
double bitsTomegabytes(double DATA)
{
    DATA = DATA/(pow(1024, 2)*8);
    return DATA;
}
double megabytesTobits(double DATA)
{
    DATA = DATA*(pow(1024, 2)*8);
    return DATA;
}
//-------------------------------------------------------------------//
// ����������� �������: ��������������� �� ����� � ��������� � �������;
double bitsTogigabytes(double DATA)
{
    DATA = DATA/(pow(1024, 3)*8);
    return DATA;
}
double gigabytesTobits(double DATA)
{
    DATA = DATA*(pow(1024, 3)*8);
    return DATA;
}
//-------------------------------------------------------------------//
// ����������� �������: ��������������� �� ����� � ��������� � �������;
double bitsToterabytes(double DATA)
{
    DATA = DATA/(pow(1024, 4)*8);
    return DATA;
}
double terabytesTobits(double DATA)
{
    DATA = DATA*(pow(1024, 4)*8);
    return DATA;
}
//-------------------------------------------------------------------//
// ����������� �������: ��������������� �� ����� � ��������� � �������;
double bitsTopetabytes(double DATA)
{
    DATA = DATA/(pow(1024, 5)*8);
    return DATA;
}
double petabytesTobits(double DATA)
{
    DATA = DATA*(pow(1024, 5)*8);
    return DATA;
}
//-------------------------------------------------------------------//
// ����������� �������: ��������������� �� ����� � ��������� � �������;
double bitsToexabytes(double DATA)
{
    DATA = DATA/(pow(1024, 6)*8);
    return DATA;
}
double exabytesTobits(double DATA)
{
    DATA = DATA*(pow(1024, 6)*8);
    return DATA;
}
//-------------------------------------------------------------------//
// ����������� �������: ��������������� �� ����� � ��������� � �������;
double bitsTozetabytes(double DATA)
{
    DATA = DATA/(pow(1024, 7)*8);
    return DATA;
}
double zetabytesTobits(double DATA)
{
    DATA = DATA*(pow(1024, 7)*8);
    return DATA;
}
//-------------------------------------------------------------------//
