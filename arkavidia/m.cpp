#include <bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

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
    // cout << cur->hargaCokelat << " ke ";

    cur = cur->next;
  }
}

int searchFromFirst(int cap) {
  cur = head;

  int minimal = INT_MAX;
  cout << cap << "o" << endl;
  while (cur->hargaCokelat != cap) {
    cout << cur->hargaCokelat << ' ' << minimal << endl;
    if (minimal > cur->hargaCokelat) minimal = cur->hargaCokelat;

    cur = cur->next;
  }
  return minimal;
}

int main() {
  fastIO;
  
	int n, x; cin >> n >> x;

  int simpan;
  for (int i = 0; i < n; i++) {
    int t; cin >> t;
    if (i == 0) createSingleLinkedList(t);
    if (i+1 == x) simpan = t;
    else addLast(t);
  }
  cout << simpan;

  printSingleLinkedList();
  cout << '\n';
  int nilai = searchFromFirst(simpan);
  cout << nilai << endl;



  // int u[n], v[n];
  // for (int i = 0; i < n-1; i++) {
  //   cin >> u[i] >> v[i];

  // }


	return 0;
}