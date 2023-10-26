#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* insert(Node* head, int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = head;
    return newNode;
}

void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data;
        if (current->next != nullptr) {
            std::cout << " -> ";
        }
        current = current->next;
    }
    std::cout << std::endl;
}

Node* reverseList(Node* head) { // ÖNEMLİİİİİİİİİİİİİİİİİİİİİİİİİ
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

Node* moveOddsToFront(Node* head) {
    Node* oddList = nullptr;
    Node* evenList = nullptr;
    Node* current = head;

    while (current != nullptr) {
        if (current->data % 2 == 1) {
            oddList = insert(oddList, current->data);
        } else {
            evenList = insert(evenList, current->data);
        }
        current = current->next;
    }

    Node* combinedList = oddList;
    Node* oddEnd = oddList;

    while (oddEnd != nullptr && oddEnd->next != nullptr) {
        oddEnd = oddEnd->next;
    }

    if (oddEnd != nullptr) {
        oddEnd->next = evenList;
    } else {
        combinedList = evenList;
    }

    return combinedList;
}

int main() {
    int number = 12345; // 5 basamaklı sayı
    Node* head = nullptr;

    while (number > 0) {
        int digit = number % 10;
        head = insert(head, digit);
        number /= 10;
    }

    std::cout << "Baslangic: ";
    printList(head);

    head = moveOddsToFront(head);
    //head = reverseList(head);

    std::cout << "Son: ";
    printList(head);

    return 0;
}








/*
struct Node {
    int data;
    Node* next;
};

Node* insert(Node* head, int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = head;
    return newNode;
}

void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data;
        if (current->next != nullptr) {
            std::cout << " -> ";
        }
        current = current->next;
    }
    std::cout << std::endl;
}

Node* moveOddsToFront(Node* head) {
    Node* oddList = nullptr;
    Node* evenList = nullptr;
    Node* current = head;

    while (current != nullptr) {
        if (current->data % 2 == 1) {
            oddList = insert(oddList, current->data);
        } else {
            evenList = insert(evenList, current->data);
        }
        current = current->next;
    }

    Node* combinedList = oddList;
    Node* oddEnd = oddList;

    while (oddEnd != nullptr && oddEnd->next != nullptr) {
        oddEnd = oddEnd->next;
    }

    if (oddEnd != nullptr) {
        oddEnd->next = evenList;
    } else {
        combinedList = evenList;
    }

    return combinedList;
}

int main() {
    int number = 12345; // 5 basamaklı sayı
    Node* head = nullptr;

    while (number > 0) {
        int digit = number % 10;
        head = insert(head, digit);
        number /= 10;
    }

    std::cout << "Baslangic: ";
    printList(head);

    head = moveOddsToFront(head);

    std::cout << "Son Hal: ";
    printList(head);

    return 0;
}

*/









/*
struct Node {
    int data;
    Node* next;
};

Node* insert(Node* head, int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = head;
    return newNode;
}

void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data;
        if (current->next != nullptr) {
            std::cout << " -> ";
        }
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    int number = 12345; // 5 basamaklı sayı
    Node* head = nullptr;

    while (number > 0) {
        int digit = number % 10;
        head = insert(head, digit);
        number /= 10;
    }

    std::cout << "Tek Yonlu Bagli Liste: ";
    printList(head);

    return 0;
}

*/










/*

void dosya_oku()
{
	
	Liste liste;


    ifstream dosya("filename.txt"); // Dosyayı aç

    if (!dosya) 
    {
        cerr << "Dosya acilamadi." << endl;
    
    }

    string satir;
    int sira=0,index=-1;

    while (getline(dosya, satir))
        {
        istringstream satir_stream(satir);
        int sayi;		
        
        while (satir_stream >> sayi) 
        {
        liste.ekle(sayi,sira);
        }
        sira++;
    }

    dosya.close();
    liste.yazdir();
    liste.degis(2,3);
}
*/