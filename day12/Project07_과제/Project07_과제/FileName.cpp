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
        cout << "-----------------��ǰ���� ���α׷�-----------------" << endl;
        cout << "1. ��ǰ�߰� / 2. ��ǰ��� / 3. ��ǰ�˻� / 0. ����" << endl;
        cout << "��ȣ �Է� >> ";
        cin >> choice;
        cout << endl;

        if (choice == 0) {
            cout << "���α׷��� �����մϴ�." << endl;
            break;
        }

        switch (choice) {
        case 1: {
            int productType;
            cout << "1. å / 2. �ڵ��� / 3. ��ǻ��" << endl;
            cout << "��ǰ ���� ���� >> ";
            cin >> productType;
            cout << endl;

            string id, producer;
            int price;

            cout << "ID �Է� >> ";
            cin >> id;
            cout << "���� �Է� >> ";
            cin >> price;
            cout << "������ �Է� >> ";
            cin >> producer;

            if (productType == 1) {
                string ISBN, author, title;
                cout << "������ȣ �Է� >> ";
                cin >> ISBN;
                cout << "���� �Է� >> ";
                cin >> author;
                cout << "���� �Է� >> ";
                cin >> title;

                products[productCount++] = new Book(id, price, producer, ISBN, author, title);
            }
            else if (productType == 2) {
                string model;
                int RAM;
                cout << "�𵨸� �Է� >> ";
                cin >> model;
                cout << "��ũ�� �Է�(GB) >> ";
                cin >> RAM;

                products[productCount++] = new Handphone(id, price, producer, model, RAM);
            }
            else if (productType == 3) {
                string model;
                int cpu, RAM;
                cout << "�𵨸� �Է� >> ";
                cin >> model;
                cout << "CPU ũ�� �Է� >> ";
                cin >> cpu;
                cout << "��ũ�� �Է�(GB) >> ";
                cin >> RAM;

                products[productCount++] = new Computer(id, price, producer, model, cpu, RAM);
            }
            else {
                cout << "�߸��� �Է��Դϴ�." << endl;
            }

            break;
        }

        case 2:
            cout << "��ǰ��� >>" << endl;
            for (int i = 0; i < productCount; ++i) {
                products[i]->ShowInfo();
                cout << endl;
            }
            break;

        case 3:
            cout << "��ǰ�˻� >>" << endl;
            // �˻� ���� �߰�
            string keyword;
            cout << "�˻��� �Է� >> ";
            cin >> keyword;
            cout << "å �˻� ��� >>" << endl;
            for (int i = 0; i < productCount; ++i) {
                if (products[i]->MatchSearch(keyword)) {
                    products[i]->ShowInfo();
                    cout << endl;
                }
            }

            break;

        default:
            cout << "�߸��� �Է��Դϴ�." << endl;
            break;
        }
    }

    // �޸� ����
    for (int i = 0; i < productCount; ++i) {
        delete products[i];
    }

    return 0;
}