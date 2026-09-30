#include <iostream>
using namespace std;

int main()
{
    string nama[40] = {
        "ZHAFRAN LINKY SISWARA", "GANDA SETYA RAMADHANA", "MUHAMMAD ABRAR SINURAT",
        "FARID ALVARO SITEPU", "CHARLES NATHAN MARCELINO", "ARYA AWAL ADRIANSYAH",
        "MUHAMMAD ANDHIKA BAGASKOR", "MOCHAMAD RIZKYKA ZAINAL R", "NAYLA FAUZYA KHAIRUNNISA",
        "NAYAGA RADITHYA", "RILLO RAIHAN DWI SATRIA", "AL FATHIR ABIMANYU GAZAALI",
        "MUHAMMAD DZAKI LUKMANUL H", "SAMUEL DIPTA YOGI TARUNA", "AHMAD DHANI NUR RIDWAN",
        "MUHAMMAD RAFIKI HANNAN", "AHMAD RADHIN PRADITYA", "MAULANA NAUFAL MAHRUS",
        "NABILA NURUL ALIFAH", "ABIDZAR ALGHIFARI", "REVAN PUTRA ANDRIAN",
        "TSANIA RAHMA HALIZA", "LAZHI NADRI RAMADHAN", "MUHAMMAD ZEIN",
        "NABILA SYAKIRA ANDRIANI S", "MUHAMMAD GHASSAN FIRDIAN", "NUGRAHA AKMAL YOGA",
        "RIFQI BHADRIKA ADWITIYA", "FAUZAN NUR ABDILLAH", "ANINDA MARETHANINGTYAS CE",
        "LUKMAN HAKIM", "RAYYA IZZATUL MILA", "RADEN HASBI RADHITYA NATA",
        "RAYHAN MUZAB FAUZAN", "GAZA RAUSHAN FIKRI", "RAYYAN NAKHLAH PRAYATA",
        "IMAN ABDI ILAHI", "DUNCAN AGASTYA KURNIAWAN", "ADAM TEGUH MAULAANAA",
        "RAFLI NUJJIYA MAULANA"};

    string NIM[40] = {
        "103012400196", "103012400278", "103012400406", "103012500025", "103012500037",
        "103012500038", "103012500044", "103012500055", "103012500071", "103012500072",
        "103012500078", "103012500088", "103012500092", "103012500099", "103012500104",
        "103012500158", "103012500217", "103012500226", "103012500236", "103012500243",
        "103012500266", "103012500276", "103012500295", "103012500304", "103012500315",
        "103012500325", "103012500331", "103012500339", "103012500349", "103012500389",
        "103012500397", "103012530009", "103012530017", "103012530021", "103012530033",
        "103012530040", "103012530045", "103012530055", "1301213218", "1301223394"};

    int presensiAbsen[40] = {
        100, 50, 100, 100, 100, 100, 100, 100, 100, 100,
        100, 100, 100, 100, 100, 100, 100, 100, 50, 100,
        100, 100, 100, 50, 100, 100, 100, 100, 100, 100,
        100, 100, 100, 100, 50, 100, 100, 100, 50, 50};

    for (int i = 0; i < 40; i++)
    {
        cout << "Nama: " << nama[i] << "\nNIM: " << NIM[i] << "\nPresensi Absen: " << presensiAbsen[i] << "%\n\n";
    }

    string cariNIM;
    cout << "Masukkan NIM yang dicari: ";
    cin >> cariNIM;

    int index = -1;

    for (int i = 0; i < 40; i++)
    {
        if (cariNIM == NIM[i])
        {
            index = i;
        }
    }

    if (index != -1)
    {
        cout << "\nNama: " << nama[index] << "\nNIM: " << NIM[index] << "\nPresensi Absen: " << presensiAbsen[index] << "%\n";

        int pilih;
        cout << "Apakah ingin mengupdate data? (1=Ya / 0=Tidak): ";
        cin >> pilih;

        if (pilih == 1)
        {
            cout << "Masukkan nama baru: ";
            cin >> ws;
            getline(cin, nama[index]);

            cout << "Masukkan NIM baru: ";
            cin >> NIM[index];

            cout << "Masukkan persentase absen baru: ";
            cin >> presensiAbsen[index];

            cout << "\nData berhasil diupdate!\nNama: " << nama[index] << "\nNIM: " << NIM[index] << "\nPresensi Absen: " << presensiAbsen[index] << "%\n";
        }
        else
        {
            cout << "Data tidak diubah.\n";
        }
    }
    else
    {
        cout << "Data tidak ditemukan.\n";
    }

    return 0;
}