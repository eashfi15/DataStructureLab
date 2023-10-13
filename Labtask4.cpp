#include<iostream>
using namespace std;

struct Student{
    int ID,Semester,Credits;
    float CGPA;
};
int main()
{
Student St[10];
cout<<"The details of Student 1: "<<endl;
cout<<"ID:"<<endl;
cin>>St[1].ID;
cout<<"No. of semester: "<<endl;
cin>>St[1].Semester;
cout<<"No.of Credits: "<<endl;
cin>>St[1].Credits;
cout<<"Student's CGPA: "<<endl;
cin>>St[1].CGPA;



//Student St2;
cout<<"The details of Student 2: "<<endl;
cout<<"ID:"<<endl;
cin>>St[2].ID;
cout<<"No. of semester: "<<endl;
cin>>St[2].Semester;
cout<<"No.of Credits: "<<endl;
cin>>St[2].Credits;
cout<<"Student's CGPA: "<<endl;
cin>>St[2].CGPA;



//Student St3;
cout<<"The details of Student 3: "<<endl;
cout<<"ID:"<<endl;
cin>>St[3].ID;
cout<<"No. of semester: "<<endl;
cin>>St[3].Semester;
cout<<"No.of Credits: "<<endl;
cin>>St[3].Credits;
cout<<"Student's CGPA: "<<endl;
cin>>St[3].CGPA;


//Student St[4];
cout<<"The details of Student 4: "<<endl;
cout<<"ID:"<<endl;
cin>>St[4].ID;
cout<<"No. of semester: "<<endl;
cin>>St[4].Semester;
cout<<"No.of Credits: "<<endl;
cin>>St[4].Credits;
cout<<"Student's CGPA: "<<endl;
cin>>St[4].CGPA;




//Student St[5;
cout<<"The details of Student 5: "<<endl;
cout<<"ID:"<<endl;
cin>>St[5].ID;
cout<<"No. of semester: "<<endl;
cin>>St[5].Semester;
cout<<"No.of Credits: "<<endl;
cin>>St[5].Credits;
cout<<"Student's CGPA: "<<endl;
cin>>St[5].CGPA;




//Student St6;
cout<<"The details of Student 6: "<<endl;
cout<<"ID:"<<endl;
cin>>St[6].ID;
cout<<"No. of semester: "<<endl;
cin>>St[6].Semester;
cout<<"No.of Credits: "<<endl;
cin>>St[6].Credits;
cout<<"Student's CGPA: "<<endl;
cin>>St[6].CGPA;



//Student St7;
cout<<"The details of Student 7: "<<endl;
cout<<"ID:"<<endl;
cin>>St[7].ID;
cout<<"No. of semester: "<<endl;
cin>>St[7].Semester;
cout<<"No.of Credits: "<<endl;
cin>>St[7].Credits;
cout<<"Student's CGPA: "<<endl;
cin>>St[7].CGPA;



//Student St8;
cout<<"The details of Student 8: "<<endl;
cout<<"ID:"<<endl;
cin>>St[8].ID;
cout<<"No. of semester: "<<endl;
cin>>St[8].Semester;
cout<<"No.of Credits: "<<endl;
cin>>St[8].Credits;
cout<<"Student's CGPA: "<<endl;
cin>>St[8].CGPA;



//Student St9;
cout<<"The details of Student 9: "<<endl;
cout<<"ID:"<<endl;
cin>>St[9].ID;
cout<<"No. of semester: "<<endl;
cin>>St[9].Semester;
cout<<"No.of Credits: "<<endl;
cin>>St[9].Credits;
cout<<"Student's CGPA: "<<endl;
cin>>St[9].CGPA;


//Student St10;
cout<<"The details of Student 10: "<<endl;
cout<<"ID:"<<endl;
cin>>St[10].ID;
cout<<"No. of semester: "<<endl;
cin>>St[10].Semester;
cout<<"No.of Credits: "<<endl;
cin>>St[10].Credits;
cout<<"Student's CGPA: "<<endl;
cin>>St[10].CGPA;

for(int i=0;i<=10;i++)
{if(St[i].CGPA>=3.75)
{
    cout<<"Scholarship Students: "<<St[i].ID<<endl;

}}
for(int i=0;i<=10;i++){
if (St[i].Credits>50)
{
    cout<<"Students who have completed more than 50 credits:"<<St[i].ID<<endl;
}}
for(int i=0;i<=10;i++){
    if (St[i].Semester>=2&&St[i].Credits>28)
{
    cout<<"Students who have completed 2 semester: "<<St[i].ID<<endl;
}
}


}

