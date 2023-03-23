#include <iostream>
using namespace std;



class Node
{
public:
    int Data{};
    Node* next;
};


void create(Node* a, int arr[]);
void afis(Node* a);
void countt(Node* a);
void add(Node* a);
void maxim(Node* a);
void minim(Node* a);
bool searchh(Node* a);


int main()
{
    Node* a = new Node;
    int arr[] = {1, -2, 3, 4, 60, 6, 7, 8, 9, 10 ,11, 12};
    create(a, arr);
    countt(a);
    add(a);
    maxim(a);
    minim(a);

    cout << boolalpha << " " << searchh(a) << endl;



    cout << endl;
    cin.get();
}


void create(Node* a, int arr[])
{
    //Node* a = new Node;
    Node* b = a;

    for(size_t i{}; i <= 11; i++)
        {
            b->Data = arr[i];
            Node* c = new Node;
            b->next = c;
            b = c;
        }
        b->next = nullptr;

    afis(a);
}


void afis(Node* a)
{
    if(a)
    {
        cout << " " << a->Data;
        afis(a->next);
    }
}


void countt(Node* a)
{
    int aux{0};

    while(a)
    {
        aux++;
        a = a->next;
    }

    cout << endl << " " << aux << endl;
}

void add(Node* a)
{
    int b{0};
    while(a)
    {
        b = b + a->Data;
        a = a->next;
    }
    cout << endl << " " << b << endl;
}


void maxim(Node* a)
{
    int aux{};
    aux = a->Data;
    a = a->next;

    while(a)
    {
        if(aux < a->Data)
        {
            aux = a->Data;
        }
    a = a->next;
    }
    cout << endl << " " << aux << endl;
}


void minim(Node* a)
{
    int aux{};
    aux = a->Data;
    a = a->next;

    while(a)
    {
        if(aux > a->Data)
        {
            aux = a->Data;
        }
    a = a->next;
    }
    cout << endl << " " << aux << endl;
}

bool searchh(Node* a)
{
    int nr{};

    cout << endl;
    cout << " Ce numar doriti sa cautati: ";
    cin >> nr;

    while(a)
    {
        if(nr == a->Data)
            return 1;

        a = a->next;
    }

    return 0;
}
