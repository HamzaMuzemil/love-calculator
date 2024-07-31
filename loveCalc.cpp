
#include <iostream>
using namespace std;
int main() {
    srand(time(0));
    string name1;
    string name2;
    int random = (rand()%100)+1;
    string res; 
    cout<<"male name: ";
    cin>> name1;
    cout <<"female name: ";
    cin>> name2;
   
    
    
    if ((random <= 100) && (random >= 90)) {
       res  = "perfect match";
    } 
    else if ((random< 90) && (random >= 80) ) {
        res  ="likely match";
    }else if ( (random < 80) && (random >= 70)) {
        res  ="nearly match";
    }else if ((random < 70) && (random >= 60)) {
       res  ="least match";
    }else if (( random < 60) && (random >= 50)) {
       res  ="likely unmatch";
    }else if ( (random< 50) && (random >= 40)) {
       res  ="most likely unmatch";
    }else if ( (random < 40)  && (random>= 30)) {
        res  ="match";
    }
    else if ((random < 30) && (random >= 20)) {
       res  ="un related";
    }
    else if ( (random < 20) && (random >= 0)) {
        res  ="no match ";
    }
    else {
         res ="can't be calculated";
    }
    cout << "match outcome: "<< random<<endl<< res;
      
            

    

    return 0;
}
