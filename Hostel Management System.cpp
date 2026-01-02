#include<iostream>
#include<fstream> // without fstream file handling, we can't read any file
#include<string>


using namespace std;
struct studentData {
int ID;
string name ;
string address;
string fatherName;
int phoneNumber;
} // their should be a terminator after the braces of the struct without a terminator, it will cause an error

struct studentData {
    int ID;
    string name;
    string address;
    string fathersName;
    int phonenumber ;

};
struct RoomData {
    int roomNum ;
    int roomtype ; // roomtype and occupency status must be in string data type
    int OccupencyStatus ;
    tring roomtype ; 
    string OccupencyStatus ; 

};
struct AllotmentFile {
    int studentID;
    int roomNo;

};

int main(){
     studentData s ;
    RoomData r ;
    AllotmentFile a ;

    ofstream file ("allotment.txt",ios::app);
    if(!file)
    cout << "  Error: NO SUCH FILE FOUND " << endl ;



    // Here, the student will  enter their ID 
  cout << " Enter Student ID = " ; 
  cin >> ID ;

  if ( r. OccupancyStatus < r.roomtype ){
  r.OccupencyStatus ++ ; 
  a.studentID = s.ID; // in alloted student ID, student id will be displayed 
  a.roomNo = r.roomNum ;
 file << a.studentID << " " << a.roomNo << endl;

        cout << "Room allotted successfully!" << endl;
    }
    else {
        cout << "Room is already full!" << endl;
    }

    file.close(); // it's compulory to close the file after creating and reading 
    ifstream readfile (" allotment.txt ") ;
     
    cout << " ...Alloted Students Detail ..." ; 
 {
     while ( readfile << id << roomno ) // it will cause errors in program
    while ( readfile >> ID >> roomNo )
     
    cout << " Studnent ID" << ID << endl ;
    cout << " Room Alloted to Student " << roomNo << endl ;
}
  readfile.close ();
    return 0;
}







