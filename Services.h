#include "customer.h"

class Services {
  protected:
    char serviceName[20];

  public:
    Services ();
    Services(char sname[]);
    void setServiceDetails(char S_Name[]);
    void addServices(Customer* c);
    void displayServiceDetails();
    ~Services();
};