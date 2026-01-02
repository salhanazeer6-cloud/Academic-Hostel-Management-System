Also uses file handling header files
#include <iostream>
#include <fstream> //to read in file
#include <string>
using namespace std; 

//we use structure because we have different types of variable

struct Student     
{
    int id,phone number;//this is not correct 
    int id,phonenumber;//this is correct to write variables
    string name,fathername,address;
};

int main()
{
    int i=20; //no. of students
     
    
    //here we use array for details of all students
    
    Student arr[i];
    //We use here Student which is user defined data type which we declared earlier

    ofstream file; //to write in the file
    file.open("students.txt"); //for opening the txt file

    //Headings of the columns that will written in file
    cout<<"HOSTEL MANAGEMENT SYSTEM";

    cout<<"Enter details of all students: "<<i+1<<endl;
    
    for(i=0;i<20;i++) //we  use for loop throughout the whole data and data will print according to array size.
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
    // file<<"-----------------------"<<endl; //use this just for te partition of a single student
    
    //use "file" to print data into the file just like we use "cout"
    file<<"Student "<<i+1<<endl;

    file<<"ID: "<<i.id<<endl;
    file<<"ID: "<<arr[i].id<<endl;

    file<<"Name: "<<arr[i].name<<endl;

    file<<"Father's name: "<<arr[i].fathername<<endl;

    file<<"Address: "<<arr[i].address<<endl;

    file<< "Phone no.: " <<arr[i].phonenumber<<endl;

    file<<"--------------------------"<<endl;
    }

    file.close(); //file closing 


    return 0;


}
     
    










