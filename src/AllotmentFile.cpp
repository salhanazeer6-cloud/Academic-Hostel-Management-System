#include<iostream>
#include<fstream>
#include<string>


using namespace std;

struct studentData {
    int ID;
    string name;
    string address;
    string fathersName;
    int phonenumber ;

};
struct RoomData {
    int roomNum ;
    int roomtype ;
    int Occupencystatus ;
     

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
    cout << "  Error : NO SUCH FILE FOUND " << endl ;



    // Here student will  their enter id 
  cout << " Enter Student ID = " ;
  cin >> ID ;

  if ( r.Occupencystatus < r.roomtype ){
  r.Occupencystatus ++ ;
  a.studentID = s.ID ;
  a.roomNo = r.roomNum ;
 file << a.studentID << " " << a.roomNo << endl;

        cout << "Room allotted successfully!" << endl;
    }
    else {
        cout << "Room is already full!" << endl;
    }

    file.close();
    ifstream readfile (" allotment.txt ") ;
     
    cout << " ...Alloted Students Detail ..." ; 
 {
    while ( readfile >> ID >> roomNo )
     
    cout << " Studnent ID" << ID << endl ;
    cout << " Room Alloted to Student " << roomNo << endl ;
}
  readfile.close ();
    return 0;
}

