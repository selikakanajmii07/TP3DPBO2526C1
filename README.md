# TP3DPBO2526C1
JANJI
Saya Selika Kanajmi dengan NIM 2408495 mengerjakan TP 3 dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak akan melakukan
kecurangan seperti yang telah di spesifikasikan

PENJELASAN
Hubungan antar class dan atribut
- class Pemilik, class ini dibuat untuk menampung nama, nomor telepon, dan alamat pemilik hewan. Atribut pemilik dalam class Hewan dibentuk dari class pemilik karena data pemilik dibuat bersamaan dengan hewannya dan menjadi bagian hewan itu.
- class Hewan, class ini dibuat untuk menampung data yang sama dari class Kucing, Anjing, dan Burung. Jadi class Hewan ini menjadi parent dari class Kucing, Anjing, dan Burung.
- class Kucing, merupakan anak dari class Hewan. Atribut buluPanjang hanya dimiliki kucing, dan menentukan tambahan biaya grooming di hitungBiaya nya.
- class Anjing, merupakan anak dari class Hewan. Atribut ras dan terlatih hanya dimiliki anjing, dan biayanya dihitung dari berat badan di hitungBiaya nya.
- class Burung, merupakan anak dari class Hewan. Atribut lebarSayap dan bisaTerbang hanya dimiliki burung, dan burung yang tidak bisa terbang dikenakan biaya perawatan sayap di hitungBiaya nya.
- class Klinik, class ini dibuat untuk mengelola semua pasien dan menghitung total pendapatan. Atribut daftarPasien dalam class ini dibentuk dari class Hewan karena pasien disimpan sebagai bagian dari klinik.

Desain program
- Hierarchical Inheritance
  Hewan adalah satu parent yang diturunkan ke tiga child, yaitu Kucing, Anjing, dan Burung. Atribut umum dan tampilkanInfo ditulis sekali di Hewan. Tiap child menambah atribut khusus dan menulis ulang jenis, suara, detailKhusus, dan hitungBiaya sesuai aturan masing-masing.
- Composition
  1. Hewan memiliki Pemilik. Data pemilik menjadi bagian dari hewan dan dibuat bersamaan dengan hewannya.
  2. Klinik memiliki Hewan. Daftar pasien disimpan di klinik, dan di C++ semua pasien di delete di destructor Klinik, jadi pasien ikut hilang saat klinik hilang.
- Array of object
  Klinik menyimpan pasien campuran yaitu Kucing, Anjing, dan Burung dalam satu daftar bertipe Hewan. Saat dilooping, tiap data memakai versi method child-nya sendiri (polimorfisme).

Alur
1. main membuat objek Klinik.
2. Klinik diisi 3 pasien awalyaitu Kucing Mochi, Anjing Bruno, Burung Kiki, masing-masing bersama pemiliknya.
3. Semua pasien diprint beserta total pendapatan Rp241.000.
4. Ditambahkan 3 pasien baru yaitu Kucing Luna, Anjing Rocky, Burung Beo.
5. Semua pasien diprint lagi dengan total pendapatan Rp410.000.
