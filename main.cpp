#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int whattheywant();
void displayitems(int x);
int main()
{
    int wanted;
    wanted = whattheywant();
    while(wanted!=4){
        switch(wanted){
        case 1:
            displayitems(1);
            break;
        case 2:
            displayitems(2);
            break;
        case 3:
            displayitems(3);
            break;
        }
        wanted = whattheywant();
    }
    cout << "Bye~~" << endl;
    return 0;
}

// whattheywant function
int whattheywant(){
    int choice;

    cout << "\n1 - just plain items" << endl;
    cout << "2 - helpful items" << endl;
    cout << "3 - harmful items" << endl;
    cout << "4 - quit program\n" << endl;
    cin >> choice;
    return choice;

}

//displayitems function
void displayitems(int x){
    ifstream objFile("players.txt");
    string name;
    int power;
    if (x==1){
        while(objFile >> name >> power){
            if(power==0){
                cout << name << ' ' << power <<endl;
            }
        }

    }
    if (x==2){
        while(objFile >> name >> power){
            if(power>0){
                cout << name << ' ' << power <<endl;
            }
        }

    }
    if (x==3){
        while(objFile >> name >> power){
            if(power<0){
                cout << name << ' ' << power <<endl;
            }
        }

    }

}
