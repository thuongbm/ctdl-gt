#include <bits/stdc++.h>
using namespace std;
class Tivi{
    string MaHang, HangSX, TenTV;
    int Gia, SoLuong;
    public:
        Tivi(string MaHang = "", string HangSX = "", string TenTV = "", int Gia = 0, int SoLuong = 0) : MaHang(MaHang), HangSX(HangSX), TenTV(TenTV), Gia(Gia), SoLuong(SoLuong) {}
        friend istream& operator >> (istream& in, Tivi& t){
            getline(in, t.MaHang);
            getline(in, t.HangSX);
            getline(in, t.TenTV);
            in >> t.Gia >> t.SoLuong;
            in.ignore();
            return in;
        }
        friend ostream& operator << (ostream& out, Tivi& t){
            cout << t.MaHang << ' ' << t.HangSX << ' ' << t.TenTV << ' ' << t.Gia << ' ' << t.SoLuong;
            return out;
        }
        string GetMaHang(){
            return MaHang;
        }
        string GetHangSx(){
            return HangSX;
        }
        int getGia(){
            return Gia;
        }
};
class QuanLyTivi{
    int n;
    vector <Tivi> t;
    public:
        void Input(){
            cin >> n;
            t.resize(n);
            for (int i = 0 ; i < n ; i++){
                cin >> t[i];
            }
        }
        void Add(){
            Tivi x;
            cin >> x;
            t.push_back(x);
        }
        void Erase(string MaTV){
            auto it = find_if(t.begin(), t.end(), [MaTV](Tivi& tv){});
            if (it != t.end()){
                t.erase(it);
            }
        }
        int Sum(string HangSX){
            int res = 0;
            for (auto x : t){
                if (x.GetHangSx() == HangSX){
                    res += x.getGia();
                }
            }
            if (res == 0) return 0;
            else return res;
        }
        void Print(){
            for (auto x : t){
                cout << x << endl;
            }
        }
        bool Find(vector <Tivi> t, int n, string x){
            int l = 0 , r = n - 1;
            while (l <= r){
                int m = (l + r) / 2;
                if (t[m].GetMaHang() == x) return true;
                else if (t[m].GetMaHang() < x){
                    l = m + 1;
                }
                else r = m - 1;
            }
            return false;
        }
};
int main(){

}