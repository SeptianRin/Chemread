#include <iostream>
using namespace std;

class golongan1
{
public :
    int golongan()
    {
        return 1;
    }
    void sifat()
    {
        cout << "tulis disini"<< endl;
    }
    int ttkddh()
    {
        cout << "sangat tinggi" <<endl;
    }

};

class golongan2
{
public :
    int golongan()
    {
        return 2;
    }
    void sifat()
    {
        cout << "tulis disini"<< endl;
    }
    int ttkddh()
    {
        cout << "sangat tinggi" <<endl;
    }

};

class golongan3
{
public :
    int golongan()
    {
        return 3;
    }
    void sifat()
    {
        cout << "tulis disini"<< endl;
    }
    int ttkddh()
    {
        cout << "sangat tinggi" <<endl;
    }

};

class golongan4
{
public :
    int golongan()
    {
        return 4;
    }
    void sifat()
    {
        cout << "tulis disini"<< endl;
    }
    int ttkddh()
    {
        cout << "sangat tinggi" <<endl;
    }

};

class golongan5
{
public :
    int golongan()
    {
        return 5;
    }
    void sifat()
    {
        cout << "tulis disini"<< endl;
    }
    int ttkddh()
    {
        cout << "sangat tinggi" <<endl;
    }

};

class golongan6
{
public :
    int golongan()
    {
        return 6;
    }
    void sifat()
    {
        cout << "tulis disini"<< endl;
    }
    int ttkddh()
    {
        cout << "sangat tinggi" <<endl;
    }

};

class golongan7
{
public :
    int golongan()
    {
        return 7;
    }
    void sifat()
    {
        cout << "tulis disini"<< endl;
    }
    int ttkddh()
    {
        cout << "sangat tinggi" <<endl;
    }

};

class golongan8
{
public :
    int virtual golongan()
    {
        return 8;
    }
    void sifat()
    {
        cout << "tulis disini"<< endl;
    }
    int ttkddh()
    {
        cout << "sangat tinggi" <<endl;
    }

};

//Child dari kelas golongan1 code dibawah sampai batas

class Hidrogen : public golongan1
{
    public:
    int nama()
    {
        cout << "Nama           :(H)Hidrogen"<< endl;
    }
    int ttkddh()
    {
        int didih = -252;
        cout << "Titik Didih    : " <<didih << " derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Berada banyak pada ikatan ikatan senyawa seperti Air (H2O)" << endl;
        cout << "                 "<<endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Untuk membuat pupuk, logam penyulingan, metanol dan bahan dasar plastik" << endl;
        cout << "                 " << endl;
        cout << "                 " << endl;
    }
};


class Lithium : public golongan1
{
    public:
    int nama()
    {
        cout << "Nama           :(Li)Lithium"<< endl;
    }
    int ttkddh()
    {
        int didih = 1342;
        cout << "Titik Didih    : " <<didih << " derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Litium ( Li) dibuat secara elektrolisis cairan LiCl" << endl;
        cout << "                 logam Li diperoleh di katoda dan gas Cl2 diperoleh di anoda "<< endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Digunakan pada proses yang terjadi pada tungku peleburan logam" << endl;
        cout << "                 2.Digunakan dalam sistem ventilasi pesawat dan kapal selam" << endl;
        cout << "                 3.Digunakan pada pembuatan bom hydrogen" << endl;
    }

};

class Sodium : public golongan1
{
    public:
    int nama()
    {
        cout << "Nama           :(Na)Sodium/Natrium"<< endl;
    }
    int ttkddh()
    {
        int didih = 883;
        cout << "Titik Didih    : " <<didih << " derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Logam natrium dibuat dengan cara elektrolisis leburan NaCl yang dicampur CaCl2" << endl;
        cout << "                 yang berguna untuk menurunkan titik leleh/cair dari 800 C menjadi sekitar 500 C. "<< endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Sebagai pendingin pada reaktor nuklir" << endl;
        cout << "                 2.Natrium digunakan pada pengolahan logam-logam tertentu" << endl;
        cout << "                 3.Untuk membuat senyawa natrium seperti Na2O2 (natrium peroksida) dan NaCN (natrium sianida)"<< endl;
    }
};

class Potassium : public golongan1
{
    public:
    int nama()
    {
        cout << "Nama           :(K)Potasium/Kalium"<< endl;
    }
    int ttkddh()
    {
        int didih = 760;
        cout << "Titik Didih    : " << didih << " derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : elektrolisis lelehan KOH , elektrolisis lelehan KCN" << endl;
        cout << "                 reduksi garam kloridanya , dan reduksi KCl dengan natrium"<< endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Kalium Nitrat (KNO3) digunakan dalam pembuatan korek api dan pengawetan daging" << endl;
        cout << "                 2.Kalium Karbonat (K2CO3) digunakan dalam pembuatan kaca dan sabun" << endl;
        cout << "                 3.Kalium hydrogen tartrat (KHC4H4O6) digunakan sebagai pengembang kue dan sebagai obat" << endl;
    }
};

class Rubidium : public golongan1
{
    public:
    int nama()
    {
        cout << "Nama           :(Rb)Rubidium"<< endl;
    }
    int ttkddh()
    {
        int didih = 696;
        cout << "Titik Didih    : " << didih << " derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Logam Rb dibuat dengan cara mereduksi lelehan halide garamnya dengan logam Na." << endl;
        cout << "                 "<< endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Digunakan sebagai katalis pada beberapa reaksi kimia" << endl;
        cout << "                 2.Digunakan sebagai sel fotolistrik" << endl;
        cout << "                 3.Sifat radioaktif rubidium -87 untuk menentukan unsur batuan atau benda-benda lainnya)"<< endl;
    }
};

class Cesium : public golongan1
{
    public:
    int nama()
    {
        cout << "Nama           :(Cs)Sesium"<< endl;
    }
    int ttkddh()
    {
        int didih = 1217;
        cout << "Titik Didih    : " << didih << " derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Logam Cs dibuat dengan cara mereduksi lelehan halide garamnya dengan logam Na" << endl;
        cout << "                 "<< endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Digunakan untuk menghilangkan sisa oksigen dalam tabung hampa" << endl;
        cout << "                 2.Sesium digunakan sebagai keping katoda photosensitive pada sel fotolistrik" << endl;
        cout << "                 "<< endl;
    }
};

class Fransium : public golongan1
{
    public:
    int nama()
    {
        cout << "Nama           :(Fr)Fransium"<< endl;
    }
    int ttkddh()
    {
        int didih = 676;
        cout << "Titik Didih    : " << didih << " derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Belum diketahui" << endl;
        cout << "                 " << endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : Belum diketahui" << endl;
        cout << "                 " << endl;
        cout << "                 "<< endl;
    }
};
//batas golongan1 ()

//Child dari kelas golongan2 code dibawah sampai batas

class Berilium : public golongan2
{
    public:
    int nama()
    {
        cout << "Nama           :(Be)Berilium"<< endl;
    }
    int ttkddh()
    {
        int didih = 2469;
        cout << "Titik Didih    : " << didih << " derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Elektrolisis campuran lelehan BeCl2dan NaCl , menggunakan Mg pada suhu 300˚C  " << endl;
        cout << "                 Be dibuat dengan memanaskan BeF2" << endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Berilium digunakan sebagai agen aloy di dalam pembuatan tembaga berilium" << endl;
        cout << "                 2.Alloy tembaga-berilium digunakan dalam industri angkasa-antariksa dan pertahanan" << endl;
        cout << "                 " << endl;
    }
};

class Magnesium : public golongan2
{
    public:
    int nama()
    {
        cout << "Nama           :(Mg)Magnesium"<< endl;
    }
    int ttkddh()
    {
        int didih = 1090;
        cout << "Titik Didih    : " << didih << " derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Dari MgCl2 Ion yang berasal dari air laut ditambahkan kapur  dipisahkan dari air dengan cara disaring." << endl;
        cout << "                 sehingga membentuk Mg2 + Ca(OH)2 => Mg(OH)2 + Ca2 + Mg(OH)2 Lalu ditambah HCl dan kemudian dielektrolisis " << endl;
        cout << "                 hingga diperoleh logam Mg dengan kemurnian 99,9% Mg(OH)2  +  2HCl => MgCl2 + 2H2O" << endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Paduan Magnesium dan Aluminium digunakan untuk membuat komponen pesawat tebang, rudal bak truk," << endl;
        cout << "                 2.Pembakaran magnesium menghasilkan cahaya yang sangat terang untuk membuat kembang api" << endl;
        cout << "                 "<< endl;
    }
};

class Calcium : public golongan2
{
    public:
    int nama()
    {
        cout << "Nama           :(Ca)Kalsium"<< endl;
    }
    int ttkddh()
    {
        int didih = 1484;
        cout << "Titik Didih    : " << didih << " derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Kalsium ini hanya dibuat dalam skala kecil dan diperoleh dari hasil reduksi halidanya dengan logam Na" << endl;
        cout << "                 Dalam skala kecil kalsium dapat dibuat melalui reduksi dari CaO dengan alumunium " << endl;
        cout << "                 " << endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Kalsium digunakan sebagaianti beku, larutan pendingin, pemadam kebakaran, pengawet kayu, membuates, lem," << endl;
        cout << "                   semen, pabrik tahan api, penggumpal karet, pembuat mortar, plester pendingain,farmasi." << endl;
        cout << "                 "<< endl;
    }
};

class Stronsium : public golongan2
{
    public:
    int nama()
    {
        cout << "Nama           :(Sr)Stronsium"<< endl;
    }
    int ttkddh()
    {
        int didih = 1382;
        cout << "Titik Didih    : " << didih << " derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Stronsium dibuat dalam skala kecil dengan elektrolisis leburan strontium chloride, SrCl2" << endl;
        cout << "                 Sr juga dapat diisolasi dari reduksi SrO dengan Alumunium " << endl;
        cout << "                 " << endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Strontium digunakan dalam produksi gelas kaca untuk tabung TV berwarna." << endl;
        cout << "                 2.Strontium juga digunakan dalam memproduksi magnet ferrite dan dalam penyulingan seng. ." << endl;
        cout << "                 "<< endl;
    }
};

class Barium : public golongan2
{
    public:
    int nama()
    {
        cout << "Nama           :(Ba)Barium"<< endl;
    }
    int ttkddh()
    {
        int didih = 1897;
        cout << "Titik Didih    : " << didih << " derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Barium dibuat dalam skala kecil dengan elektrolisis leburan barium klorida" << endl;
        cout << "                 Barium juga dapat diperoleh dari reduksi BaO dengan Al " << endl;
        cout << "                 " << endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Pembuat kertas foto, pengisi untuk karet " << endl;
        cout << "                 2.Untuk diagnosa dengan sinar X dipakai barium sulfat extra pure." << endl;
        cout << "                 "<< endl;
    }
};

class Radium : public golongan2
{
    public:
    int nama()
    {
        cout << "Nama           :(Ra)Radium"<< endl;
    }
    int ttkddh()
    {
        int didih = 1140;
        cout << "Titik Didih    : " << didih << " derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Dari Pemurnian biji uranium" << endl;
        cout << "                 " << endl;
        cout << "                 " << endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Untuk Terapi kanker " << endl;
        cout << "                 " << endl;
        cout << "                 "<< endl;
    }
};

//batas golongan2 ()

//Child dari kelas golongan3 code dibawah sampai batas

class Boron : public golongan3
{
    public:
    int nama()
    {
        cout << "Nama           :(B)Boron"<< endl;
    }
    int ttkddh()
    {
        int didih = 3927;
        cout << "Titik Didih    : " << didih << " derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Boron tidak terlalu banyak di produksi karena telah dapat diperoleh secara komersial." << endl;
        cout << "                 BSecara umum, boron berasal dari tourmaline, borax dan kertine" << endl;
        cout << "                 " << endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Na2B4O75H2O. senyawa ini digunakan dalam jumlah yang banyak dalam pembuatan serat gelas " << endl;
        cout << "                 2.Asam borik juga merupakan senyawa boron yang penting dan digunakan dalam produk tekstil" << endl;
        cout << "                 "<< endl;
    }
};
class Aluminium : public golongan3
{
public:
    int nama()
    {
        cout << "Nama           :(Al)Aluminium"<< endl;
    }
    int ttkddh()
    {
        int didih = 2519;
        cout << "Titik Didih    : " << didih << " derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Proses Pemurnian AluminiumPengolahan aluminium menjadi aluminium murni" << endl;
        cout << "                 dapat dilakukan melalui Proses pemurnian dengan metode Bayer.Didapat dari proses Hall-Heroult," << endl;
        cout << "                 aluminum oksida Al2O3 dilarutkan dalam lelehan kriolit (Na3AlF6)" << endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Bahan pembuatan pesawat terbang, pembangunan perumahan, industri makanan" << endl;
        cout << "                   , otomotif, bahan baku industri, membuat termit, tawas, dll " << endl;
        cout << "                 "<< endl;
    }
};

class Galium : public golongan3
{
    public:
    int nama()
    {
        cout << "Nama           :(Ga)Galium"<< endl;
    }
    int ttkddh()
    {
        int didih = 2204;
        cout << "Titik Didih    : " << didih << " derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Galium biasanya adalah hasil dari proses pembuatan aluminium. " << endl;
        cout << "                 Pemurnian bauksit melalui proses Bayer menghasilkan konsentrasi " << endl;
        cout << "                 galium pada larutan alkali dari sebuah aluminium" << endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Galium arsenide dapat mengubah aliran listrik menjadi cahaya " << endl;
        cout << "                 2.Galium membasahi gelas atau porselen dan membentuk kaca yang menakjubkan jika dicat pada gelas." << endl;
        cout << "                 3.Galium banyak digunakan sebagai bahan doping untuk semikonduktor dan transistor."<< endl;
    }
};

class Indium : public golongan3
{
    public:
    int nama()
    {
        cout << "Nama           :(In)Indium"<< endl;
    }
    int ttkddh()
    {
        int didih = 2072;
        cout << "Titik Didih    : " << didih << " derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Indium adalah hasil dari pembentukan timbal dan seng." << endl;
        cout << "                 Logam indium dihasilkan melalui proses elektrolisis garam indium di dalam air. " << endl;
        cout << "                 " << endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Indium digunakan untuk membuat komponen elektronik lainnya thermistor dan fotokonduktor " << endl;
        cout << "                 2.Indium digunakan untuk mendorong germanium untuk membuat transistor." << endl;
        cout << "                 3.Indium dalam jumlah kecil digunakan pada peralatan yang berhubungan dengan gigi."<< endl;
    }
};

class Thalium : public golongan3
{
    public:
    int nama()
    {
        cout << "Nama           :(Ti)Talium"<< endl;
    }
    int ttkddh()
    {
        int didih = 1473;
        cout << "Titik Didih    : " << didih << " derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Logam thalium diperoleh sebagai produk pada produksi asam belerang " << endl;
        cout << "                 dengan pembakaran pyrite dan juga pada peleburan timbal dan bijih besi. " << endl;
        cout << "                 Sumber utama thalium ditemukan pada tembaga, timbal, seng dan bijih sulfida lainnya." << endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Talium sulfat banyak digunakan sebagai pembasmi tikus. Sekarang dilarang  " << endl;
        cout << "                 2.Kristal talium bromida-iodida telah digunakan sebagai bahan optik." << endl;
        cout << "                 "<< endl;
    }
};

//batas golongan3

//Child dari kelas golongan4 code dibawah sampai batas

class Karbon : public golongan4
{
    public:
    int nama()
    {
        cout << "Nama           :(C)Karbon"<< endl;
    }
    int ttkddh()
    {
        int didih = 4826;
        cout << "Titik Didih    : " << didih << "   derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Karbon dapat dibuat dengan proses yang disebut dengan karbonisasi" << endl;
        cout << "                 yakni pemanasan bahan yang mengandung karbon  " << endl;
        cout << "                 " << endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Grafit (pelumas, pensil, anodedalam batu baterai dan pada proses elektrolisis)" << endl;
        cout << "                 2.Arang aktif (mengusir uap yg berbahaya dalam udara" << endl;
        cout << "                 "<< endl;
    }
};

class Silikat : public golongan4
{
    public:
    int nama()
    {
        cout << "Nama           :(C)Karbon"<< endl;
    }
    int ttkddh()
    {
        int didih = 2358;
        cout << "Titik Didih    : " << didih << "   derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Silikon (Si) dipeeoleh dlm pembentukan komersial biasa dengan reduksi SiO2 dengan karbon " << endl;
        cout << "                 atau CaC2 dalam tungku pemanas listrik utuk memperoleh kemurnian yang sangat tinggi " << endl;
        cout << "                 " << endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.digunakan sebagai bahan baku pada kalkulator, transistor, chips komputer dan baterai solar "<< endl;
        cout <<"                  " << endl;
        cout << "                 "<< endl;
    }
};

class Germanium : public golongan4
{
    public:
    int nama()
    {
        cout << "Nama           :(Ge)Germanium"<< endl;
    }
    int ttkddh()
    {
        int didih = 2833;
        cout << "Titik Didih    : " << didih << "   derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Germanium diperoleh dari batu bara dan batuan seng pekat. " << endl;
        cout << "                 Unsur ini lebih reaktif daripada silikon, dan dapat larut dalam HNO3 dan H2SO4 " << endl;
        cout << "                 " << endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Kegunaan umum germanium adalah sebagai bahan semikonduktor. " << endl;
        cout << "                 2.Germanium digunakan dalam spekstroskopi inframerah dan barang-barang optik lainnya" << endl;
        cout << "                 3.sebagai bahan pencampur logam, sebagai fosfor di bola lampu pijar dan sebagai katalis"<< endl;
    }
};

class Tin : public golongan4
{
    public:
    int nama()
    {
        cout << "Nama           :(Sn)Timah/Tin"<< endl;
    }
    int ttkddh()
    {
        int didih = 2602;
        cout << "Titik Didih    : " << didih << "   derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Timah didapat dari elektrolisis SnO2 " << endl;
        cout << "                 " << endl;
        cout << "                 " << endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Sebagai kaleng untuk menyimpan barang " << endl;
        cout << "                 2.Sebagai perekat pada PCB (Timah Solder)" << endl;
        cout << "                 "<< endl;
    }
};

class Timbal : public golongan4
{
    public:
    int nama()
    {
        cout << "Nama           :(Pb)Timbal"<< endl;
    }
    int ttkddh()
    {
        int didih = 1736;
        cout << "Titik Didih    : " << didih << "   derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Timbal didapat dari pemanggangan galena membentuk oksida timbal kemudian direduksi " << endl;
        cout << "                 " << endl;
        cout << "                 " << endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Bahan pengisi baterai dan pelapis kabel" << endl;
        cout << "                 2.Pelindung bahan radioaktif" << endl;
        cout << "                 "<< endl;
    }
};

//batas golongan4

//Child dari kelas golongan5 code dibawah sampai batas

class Nitrogen : public golongan5
{
    public:
    int nama()
    {
        cout << "Nama           :(Pb)Timbal"<< endl;
    }
    int ttkddh()
    {
        int didih = -196;
        cout << "Titik Didih    : " << didih << "   derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : memanaskan larutan yang mengandung garam amonium dan garam nitrit " << endl;
        cout << "                 NH3 dibuat dengan cara Haber-Bosch (mereaksikan nitrogen dengan hidrogen)" << endl;
        cout << "                 " << endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.digunakan dalam pembuatan gas amonia (NH3) dari udara." << endl;
        cout << "                  gas nitrogen cair digunakan sebagai bana pembeku dalam industri pengolahan makanan." << endl;
        cout << "                 "<< endl;
    }
};

class Fosfor : public golongan4
{
    public:
  int nama()
    {
        cout << "Nama           :(P)Fosfor"<< endl;
    }
    int ttkddh()
    {
        int didih = 277;
        cout << "Titik Didih    : " << didih << "   derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Fosfor dapat diperoleh melalui reaksi batuan fosfor dari " << endl;
        cout << "                  batu bara dan pasir dalam suatu pembakaran listrik" << endl;
        cout << "                 " << endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Fosfor sangat penting dan dibutuhkan oleh mahluk hidup yaitu Asam Dioksiribo nukleat (DNA) dan Asam Ribonukleat (ARN)" << endl;
        cout << "                 2.Kegunaan fosfor yang terpenting adalah dalam pembuatan pupuk, bahan korek api,  kembang api, pestisida, odol, dan deterjen." << endl;
        cout << "                 "<< endl;
    }
};

class Arsenik : public golongan5
{
    public:
    int nama()
    {
        cout << "Nama           :(As)Arsenik"<< endl;
    }
    int ttkddh()
    {
        int didih = 1586;
        cout << "Titik Didih    : " << didih << "   derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Arsen biasanya dibuat dari senyawa FeAsS dan dipanaskan pada suhu 700°C " << endl;
        cout << "                 " << endl;
        cout << "                 " << endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Arsen terutama digunakan sebagai racun tikus, dalam ilmu kesehatan untuk membunuh parasit." << endl;
        cout << "                 2.Arsen digunakan dalam pembuatan perunggu dan kembang api" << endl;
        cout << "                 "<< endl;
    }
};

class Antimony : public golongan5
{
    public:
    int nama()
    {
        cout << "Nama           :(Sb)Antimon/Stibium"<< endl;
    }
    int ttkddh()
    {
        int didih = 1586;
        cout << "Titik Didih    : " << didih << "   derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Bijih utama antimony (stibium) yaitu stibnite Sb2S3 yang banyak dijumpai dijumpai di Mexico, Bolivia " << endl;
        cout << "                 , Afrika Selatan dan Cina. Dijumpai juga valentinit (Sb2O3) yang dikenal sebagai stibium putih)" << endl;
        cout << "                 " << endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Antimon digunakan di teknologi semikonduktor untuk membuat detektor inframerah," << endl;
        cout << "                   dioda dan peralatan Hall-effect." << endl;
        cout << "                 "<< endl;
    }
};

class Bismut : public golongan5
{
    public:
    int nama()
    {
        cout << "Nama           :(Bi)Bismuth"<< endl;
    }
    int ttkddh()
    {
        int didih = 271;
        cout << "Titik Didih    : " << didih << "   derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Bismut dapat diperoleh dari bijih dengan proses yang sederhana yaitu" << endl;
        cout << "                 dipanggang untuk memperoleh oksidasinya Bi2O3 kemudian direduksi dengan karbon atau dengan H2." << endl;
        cout << "                 " << endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Bismutsubnitrate dan subcarbonate digunakan dalam bidang obat-obatan." << endl;
        cout << "                 2.Magnet permanen yang kuat bisa dibuat dari campuran bismanol(MnBi)dan diproduksi oleh US NSWC." << endl;
        cout << "                 3.Bismut digunakan dalam produksi besi lunak"<< endl;
    }
};

//batas golongan5

//Child dari kelas golongan6 code dibawah sampai batas


class Oksigen : public golongan6
{
    public:
    int nama()
    {
        cout << "Nama           :(O)Oksigen"<< endl;
    }
    int ttkddh()
    {
        int didih = -182;
        cout << "Titik Didih    : " << didih << "   derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Oksigen dibuat secara industri dengan cara sulingan bertingkat udara cair dan elektrolisis air. " << endl;
        cout << "                 Pemanasan campuran MnO2 dan H2SO, pemanasan HgO, pemanasan KCl3,." << endl;
        cout << "                 " << endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Pernapasan MH, proses pembakaran/oksidator, sebagai oksidator untuk membuat senyawa-senyawa kimia" << endl;
        cout << "                 2.Oksigen cair digunakan sebagai bahan bakar roket." << endl;
        cout << "                 "<< endl;
    }
};

class Sulfur : public golongan6
{
    public:
    int nama()
    {
        cout << "Nama           :(S)Sulfur"<< endl;
    }
    int ttkddh()
    {
        int didih = 443;
        cout << "Titik Didih    : " << didih << "   derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Dari batu yang mengandung belerang. Caranya, batuan dipanaskan hingga belerang melebur " << endl;
        cout << "                 dan terpisah dari batuan, selanjutnya belerang dimurnikan dengan cara sublimasi. " << endl;
        cout << "                 " << endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Belerang juga digunakanuntuk pembuatan kertas sulfit dan kertas lainnya," << endl;
        cout << "                   untuk mensterilkan alat pengasap, dan untuk memutihkan buah kering." << endl;
        cout << "                 "<< endl;
    }
};


class Selenium : public golongan6
{
    public:
    int nama()
    {
        cout << "Nama           :(Se)Selenium"<< endl;
    }
    int ttkddh()
    {
        int didih = 684;
        cout << "Titik Didih    : " << didih << "   derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Selenium elemental datang sebagai produk sampingan dari pemurnian tembaga " << endl;
        cout << "                 " << endl;
        cout << "                 " << endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Selenium digunakan dalam xerografi untuk memperbanyak salinan dokumen, surat dan lain-lain." << endl;
        cout << "                 2.Digunakan oleh industri kaca untuk mengawawarnakan kaca dan untuk membuat kaca " << endl;
        cout << "                 "<< endl;
    }
};

class Telurium : public golongan6
{
    public:
    int nama()
    {
        cout << "Nama           :(Te)Telurium"<< endl;
    }
    int ttkddh()
    {
        int didih = 962;
        cout << "Titik Didih    : " << didih << "   derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Sumber utama telurium adalah dari lumpur anoda dihasilkan  " << endl;
        cout << "                 selama pemurnian secara elektrolisis tembaga dari lecet." << endl;
        cout << "                 " << endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Senyawa selenium dan telurium digunakan sebagai aditif untuk mengontrol warna kaca. " << endl;
        cout << "                 " << endl;
        cout << "                 "<< endl;
    }
};

class Polonium : public golongan6
{
    public:
    int nama()
    {
        cout << "Nama           :(Po)Polonium"<< endl;
    }
    int ttkddh()
    {
        int didih = 962;
        cout << "Titik Didih    : " << didih << "   derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Didapat dari pemurnian biji uranium dan garam radium  " << endl;
        cout << "                 " << endl;
        cout << "                 " << endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Polonium sebagai sumber energi termoelektrik pada satelit angkasa " << endl;
        cout << "                 " << endl;
        cout << "                 "<< endl;
    }
};
//batas golongan6

//Child dari kelas golongan7 code dibawah sampai batas
class Flourida : public golongan7
{
    public:
    int nama()
    {
        cout << "Nama           :(F)Flourida"<< endl;
    }
    int ttkddh()
    {
        int didih = -188;
        cout << "Titik Didih    : " << didih << "   derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Gas fluor dapat dibuat dengan cara elektrolisis dari leburan (KF), dan (HF) " << endl;
        cout << "                 untuk memperoleh fluor cair dapat dilakukan dengan cara melewatkan gas fluor" << endl;
        cout << "                 melalui sebuah tabung logam atau karet yang dikelilingi oleh udara cair" << endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Senyawa klorofluorokarbon atau yang lebih dikenal dengan nama Freon ini digunakan untuk AC " << endl;
        cout << "                 " << endl;
        cout << "                 "<< endl;
    }
};

class Klorida : public golongan7
{
    public:
    int nama()
    {
        cout << "Nama           :(Cl)Klorida"<< endl;
    }
    int ttkddh()
    {
        int didih = -35;
        cout << "Titik Didih    : " << didih << "   derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Secara komersil klorin dibuat dengan mengelektrolisis larutan natrium klorida pekat " << endl;
        cout << "                 dengan menggunakan elektroda inert dan menggunakan diafragma" << endl;
        cout << "                 " << endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Klor digunakan untuk menghasilkan air minum yang aman hampir di seluruh dunia " << endl;
        cout << "                 2.Klor juga digunakan secara besar-besaran pada proses pembuatan kertas, zat pewarna," << endl;
        cout << "                 "<< endl;
    }
};

class Bromin : public golongan7
{
    public:
    int nama()
    {
        cout << "Nama           :(Br)Bromida"<< endl;
    }
    int ttkddh()
    {
        int didih = 59;
        cout << "Titik Didih    : " << didih << "   derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Br2 dalam air dapat mengalami hidrolisis sesusai reaksi. " << endl;
        cout << "                 Br2 + H2O 2 H+ => + Br- + BrO- Untuk mencegah hidrolissi," << endl;
        cout << "                 kesetimbangan akan digeser ke kiri dengan penambahan H+" << endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Untuk membuat etil bromida (C2H4Br2). " << endl;
        cout << "                 2.Untuk pembuatan senyawa organik misalnya zat warna, obat-obatan dan pestisida" << endl;
        cout << "                 "<< endl;
    }
};

class Iodin : public golongan7
{
    public:
    int nama()
    {
        cout << "Nama           :(I)Iodida"<< endl;
    }
    int ttkddh()
    {
        int didih = 184;
        cout << "Titik Didih    : " << didih << "   derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Timbang dengan seksama sebanyak 12,90 gram Iodium ( I2 ) +  " << endl;
        cout << "                 18,00 gram Kalium Iodida ( KI ) lalu larutkan dengan 200 ml air. " << endl;
        cout << "                 " << endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Mencegah penyakit gondok,sebagai obat antiseptic, mencegah kretinisme " << endl;
        cout << "                 2.Sebagai identifikasi adanya kandungan lemak/minyak pada sampel" << endl;
        cout << "                 "<< endl;
    }
};

class Astatine : public golongan7
{
    public:
    int nama()
    {
        cout << "Nama           :(At)Astatine"<< endl;
    }
    int ttkddh()
    {
        int didih = 337;
        cout << "Titik Didih    : " << didih << "   derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Terbentuk secara alami melalui peluruhan uranium-235 and uranium-238 " << endl;
        cout << "                  " << endl;
        cout << "                 " << endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Astatine-211 adalah suatu emiter alfa dengan umur-paruh yang secara fisik 72 jam. " << endl;
        cout << "                 2.Hal ini sudah dimanfaatkan penggunaannya di dalam radiasi therapy" << endl;
        cout << "                 "<< endl;
    }
};
//batas golongan7

//Child dari kelas golongan8 code dibawah sampai batas

class Helium : public golongan8
{
    public:
    int nama()
    {
        cout << "Nama           :(He)Helium"<< endl;
    }
    int ttkddh()
    {
        int didih = -268;
        cout << "Titik Didih    : " << didih << "   derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Helium (He) ditemukan terdapat dalam gas alam di Amerika Serikat. " << endl;
        cout << "                  " << endl;
        cout << "                 " << endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Helium dapat digunakan sebagai pengisi balon udara " << endl;
        cout << "                 2.Helium cair digunakan sebagai zat pendingin karena memiliki titik uap yang sangat rendah" << endl;
        cout << "                 "<< endl;
    }
    virtual golongan()
    {
        return 2;
    }

};

class Neon : public golongan8
{
    public:
    int nama()
    {
        cout << "Nama           :(Ne)Neon"<< endl;
    }
    int ttkddh()
    {
        int didih = -245;
        cout << "Titik Didih    : " << didih << "   derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Neon di industri diperoleh sebagai hasil samping dalam industri pembuatan  " << endl;
        cout << "                 gas nitrogen dan gas oksigen dengan proses destilasi udara cair." << endl;
        cout << "                 " << endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Neon dapat digunakan untuk pengisi bola lampu neon " << endl;
        cout << "                 2.Neon digunakan juga sebagai zat pendingin, indicator tegangan tinggi, dan penangkal petir" << endl;
        cout << "                 "<< endl;
    }
};

class Argon : public golongan8
{
    public:
    int nama()
    {
        cout << "Nama           :(Ar)Argon"<< endl;
    }
    int ttkddh()
    {
        int didih = -185;
        cout << "Titik Didih    : " << didih << "   derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Argon di industri diperoleh sebagai hasil samping dalam industri pembuatan  " << endl;
        cout << "                 gas nitrogen dan gas oksigen dengan proses destilasi udara cair." << endl;
        cout << "                 " << endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Argon digunakan dalam las titanium pada pembuatan pesawat terbang atau roket." << endl;
        cout << "                 2.Argon juga digunakan dalam las stainless steel dan sebagai pengisi bola lampu pijar" << endl;
        cout << "                 "<< endl;
    }
};

class Kripton : public golongan8
{
    public:
    int nama()
    {
        cout << "Nama           :(Kr)Kripton"<< endl;
    }
    int ttkddh()
    {
        int didih = -153;
        cout << "Titik Didih    : " << didih << "   derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Kripton di industri diperoleh sebagai hasil samping dalam industri pembuatan  " << endl;
        cout << "                 gas nitrogen dan gas oksigen dengan proses destilasi udara cair." << endl;
        cout << "                 " << endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Kripton bersama argon digunakan sebagai pengisi lampu fluoresen bertekanan rendah. " << endl;
        cout << "                 2.Krypton juga digunakan dalam lampu kilat untuk fotografi kecepatan tinggi." << endl;
        cout << "                 "<< endl;
    }
};

class Xenon : public golongan8
{
    public:
    int nama()
    {
        cout << "Nama           :(Xe)Xenon"<< endl;
    }
    int ttkddh()
    {
        int didih = -108;
        cout << "Titik Didih    : " << didih << "   derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Xenon di industri diperoleh sebagai hasil samping dalam industri pembuatan  " << endl;
        cout << "                 gas nitrogen dan gas oksigen dengan proses destilasi udara cair." << endl;
        cout << "                 " << endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Xenon dapat digunakan dalam pembuatan lampu untuk bakterisida (pembunuh bakteri). " << endl;
        cout << "                 2.Xenon juga digunakan dalam pembuatan tabung elektron." << endl;
        cout << "                 "<< endl;
    }
};

class Radon : public golongan8
{
    public:
    int nama()
    {
        cout << "Nama           :(Rn)Radon"<< endl;
    }
    int ttkddh()
    {
        int didih = -108;
        cout << "Titik Didih    : " << didih << "   derajat celcius"<<endl;

    }
    int pembuatan()
    {
        cout << "Cara Pembuatan : Radon di industri diperoleh sebagai hasil samping dalam industri pembuatan  " << endl;
        cout << "                 gas nitrogen dan gas oksigen dengan proses destilasi udara cair." << endl;
        cout << "                 " << endl;
    }
    int manfaat()
    {
        cout << "Manfaat        : 1.Radon yang bersifat radioaktif digunakan dalam terapi kanker.  " << endl;
        cout << "                 " << endl;
        cout << "                 "<< endl;
    }
};
//batas golongan8


int hidrogen()
{
    Hidrogen h;
    h.nama();
    cout << "Valensi        : " <<h.golongan()<< endl;
    h.sifat();
    h.ttkddh();
    h.pembuatan();
    h.manfaat();
}

int lithium()
{
    Lithium li;
    li.nama();
    cout << "Valensi        : " <<li.golongan()<< endl;
    li.sifat();
    li.ttkddh();
    li.pembuatan();
    li.manfaat();
}

int sodium()
{
    Sodium na;
    na.nama();
    cout << "Valensi        : " <<na.golongan()<< endl;
    na.sifat();
    na.ttkddh();
    na.pembuatan();
    na.manfaat();
}

int potassium()
{
    Potassium k;
    k.nama();
    cout << "Valensi        : " <<k.golongan()<< endl;
    k.sifat();
    k.ttkddh();
    k.pembuatan();
    k.manfaat();
}

int rubidium()
{
    Rubidium rb;
    rb.nama();
    cout << "Valensi        : " <<rb.golongan()<< endl;
    rb.sifat();
    rb.ttkddh();
    rb.pembuatan();
    rb.manfaat();
}

int cesium()
{
    Cesium cs;
    cs.nama();
    cout << "Valensi        : " <<cs.golongan()<< endl;
    cs.sifat();
    cs.ttkddh();
    cs.pembuatan();
    cs.manfaat();
}

int fransium()
{
    Fransium fr;
    fr.nama();
    cout << "Valensi        : " <<fr.golongan()<< endl;
    fr.sifat();
    fr.ttkddh();
    fr.pembuatan();
    fr.manfaat();
}

int berilium()
{
    Berilium be;
    be.nama();
    cout << "Valensi        : " <<be.golongan()<< endl;
    be.sifat();
    be.ttkddh();
    be.pembuatan();
    be.manfaat();
}

int magnesium()
{
    Magnesium mg;
    mg.nama();
    cout << "Valensi        : " <<mg.golongan()<< endl;
    mg.sifat();
    mg.ttkddh();
    mg.pembuatan();
    mg.manfaat();
}

int calsium()
{
    Calcium ca;
    ca.nama();
    cout << "Valensi        : " <<ca.golongan()<< endl;
    ca.sifat();
    ca.ttkddh();
    ca.pembuatan();
    ca.manfaat();
}

int stronsium()
{
    Stronsium sr;
    sr.nama();
    cout << "Valensi        : " <<sr.golongan()<< endl;
    sr.sifat();
    sr.ttkddh();
    sr.pembuatan();
    sr.manfaat();
}

int barium()
{
    Barium ba;
    ba.nama();
    cout << "Valensi        : " <<ba.golongan()<< endl;
    ba.sifat();
    ba.ttkddh();
    ba.pembuatan();
    ba.manfaat();
}

int radium()
{
    Radium ra;
    ra.nama();
    cout << "Valensi        : " <<ra.golongan()<< endl;
    ra.sifat();
    ra.ttkddh();
    ra.pembuatan();
    ra.manfaat();
}
int boron()
{
    Boron b;
    b.nama();
    cout << "Valensi        : " <<b.golongan()<< endl;
    b.sifat();
    b.ttkddh();
    b.pembuatan();
    b.manfaat();
}

int aluminium()
{
    Aluminium al;
    al.nama();
    cout << "Valensi        : " <<al.golongan()<< endl;
    al.sifat();
    al.ttkddh();
    al.pembuatan();
    al.manfaat();
}
int galium()
{
    Galium ga;
    ga.nama();
    cout << "Valensi        : " <<ga.golongan()<< endl;
    ga.sifat();
    ga.ttkddh();
    ga.pembuatan();
    ga.manfaat();
}
int indium()
{
    Indium in;
    in.nama();
    cout << "Valensi        : " <<in.golongan()<< endl;
    in.sifat();
    in.ttkddh();
    in.pembuatan();
    in.manfaat();

}
int thalium()
{
    Thalium tl;
    tl.nama();
    cout << "Valensi        : " <<tl.golongan()<< endl;
    tl.sifat();
    tl.ttkddh();
    tl.pembuatan();
    tl.manfaat();
}
int karbon()
{
    Karbon c;
    c.nama();
    cout << "Valensi        : " <<c.golongan()<< endl;
    c.sifat();
    c.ttkddh();
    c.pembuatan();
    c.manfaat();
}
int silikat()
{
    Silikat si;
    si.nama();
    cout << "Valensi        : " <<si.golongan()<< endl;
    si.sifat();
    si.ttkddh();
    si.pembuatan();
    si.manfaat();
}
int germanium()
{
    Germanium ge;
    ge.nama();
    cout << "Valensi        : " <<ge.golongan()<< endl;
    ge.sifat();
    ge.ttkddh();
    ge.pembuatan();
    ge.manfaat();
}
int tin()
{
    Tin sn;
    sn.nama();
    cout << "Valensi        : " <<sn.golongan()<< endl;
    sn.sifat();
    sn.ttkddh();
    sn.pembuatan();
    sn.manfaat();
}
int timbal()
{
    Timbal pb;
    pb.nama();
    cout << "Valensi        : " <<pb.golongan()<< endl;
    pb.sifat();
    pb.ttkddh();
    pb.pembuatan();
    pb.manfaat();
}
int nitrogen()
{
    Nitrogen n;
    n.nama();
    cout << "Valensi        : " <<n.golongan()<< endl;
    n.sifat();
    n.ttkddh();
    n.pembuatan();
    n.manfaat();
}
int fosfor()
{
    Fosfor p;
    p.nama();
    cout << "Valensi        : " <<p.golongan()<< endl;
    p.sifat();
    p.ttkddh();
    p.pembuatan();
    p.manfaat();
}
int arsenik()
{
    Arsenik as;
    as.nama();
    cout << "Valensi        : " <<as.golongan()<< endl;
    as.sifat();
    as.ttkddh();
    as.pembuatan();
    as.manfaat();
}
int antimony()
{
    Antimony sb;
    sb.nama();
    cout << "Valensi        : " <<sb.golongan()<< endl;
    sb.sifat();
    sb.ttkddh();
    sb.pembuatan();
    sb.manfaat();
}
int bismut()
{
    Bismut bi;
    bi.nama();
    cout << "Valensi        : " <<bi.golongan()<< endl;
    bi.sifat();
    bi.ttkddh();
    bi.pembuatan();
    bi.manfaat();
}
int oksigen()
{
    Oksigen o;
    o.nama();
    cout << "Valensi        : " <<o.golongan()<< endl;
    o.sifat();
    o.ttkddh();
    o.pembuatan();
    o.manfaat();
}
int sulfur()
{
    Sulfur s;
    s.nama();
    cout << "Valensi        : " <<s.golongan()<< endl;
    s.sifat();
    s.ttkddh();
    s.pembuatan();
    s.manfaat();
}
int selenium()
{
    Selenium se;
    se.nama();
    cout << "Valensi        : " <<se.golongan()<< endl;
    se.sifat();
    se.ttkddh();
    se.pembuatan();
    se.manfaat();
}
int telurium()
{
    Telurium te;
    te.nama();
    cout << "Valensi        : " <<te.golongan()<< endl;
    te.sifat();
    te.ttkddh();
    te.pembuatan();
    te.manfaat();
}
int polonium()
{
    Polonium po;
    po.nama();
    cout << "Valensi        : " <<po.golongan()<< endl;
    po.sifat();
    po.ttkddh();
    po.pembuatan();
    po.manfaat();
}
int flourida()
{
    Flourida f;
    f.nama();
    cout << "Valensi        : " <<f.golongan()<< endl;
    f.sifat();
    f.ttkddh();
    f.pembuatan();
    f.manfaat();
}
int klorida()
{
    Klorida cl;
    cl.nama();
    cout << "Valensi        : " <<cl.golongan()<< endl;
    cl.sifat();
    cl.ttkddh();
    cl.pembuatan();
    cl.manfaat();
}
int bromin()
{
    Bromin br;
    br.nama();
    cout << "Valensi        : " <<br.golongan()<< endl;
    br.sifat();
    br.ttkddh();
    br.pembuatan();
    br.manfaat();
}
int iodin()
{
    Iodin i;
    i.nama();
    cout << "Valensi        : " <<i.golongan()<< endl;
    i.sifat();
    i.ttkddh();
    i.pembuatan();
    i.manfaat();
}
int astatine()
{
    Astatine At;
    At.nama();
    cout << "Valensi        : " <<At.golongan()<< endl;
    At.sifat();
    At.ttkddh();
    At.pembuatan();
    At.manfaat();
}
int helium()
{
    Helium he;
    he.nama();
    cout << "Valensi        : " <<he.golongan()<< endl;
    he.sifat();
    he.ttkddh();
    he.pembuatan();
    he.manfaat();
}
int neon()
{
    Neon ne;
    ne.nama();
    cout << "Valensi        : " <<ne.golongan()<< endl;
    ne.sifat();
    ne.ttkddh();
    ne.pembuatan();
    ne.manfaat();
}
int argon()
{
    Argon ar;
    ar.nama();
    cout << "Valensi        : " <<ar.golongan()<< endl;
    ar.sifat();
    ar.ttkddh();
    ar.pembuatan();
    ar.manfaat();
}
int kripton()
{
    Kripton kr;
    kr.nama();
    cout << "Valensi        : " <<kr.golongan()<< endl;
    kr.sifat();
    kr.ttkddh();
    kr.pembuatan();
    kr.manfaat();
}
int xenon()
{
    Xenon xe;
    xe.nama();
    cout << "Valensi        : " <<xe.golongan()<< endl;
    xe.sifat();
    xe.ttkddh();
    xe.pembuatan();
    xe.manfaat();
}
int radon()
{
    Radon rn;
    rn.nama();
    cout << "Valensi        : " <<rn.golongan()<< endl;
    rn.sifat();
    rn.ttkddh();
    rn.pembuatan();
    rn.manfaat();
}
