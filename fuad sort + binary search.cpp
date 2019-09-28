// rumus binary search  : binary_search(startaddress, endaddress, valuetofind)
// rumus sort : sort(startaddress,endaddress)

#include <algorithm> 
#include <iostream> 
#include <stdio.h>
using namespace std; 

//fungsi untuk menampilkan
 void tampilkan(int ruangdata[], int arraysize) 
{ 
   for (int i = 0; i < arraysize; ++i) 
       cout << ruangdata[i] << " "; 
} 
int main() 
{ 
    int datainput;
    int ruangdata[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 }; 
    int ruangdatasize = sizeof(ruangdata) / sizeof(ruangdata[0]); 
    cout << "Baris data nya : "; 
    tampilkan(ruangdata, ruangdatasize); 
    sort(ruangdata, ruangdata + ruangdatasize); 
    cout << "\n data setelah sorting: "; 
    tampilkan(ruangdata, ruangdatasize); 
    
    cout << "\ncari apa: "; 
    cin >> datainput;
    if (binary_search(ruangdata, ruangdata + 10, datainput)) 
        cout << "\nyang anda cari ada, yaitu:  " << datainput; 
    else
        cout << "\nyang anda cari tidak ada"; 
  
    return 0; 
} 