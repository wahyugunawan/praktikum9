#include <iostream>

using namespace std;

int main (){
int matrik1[2][3];
int matrik2[3][1];
int matrik3[2][2];
int temp;


for (int x = 0;x<2;x++){
for (int y =0;y<3;y++){
cout <<"masukan nilai matrik A baris ke-"<<(x+1)<<" kolom ke-"<<(y+1)<<" : ";
cin>>matrik1[x][y];
}
}
cout<<endl;

cout<<"Nilai Matrik A :"<<endl;
for (int x = 0;x<2;x++){
for (int y =0;y<3;y++){
cout <<matrik1[x][y]<<"   ";
}
cout<<endl;
}
cout<<endl;

for (int x = 0;x<3;x++){
for (int y =0;y<1;y++){
cout <<"masukan nilai matrik B baris ke-"<<(x+1)<<" kolom ke-"<<(y+1)<<" : ";
cin>>matrik2[x][y];
}
}
cout<<endl;

cout<<"Nilai Matrik B :"<<endl;
for (int x = 0;x<3;x++){
for (int y =0;y<1;y++){
cout <<matrik2[x][y]<<"   ";
}
cout<<endl;
}

for (int x = 0;x<3;x++){
for (int y =0;y<1;y++){
matrik3[x][y]=0;
for (int z =0;z<3;z++){
temp=matrik1[x][z]*matrik2[z][y];
matrik3[x][y]=matrik3[x][y]+temp;
}
}
}

cout<<endl;
cout<<"Hasil perkalian matrik AxB ="<<endl;
for (int x = 0;x<2;x++){
for (int y =0;y<1;y++){
cout <<matrik3[x][y]<<"   ";
}
cout<<endl;
}
    return 0;
}
