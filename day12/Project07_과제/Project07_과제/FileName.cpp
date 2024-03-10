#include <iostream>
#include <string>
using namespace std;

// Parent class
class Product {
protected:
    string id;
    int price;
    string producer;

public:
    Product(string aid, int aprice, string aproducer)
        : id(aid), price(aprice), producer(aproducer) {}

    virtual void ShowInfo() const {
        cout << "ID: " << id << ", Price: " << price << ", Producer: " << producer << endl;
    }

    virtual ~Product() {}
};

// Child classes
class Book : public Product {
private:
    string ISBN;
    string author;
    string title;

public:
    Book(string aid, int aprice, string aproducer, string aISBN, string aauthor, string atitle)
        : Product(aid, aprice, aproducer), ISBN(aISBN), author(aauthor), title(atitle) {}

    void ShowInfo() const override {
        Product::ShowInfo();
        cout << "ISBN: " << ISBN << ", Author: " << author << ", Title: " << title << endl;
    }
};

class Handphone : public Product {
private:
    string model;
    int RAM;

public:
    Handphone(string aid, int aprice, string aproducer, string amodel, int aRAM)
        : Product(aid, aprice, aproducer), model(amodel), RAM(aRAM) {}

    void ShowInfo() const override {
        Product::ShowInfo();
        cout << "Model: " << model << ", RAM: " << RAM << "GB" << endl;
    }
};

class Computer : public Product {
private:
    string model;
    int cpu;
    int RAM;

public:
    Computer(string aid, int aprice, string aproducer, string amodel, int acpu, int aRAM)
        : Product(aid, aprice, aproducer), model(amodel), cpu(acpu), RAM(aRAM) {}

    void ShowInfo() const override {
        Product::ShowInfo();
        cout << "Model: " << model << ", CPU: " << cpu << ", RAM: " << RAM << "GB" << endl;
    }
};

int main() {
    const int MAX_PRODUCTS = 100;
    Product* products[MAX_PRODUCTS];
    int productCount = 0;

    int choice;
    while (1) {
        cout << "-----------------상품관리 프로그램-----------------" << endl;
        cout << "1. 상품추가 / 2. 상품출력 / 3. 상품검색 / 0. 종료" << endl;
        cout << "번호 입력 >> ";
        cin >> choice;
        cout << endl;

        if (choice == 0) {
            cout << "프로그램을 종료합니다." << endl;
            break;
        }

        switch (choice) {
        case 1: {
            int productType;
            cout << "1. 책 / 2. 핸드폰 / 3. 컴퓨터" << endl;
            cout << "상품 종류 선택 >> ";
            cin >> productType;
            cout << endl;

            string id, producer;
            int price;

            cout << "ID 입력 >> ";
            cin >> id;
            cout << "가격 입력 >> ";
            cin >> price;
            cout << "제조사 입력 >> ";
            cin >> producer;

            if (productType == 1) {
                string ISBN, author, title;
                cout << "고유번호 입력 >> ";
                cin >> ISBN;
                cout << "저자 입력 >> ";
                cin >> author;
                cout << "제목 입력 >> ";
                cin >> title;

                products[productCount++] = new Book(id, price, producer, ISBN, author, title);
            }
            else if (productType == 2) {
                string model;
                int RAM;
                cout << "모델명 입력 >> ";
                cin >> model;
                cout << "램크기 입력(GB) >> ";
                cin >> RAM;

                products[productCount++] = new Handphone(id, price, producer, model, RAM);
            }
            else if (productType == 3) {
                string model;
                int cpu, RAM;
                cout << "모델명 입력 >> ";
                cin >> model;
                cout << "CPU 크기 입력 >> ";
                cin >> cpu;
                cout << "램크기 입력(GB) >> ";
                cin >> RAM;

                products[productCount++] = new Computer(id, price, producer, model, cpu, RAM);
            }
            else {
                cout << "잘못된 입력입니다." << endl;
            }

            break;
        }

        case 2:
            cout << "상품출력 >>" << endl;
            for (int i = 0; i < productCount; ++i) {
                products[i]->ShowInfo();
                cout << endl;
            }
            break;

        case 3:
            cout << "상품검색 >>" << endl;
            // 검색 로직 추가
            string keyword;
            cout << "검색어 입력 >> ";
            cin >> keyword;
            cout << "책 검색 결과 >>" << endl;
            for (int i = 0; i < productCount; ++i) {
                if (products[i]->MatchSearch(keyword)) {
                    products[i]->ShowInfo();
                    cout << endl;
                }
            }

            break;

        default:
            cout << "잘못된 입력입니다." << endl;
            break;
        }
    }

    // 메모리 해제
    for (int i = 0; i < productCount; ++i) {
        delete products[i];
    }

    return 0;
}