#include <iostream>
#include <string>
using namespace std;
bool isvalidcard(string cardnumber){
  int sum=0;
  bool doubledigit=false;
  for(int i=cardnumber.length()-1 ;i>=0 ; i--){
    int digit=cardnumber[i]-'0';
    if (doubledigit){
      digit *=2;
      if (digit >9){
        digit-=9;
      }
    }
    sum+=digit;
    doubledigit=!doubledigit;
  }
  return (sum%10==0);
}
int main() {
    string card = "4539148803436467";
    if (isvalidcard(card)) {
        cout << "Valid card number";
    } else {
        cout << "Invalid card number";
    }
    return 0;
}