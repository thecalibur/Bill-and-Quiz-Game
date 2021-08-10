#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

void play();
void loopPlay();

int main() {
    srand(time(NULL));
    //play();
    loopPlay(); // Vì hàm loopPlay có bao gồm hàm play() đã làm ở dưới nên không cần gọi lại hàm play() nữa
    return 0;
}

void play() {
    int somay = 1 + rand()%100; // Nếu không +1 thì nó chỉ chạy từ 0->99, +1 thì chạy từ 1->100
    int solandoan = 0;
    int songuoi;
    do {
        cout << "May da co so tu 1->100. So cua ban la: ";
        cin >> songuoi;
        solandoan++;
        cout << "Ban doan lan thu " << solandoan << endl;
        if (songuoi == somay) {
            cout << "YOU WIN!" <<endl;
            cout << "so may = " << somay << endl;
            break;

        }

        if (songuoi < somay) {
            cout << "So ban doan < so may." << endl;
        }

        else {
            cout << "So ban doan > so may." << endl;
        }
        if (solandoan == 7) {
            cout << "GAME OVER!" << endl;
            break;
        }
    } while(true);
}

void loopPlay() {
    while (true) {
        play();
        cout << "continue? (y/n): ";
        char y;
        if (y == 'n') {
            cout << "THANK YOU AND GOODBYE!";
            break;
        }
        {
            /* code */
        }
        
    }
}
