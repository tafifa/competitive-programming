#include <iostream>
using namespace std;

struct kota {
  int hargaCokelat;

  kota *next;
};

kota *head, *tail, *cur, *newNode;

void createSingleLinkedList(int hargaCokelat) {
  head = new kota();

  head->hargaCokelat = hargaCokelat;
  head->next = NULL;

  tail = head;
}

void addLast(int hargaCokelat) {
  newNode = new kota();

  newNode->hargaCokelat = hargaCokelat;
  newNode->next = NULL;

  tail->next = newNode;
  tail = newNode;
}

void printSingleLinkedList() {
  cur = head;
  while (cur != NULL) {
    cout << cur->hargaCokelat << " ke ";
    cur = cur->next;
  }
}

int main() {
  createSingleLinkedList(90);
  addLast(99);
  addLast(5);
  addLast(1);
  addLast(8);
  printSingleLinkedList();
  

  return 0;
}