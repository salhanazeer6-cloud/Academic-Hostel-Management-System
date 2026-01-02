
#include <iostream>
#include <fstream>
#include <string>
using namespace std; 

//we use structure because we have different types of variable

struct Student     //here i use structure because i have different types of data types and to store differenet variables in one variable
{
    int id,phonenumber;
    string name,fathername,address;
};

int main()
{

    int i=20; //number of students
    
    //here we use array for details of all students

    Student arr[i];

    ofstream file;
    file.open("students.txt");

    //Headings of the columns that will written in file
    cout<<"HOSTEL MANAGEMENT SYSTEM";

    cout<<"Enter details of all students: "<<i+1<<endl;
    
    for(i=0;i<20;i++)
    {
    cout<<"Enter Student id: "<<endl;
    cin>>arr[i].id;

    
    cout<<"Enter Student name: "<<endl;
    cin>>arr[i].name;

    
    cout<<"Enter Student Father's name: "<<endl;
    cin>>arr[i].fathername;

   
    cout<<"Enter Student Phone no.: "<<endl;
    cin>>arr[i].phonenumber;

     
    cout<<"Enter Student Address: "<<endl;
    cin>>arr[i].address;

    //now for writing data into the file
    // file<<"-----------------------"<<endl;
    
    
    file<<"Student "<<i+1<<endl;

    file<<"ID: "<<arr[i].id<<endl;

    file<<"Name: "<<arr[i].name<<endl;

    file<<"Father's name: "<<arr[i].fathername<<endl;

    file<<"Address: "<<arr[i].address<<endl;

    file<< "Phone no.: " <<arr[i].phonenumber<<endl;

    file<<"--------------------------"<<endl;
    }

    file.close();


    return 0;


}
     
    





