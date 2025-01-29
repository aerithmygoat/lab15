#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify source code above this line
void shuffle(int &a, int &b, int &c, int &d) {
    int num[] = {a, b, c, d}; 
    
    for (int i = 0; i < 4; i++) {
        int random = rand() % 4; 
         int temp = num[i];
         num[i] = num[random];
         num[random] = temp;
    }
	
    a = num[0];
    b = num[1];
    c = num[2];
    d = num[3];
}
