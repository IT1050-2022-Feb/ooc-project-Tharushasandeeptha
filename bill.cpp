#include <iostream>
#include <cstring>
#include"bill.h"
using namespace std;

Bill::Bill()
{
BillNo = 0;
BillAmount = 0;
strcpy(BillType, "");
}
Bill::Bill(int b_No,double b_Amount,char b_type[] ,Payment* pay, Customer* cus)
{
  BillNo=b_No;
  BillAmount=b_Amount;
  strcpy(BillType,b_type);
  payment=pay;
  customer=cus;
}
void Bill::setBillDetails(int B_No, double B_Amount, char B_Type[], Payment* paymnt, Customer* cusmer)
{
BillNo = B_No;
BillAmount = B_Amount;
strcpy(BillType,B_Type);
payment=paymnt;
customer=cusmer;
}
void Bill::displayBillDetails()
{
  cout<<"billnumber:"<<BillNo<<endl;
  cout<<"billamont:"<<BillAmount<<endl;
  cout<<"billtype:"<<BillType<<endl;
}
 Bill::~Bill(){
  cout<<"delete billdetails:"<<endl;
}