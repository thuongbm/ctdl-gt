#include <bits/stdc++.h>
using namespace std;
class SinhVien{
    string ma, ten;
    int namSinh;
    bool gioiTinh;
    float Toan, Ly, Hoa;
    public:
        friend istream& operator >> (istream& in, SinhVien& s){
            getline (in, s.ma);
            getline (in, s.ten);
            in >> s.namSinh;
            in >> s.gioiTinh;
            in >> s.Toan >> s.Ly >> s.Hoa;
            return in;
        }

        friend ostream& operator << (ostream& out, SinhVien& s){
            out << s.ma << ' ' << s.ten << ' ' << s.namSinh << ' ';
            if (s.gioiTinh == true) out << "nam" << ' ' ;
            else out << "nu" << ' ' ;
            out << s.Toan << ' ' << s.Ly << ' ' << s.Hoa << ' ' << endl;
            return out;
        }

        string getMa(){
            return ma;
        }
};
class QuanLy{
    list <SinhVien> l;
    public:
        void ThemSinhVien(){
            SinhVien l1;
            cin >> l1;
            l.push_back(l1);
        }

        void XoaSinhVien(string y){
            auto it = l.begin();
            while (it != l.end()){
                if (it->getMa() == y){
                    it = l.erase(it);
                }
                else it++;
            }
        }

        void InDanhSach(){
            for (auto x : l){
                cout << x;
            }
        }

        void TimKiem(string x){
            for (auto y : l){
                if (y.getMa() == x) cout << y;
            }
        }
};
int main(){

}