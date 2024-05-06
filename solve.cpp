#include <bits/stdc++.h>
using namespace std;

class Sua {
protected:
    string maHang;
    string tenHang;
    string ngaySanXuat;
    string ngayHetHan;
    string noiSanXuat;
    double giaNhap;
    double giaBan;

public:
    Sua() {}

    Sua(string maHang, string tenHang, string ngaySanXuat, string ngayHetHan, string noiSanXuat, double giaNhap, double giaBan)
        : maHang(maHang), tenHang(tenHang), ngaySanXuat(ngaySanXuat), ngayHetHan(ngayHetHan), noiSanXuat(noiSanXuat), giaNhap(giaNhap), giaBan(giaBan) {}

    // Getter và setter
    string getMaHang() const { return maHang; }
    void setMaHang(string ma) { maHang = ma; }

    string getTenHang() const { return tenHang; }
    void setTenHang(string ten) { tenHang = ten; }

    string getNgaySanXuat() const { return ngaySanXuat; }
    void setNgaySanXuat(string ngaySX) { ngaySanXuat = ngaySX; }

    string getNgayHetHan() const { return ngayHetHan; }
    void setNgayHetHan(string ngayHH) { ngayHetHan = ngayHH; }

    string getNoiSanXuat() const { return noiSanXuat; }
    void setNoiSanXuat(string noiSX) { noiSanXuat = noiSX; }

    double getGiaNhap() const { return giaNhap; }
    void setGiaNhap(double gia) { giaNhap = gia; }

    double getGiaBan() const { return giaBan; }
    void setGiaBan(double gia) { giaBan = gia; }

    // Hàm nhập thông tin sữa
    virtual void nhapThongTin() {
        cout << "Nhap ma hang: ";
        cin >> maHang;
        cout << "Nhap ten hang: ";
        cin.ignore();
        getline(cin, tenHang);
        cout << "Nhap ngay san xuat: ";
        cin >> ngaySanXuat;
        cout << "Nhap ngay het han: ";
        cin >> ngayHetHan;
        cout << "Nhap noi san xuat: ";
        cin.ignore();
        getline(cin, noiSanXuat);
        cout << "Nhap gia nhap: ";
        cin >> giaNhap;
        cout << "Nhap gia ban: ";
        cin >> giaBan;
    }

    // Hàm xuất thông tin sữa
    virtual void xuatThongTin() const {
        cout << "Ma hang: " << maHang << endl;
        cout << "Ten hang: " << tenHang << endl;
        cout << "Ngay san xuat: " << ngaySanXuat << endl;
        cout << "Ngay het han: " << ngayHetHan << endl;
        cout << "Noi san xuat: " << noiSanXuat << endl;
        cout << "Gia nhap: " << fixed << setprecision(2) << giaNhap << endl;
        cout << "Gia ban: " << fixed << setprecision(2) << giaBan << endl;
    }
};

class SuaBot : public Sua {
private:
    double trongLuong;

public:
    SuaBot() {}

    SuaBot(string maHang, string tenHang, string ngaySanXuat, string ngayHetHan, string noiSanXuat, double giaNhap, double giaBan, double trongLuong)
        : Sua(maHang, tenHang, ngaySanXuat, ngayHetHan, noiSanXuat, giaNhap, giaBan), trongLuong(trongLuong) {}

    double getTrongLuong() const { return trongLuong; }
    void setTrongLuong(double tl) { trongLuong = tl; }

    void nhapThongTin() override {
        Sua::nhapThongTin();
        cout << "Nhap trong luong: ";
        cin >> trongLuong;
    }

    void xuatThongTin() const override {
        Sua::xuatThongTin();
        cout << "Trong luong: " << fixed << setprecision(2) << trongLuong << endl;
    }
};

class SuaPhaSan : public Sua {
private:
    double dungTich;

public:
    SuaPhaSan() {}

    SuaPhaSan(string maHang, string tenHang, string ngaySanXuat, string ngayHetHan, string noiSanXuat, double giaNhap, double giaBan, double dungTich)
        : Sua(maHang, tenHang, ngaySanXuat, ngayHetHan, noiSanXuat, giaNhap, giaBan), dungTich(dungTich) {}

    double getDungTich() const { return dungTich; }
    void setDungTich(double dt) { dungTich = dt; }

    void nhapThongTin() override {
        Sua::nhapThongTin();
        cout << "Nhap dung tich: ";
        cin >> dungTich;
    }

    void xuatThongTin() const override {
        Sua::xuatThongTin();
        cout << "Dung tich: " << fixed << setprecision(2) << dungTich << endl;
    }
};

class SuaDac : public Sua {
private:
    double trongLuong;

public:
    SuaDac() {}

    SuaDac(string maHang, string tenHang, string ngaySanXuat, string ngayHetHan, string noiSanXuat, double giaNhap, double giaBan, double trongLuong)
        : Sua(maHang, tenHang, ngaySanXuat, ngayHetHan, noiSanXuat, giaNhap, giaBan), trongLuong(trongLuong) {}

    double getTrongLuong() const { return trongLuong; }
    void setTrongLuong(double tl) { trongLuong = tl; }

    void nhapThongTin() override {
        Sua::nhapThongTin();
        cout << "Nhap trong luong: ";
        cin >> trongLuong;
    }

    void xuatThongTin() const override {
        Sua::xuatThongTin();
        cout << "Trong luong: " << fixed << setprecision(2) << trongLuong << endl;
    }
};
class KhachHang {
protected:
    string soDienThoai;
    string tenKhachHang;
    string diaChi;
    string loaiKhachHang;

public:
    KhachHang() {}

    KhachHang(string soDienThoai, string tenKhachHang, string diaChi, string loaiKhachHang)
        : soDienThoai(soDienThoai), tenKhachHang(tenKhachHang), diaChi(diaChi), loaiKhachHang(loaiKhachHang) {}

    // Getter và setter
    string getSoDienThoai() const { return soDienThoai; }
    void setSoDienThoai(string sdt) { soDienThoai = sdt; }

    string getTenKhachHang() const { return tenKhachHang; }
    void setTenKhachHang(string ten) { tenKhachHang = ten; }

    string getDiaChi() const { return diaChi; }
    void setDiaChi(string diaChi) { this->diaChi = diaChi; }

    string getLoaiKhachHang() const { return loaiKhachHang; }
    void setLoaiKhachHang(string loai) { loaiKhachHang = loai; }

    // Hàm nhập thông tin khách hàng
    void nhapThongTin() {
        cout << "Nhap so dien thoai: ";
        cin >> soDienThoai;
        cout << "Nhap ten khach hang: ";
        cin.ignore();
        getline(cin, tenKhachHang);
        cout << "Nhap dia chi: ";
        getline(cin, diaChi);
        cout << "Nhap loai khach hang (VIP hoac thuong): ";
        cin >> loaiKhachHang;
    }

    // Hàm xuất thông tin khách hàng
    void xuatThongTin() const {
        cout << "So dien thoai: " << soDienThoai << endl;
        cout << "Ten khach hang: " << tenKhachHang << endl;
        cout << "Dia chi: " << diaChi << endl;
        cout << "Loai khach hang: " << loaiKhachHang << endl;
    }
};

class DonHang {
private:
    string maDonHang;
    string ngayMuaHang;
    string soDienThoaiKhachHang;
    map<string, int> matHangSoLuong; // Sử dụng map để lưu mặt hàng và số lượng mặt hàng

    double tongTien;
    double chietKhau;
    double thanhTien;

public:
    DonHang() {}

    DonHang(string maDonHang, string ngayMuaHang, string soDienThoaiKhachHang, map<string, int> matHangSoLuong, double tongTien, double chietKhau, double thanhTien)
        : maDonHang(maDonHang), ngayMuaHang(ngayMuaHang), soDienThoaiKhachHang(soDienThoaiKhachHang), matHangSoLuong(matHangSoLuong), tongTien(tongTien), chietKhau(chietKhau), thanhTien(thanhTien) {}

    // Getter và setter
    string getMaDonHang() const { return maDonHang; }
    void setMaDonHang(string ma) { maDonHang = ma; }

    string getNgayMuaHang() const { return ngayMuaHang; }
    void setNgayMuaHang(string ngay) { ngayMuaHang = ngay; }

    string getSoDienThoaiKhachHang() const { return soDienThoaiKhachHang; }
    void setSoDienThoaiKhachHang(string sdt) { soDienThoaiKhachHang = sdt; }

    map<string, int> getMatHangSoLuong() const { return matHangSoLuong; }
    void setMatHangSoLuong(map<string, int> matHangSoLuong) { this->matHangSoLuong = matHangSoLuong; }

    double getTongTien() const { return tongTien; }
    void setTongTien(double tongTien) { this->tongTien = tongTien; }

    double getChietKhau() const { return chietKhau; }
    void setChietKhau(double chietKhau) { this->chietKhau = chietKhau; }

    double getThanhTien() const { return thanhTien; }
    void setThanhTien(double thanhTien) { this->thanhTien = thanhTien; }

    // Hàm nhập thông tin đơn hàng
    void nhapThongTin() {
        cout << "Nhap ma don hang: ";
        cin >> maDonHang;
        cout << "Nhap ngay mua hang: ";
        cin >> ngayMuaHang;
        cout << "Nhap so dien thoai khach hang: ";
        cin >> soDienThoaiKhachHang;

        int n;
        cout << "Nhap so luong mat hang: ";
        cin >> n;
        cout << "Nhap mat hang va so luong tuong ung:" << endl;
        for (int i = 0; i < n; ++i) {
            string matHang;
            int soLuong;
            cout << "Mat hang " << i + 1 << ": ";
            cin >> matHang;
            cout << "So luong: ";
            cin >> soLuong;
            matHangSoLuong[matHang] = soLuong;
        }

        cout << "Nhap tong tien: ";
        cin >> tongTien;
        cout << "Nhap chiet khau: ";
        cin >> chietKhau;
        thanhTien = tongTien - chietKhau;
    }


    // hàm tính thành tiền
    void tinhThanhTien() {
        double tongTienChuaThue = tongTien - chietKhau;

        // Áp dụng khuyến mãi
        for (const auto& pair : matHangSoLuong) {
            string matHang = pair.first;
            int soLuong = pair.second;

            // Kiểm tra mua nguyên thùng
            if (matHang == "Sua bot" && soLuong % 6 == 0) {
                tongTienChuaThue -= tongTienChuaThue * 0.03;
            } else if (matHang == "Sua pha san" && soLuong % 48 == 0) {
                tongTienChuaThue -= tongTienChuaThue * 0.05;
            } else if (matHang == "Sua dac" && soLuong % 6 == 0) {
                tongTienChuaThue -= tongTienChuaThue * 0.05;
            }
        }

        // Tính tổng tiền sau khi áp dụng khuyến mãi và thuế VAT
        double thueVAT = tongTienChuaThue * 0.1;
        thanhTien = tongTienChuaThue + thueVAT;
    }

    // Hàm xuất thông tin đơn hàng
    void xuatThongTin() const {
        cout << "Ma don hang: " << maDonHang << endl;
        cout << "Ngay mua hang: " << ngayMuaHang << endl;
        cout << "So dien thoai khach hang: " << soDienThoaiKhachHang << endl;
        cout << "Mat hang va so luong:" << endl;
        for (const auto& pair : matHangSoLuong) {
            cout << pair.first << ": " << pair.second << endl;
        }
        cout << "Tong tien: " << tongTien << endl;
        cout << "Chiet khau: " << chietKhau << endl;
        cout << "Thanh tien: " << thanhTien << endl;
    }
};

class DanhSachSua {
private:
    vector<Sua*> danhSachSua;

public:
    // Thêm sữa vào danh sách
    void themSua(Sua* sua) {
        danhSachSua.push_back(sua);
    }

    // Hiển thị danh sách sữa
    void hienThiDanhSach() const {
        cout << "Danh sach sua:\n";
        for (const auto& sua : danhSachSua) {
            cout << "Ma hang: " << sua->getMaHang() << ", Ten hang: " << sua->getTenHang() << endl;
        }
    }
};

class DanhSachKhachHang {
private:
    vector<KhachHang> danhSachKhachHang;

public:
    // Thêm khách hàng vào danh sách
    void themKhachHang(const KhachHang& khachHang) {
        danhSachKhachHang.push_back(khachHang);
    }

    // Hiển thị danh sách khách hàng
    void hienThiDanhSach() const {
        cout << "Danh sach khach hang:\n";
        for (const auto& khachHang : danhSachKhachHang) {
            cout << "So dien thoai: " << khachHang.getSoDienThoai() << ", Ten khach hang: " << khachHang.getTenKhachHang() << endl;
        }
    }
};

class DanhSachDonHang {
private:
    vector<DonHang> danhSachDonHang;

public:
    // Thêm đơn hàng vào danh sách
    void themDonHang(const DonHang& donHang) {
        danhSachDonHang.push_back(donHang);
    }

    // Hiển thị danh sách đơn hàng
    void hienThiDanhSach() const {
        cout << "Danh sach don hang:\n";
        for (const auto& donHang : danhSachDonHang) {
            cout << "Ma don hang: " << donHang.getMaDonHang() << ", Ngay mua hang: " << donHang.getNgayMuaHang() << endl;
        }
    }
};

void hienThiMenu() {
    cout << "===== MENU =====\n";
    cout << "1. Quan ly danh sach sua\n";
    cout << "2. Quan ly danh sach khach hang\n";
    cout << "3. Quan ly danh sach don hang\n";
    cout << "0. Thoat\n";
    cout << "================\n";
}

int main() {
    SuaBot suaBot;
    SuaPhaSan suaPhaSan;
    SuaDac suaDac;

    int luaChon;
    do {
        hienThiMenu();
        cout << "Nhap lua chon cua ban: ";
        cin >> luaChon;
        cin.ignore();

        switch (luaChon) {
            case 1: {
                
                break;
            }
            case 2: {
                
                break;
            }
            case 3: {
                
                break;
            }
            case 0: {
                cout << "Ket thuc chuong trinh.\n";
                break;
            }
            default: {
                cout << "Lua chon khong hop le. Vui long chon lai";
            }
        }
    } while (luaChon != 0);

    return 0;
}
