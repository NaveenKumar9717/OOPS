#include<bits/stdc++.h>
using namespace std ;

class Mobile {
  int Price ;
  string Name ;
public :
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


int main() {


  Samsung b1 ;
  b1.samid = 501 ;
  b1.displaySamsung();
  return  0 ;
}
