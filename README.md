# LATIHAN4DPBO2023

Saya Rifqi Fajar Indrayadi NIM 2101103 mengerjakan Latihan 4 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Desain Program
![diagram](/UML/uml.png)

## Alur Program
Pada program ini, kelas ProgramStudi bisa dibilang yang menampung data Dosen, Mahasiswa, dan Matkul (Course). Setelah objek Dosen, Mahasiswa, dan Matkul dibuat dan diberi data menggunakan setter, maka objek-objek tersebut di *add* ke list yang ada pada kelas ProgramStudi, yang nantinya akan ditampilkan dengan memanggil method print yang dimiliki masing2 kelas sehingga hanya perlu dipanggil di kelas ProgramStudi.

## Relasi Antar Kelas
- Dosen dan Mahasiswa extend dari SivitasAkademik dan SivitasAkademik extend Human. Alasan nya adalah dosen dan mahasiswa sama-sama merupakan sivitas akademik yang memiliki atribut-atribut dari sivitas akademik pula.
- Program Studi composite Course, Dosen, dan Mahasiswa. Alasan nya adalah karena composite itu berarti 'Has a' dimana Program Studi itu menaungi Dosen dan Mahasiswa serta memiliki Course atau mata kuliah yang dapat diambil oleh mahasiswa nanti nya. Demikian pula dengan Dosen yang dapat di assign untuk mengampu mata kuliah. Kelas ProgramStudi ini dapat menampung banyak Dosen, Mhs, dan Course.

## Dokumentasi
![program1](/CPP/SS codingan.png)
![output1](/CPP/SS output.png)
![program2](/PYTHON/SS Program.png)
![output2](/PYTHON/SS Output.png)
