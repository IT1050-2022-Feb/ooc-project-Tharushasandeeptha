#include <iostream>
#include "Services.h"
#include <cstring>
using namespace std;

Services::Services()
{
  strcpy(serviceName, "");
}

Services:: Services(char sname[])
{
  strcpy (serviceName, sname);
}

void Services:: setServiceDetails(char S_Name[])
{
  strcpy(serviceName, S_Name);
}

void Services:: addServices(Customer* c)
{
  
}

void Services:: displayServiceDetails()
{
  cout << "Service Name : " << serviceName;
}

Services::~Services()
{
  cout << "Service deleted"<<endl;
}