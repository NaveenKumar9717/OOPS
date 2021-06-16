#include<bits/stdc++.h>
using namespace std ;

class Battry {
public :
  int mah ;
  string BattryCompany ;
public :
  void displayBattry() {
    cout << "Battery in your Device is of  : " << BattryCompany << endl << " Power of your battery : " << mah * 587 << "mah" << endl;

  }
};

class Processor {
public :
  string model  ;
  string ProcessorCompny ;
public :
  void displayProcessor() {
    cout << "Processor in your Device is of  : " << ProcessorCompny << endl << " Model of processor : " << model << endl;

  }
};


class Samsung : public Battry, public Processor {
public :
  int samid ;
  void displaySamsung() {
    cout << "Thanks for buying Smasung Mobile please verify you sam id  : " << samid << endl;
    displayBattry() ;
    displayProcessor() ;


  }

};


int main() {


  Samsung m1 ;

  m1.samid = 501 ;
  m1.model = "SD888" ;
  m1.BattryCompany = "Nokia" ;
  m1.mah = 50 ;
  m1.ProcessorCompny = "Snapdragon" ;
  m1.displaySamsung();
  return  0 ;
}


