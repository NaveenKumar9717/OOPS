#include<bits/stdc++.h>
using namespace std ;

class Mobile {
public :
  int Price ;
  string Name ;

  void displayMobile() {
    cout << "Welcome to Mobile Name is : " << Name << " Price of your device : " << Price << endl;


  }
};

class Samsung : public Mobile {
public :
  int samid ;
  void displaySamsung() {
    displayMobile() ;
    cout << "THnaks for buying Smasung Mobile please verify you sam id  : " << samid << endl;

  }

};

class SamsungS5 : public Samsung {
public :
  string size = "6 inches" ;
  void displaySamsungS5() {
    displaySamsung() ;
    cout << "Belive of Smassiung with S5  : " << size << endl;
  }



};

int main() {


  SamsungS5 dev1 ;
  dev1.samid = 503 ;
  dev1.Name = "Samd=sung S5 2019 Edition" ;
  dev1.Price = 500 ;

  dev1.displaySamsungS5();
  return  0 ;
}
