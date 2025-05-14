#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

    ///STRUCTURE

struct mhs
{
    string nim;
    string nama;
    int nilai;
};

    ///FUNCTION

char grades(int n )
{
    if (n>85 ){
        return 'A';
    }else  if (n>75&&n<=85)
    {
        return 'B';
    }else  if (n>65&&n<=75)
    {
        return 'C';
    }else  if (n>45&&n<=65)
    {
        return 'D';
    }else
    {
        return 'E';
    }
}

int main(){
    int jml;

    ///TIME
    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);
    cout << " REPORT NILAI MAHASISWA PERTANGGAL "   << now->tm_mday << '-'
                                                    << (now->tm_mon + 1) << '-'
                                                    << (now->tm_year + 1900) <<endl;

    ///ARRAY

    cout<< "\n \n Masukkan jumlah Mahasiswa yang ingin diinput : ";cin>>jml;
    mhs  mahasiswa[jml];
    cout<< "\n Silahkan input " <<jml<< " nilai Mahasiswa tersebut"<<endl;

    for (int a=0; a<jml; a++){
        cout<< " Nilai Mahasiswa ke-"<< a+1<<endl;

        ///INPUT
        cout<< " Nim\t: ";cin>>mahasiswa[a].nim;
        cout<< " Nama\t: ";cin>>mahasiswa[a].nama;
        cout<< " Nilai\t: ";cin>>mahasiswa[a].nilai;
        cout<<endl;
    }

    cout<<" =================================================="<<endl;
    cout<<" |    NIM    |      NAMA      |   NILAI  | GRADES |"<<endl;
    cout<<" =================================================="<<endl;

    ///FOR
    for(int b=0; b<jml; b++){
        ///OUTPUT
        cout << " |    " <<mahasiswa[b].nim<< "    |     " <<mahasiswa[b].nama<<
        "      |    " <<mahasiswa[b].nilai<< "    |    " <<grades(mahasiswa[b].nilai)<< "   |" << endl;
    }
    cout<<" --------------------------------------------------"<<endl;

    return 0;
}
