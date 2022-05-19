#include<cstring>
#include"payment.h"
#include"customer.h"
class Bill{

private:
Customer* customer;
Payment* payment;
int BillNo;
double BillAmount;
char BillType[20];

public:
Bill();
Bill(int b_No,double b_Amount,char b_type[],Payment* pay, Customer* cus);
void setBillDetails(int B_No, double B_Amount, char B_Type[],Payment* paymnt, Customer* cusmer);
void displayBillDetails();
~Bill();
};