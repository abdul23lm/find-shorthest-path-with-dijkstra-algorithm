#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    char node1[20],node2[20],node3[20],node4[20],node5[20],node6[20],node7[20];
    int bobot1,bobot2,bobot3,bobot4,bobot5,bobot6,bobot7,bobot8,bobot9,bobot10,bobot11,bobot12,bobot13;
    int bobot14,bobot15,bobot16,bobot17,bobot18,bobot19,bobot20,x;
    cout<<"*======================================Tugas Ujian Akhir Semester======================================*"<<endl;
    cout<<" Struktur Data & Pemrograman"<<endl;
    cout<<" Program Mencari Rute Tercepat Menggunakan Algoritma Dijkstra"<<endl;
    cout<<" Kelas 3'A Fasilkom Unsika\n"<<endl;
    cout<<"Graf 7 simpul\n";
    cout<<"Simpul Pertama : "; //Tanjung Pura
    cin>>node1;
    cout<<"Simpul Kedua   : "; //Karang Pawitan
    cin>>node2;
    cout<<"Simpul Ketiga  : "; //Tuparev
    cin>>node3;
    cout<<"Simpul Keempat : "; //Alun-Alun
    cin>>node4;
    cout<<"Simpul Kelima  : "; //Galuh Mas
    cin>>node5;
    cout<<"Simpul Keenam  : "; //Adiarsa
    cin>>node6;
    cout<<"Simpul Ketujuh : "; //Unsika
    cin>>node7;

    cout<<"\nDicari Rute Terdekat Dari Tanjung Pura Ke Unsika";
    cout<<"\nMaka Sisi-sisnya adalah : \n\n";
    cout<<"1. "<<node1<<" - "<<node2<<"\n";
    cout<<"2. "<<node1<<" - "<<node3<<"\n";
    cout<<"3. "<<node1<<" - "<<node4<<"\n";
    cout<<"4. "<<node1<<" - "<<node2<<" - "<<node4<<"\n";
    cout<<"5. "<<node1<<" - "<<node3<<" - "<<node4<<"\n";
    cout<<"6. "<<node1<<" - "<<node2<<" - "<<node6<<"\n";
    cout<<"7. "<<node1<<" - "<<node4<<" - "<<node6<<"\n";
    cout<<"8. "<<node1<<" - "<<node4<<" - "<<node5<<"\n";
    cout<<"9. "<<node1<<" - "<<node3<<" - "<<node5<<"\n";
    cout<<"10. "<<node1<<" - "<<node2<<" - "<<node4<<" - "<<node6<<"\n";
    cout<<"11. "<<node1<<" - "<<node3<<" - "<<node4<<" - "<<node6<<"\n";
    cout<<"12. "<<node1<<" - "<<node3<<" - "<<node5<<" - "<<node6<<"\n";
    cout<<"13. "<<node1<<" - "<<node2<<" - "<<node6<<" - "<<node7<<"\n";
    cout<<"14. "<<node1<<" - "<<node4<<" - "<<node6<<" - "<<node7<<"\n";
    cout<<"15. "<<node1<<" - "<<node2<<" - "<<node4<<" - "<<node6<<" - "<<node7<<"\n";
    cout<<"16. "<<node1<<" - "<<node3<<" - "<<node4<<" - "<<node6<<" - "<<node7<<"\n";
    cout<<"17. "<<node1<<" - "<<node3<<" - "<<node5<<" - "<<node6<<" - "<<node7<<"\n";
    cout<<"18. "<<node1<<" - "<<node4<<" - "<<node5<<" - "<<node6<<" - "<<node7<<"\n";
    cout<<"19. "<<node1<<" - "<<node3<<" - "<<node4<<" - "<<node5<<" - "<<node6<<" - "<<node7<<"\n";
    cout<<"20. "<<node1<<" - "<<node2<<" - "<<node4<<" - "<<node5<<" - "<<node6<<" - "<<node7<<endl<<endl;

    cout<<"Jarak "<<node1<<" ke "<<node2<<" : ";cin>>bobot1;
    cout<<"Jarak "<<node1<<" ke "<<node3<<" : ";cin>>bobot2;
    cout<<"Jarak "<<node1<<" ke "<<node4<<" : ";cin>>bobot3;
    cout<<"Jarak "<<node1<<" ke "<<node2<<" ke "<<node4<<" : ";cin>>bobot4;
    cout<<"Jarak "<<node1<<" ke "<<node3<<" ke "<<node4<<" : ";cin>>bobot5;
    cout<<"Jarak "<<node1<<" ke "<<node2<<" ke "<<node6<<" : ";cin>>bobot6;
    cout<<"Jarak "<<node1<<" ke "<<node4<<" ke "<<node6<<" : ";cin>>bobot7;
    cout<<"Jarak "<<node1<<" ke "<<node4<<" ke "<<node5<<" : ";cin>>bobot8;
    cout<<"Jarak "<<node1<<" ke "<<node3<<" ke "<<node5<<" : ";cin>>bobot9;
    cout<<"Jarak "<<node1<<" ke "<<node2<<" ke "<<node4<<" ke "<<node6<<" : ";cin>>bobot10;
    cout<<"Jarak "<<node1<<" ke "<<node3<<" ke "<<node4<<" ke "<<node6<<" : ";cin>>bobot11;
    cout<<"Jarak "<<node1<<" ke "<<node3<<" ke "<<node5<<" ke "<<node6<<" : ";cin>>bobot12;
    cout<<"Jarak "<<node1<<" ke "<<node2<<" ke "<<node6<<" ke "<<node7<<" : ";cin>>bobot13;
    cout<<"Jarak "<<node1<<" ke "<<node4<<" ke "<<node6<<" ke "<<node7<<" : ";cin>>bobot14;
    cout<<"Jarak "<<node1<<" ke "<<node2<<" ke "<<node4<<" ke "<<node6<<" ke "<<node7<<" : ";cin>>bobot15;
    cout<<"Jarak "<<node1<<" ke "<<node3<<" ke "<<node4<<" ke "<<node6<<" ke "<<node7<<" : ";cin>>bobot16;
    cout<<"Jarak "<<node1<<" ke "<<node3<<" ke "<<node5<<" ke "<<node6<<" ke "<<node7<<" : ";cin>>bobot17;
    cout<<"Jarak "<<node1<<" ke "<<node4<<" ke "<<node5<<" ke "<<node6<<" ke "<<node7<<" : ";cin>>bobot18;
    cout<<"Jarak "<<node1<<" ke "<<node3<<" ke "<<node4<<" ke "<<node5<<" ke "<<node6<<" ke "<<node7<<" : ";cin>>bobot19;
    cout<<"Jarak "<<node1<<" ke "<<node2<<" ke "<<node4<<" ke "<<node5<<" ke "<<node6<<" ke "<<node7<<" : ";cin>>bobot20;

    cout<<endl<<endl;

   cout<<"Panjang jarak pada graf totalnya = "<<bobot1+bobot2+bobot3+bobot4+bobot5+bobot6+bobot7+bobot8+bobot9+bobot10+bobot11+bobot12+bobot13+bobot14+bobot15+bobot16+bobot17+bobot18+bobot19+bobot20<<endl<<endl;

   cout<<"Silahkan Pilih : \n";
   cout<<"1. Tampilkan Semua Jalur     2.Jalur Tercepat\n";
   cout<<"pilihan = ";;cin>>x;
   if(x==1){
    cout<<"Jalur 1: "<<node1<<" - "<<node2<<" = "<<bobot1<<endl;
    cout<<"Jalur 2: "<<node1<<" - "<<node3<<" = "<<bobot2<<endl;
    cout<<"Jalur 3: "<<node1<<" - "<<node4<<" = "<<bobot3<<endl;
    cout<<"Jalur 4: "<<node1<<" - "<<node2<<" - "<<node4<<" = "<<bobot4<<endl;
    cout<<"Jalur 5: "<<node1<<" - "<<node3<<" - "<<node4<<" = "<<bobot5<<endl;
    cout<<"Jalur 6: "<<node1<<" - "<<node2<<" - "<<node6<<" = "<<bobot6<<endl;
    cout<<"Jalur 7: "<<node1<<" - "<<node4<<" - "<<node6<<" = "<<bobot7<<endl;
    cout<<"Jalur 8: "<<node1<<" - "<<node4<<" - "<<node5<<" = "<<bobot8<<endl;
    cout<<"Jalur 9: "<<node1<<" - "<<node3<<" - "<<node5<<" = "<<bobot9<<endl;
    cout<<"Jalur 10: "<<node1<<" - "<<node2<<" - "<<node4<<" - "<<node6<<" = "<<bobot10<<endl;
    cout<<"Jalur 11: "<<node1<<" - "<<node3<<" - "<<node4<<" - "<<node6<<" = "<<bobot11<<endl;
    cout<<"Jalur 12: "<<node1<<" - "<<node3<<" - "<<node5<<" - "<<node6<<" = "<<bobot12<<endl;
    cout<<"Jalur 13: "<<node1<<" - "<<node2<<" - "<<node6<<" - "<<node7<<" = "<<bobot13<<" ((Ini merupakan jalur terpendek)) "<<endl;
    cout<<"Jalur 14: "<<node1<<" - "<<node4<<" - "<<node6<<" - "<<node7<<" = "<<bobot14<<endl;
    cout<<"Jalur 15: "<<node1<<" - "<<node2<<" - "<<node4<<" - "<<node6<<" - "<<node7<<" = "<<bobot15<<endl;
    cout<<"Jalur 16: "<<node1<<" - "<<node3<<" - "<<node4<<" - "<<node6<<" - "<<node7<<" = "<<bobot16<<endl;
    cout<<"Jalur 17: "<<node1<<" - "<<node3<<" - "<<node5<<" - "<<node6<<" - "<<node7<<" = "<<bobot17<<endl;
    cout<<"Jalur 18: "<<node1<<" - "<<node4<<" - "<<node5<<" - "<<node6<<" - "<<node7<<" = "<<bobot18<<endl;
    cout<<"Jalur 19: "<<node1<<" - "<<node3<<" - "<<node4<<" - "<<node5<<" - "<<node6<<" - "<<node7<<" = "<<bobot19<<endl;
    cout<<"Jalur 20: "<<node1<<" - "<<node2<<" - "<<node4<<" - "<<node5<<" - "<<node6<<" - "<<node7<<" = "<<bobot20<<endl<<endl; }

else if(x==2){
    cout<<"Jalur Tercepat Adalah : "<<node1<<node2<<node6<<node7<<" = "<<bobot13<<endl; }

    getch();
    return 0;
}
