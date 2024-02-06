#include <iostream>
#include <map>
#include <set>
#include <string>

using namespace std;

//<---- Dilarang menambahkan kode di atas batas ini----->

int waktu_isi_gelas() {
  // Deklarasi array kapasitas gelas
  vector <int> kapasitas_gelas(3);

  // Input kapasitas gelas
  for (int i = 0; i < 3; i++) {
    cin >> kapasitas_gelas[i];
  }

  // Inisialisasi waktu dan gelas yang sedang diisi
  int waktu = 0, gelas_1 = 0, gelas_2 = 1;

  // Loop selama ada gelas yang belum penuh
  while (kapasitas_gelas[gelas_1] > 0 || kapasitas_gelas[gelas_2] > 0) {
    // Kurangi kapasitas gelas yang sedang diisi
    kapasitas_gelas[gelas_1] -= 1;
    kapasitas_gelas[gelas_2] -= 1;

    // Perbarui waktu
    waktu += 1;

    // Jika gelas 1 sudah penuh, pilih gelas berikutnya
    if (kapasitas_gelas[gelas_1] == 0) {
      if (gelas_2 == 2) {
        gelas_1 = 0;
      } else {
        gelas_1 = 2;
      }
    }

    // Jika gelas 2 sudah penuh, pilih gelas berikutnya
    if (kapasitas_gelas[gelas_2] == 0) {
      if (gelas_1 == 2) {
        gelas_2 = 0;
      } else {
        gelas_2 = 2;
      }
    }
  }

  // Tampilkan waktu yang dibutuhkan
  cout << "Anda butuh waktu " << waktu << " menit" << endl;

  return 0;
}
