#include <iostream>

using namespace std;

int main () {
int a = 0;
int i;
int sum = 0, max = 0, min = 0;


cout << "Banyaknya element yang akan diinput :";
cin >> a;
cout <<endl;

int data[a];


for(i=0; i<a; i++) {
cout << "Input element ke ";
cout << i+1;
cout << " : ";
cin >> data[i];
}

cout << "\n Tampilan Array :";
cout << "\n data yang anda masukan adalah :";
max = min = data[0];
for(i=0; i<a; i++) {
cout << data[i] << ',';

if (max < data[i]) {
max = data[i];
}
if (min > data[i]) {
min = data[i];
}
}

cout <<endl;
cout << "\n Nilai terkecil : " << min;
cout << "\n Nilai terbesar : " << max;

return 0;
}
