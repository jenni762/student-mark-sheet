#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
 //declares arrays for 5 students and 3 subject
    char name[5][20];
     int mark[5][3];
    int total[5]={0};
     double average[5];
    //input students name
     for(int i=0;i<5;i++){
     cout<<"enter name of students"<<i+1<<":";
       cin. getline(name[i],20);
 }
    //input marks for each student
    for(int i=0;i<5;i++){
        cout<<"enter mark for"<<name[i]<<":\n";
        for(int j=0;j<3;j++){
            cout<<"enter mark"<<j+1<<":";
            cin>>mark[i][j];
        }
    cin.ignore(1000,'\n');
      }
//calculate total and average for each students 
    for(int i=0;i<5;i++){
         total[i]=0;
    for(int j=0;j<3;j++){
        total[i]+=mark[i][j];
    }
    average[i]= total[i]/3.0;
    cout<<"total:"<<total[i]<<endl;
    cout<<"Average:"<<average[i]<<endl;
}
{
    //display the student mark sheet 
    cout<<"\n \n=======student mark sheet=======\n\n"<<endl;
    cout<<left
    <<setw(20)<<"name"
    <<setw(10)<<"M1"
    <<setw(10)<<"M2"
    <<setw(10)<<"M3"
    <<setw(10)<<"total"
    <<setw(10)<<"Average"<<endl;
}
    //display each student's results
for(int i=0;i<5;i++){
    cout<<left
  <<setw(20)<<name[i]
  <<setw(10)<<mark[i][0]
  <<setw(10)<<mark[i][1]
  <<setw(10)<<mark[i][2]
  <<setw(10)<<total[i]
  <<setw(10)<<average[i]<<endl;
}
//find the student with the highest score 
int top=0;
for(int i=1;i<5;i++){
if(total[i]>total[top]){
top=i;
}
}
//display the top student's information
cout<<"\n========top student========\n";
cout<<"top student:"<<name[top]<<endl;
cout<<"Highest total:"<<total[top]<<endl;
return 0;
}
