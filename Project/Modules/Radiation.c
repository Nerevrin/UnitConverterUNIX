#include <stdio.h>
// DONE;
// ��������������� �������� ������� � ������� ����������;
double adjacentValuesUpward(double RESISTANCE)
{
    RESISTANCE = RESISTANCE/1000;
    return RESISTANCE;
}
// ----------------------------------------------------- //
// ��������������� �������� ������� � ������� ����������;
double adjacentValuesToDecrease(double RESISTANCE)
{
    RESISTANCE = RESISTANCE*1000;
    return RESISTANCE;
}
// ----------------------------------------------------- //
// ��������������� ������� ����� ���� � ������� ����������;
double valuesBetweenOneUpward(double RESISTANCE)
{
    RESISTANCE = RESISTANCE/(pow(1000, 2));
    return RESISTANCE;
}
// ----------------------------------------------------- //
// ��������������� ������� ����� ���� � ������� ����������;
double valuesBetweenOneToDecrease(double RESISTANCE)
{
    RESISTANCE = RESISTANCE*(pow(1000, 2));
    return RESISTANCE;
}
// ----------------------------------------------------- //
// ��������������� ������� ����� ��� � ������� ����������;
double valuesBetweenTwoUpward(double RESISTANCE)
{
    RESISTANCE = RESISTANCE/(pow(1000, 3));
    return RESISTANCE;
}
// ----------------------------------------------------- //
// ��������������� ������� ����� ��� � ������� ����������;
double valuesBetweenTwoToDecrease(double RESISTANCE)
{
    RESISTANCE = RESISTANCE*(pow(1000, 3));
    return RESISTANCE;
}
// ----------------------------------------------------- //
// ��������������� �� ���������� � ����; //
double ciTobq(double RESISTANCE)
{
    RESISTANCE = RESISTANCE*37000000000;
    return RESISTANCE;
}
