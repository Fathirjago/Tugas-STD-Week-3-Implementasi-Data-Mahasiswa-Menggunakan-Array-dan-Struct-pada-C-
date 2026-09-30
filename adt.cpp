#include <iostream>

using namespace std;

struct Mahasiswa {
	char nama[40];
	char nim[13];
	int persentase;
	Mahasiswa* next;
};

int main() {
	Mahasiswa mahasiswa[40] = {
		{"ZHAFRAN LINKY SISWARA", "103012400196", 100},
		{"GANDA SETYA RAMADHANA", "103012400278", 50},
		{"MUHAMMAD ABRAR SINURAT", "103012400406", 100},
		{"FARID ALVARO SITEPU", "103012500025", 100},
		{"CHARLES NATHAN MARCELINO", "103012500037", 100},
		{"ARYA AWAL ADRIANSYAH", "103012500038", 100},
		{"MUHAMMAD ANDHIKA BAGASKOR", "103012500044", 100},
		{"MOCHAMAD RIZKYKA ZAINAL R", "103012500055", 100},
		{"NAYLA FAUZYA KHAIRUNNISA", "103012500071", 100},
		{"NAYAGA RADITHYA", "103012500072", 100},
		{"RILLO RAIHAN DWI SATRIA", "103012500078", 100},
		{"AL FATHIR ABIMANYU GAZAALi", "103012500088", 100},
		{"MUHAMMAD DZAKI LUKMANUL H", "103012500092", 100},
		{"SAMUEL DIPTA YOGI TARUNA", "103012500099", 100},
		{"AHMAD DHANI NUR RIDWAN", "103012500104", 100},
		{"MUHAMMAD RAFIKI HANNAN", "103012500158", 100},
		{"AHMAD RADHIN PRADITYA", "103012500217", 100},
		{"MAULANA NAUFAL MAHRUS", "103012500226", 100},
		{"NABILA NURUL ALIFAH", "103012500236", 50},
		{"ABIDZAR ALGHIFARI", "103012500243", 100},
		{"REVAN PUTRA ANDRIAN", "103012500266", 100},
		{"TSANIA RAHMA HALIZA", "103012500276", 100},
		{"LAZHI NADRI RAMADHAN", "103012500295", 100},
		{"MUHAMMAD ZEIN", "103012500304", 50},
		{"NABILA SYAKIRA ANDRIANI S", "103012500315", 100},
		{"MUHAMMAD GHASSAN FIRDIAN", "103012500325", 100},
		{"NUGRAHA AKMAL YOGA", "103012500331", 100},
		{"RIFQI BHADRIKA ADWITIYA", "103012500339", 100},
		{"FAUZAN NUR ABDILLAH", "103012500349", 100},
		{"ANINDA MARETHANINGTYAS CE", "103012500389", 100},
		{"LUKMAN HAKIM", "103012500397", 100},
		{"RAYYA IZZATUL MILA", "103012530009", 100},
		{"RADEN HASBI RADHITYA NATA", "103012530017", 100},
		{"RAYHAN MUZAB FAUZAN", "103012530021", 100},
		{"GAZA RAUSHAN FIKRI", "103012530033", 50},
		{"RAYYAN NAKHLAH PRAYATA", "103012530040", 100},
		{"IMAN ABDI ILAHI", "103012530045", 100},
		{"DUNCAN AGASTYA KURNIAWAN", "103012530055", 50},
		{"ADAM TEGUH MAULAANAA", "1301213218", 50},
		{"RAFLI NUJJIYA MAULANA", "1301223394", 50}
	};

	for (int i = 0; i < 39; i++) {
		mahasiswa[i].next = &mahasiswa[i + 1];
	}
	mahasiswa[39].next = 0;

	Mahasiswa* kepala = &mahasiswa[0];
	Mahasiswa* current = kepala;
	while (current != 0) {
		cout << "Nama: " << current->nama << endl;
		cout << "NIM: " << current->nim << endl;
		cout << "Persentase: " << current->persentase << "%" << endl;
		cout << endl;
		current = current->next;
	}

	char nimDicari[13];
	cout << "Masukkan NIM yang ingin dicari: ";
	cin >> nimDicari;

	current = kepala;
	while (current != 0) {
		bool sama = true;
		for (int i = 0; i < 13; i++) {
			if (current->nim[i] != nimDicari[i]) {
				sama = false;
				break;
			}
			if (current->nim[i] == '\0' && nimDicari[i] == '\0') {
				break;
			}
		}

		if (sama) {
			cout << "Nama: " << current->nama << endl;
			cout << "NIM: " << current->nim << endl;
			cout << "Persentase: " << current->persentase << "%" << endl;

			char ubah;
			cout << "Ubah data ini? (y/t): ";
			cin >> ubah;
			if (ubah == 'y' || ubah == 'Y') {
				cin.ignore(1000, '\n');
				cout << "Nama baru: ";
				cin.getline(current->nama, 40);
				cout << "Persentase baru: ";
				cin >> current->persentase;
				cout << "\nData berhasil diupdate" << endl;
                cout << "Nama: " << current->nama << endl;
                cout << "NIM: " << current->nim << endl;
                cout << "Persentase: " << current->persentase << "%" << endl;
			}
			break;
		}

		current = current->next;
	}

	return 0;
}