#include <iostream>
using namespace std;


class game{

public:

string arr[3][3] = {{"1","2","3"},{"4","5","6"},{"7","8","9"}};
int p1choose;
int p2choose;
string p1c;
string p2c;
int p1row , p2row;
int p1col , p2col;
int count = 0;



  void details(){
                    cout<<"\u274E__________ Tic Tac Toe Game __________\u2B55"<<endl<<endl;

                    //choose x or 0
                    cout<<endl<<"Choose : 1.\u274E"<<endl;
                    cout<<"         2.\u2B55"<<endl;
                    cout<<"Type in number = ";
                    cin>>p1choose;

                    if(p1choose == 1){
                        cout<<"selected (\u274E)"<<endl<<endl;
                        p1c = "\u274E";
                        p2choose = 2;
                        p2c = "\u2B55";    
                    }
                    else if(p1choose == 2){
                        cout<<"selected (\u2B55)"<<endl<<endl;
                        p1c = "\u2B55";
                        p2choose = 1;
                        p2c = "\u274E"; 

                    }
                    else{
                        cout<<"\u2605\u2605\u2605 invalid input! Please enter a valid number: \u2605\u2605\u2605"<<endl<<endl;
                        exit(0);
                    }
                    //choose x or 0

  }

  void board(){
                // game box
                        for (int i = 0; i < 3; i++)
                        {    
                            for (int j = 0; j < 3; j++)
                            { 
                                cout<<arr[i][j]<<"   ";
                            }
                            cout<<endl<<endl;
                        }
                // game box

            for (int i = 1; i <= 5; i++)
            {

                //player 1   
                    cout<<"Player 1 Enter row = ";
                    cin>>p1row;
                    cout<<"Player 1 Enter col = ";
                    cin>>p1col;
                    cout<<endl; 

                    //check for overwrite & putting things in array
                        if (arr[p1row][p1col] != "\u274E" && arr[p1row][p1col] != "\u2B55") {
                            arr[p1row][p1col] = p1c;
                        } else {
                            cout << "-------- Cell already taken! Try again --------" << endl;
                            return;  
                        }
                    //check for overwrite & putting things in array
                    

                    for (int i = 0; i < 3; i++)
                    {    
                        for (int j = 0; j < 3; j++)
                        { 
                            cout<<arr[i][j]<<"   ";
                        }
                        cout<<endl<<endl;
                    }

                    // check winning condition
                    WinCondition();
                    // check winning condition


            //to exit after complete & draw
                    count ++;

                    if (count == 5)
                    {
                    cout << "--------- It's a Draw! Game Over ---------" << endl;    
                    exit(0);
                    }
            //to exit after complete  & draw 
            


                    //player 2
                    cout<<"Player 2 Enter row = ";
                    cin>>p2row;
                    cout<<"Player 2 Enter col = ";
                    cin>>p2col;
                    cout<<endl; 

                    //check for overwrite & putting things in array
                        if (arr[p2row][p2col] != "\u274E" && arr[p2row][p2col] != "\u2B55") {
                            arr[p2row][p2col] = p2c;
                        } else {
                            cout << "-------- Cell already taken! Try again --------" << endl;
                            return;  
                        }
                    //check for overwrite & putting things in array
                    

                    
                    for (int i = 0; i < 3; i++)
                    {    
                        for (int j = 0; j < 3; j++)
                        { 
                            cout<<arr[i][j]<<"   ";
                        }
                        cout<<endl<<endl;
                    }

                     // check winning condition
                     WinCondition();
                     // check winning condition



                
            }

                
            
     }

     void WinCondition(){
         if(arr[0][0] == p1c && arr[1][0] == p1c && arr[2][0] == p1c ||             
            arr[0][1] == p1c && arr[1][1] == p1c && arr[2][1] == p1c ||
            arr[0][2] == p1c && arr[1][2] == p1c && arr[2][2] == p1c ||

            arr[0][0] == p1c && arr[0][1] == p1c && arr[0][2] == p1c ||
            arr[1][0] == p1c && arr[1][1] == p1c && arr[1][2] == p1c ||
            arr[2][0] == p1c && arr[2][1] == p1c && arr[2][2] == p1c ||

            arr[0][0] == p1c && arr[1][1] == p1c && arr[2][2] == p1c ||
            arr[0][2] == p1c && arr[1][1] == p1c && arr[2][0] == p1c 
        ){

                cout<<p1c<<" --------- Player 1 Wins! --------- "<<p1c<<endl<<endl;
                exit(0);

         }
         if(arr[0][0] == p2c && arr[1][0] == p2c && arr[2][0] == p2c ||
            arr[0][1] == p2c && arr[1][1] == p2c && arr[2][1] == p2c ||
            arr[0][2] == p2c && arr[1][2] == p2c && arr[2][2] == p2c ||
        
            arr[0][0] == p2c && arr[0][1] == p2c && arr[0][2] == p2c ||
            arr[1][0] == p2c && arr[1][1] == p2c && arr[1][2] == p2c ||
            arr[2][0] == p2c && arr[2][1] == p2c && arr[2][2] == p2c ||

            arr[0][0] == p2c && arr[1][1] == p2c && arr[2][2] == p2c ||
            arr[0][2] == p2c && arr[1][1] == p2c && arr[2][0] == p2c 
        ){

                cout<<p2c<<" --------- Player 2 Wins! --------- "<<p2c<<endl<<endl;
                exit(0);

         }
     }

};

int main() {
game obj1;
obj1.details();
obj1.board();


}