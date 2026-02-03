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
void shuffle(int &a, int &b, int &c, int &d){
    int temp[] = {a, b, c, d}; // เก็บค่าลง array ชั่วคราว
    for(int i = 0; i < 4; i++){
        int r = rand() % 4;    // สุ่มตำแหน่ง 0-3
        // สลับค่า (Swap)
        int t = temp[i];
        temp[i] = temp[r];
        temp[r] = t;
    }
    // คืนค่ากลับไปที่ตัวแปรอ้างอิง
    a = temp[0];
    b = temp[1];
    c = temp[2];
    d = temp[3];
}
