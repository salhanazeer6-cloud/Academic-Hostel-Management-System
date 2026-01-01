#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("rooms.txt", ios::app);
    int i=0;
    int roomnum[21];
    string roomtype , occupancystatus;
    int roomprice ;

    cout<<"********************"<< endl;
    cout<<"Enter rooms detail:" << endl;
    cout<<"********************"<< endl;
    
    // Room number
    for(i=1; i<=21;  i++)
    {
      cout<<" Enter Room Number: "  <<endl;
      cin>> roomnum[i];
      
      cout<<"Enter Room Type: "<<endl;
      cin>> roomtype;

      cout<<"Enter Occupancy Status: "<<endl;
      cin>> occupancystatus;

      cout<<"Enter Room Price: "<<endl;
      cin>> roomprice;

      file << roomnum[i] << " " << roomtype << " " << occupancystatus << " " << roomprice << endl;
    }

     file.close();
    cout << "\nRooms data successfully saved in file!\n" << endl;

    ifstream readfile("rooms.txt");

    cout<<" Room details "<<endl;

    while (readfile >> roomnum[i] >> roomtype >> occupancystatus >> roomprice)
   {
    cout<<"Room Number " <<roomnum[i] <<endl;
    cout<<"Room Type " <<roomtype <<endl;
    cout<<"Occupancy Status " <<occupancystatus <<endl;
    cout<<"Room Price " <<roomprice <<endl;
    
   }

    readfile.close();
    system("pause");
    
    return 0;
  }



    
    
    
