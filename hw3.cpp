#include <iostream>
using namespace std;

int main()
{
    string startGame = "yes";
    string start;

    string input;//if user write a "yes" game is begin

    string row;//user select a row
    int matchsticks; //and enter how many matchsticks you want to pick
    

    while (true)
    {
        cout << "Do you want to start? :  ";
        cin >> start;
        cout << endl;

        if (start == startGame)
        {
            cout << "Good luck!!! " << endl;
            cout << endl;
            
            int row1 = 1;//1 matchsticks in 1.row
            int row2 = 3;//3 matchsticks in 2.row
            int row3 = 5;//5 matchsticks in 3.row
            int row4 = 7;//7 matchsticks in 4.row
            int m = row1 + row2 + row3 + row4;//number of total matchsticks
            m >= 0;//ıt has to bigger than 0 

            int user;
            int computer;
            //user choose game mode
            cout << "Please, choose a mode:" << endl;
            cout << "1.Against computer " << endl;
            cout << "2.Multiplayer " << endl;
            cin >> input;



            if (input == "1")
            {
                cout << "You chose to play against the computer" << endl;
                //ıt shows the game board
                cout << "1.Row:       |" << endl;
                cout << "2.Row:     | | |" << endl;
                cout << "3.Row:   | | | | |" << endl;
                cout << "4.Row: | | | | | | |" << endl;
                // cout << "Please choose a row:"<<endl;
            }
            else if (input == "2")//ıf user choose 2,game is finish
            {
                cout << "You chose to play against to friend... Other player is waiting" << endl;
                cout << "Player didn't come...PLEASE CHOOSE ANOTHER GAME MODE... " << endl;
                break;
            }

            while (m >= 1)//The game continues as long as the number of matchsticks is greater than 1
            {
                cout << "Please choose a row:";
                cout << endl;
                cout << "   1.Row  2.Row  3.Row  4.Row" << endl;
               //user select a row
                cin >> row;
                cout << endl;
                //and user, decide a how many matchsticks to pick
                cout << "How many matchsticks do you want to pick? ";
                cin >> matchsticks;

                if (row == "1") //user select a 1.row
                {
                    row1 = row1 - matchsticks;
                    cout << "Number of matchsticks in 1.Row: " << row1 << endl;

                    m = m - matchsticks;
                    cout << "Total number of matchsticks: " << m << endl;
                }
                else if (row == "2")//user select a 2.row
                {
                    if (matchsticks <= 3 && matchsticks > 0)
                    {
                        row2 = row2 - matchsticks;
                        cout << "Number of matchsticks in 2.Row: " << row2 << endl;

                        m = m - matchsticks;
                        if (m < 0)
                        {
                            m = 0;
                        }
                        cout << "Total number of matchsticks: " << m << endl;
                    }
                    else
                    {
                        cout << "Invalid value..." << endl;
                        continue;
                    }
                }
                else if (row == "3")//user select a 3.row
                {
                    row3 = row3 - matchsticks;
                    cout << "Number of matchsticks in 3.Row: " << row3 << endl;

                    m = m - matchsticks;
                    cout << "Total number of matchsticks: " << m << endl;
                }
                else if (row == "4")//user select a 4.row
                {
                    row4 = row4 - matchsticks;
                    cout << "Number of matchsticks in 4.Row: " << row4 << endl;

                    m = m - matchsticks;
                    cout << "Total number of matchsticks: " << m << endl;
                }
//**********************************************************************************************************************
                //Computer turn
                if (m >= 0)//if matchsticks is bigger than 0, game is continue
                {
                    int mp; //computer's matchsticks (pick)

                    cout << "Computer turn... ";
                    int rowp = (rand() % 4) + 1;// rowp(row pc) range 1 to 4

                    
                    cout << "Computer choosing a " << rowp << ".Row" << endl;

                    if (rowp == 1)
                    {

                        mp = (rand() % (2 - matchsticks) + 1); // m range 0 to 1
                        row1 = row1 -mp;

                        cout << "Computer picked: " << mp << " matchsticks in 1.Row" << endl; 

                        cout << "Number of matchsticks in 1.Row: " << row1 << endl;

                        
                        if (m < 0)//matchsticks cannot be less than 0 
                        {
                            m = 0;
                        }
                        m = m - matchsticks; 
                        m = m- computer;
                        
                        cout << "Total number of matchsticks: " << 16 -mp- matchsticks << endl;

                        continue;

                        
                    }
                    else if (rowp == 2)
                    {
                       
                            mp = (rand() % (3 - matchsticks) + 1); // mp range 1 to 3

                            row2 = row2 -mp;

                            cout << "Computer picked: " << mp << " matchsticks in 2.Row" << endl; 

                            cout << "Number of matchsticks in 2.Row: " << row2 << endl;

                           
                            if (m < 0)//matchsticks cannot be less than 0 
                            {
                                m = 0;
                            }
                            m = m - matchsticks;
                           m = m- computer;
                           
                            cout << "Total number of matchsticks: " << 16-mp- matchsticks << endl;
                            //continue;

                      
                    }
                    else if (rowp == 3)
                    {
                        mp = (rand() % (6 - matchsticks) + 1); // mp range 1 to 5
                        

                        row3 = row3 -mp;

                        cout << "Computer picked: " << mp << " matchsticks in 3.Row" << endl;

                        cout << "Number of matchsticks in 3.Row: " << row3 << endl;


                        
                       if (m < 0)//matchsticks cannot be less than 0 
                        { m = m-matchsticks- computer;
                            m = 0;
                        }
                        
                     
                       
                        cout << "Total number of matchsticks: " << 16-mp - matchsticks << endl;
                        continue;

                        
                    }
                    else if (rowp == 4)
                    {

                        mp = (rand() % (8 - matchsticks) + 1); // mp range 1 to 7

                        row4 = row4 -mp;

                        cout << "Computer picked: " << mp << " matchsticks in 4.Row" << endl; 

                        cout << "Number of matchsticks in 4.Row: " << row4 << endl;

                       
                        if (m < 0)//matchsticks cannot be less than 0 
                        {
                            m = 0;
                        }
                         m = m - matchsticks; 
                       m = m- computer;
                       
                        cout << "Total number of matchsticks: " << 16-mp-matchsticks << endl;
                        continue;

                        
                    }
                }

                
                //break;
            }
            if (m == 0)//if matchsticks is finish,the game will finish
                {
                    cout << "Computer is win..." << endl;
                    
                }

                cout << "Computer win the game!" << endl;
                cout << "...COMPUTER ALWAYS WIN..." << endl;

            
        }
    
        else//if user write except "yes",it will turn
        {
            cout << "Have a nice day..." << endl;
            cout<<endl;
        }

    }//while true

}//main


