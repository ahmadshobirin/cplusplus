#include <iostream>

#include <stdlib.h>

#include <string>

#include <iomanip>


using namespace std;

//declare-struct-mhs
struct Mahasiswa {
  int nbi;
  string nama, alamat;
};

//node
struct Node {
  int data;
  Node * kiri;
  Node * kanan;

  Node * next;
};

//global-variabel
int pil, data;
int jmldata = 0;
struct Mahasiswa mhs[100], temp;

int menu(int pil, string type);
void input();
void tampil();
void sort_data();
void search_data();

int tree();
void tambah(Node ** root, int databaru);
void preOrder(Node * root);
void inOrder(Node * root);
void postOrder(Node * root);

void menulink();
void inputlink(int dt);
void inisialisasi();
void hapus();
void cetak();

Node * head;
Node * tail;
Node * curr;
Node * entry;
Node * del;

int main() {
  inisialisasi(); //linked-list
  system("clear");

  cout << "---    Main Menu      ---" << endl;
  cout << "1. Input data         " << endl;
  cout << "2. Tampilkan data     " << endl;
  cout << "3. Linked List     " << endl;
  cout << "4. Tree               " << endl;
  cout << "0. Keluar             " << endl;
  cin >> pil;

  menu(pil, "main-menu");

}

int menu(int pil, string type) {
  if (type == "main-menu") {
    if (pil == 0) {
      cout << "menu tidak ditemukan" << endl;
      return 0;
    } else if (pil == 1) {
      input();
    } else if (pil == 2) {
      tampil();
    } else if (pil == 3) {
      menulink();
    } else if (pil == 4) {
      tree();
    } else {
      main();
    }
  } else if (type == "submenu-mhs") {

    if (pil == 0) {
      main();
    } else if (pil == 1) {
      tampil();
    } else if (pil == 2) {
      sort_data();
    } else if (pil == 3) {
      search_data();
    } else {
      return 0;
    }

  }
}

//Sort and Searching
void input() {
  system("clear");
  cout << "***   Input data   ***" << endl << endl;
  cout << "Jmlah data: ";
  cin >> jmldata;
  cout << endl << "--" << endl;

  for (int i = 0; i <= (jmldata - 1); i++) {
    cout << "NBI:   ";
    cin >> mhs[i].nbi;
    cout << "Nama:   ";
    cin >> mhs[i].nama;
    cout << "Alamat: ";
    cin >> mhs[i].alamat;
    cout << endl;
  }

  cout << endl;
  cout << "***   Sub-Menu      ***" << endl;
  cout << "1. Tampilkan           " << endl;
  cout << "2. Urutkan             " << endl;
  cout << "3. Cari             " << endl;
  cout << "0. kembali ke menu     " << endl;

  cin >> pil;

  menu(pil, "submenu-mhs");
}

void tampil() {
  system("clear");
  cout << "*** Menampilkan data ***" << endl;

  if (jmldata != 0) {
    cout << setw(5) << "No" << setw(15) << " NBI" << setw(15) << "Nama" << setw(15) << " Alamat" << endl;
    for (int i = 0; i <= (jmldata - 1); i++) {
      cout << setw(5) << (i + 1);
      cout << setw(15) << mhs[i].nbi;
      cout << setw(15) << mhs[i].nama;
      cout << setw(15) << mhs[i].alamat << endl;
    }
  } else {
    cout << "Data Kosong!";
  }

  cout << endl;
  cout << "***   Sub-Menu      ***" << endl;
  cout << "1. Tampilkan           " << endl;
  cout << "2. Urutkan             " << endl;
  cout << "3. Cari                " << endl;
  cout << "0. kembali ke menu     " << endl;

  cin >> pil;

  menu(pil, "submenu-mhs");

}

void sort_data() {
  system("clear");
  for (int x = 0; x < (jmldata - 1); x++) { //bubble-short
    for (int y = 0; y < (jmldata - 1); y++) {

      if (mhs[y].nama > mhs[y + 1].nama) {
        temp = mhs[y];

        mhs[y] = mhs[y + 1];
        mhs[y + 1] = temp;
      }
    }
  }
  tampil();
}

void search_data() {
  int src, searchnbi, j;
  bool anchor = false;
  //int j = 0;

  system("clear");
  cout << "*** Mencari data ***" << endl;

  if (jmldata != 0) {

    int i, k;
    bool found;
    cout << "NBI yang dicari: ";
    cin >> k;
    found = false;
    i = 0;
    while ((i < 100) & (!found)) {
      if (mhs[i].nbi == k)
        found = true;
      else
        i = i + 1;
    }
    if (found) {

      cout << "Mahasiswa NBI: " << k << " ditemukan  di index ke-" << i << endl;
      cout << setw(15) << " NBI" << setw(15) << "Nama" << setw(15) << " Alamat" << endl;
      cout << setw(15) << mhs[i].nbi;
      cout << setw(15) << mhs[i].nama;
      cout << setw(15) << mhs[i].alamat << endl;

    } else {
      cout << "Mahasiswa NBI: " << k << " tidak ditemukan  " << endl;
    }
  } else {
    cout << "Data Mahasiswa kosong";
  }

  cout << endl;
  cout << "---   Sub-Menu         ---" << endl;
  cout << "1. Coba cari data lain?   " << endl;
  cout << "2. lihat semua data?      " << endl;
  cout << "0. Kembali ke menu awal   " << endl;
  cin >> pil;

  if (pil == 1) {
    search_data();
  } else if (pil == 2) {
    tampil();
  } else {
    main();
  }

}

//TREE
int tree() {
  Node * pohon;
  pohon = NULL;

  system("clear");

  do {
    cout << endl;
    cout << "---    Menu Tree     ---" << endl;
    cout << "1. Tambah               " << endl;
    cout << "2. Pre-order            " << endl;
    cout << "3. In-order             " << endl;
    cout << "4. Post-order           " << endl;
    cout << "0. Menu Utama           " << endl;
    cin >> pil;

    switch (pil) {
    case 1:
      cout << "\n INPUT:  " << endl;
      cout << "Data baru: ";
      scanf("%d", & data);
      tambah( & pohon, data);
      break;

    case 2:
      printf("\nOUTPUT PRE ORDER : ");
      printf("\n------------------\n");
      if (pohon != NULL)
        //panggil fungsi untuk mencetak data secara preOrder
        preOrder(pohon);
      else
        printf("Masih kosong!");
      break;

      //jika pil bernilai 3
    case 3:
      printf("\nOUTPUT IN ORDER : ");
      printf("\n------------------\n");
      if (pohon != NULL)
        //panggil fungsi untuk mencetak data secara inOrder
        inOrder(pohon);
      else
        printf("Masih kosong!");
      break;

      //jika pil bernilai 4
    case 4:
      printf("\nOUTPUT POST ORDER : ");
      printf("\n------------------\n");
      if (pohon != NULL)
        //panggil fungsi untuk mencetak data secara postOrder
        postOrder(pohon);
      else
        printf("Masih kosong!");
      break;
    }
  } while (pil != 0);

  main();

}

void tambah(Node ** root, int databaru) {
  //jika root masih kosong
  if (( * root) == NULL) {
    Node * baru;
    baru = new Node;
    //inisialisasi awal node yang baru dibuat
    baru -> data = databaru;
    baru -> kiri = NULL;
    baru -> kanan = NULL;
    ( * root) = baru;
    ( * root) -> kiri = NULL;
    ( * root) -> kanan = NULL;
    printf("Data bertambah! \n");
  }
  //jika data yang akan dimasukkan lebih kecil daripada elemen root, maka akan diletakkan di node sebelah kiri.
  else if (databaru < ( * root) -> data)
    tambah( & ( * root) -> kiri, databaru);
  //jika data yang akan dimasukkan lebih besar daripada elemen root, maka akan diletakkan di node sebelah kanan
  else if (databaru > ( * root) -> data)
    tambah( & ( * root) -> kanan, databaru);
  //jika saat dicek data yang akan dimasukkan memiliki nilai yang sama dengan data pada root
  else if (databaru == ( * root) -> data)
    printf("Data sudah ada! \n");

}

void preOrder(Node * root) {
  if (root != NULL) {
    printf("%d ", root -> data);
    preOrder(root -> kiri);
    preOrder(root -> kanan);
  }
}

void inOrder(Node * root) {
  if (root != NULL) {
    inOrder(root -> kiri);
    printf("%d ", root -> data);
    inOrder(root -> kanan);
  }
}

void postOrder(Node * root) {
  if (root != NULL) {
    postOrder(root -> kiri);
    postOrder(root -> kanan);
    printf("%d ", root -> data);
  }
}

//LINKED-LIST
void menulink() {
  char ulang;
  int data;

  do {
    system("clear");
    cout << "SINGLE LINKED LIST" << endl;
    cout << "---   Menu   ---" << endl;
    cout << "1. Input data   " << endl;
    cout << "2. Hapus data   " << endl;
    cout << "3. Cetak Data   " << endl;
    cout << "0. Keluar       " << endl;
    cout << "00. Menu Utama  " << endl;
    cout << "Masukkan pilihan Anda : ";
    cin >> pil;

    switch (pil) {
    case 1:
      cout << "\nMasukkan data : ";
      cin >> data;
      inputlink(data);
      break;
    case 2:
      hapus();
      break;
    case 3:
      cetak();
      break;
    case 4:
      exit(0);
      break;
    case 5:
      main();
      break;
    default:
      cout << "\nPilih ulang" << endl;
    }
    cout << "\nKembali ke menu?(y/n)";
    cin >> ulang;
  } while (ulang == 'y' || ulang == 'Y');

  main();
}

void inisialisasi() {
  head = NULL;
  tail = NULL;
}

void inputlink(int dt) {
  entry = (Node * ) malloc(sizeof(Node));
  entry -> data = dt;
  entry -> next = NULL;
  if (head == NULL) {
    head = entry;
    tail = head;
  } else {
    tail -> next = entry;
    tail = entry;
  }
}

void hapus() {
  int simpan;
  if (head == NULL) {
    cout << "\nlinked list kosong, penghapusan tidak bisa dilakukan" << endl;
  } else {
    simpan = head -> data;
    cout << "\ndata yang dihapus adalah " << simpan << endl;

    del = head;
    head = head -> next;
    delete del;
  }
}

void cetak() {
  curr = head;
  if (head == NULL)
    cout << "\ntidak ada data dalam linked list" << endl;
  else {
    cout << "\nData yang ada dalam linked list adalah" << endl;
    cout << setw(6);
    while (curr != NULL) {
      cout << curr -> data << "->";
      curr = curr -> next;
    }
    cout << endl;
  }

}
