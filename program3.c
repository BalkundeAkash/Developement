/////////////////////////////////////////////////////////////////////
//
//  Function Name:      Factors
//  Description :       Used to perform Factors of 2 numbers
//  Input :             Integer, Integer
//  Output :            Integer
//  Date :              14/04/2022
//  Author :            Akash Dilip Balkunde
//
/////////////////////////////////////////////////////////////////////

// Input :      10
// Output :    8

// Input :      9
// Output :     4

#include<stdio.h>

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo /2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
              iSum =  iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = SumFactors(iValue);
    printf("Sum of factors : %d\n",iRet);
    return 0;
}