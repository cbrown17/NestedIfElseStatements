#include <iostream>
#include <iomanip>

using namespace std;



int main() {

int code; 
cout << "Enter Code: " << endl;
cin >> code;
  if(code == 10)
  {
    cout << "Too hot - turn equipment off." << endl;
  }
  else
  {
    if(code == 11)
    {
      cout << "Caution - recheck in 5 mins." << endl;
    }
    else
    {
      if(code == 13)
      {
        cout << "Turn on circulating fan." << endl;
      }
      else
      {
        cout << "Normal mode of operation." << endl;
      }
    }
  }
}