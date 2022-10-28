include <iostream>
//adding the switch case
using namespace std;

class Grocery {
private:
    int choice;
    float tax;
    int bill;
    int quantity;
public:


    void showdata() {
        cout << "1.CHOCLATE" << endl;
        cout << "2.CHIPS" << endl;
        cout << "3.CAKES" << endl;
        cout << "4.ICE CREAM" << endl;
        cout << "5.COFFEE" << endl;
    }

    void getdata() {

        cout << "ENTER YOUR CHOICE" << endl;
        cin >> choice;

        if (choice == 1) {
            cout << "PRICE OF CHOCLATE IS 10" << endl;
            cout << "ENTER QUANTITY = ";
            cin >> quantity;
            bill = quantity * 10;
            cout << "BILL = " << bill;
        }
        if (choice == 2) {
            cout << "PRICE OF CHIPS IS 20" << endl;
            cout << "ENTER QUANTITY = ";
            cin >> quantity;
            bill = quantity * 20;
            cout << "BILL = " << bill;
        }
        if (choice == 3) {
            cout << "PRICE OF CAKE IS 50" << endl;
            cout << "ENTER QUANTITY = ";
            cin >> quantity;
            bill = quantity * 50;
            cout << "BILL = " << bill;
        }
        if (choice == 4) {
            cout << "PRICE OF ICE CREAM IS 60" << endl;
            cout << "ENTER QUANTITY = ";
            cin >> quantity;
            bill = quantity * 60;
            cout << "BILL = " << bill;
        }
        if (choice == 5) {
            cout << "PRICE OF COFFEE IS 400" << endl;
            cout << "ENTER QUANTITY = ";
            cin >> quantity;
            bill = quantity * 400;
            cout << "BILL = " << bill;
        }

    }


};

class Electronics {
private:
    int choice;
    float tax;
    int bill;
    int quantity;
public:


    void showdata() {
        cout << "1.TELEVISION" << endl;
        cout << "2.REFRIGRATOR" << endl;
        cout << "3.LAPTOP" << endl;
        cout << "4.CAMERA" << endl;
        cout << "5.PHONE" << endl;
    }

    void getdata() {

        cout << "ENTER YOUR CHOICE" << endl;
        cin >> choice;

        if (choice == 1) {
            cout << "PRICE OF TELEVISION IS 49999" << endl;
            cout << "ENTER QUANTITY = ";
            cin >> quantity;
            bill = quantity * 49999;
            cout << "BILL = " << bill;
        }
        if (choice == 2) {
            cout << "PRICE OF REFRIGRATOR IS 39999" << endl;
            cout << "ENTER QUANTITY = ";
            cin >> quantity;
            bill = quantity * 39999;
            cout << "BILL = " << bill;
        }
        if (choice == 3) {
            cout << "PRICE OF LAPTOP IS 57999" << endl;
            cout << "ENTER QUANTITY = ";
            cin >> quantity;
            bill = quantity * 57999;
            cout << "BILL = " << bill;
        }
        if (choice == 4) {
            cout << "PRICE OF CAMERA IS 32999" << endl;
            cout << "ENTER QUANTITY = ";
            cin >> quantity;
            bill = quantity * 32999;
            cout << "BILL = " << bill;
        }
        if (choice == 5) {
            cout << "PRICE OF PHONE IS 79999" << endl;
            cout << "ENTER QUANTITY = ";
            cin >> quantity;
            bill = quantity * 79999;
            cout << "BILL = " << bill;
        }

    }


};

class Medicines {
private:
    int choice;
    float tax;
    int bill;
    int quantity;
public:


    void showdata() {
        cout << "1.PARACIP" << endl;
        cout << "2.CROCIN" << endl;
        cout << "3.MEDLER" << endl;
        cout << "4.VICKS" << endl;
        cout << "5.BETADINE" << endl;
    }

    void getdata() {

        cout << "ENTER YOUR CHOICE" << endl;
        cin >> choice;

        if (choice == 1) {
            cout << "PRICE OF PARACIP IS 19" << endl;
            cout << "ENTER QUANTITY = ";
            cin >> quantity;
            bill = quantity * 19;
            cout << "BILL = " << bill;
        }
        if (choice == 2) {
            cout << "PRICE OF CROCIN IS 16" << endl;
            cout << "ENTER QUANTITY = ";
            cin >> quantity;
            bill = quantity * 16;
            cout << "BILL = " << bill;
        }
        if (choice == 3) {
            cout << "PRICE OF MEDLER IS 23" << endl;
            cout << "ENTER QUANTITY = ";
            cin >> quantity;
            bill = quantity * 23;
            cout << "BILL = " << bill;
        }
        if (choice == 4) {
            cout << "PRICE OF VICKS IS 10" << endl;
            cout << "ENTER QUANTITY = ";
            cin >> quantity;
            bill = quantity * 10;
            cout << "BILL = " << bill;
        }
        if (choice == 5) {
            cout << "PRICE OF BETADINE IS 79" << endl;
            cout << "ENTER QUANTITY = ";
            cin >> quantity;
            bill = quantity * 79;
            cout << "BILL = " << bill;
        }

    }


};

int main() {
    int choose;
    cout << "WELCOME TO OUR STORE\n\n\n";
    cout << "WHAT YOU WANT TO BUY?\nCHOOSE:";
    cout << endl << endl << "1. GROCERY" << endl;
    cout << "2. ELECTRONICS" << endl;
    cout << "3. MEDICINES" << endl << endl;
    cin >> choose;
    if (choose == 1) {
        Grocery a;
        a.showdata();
        a.getdata();
    }
    if (choose == 2) {
        Electronics b;
        b.showdata();
        b.getdata();
    }
    if (choose == 3) {
        Medicines c;
        cshowdata();
        c.getdata();
    }
}
/*this is only for a commit for today*/
