/************************************************************************
Program Mengenal Lebih Jauh Kimia Unsur                              ****
Created By : Septian Rinaldi Rianggoro                               ****
NIM        : 5304216012                                              ****
Prodi      : Pendidikan Teknik Informatika dan Komputer              ****
Jurusan    : Teknik Elektro                                          ****
                                                                     ****
See Changelog on readme.txt                                          ****
*************************************************************************/
#include <iostream>
#include <string>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include "golongan1.cpp"
#define up cout << "============================================================================================================"<< endl<< endl;
#define down cout << endl << "============================================================================================================"<< endl;
#define isgol1 if ((a[i] == 'L' && a[i+1]== 'i') || (a[i] == 'N' && a[i+1]== 'a') || (a[i] == 'R' && a[i+1]== 'b') || (a[i] == 'C' && a[i+1]== 's') || (a[i] == 'F' && a[i+1]== 'r'))
#define isgol2 if ((a[i] == 'B' && a[i+1]== 'e') || (a[i] == 'M' && a[i+1]== 'g') || (a[i] == 'C' && a[i+1]== 'a') || (a[i] == 'S' && a[i+1]== 'r') || (a[i] == 'B' && a[i+1]== 'a' || (a[i] == 'R' && a[i+1]== 'a')))
#define isgol3 if ((a[i] == 'A' && a[i+1]== 'l') || (a[i] == 'G' && a[i+1]== 'a') || (a[i] == 'I' && a[i+1]== 'n'))
#define isgol4 if ((a[i] == 'S' && a[i+1]== 'i') || (a[i] == 'G' && a[i+1]== 'e') || (a[i] == 'S' && a[i+1]== 'n') || (a[i] == 'P' && a[i+1]== 'b'))
#define isgol5 if ((a[i] == 'A' && a[i+1]== 's') || (a[i] == 'S' && a[i+1]== 'b') || (a[i] == 'B' && a[i+1]== 'i'))
#define isgol6 if ((a[i] == 'S' && a[i+1]== 'e') || (a[i] == 'T' && a[i+1]== 'e') || (a[i] == 'P' && a[i+1]== 'o'))
#define isgol7 if ((a[i] == 'C' && a[i+1]== 'l') || (a[i] == 'B' && a[i+1]== 'r') || (a[i] == 'A' && a[i+1]== 't'))
#define isgol8 if ((a[i] == 'N' && a[i+1]== 'e') || (a[i] == 'A' && a[i+1]== 'r') || (a[i] == 'K' && a[i+1]== 'r') || (a[i] == 'X' && a[i+1]== 'e') || (a[i] == 'R' && a[i+1]== 'n'))

int bisakah(char a[100]);
int satuhuruf(char b[100]);
int duahuruf(char a[100]);
int lebihjauh(char a[100]);
void intro();

int main()
{
    char senyawa[10000],jwb;
    int udlms;
    intro();
    cin >> udlms;
    cout << "Masukan unsur senyawa (misal H2SO4 = HHSOOOO / KCl = KCl) = ";
    for (int j=0 ; j < udlms ; j++)
    {
        cin >> senyawa[j];
    }
    bisakah(senyawa);
    cout << "ingin mengetahui lebih jauh unsur pembentuknya Y/N?" << endl;
    cin >> jwb;
    if (jwb == 'y' || jwb == 'Y' )
    {
        duahuruf(senyawa);
    }
    else
    {

    }
    getch();
}

void intro()
{
    char d[1000]="Program ini dibuat sebagai tugas akhir Mata Kuliah Teknik Pemprograman & untuk menambah pengetahuan tentang kimia unsur";
    int k;
    cout << "Make CMD Fullscreen for better experience :D"<<endl;

    Sleep(2000);
    cout << "Loading ";
    for(int i=0;i<5;i++)
    {
        Sleep(500);
        cout << ". ";
    }
    system("cls");
    Sleep(1000);
    cout << "*************************************************************************"<< endl;
    cout << "**** Program Mengenal Lebih Jauh Kimia Unsur                         ****"<< endl;
    cout << "**** Created By : Septian Rinaldi Rianggoro                          ****"<< endl;
    cout << "**** NIM        : 5304216012                                         ****"<< endl;
    cout << "**** Prodi      : Pendidikan Teknik Informatika dan Komputer         ****"<< endl;
    cout << "**** Jurusan    : Teknik Elektro                                     ****"<< endl;
    cout << "****                                                                 ****"<< endl;
    cout << "**** See Changelog on readme.txt                                     ****"<< endl;
    cout << "*************************************************************************"<< endl << endl ;
    Sleep(2000);

    for (int i=0;d[k];k++)
    {
    }
    for (int j=0;j<k;j++)
    {
        cout << d[j];
        Sleep(50);
    }
    Sleep(1500);
    cout << endl <<endl << "Masukan jumlah abjad yang terdapat pada senyawa (misal KCl= 3 ) = ";
}

int bisakah(char a[100])
{
    int b[100],c=0,k;
    golongan1 golo1;
    golongan2 golo2;
    golongan3 golo3;
    golongan4 golo4;
    golongan5 golo5;
    golongan6 golo6;
    golongan7 golo7;
    golongan8 golo8;
    for (k=0; a[k]; k++)
{
}
    for (int i=0;i < k;i++)
    {
        //if (a[i] == 'h' || (a[i] == 'l' && a[i+1]== 'i'))
        isgol1
        {

            c+=golo1.golongan();
        }
        isgol2
        {

            c+=golo2.golongan();
        }

        isgol3
        {

            c+=golo3.golongan();
        }
        isgol4
        {
            c+=golo4.golongan();
        }
        isgol5
        {
            c+=golo5.golongan();
        }
        //if (a[i]=='s' || a[i] == 'o')
        isgol6
        {
             c+=golo6.golongan();
        }
        isgol7
        {

            c+=golo7.golongan();
        }
        isgol8
        {
            c+=golo8.golongan();
        }
        if (a[i] == 'H' && a[i+1]== 'e')
        {
            Helium he;
            c+=he.golongan();
        }
        else
        {
            if ((a[i]== 'H' && isupper(a[i+1]) ) || (a[i]== 'H' && i==k-1))
            {
                c+=golo1.golongan();
            }
            if ((a[i]== 'K' && isupper(a[i+1]) ) || (a[i]== 'K' && i==k-1))
            {
                c+=golo1.golongan();
            }
            if ((a[i]== 'B' && isupper(a[i+1]) ) || (a[i]== 'B' && i==k-1))
            {
                c+=golo3.golongan();
            }
            if ((a[i]== 'C' && isupper(a[i+1]) ) || (a[i]== 'C' && i==k-1))
            {
                c+=golo4.golongan();
            }
            if ((a[i]== 'N' && isupper(a[i+1]) ) || (a[i]== 'N' && i==k-1))
            {
                c+=golo5.golongan();
            }
            if ((a[i]== 'P' && isupper(a[i+1]) ) || (a[i]== 'P' && i==k-1))
            {
                c+=golo5.golongan();
            }
            if ((a[i]== 'O' && isupper(a[i+1]) ) || (a[i]== 'O' && i==k-1))
            {
                c+=golo6.golongan();
            }
            if ((a[i]== 'S' && isupper(a[i+1]) ) || (a[i]== 'S' && i==k-1))
            {
                c+=golo6.golongan();
            }
            if ((a[i]== 'F' && isupper(a[i+1]) ) || (a[i]== 'F' && i==k-1))
            {
                c+=golo7.golongan();
            }
            if ((a[i]== 'I' && isupper(a[i+1]) ) || (a[i]== 'I' && i==k-1))
            {
                c+=golo7.golongan();
            }
        }
    }
    //cout << c;
    if (c%8==0)
    {
        cout << "senyawa dapat dibentuk / Stabil karena jumlah bilangan oksidasi dapat dibagi 8" << endl;
    }
    else
    {
        cout << "senyawa tidak stabil jumlah elektron = " << c%8 <<endl;
    }
}

int satuhuruf(char b[100])
{
    int k,i=0,j=0;
    char dikurangi[100];
    for (k=0; b[k]; k++)
        {
        }
    for (int i = 0 ; i<k ; i++)
    {
        //with if logic input misal lilik dan klili
        if (b[i]== b[i+1]&& isupper(b[i+2]))
        {

            dikurangi[j]= b[i+1];
            //cout << dikurangi[j]<<endl;
            i++;
        }

        if ((b[i]!=b[i+1])|| islower(b[i+2]))
        {
            dikurangi[j]= b[i];
            dikurangi[j+1]= b[i+1];
            j++;
            //i++;
        }
        }
        //for (int v=0;v<j;v++)
          //  {
            //    cout << dikurangi[v] ;
              //}
    lebihjauh(dikurangi);
}


int duahuruf(char a[100])
{
   int k,i=0,j=0;
    char dikurangi[100];
    for (k=0; a[k]; k++)
{
}
    //need debug
    for (int i = 0 ; i<k ; i++)
    //while(i < k)
    {
        //with if logic input misal lilik dan klili
        if (a[i]== a[i+2] && a[i+1]==a[i+3])
        {

            dikurangi[j]= a[i+2];
            dikurangi[j+1]=a[i+3];
            //cout << dikurangi[j]<<endl;
            i++;
        }

        else //if ((a[i]==a[i+2]) && (a[i+1]!= a[i+3]))
        {
                dikurangi[j]=a[i];
                dikurangi[j+2]=a[i+2];

                dikurangi[j+3] = a[i+3];

                dikurangi[j+1] = a[i+1];
            //cout << dikurangi[j] << endl;
                j++;
            //i++;
        }
}

satuhuruf(dikurangi);
}

int lebihjauh(char a[100])
{
    int k;
    for (k=0; a[k]; k++)
{
}
    for (int i=0;i < k;i++)
    {
        //golongan1
        if ((a[i] == 'H' && isupper(a[i+1])) || (a[i]=='H' && i==k-1))
        {
            up
            hidrogen();
            down

        }
        if (a[i] == 'L' && a[i+1]=='i')
        {
            up
            lithium();
            down

        }

        if (a[i] == 'N' && a[i+1]=='a')
        {
            up
            sodium();
            down

        }

        if ((a[i] == 'K' && isupper(a[i+1])) || (a[i]=='K' && i==k-1))
        {
            up
            potassium();
            down

        }

        if (a[i] == 'R' && a[i+1]=='b')
        {
            up
            rubidium();
            down

        }

        if (a[i] == 'C' && a[i+1]=='s')
        {
            up
            cesium();
            down

        }

        if (a[i] == 'F' && a[i+1]=='r')
        {
            up
            fransium();
            down

        }
        //gol2
        if (a[i] == 'B' && a[i+1]=='e')
        {
            up
            berilium();
            down

        }
        if (a[i] == 'M' && a[i+1]=='g')
        {
            up
            magnesium();
            down

        }
        if (a[i] == 'C' && a[i+1]=='a')
        {
            up
            calsium();
            down

        }
        if (a[i] == 'S' && a[i+1]=='r')
        {
            up
            stronsium();
            down

        }
        if (a[i] == 'B' && a[i+1]=='a')
        {
            up
            barium();
            down

        }
        if (a[i] == 'R' && a[i+1]=='a')
        {
            up
            radium();
            down

        }
        if ((a[i] == 'B' && isupper(a[i+1])) || (a[i] == 'B' && i==k-1) )
        {
            up
            boron();
            down

        }
        if (a[i] == 'A' && a[i+1]=='l')
        {
            up
            aluminium();
            down

        }
        if (a[i] == 'G' && a[i+1]=='a')
        {
            up
            galium();
            down

        }
        if (a[i] == 'I' && a[i+1]=='n')
        {
            up
            indium();
            down

        }
        if (a[i] == 'T' && a[i+1]=='l')
        {
            up
            thalium();
            down

        }
        if ((a[i] == 'C' && isupper(a[i+1])) || (a[i]=='C' && i==k-1))
        {
            up
            karbon();
            down

        }
        if (a[i] == 'S' && a[i+1]=='i')
        {
            up
            silikat();
            down

        }
        if (a[i] == 'G' && a[i+1]=='e')
        {
            up
            germanium();
            down

        }
        if (a[i] == 'S' && a[i+1]=='n')
        {
            up
            tin();
            down

        }
        if (a[i] == 'P' && a[i+1]=='b')
        {
            up
            timbal();
            down

        }
        if ((a[i] == 'N' && isupper(a[i+1])) || (a[i] == 'N' && i==k-1) )
        {
            up
            nitrogen();
            down

        }
        if ((a[i] == 'P' && isupper(a[i+1])) || (a[i] == 'P' && i==k-1) )
        {
            up
            fosfor();
            down

        }
        if (a[i] == 'A' && a[i+1]=='s')
        {
            up
            arsenik();
            down

        }
        if (a[i] == 'S' && a[i+1]=='b')
        {
            up
            antimony();
            down

        }
        if (a[i] == 'B' && a[i+1]=='i')
        {
            up
            bismut();
            down

        }
        if ((a[i] == 'O' && isupper(a[i+1])) || (a[i] == 'O' && i==k-1) )
        {
            up
            oksigen();
            down

        }
        if ((a[i] == 'S' && isupper(a[i+1])) || (a[i] == 'S' && i==k-1) )
        {
            up
            sulfur();
            down

        }
        if (a[i] == 'S' && a[i+1]=='e')
        {
            up
            selenium();
            down

        }
        if (a[i] == 'T' && a[i+1]=='e')
        {
            up
            telurium();
            down

        }
        if (a[i] == 'P' && a[i+1]=='o')
        {
            up
            polonium();
            down

        }
        if ((a[i] == 'F' && isupper(a[i+1])) || (a[i] == 'F' && i==k-1) )
        {
            up
            flourida();
            down

        }
        if (a[i] == 'C' && a[i+1]=='l')
        {
            up
            klorida();
            down

        }
        if (a[i] == 'B' && a[i+1]=='r')
        {
            up
            bromin();
            down

        }
        if ((a[i] == 'I' && isupper(a[i+1])) || (a[i] == 'I' && i==k-1) )
        {
            up
            iodin();
            down

        }
        if (a[i] == 'A' && a[i+1]=='t')
        {
            up
            astatine();
            down

        }
        if (a[i] == 'H' && a[i+1]=='e')
        {
            up
            helium();
            down

        }
        if (a[i] == 'N' && a[i+1]=='e')
        {
            up
            neon();
            down

        }
        if (a[i] == 'A' && a[i+1]=='r')
        {
            up
            argon();
            down

        }
        if (a[i] == 'K' && a[i+1]=='r')
        {
            up
            kripton();
            down

        }
        if (a[i] == 'X' && a[i+1]=='e')
        {
            up
            xenon();
            down

        }
        if (a[i] == 'R' && a[i+1]=='n')
        {
            up
            radon();
            down
        }

        else
        {
        }
    }
}
