#include <iostream> 
#include <string>
using namespace std;

string findChar(int age,int height,int bounty){
    string character;
    if (age > 60){
        return character = "Brook";
    }else if (bounty <= 500000000){
        return character = "Franky";
    }else{
        return character = "Jinbe";
    }
    if (age <= 25){
        if (height <= 100){
            return character = "Chopper";
        }else if(height > 100 && height <= 180){
            return character = "Usopp";
        }else if(bounty <= 1100000000){
            return character = "Sanji";
        }else{
            return character = "Zoro";
        }
    }
}
    


int main(){
    int age, height, bounty;
    string character;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your height: ";
    cin >> height;
    cout << "Enter your bounty: ";
    cin >> bounty;

    string findChar(int age,int height,int bounty);
    
    cout << "Your character = " << findChar(age,height,bounty);
    return 0;

}


/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
