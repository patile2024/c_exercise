#include <bits/stdc++.h>
using namespace std;

class Sua
{
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
    virtual void nhapThongTin()
    {
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
    virtual void xuatThongTin() const
    {
        cout << "Ma hang: " << maHang << endl;
        cout << "Ten hang: " << tenHang << endl;
        cout << "Ngay san xuat: " << ngaySanXuat << endl;
        cout << "Ngay het han: " << ngayHetHan << endl;
        cout << "Noi san xuat: " << noiSanXuat << endl;
        cout << "Gia nhap: " << fixed << setprecision(2) << giaNhap << endl;
        cout << "Gia ban: " << fixed << setprecision(2) << giaBan << endl;
    }
};

class SuaBot : public Sua
{
private:
    double trongLuong;

public:
    SuaBot() {}

    SuaBot(string maHang, string tenHang, string ngaySanXuat, string ngayHetHan, string noiSanXuat, double giaNhap, double giaBan, double trongLuong)
        : Sua(maHang, tenHang, ngaySanXuat, ngayHetHan, noiSanXuat, giaNhap, giaBan), trongLuong(trongLuong) {}

    double getTrongLuong() const { return trongLuong; }
    void setTrongLuong(double tl) { trongLuong = tl; }

    void nhapThongTin() override
    {
        Sua::nhapThongTin();
        cout << "Nhap trong luong: ";
        cin >> trongLuong;
    }

    void xuatThongTin() const override
    {
        Sua::xuatThongTin();
        cout << "Trong luong: " << fixed << setprecision(2) << trongLuong << endl;
    }
};

class SuaPhaSan : public Sua
{
private:
    double dungTich;

public:
    SuaPhaSan() {}

    SuaPhaSan(string maHang, string tenHang, string ngaySanXuat, string ngayHetHan, string noiSanXuat, double giaNhap, double giaBan, double dungTich)
        : Sua(maHang, tenHang, ngaySanXuat, ngayHetHan, noiSanXuat, giaNhap, giaBan), dungTich(dungTich) {}

    double getDungTich() const { return dungTich; }
    void setDungTich(double dt) { dungTich = dt; }

    void nhapThongTin() override
    {
        Sua::nhapThongTin();
        cout << "Nhap dung tich: ";
        cin >> dungTich;
    }

    void xuatThongTin() const override
    {
        Sua::xuatThongTin();
        cout << "Dung tich: " << fixed << setprecision(2) << dungTich << endl;
    }
};

class SuaDac : public Sua
{
private:
    double trongLuong;

public:
    SuaDac() {}

    SuaDac(string maHang, string tenHang, string ngaySanXuat, string ngayHetHan, string noiSanXuat, double giaNhap, double giaBan, double trongLuong)
        : Sua(maHang, tenHang, ngaySanXuat, ngayHetHan, noiSanXuat, giaNhap, giaBan), trongLuong(trongLuong) {}

    double getTrongLuong() const { return trongLuong; }
    void setTrongLuong(double tl) { trongLuong = tl; }

    void nhapThongTin() override
    {
        Sua::nhapThongTin();
        cout << "Nhap trong luong: ";
        cin >> trongLuong;
    }

    void xuatThongTin() const override
    {
        Sua::xuatThongTin();
        cout << "Trong luong: " << fixed << setprecision(2) << trongLuong << endl;
    }
};
class KhachHang
{
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
    void nhapThongTin()
    {
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
    void xuatThongTin() const
    {
        cout << "So dien thoai: " << soDienThoai << endl;
        cout << "Ten khach hang: " << tenKhachHang << endl;
        cout << "Dia chi: " << diaChi << endl;
        cout << "Loai khach hang: " << loaiKhachHang << endl;
    }
};

class DonHang
{
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
    void nhapThongTin()
    {
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
        for (int i = 0; i < n; ++i)
        {
            string matHang;
            int soLuong;
            cout << "Mat hang " << i + 1 << ": ";
            cin.ignore();
            getline(cin, matHang);
            fflush(stdin);
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
    void tinhThanhTien()
    {
        double tongTienChuaThue = tongTien - chietKhau;

        // Áp dụng khuyến mãi
        for (const auto &pair : matHangSoLuong)
        {
            string matHang = pair.first;
            int soLuong = pair.second;

            // Kiểm tra mua nguyên thùng
            if (matHang == "Sua bot" && soLuong % 6 == 0)
            {
                tongTienChuaThue -= tongTienChuaThue * 0.03;
            }
            else if (matHang == "Sua pha san" && soLuong % 48 == 0)
            {
                tongTienChuaThue -= tongTienChuaThue * 0.05;
            }
            else if (matHang == "Sua dac" && soLuong % 6 == 0)
            {
                tongTienChuaThue -= tongTienChuaThue * 0.05;
            }
        }

        // Tính tổng tiền sau khi áp dụng khuyến mãi và thuế VAT
        double thueVAT = tongTienChuaThue * 0.1;
        thanhTien = tongTienChuaThue + thueVAT;
    }

    // Hàm xuất thông tin đơn hàng
    void xuatThongTin() const
    {
        cout << "Ma don hang: " << maDonHang << endl;
        cout << "Ngay mua hang: " << ngayMuaHang << endl;
        cout << "So dien thoai khach hang: " << soDienThoaiKhachHang << endl;
        cout << "Mat hang va so luong:" << endl;
        for (const auto &pair : matHangSoLuong)
        {
            cout << pair.first << ": " << pair.second << endl;
        }
        cout << "Tong tien: " << tongTien << endl;
        cout << "Chiet khau: " << chietKhau << endl;
        cout << "Thanh tien: " << thanhTien << endl;
    }
};

class DanhSachSua
{
private:
    vector<Sua *> danhSachSua;

public:
    DanhSachSua(){};
    // Thêm sữa vào danh sách
    void themSua(Sua *sua)
    {
        danhSachSua.push_back(sua);
    }

    // Hiển thị danh sách sữa
    void hienThiDanhSach() const
    {
        cout << "Danh sach sua:\n";
        for (const auto &sua : danhSachSua)
        {
            sua->xuatThongTin();
            cout << "================" << endl;
        }
    }

    void suaSua(string masua, Sua *suaTemp)
    {
        for (auto &sua : danhSachSua)
        {
            if (sua->getMaHang() == masua)
            {
                sua = suaTemp;
                break;
            }
        }
    }

    void xoaSua(string masua)
    {
        for (auto it = danhSachSua.begin(); it != danhSachSua.end(); ++it)
        {
            if ((*it)->getMaHang() == masua)
            {
                delete *it;
                danhSachSua.erase(it);
                break;
            }
        }
    }

    int timkiem(string masua)
    {
        int result = 0;
        for (auto it = danhSachSua.begin(); it != danhSachSua.end(); ++it)
        {
            if ((*it)->getMaHang() == masua)
            {
                result = 1;
            }
        }
        return result;
    }
};

class DanhSachKhachHang
{
private:
    vector<KhachHang> danhSachKhachHang;

public:
    DanhSachKhachHang(){};
    // Thêm khách hàng vào danh sách
    void themKhachHang(const KhachHang &khachHang)
    {
        danhSachKhachHang.push_back(khachHang);
    }

    // Hiển thị danh sách khách hàng
    void hienThiDanhSach() const
    {
        cout << "Danh sach khach hang:\n";
        for (const auto &khachHang : danhSachKhachHang)
        {
            khachHang.xuatThongTin();
            cout << "================" << endl;
        }
    }

    void suaKH(string tenKH, KhachHang a)
    {
        for (auto &kh : danhSachKhachHang)
        {
            if (kh.getTenKhachHang().compare(tenKH) == 0)
            {
                kh = a;
                break;
            }
        }
    }

    void xoaKH(string tenKH)
    {
        int index = 0;
        for (int i = 0; i < danhSachKhachHang.size(); i++) {
            if (danhSachKhachHang[i].getTenKhachHang().compare(tenKH) == 0) {
                index = i;
                break;
            }
        }
        danhSachKhachHang.erase(danhSachKhachHang.begin() + index);
        
    }

    int timkiem(string tenKH)
    {
        int result = 0;
        for (auto it = danhSachKhachHang.begin(); it != danhSachKhachHang.end(); ++it)
        {
            if ((*it).getTenKhachHang().compare(tenKH) == 0)
            {
                result = 1;
            }
        }
        return result;
    }
};

class DanhSachDonHang
{
private:
    vector<DonHang> danhSachDonHang;

public:
    DanhSachDonHang(){};
    // Thêm đơn hàng vào danh sách
    void themDonHang(const DonHang &donHang)
    {
        danhSachDonHang.push_back(donHang);
    }

    // Hiển thị danh sách đơn hàng
    void hienThiDanhSach() const
    {
        cout << "Danh sach don hang:\n";
        for (const auto &donHang : danhSachDonHang)
        {
            donHang.xuatThongTin();
            cout << "================" << endl;
        }
    }

    void suaDH(string maDH, DonHang a)
    {
        for (auto &sua : danhSachDonHang)
        {
            if (sua.getMaDonHang() == maDH)
            {
                sua = a;
                break;
            }
        }
    }

    void xoaDH(string maDH)
    {
        int index = 0;
        for (int i = 0; i < danhSachDonHang.size(); i++)
        {
            if (danhSachDonHang[i].getMaDonHang() == maDH)
            {
                index = i;
                break;
            }
        }
        danhSachDonHang.erase(danhSachDonHang.begin() + index);
    }

    int timkiem(string maDH)
    {
        int result = 0;
        for (auto it = danhSachDonHang.begin(); it != danhSachDonHang.end(); ++it)
        {
            if ((*it).getMaDonHang() == maDH)
            {
                result = 1;
            }
        }
        return result;
    }
};

void hienThiMenu()
{
    cout << "===== MENU =====\n";
    cout << "1. Quan ly danh sach sua\n";
    cout << "2. Quan ly danh sach khach hang\n";
    cout << "3. Quan ly danh sach don hang\n";
    cout << "0. Thoat\n";
    cout << "================\n";
}

void hienMenuQuanLySua()
{
    cout << "===== MENU QUAN LY SUA =====\n";
    cout << "1. Them loai sua\n";
    cout << "2. Hien danh sach sua\n";
    cout << "3. Sua loai sua\n";
    cout << "4. Xoa loai sua\n";
    cout << "0. Thoat\n";
    cout << "================\n";
}

void hienMenuQuanLyKhachHang()
{
    cout << "===== MENU QUAN LY KHACH HANG =====\n";
    cout << "1. Them khach hang\n";
    cout << "2. Hien danh sach khach hang\n";
    cout << "3. Sua khach hang\n";
    cout << "4. Xoa khach hang\n";
    cout << "0. Thoat\n";
    cout << "================\n";
}

void hienMenuQuanLyDonHang()
{
    cout << "===== MENU QUAN LY DON HANG =====\n";
    cout << "1. Them don hang\n";
    cout << "2. Hien danh sach don hang\n";
    cout << "3. Sua don hang\n";
    cout << "4. Xoa don hang\n";
    cout << "0. Thoat\n";
    cout << "================\n";
}

int main()
{
    DanhSachSua *dsSua = new DanhSachSua();
    DanhSachKhachHang *dsKhachHang = new DanhSachKhachHang();
    DanhSachDonHang *dsDonHang = new DanhSachDonHang();

    int luaChon, luachonSua, luachonKhachHang, luachonDonHang, loaisua;
    string masua, madonhang, tenKH;
    do
    {
        hienThiMenu();
        cout << "Nhap lua chon cua ban: ";
        cin >> luaChon;
        cin.ignore();

        switch (luaChon)
        {
        case 1:
        {
            do
            {
                hienMenuQuanLySua();
                cout << "Nhap lua chon cua ban: ";
                cin >> luachonSua;
                cin.ignore();
                switch (luachonSua)
                {
                case 1:
                {
                    do
                    {
                        cout << "===== CHON LOAI SUA =====\n";
                        cout << "1. Sua bot\n";
                        cout << "2. Sua pha san\n";
                        cout << "3. Sua dac\n";
                        cout << "0. Thoat\n";
                        cout << "================\n";
                        cout << "Nhap lua chon cua ban: ";
                        cin >> loaisua;
                        switch (loaisua)
                        {
                        case 1:
                        {
                            cin.ignore();
                            SuaBot *a = new SuaBot();
                            a->nhapThongTin();
                            dsSua->themSua(a);
                            break;
                        }
                        case 2:
                        {
                            SuaPhaSan *a = new SuaPhaSan();
                            a->nhapThongTin();
                            dsSua->themSua(a);
                            break;
                        }
                        case 3:
                        {
                            SuaDac *a = new SuaDac();
                            a->nhapThongTin();
                            dsSua->themSua(a);
                            break;
                        }
                        case 0:
                            break;
                        default:
                            break;
                        }
                    } while (loaisua != 0);
                }
                case 2:
                {
                    dsSua->hienThiDanhSach();
                    break;
                }
                case 3:
                {
                    cout << "===== SUA THONG TIN SUA =====\n";
                    cout << "Nhap ma sua can thay doi thong tin: ";
                    cin >> masua;
                    if (dsSua->timkiem(masua) == 1)
                    {
                        do
                        {
                            cout << "===== CHON LOAI SUA MUON SUA =====\n";
                            cout << "1. Sua bot\n";
                            cout << "2. Sua pha san\n";
                            cout << "3. Sua dac\n";
                            cout << "0. Thoat\n";
                            cout << "================\n";
                            cout << "Nhap lua chon cua ban: ";
                            cin >> loaisua;
                            cin.ignore();
                            switch (loaisua)
                            {
                            case 1:
                            {
                                cin.ignore();
                                SuaBot *a = new SuaBot();
                                a->nhapThongTin();
                                dsSua->suaSua(masua, a);
                                break;
                            }
                            case 2:
                            {
                                SuaPhaSan *a = new SuaPhaSan();
                                a->nhapThongTin();
                                dsSua->suaSua(masua, a);
                                break;
                            }
                            case 3:
                            {
                                SuaDac *a = new SuaDac();
                                dsSua->suaSua(masua, a);
                                a->nhapThongTin();
                                break;
                            }
                            case 0:
                                break;
                            default:
                                break;
                            }
                        } while (loaisua != 0);
                    }
                    else
                    {
                        cout << "===== KHONG TIM THAY MAT HANG CO MA " << masua << " =====\n";
                    }
                    break;
                }
                case 4:
                {
                    cout << "===== SUA THONG TIN SUA =====\n";
                    cout << "Nhap ma sua can thay doi thong tin: ";
                    cin >> masua;
                    if (dsSua->timkiem(masua) == 1)
                    {
                        dsSua->xoaSua(masua);
                    }
                    else
                    {
                        cout << "===== KHONG TIM THAY MAT HANG CO MA " << masua << " =====\n";
                    }
                }
                case 0:
                {
                    break;
                }
                default:
                {
                    break;
                }
                }
            } while (luachonSua != 0);

            break;
        }
        case 2:
        {
            do
            {
                hienMenuQuanLyKhachHang();
                cout << "Nhap lua chon cua ban: ";
                cin >> luachonKhachHang;
                cin.ignore();
                switch (luachonKhachHang)
                {
                case 1:
                {
                    KhachHang a;
                    a.nhapThongTin();
                    dsKhachHang->themKhachHang(a);
                    break;
                }
                case 2:
                {
                    dsKhachHang->hienThiDanhSach();
                    break;
                }
                case 3:
                {
                    cout << "===== SUA THONG TIN KHACH HANG =====\n";
                    cout << "Nhap ten khach hang can thay doi thong tin: ";
                    getline(cin, tenKH);
                    if (dsKhachHang->timkiem(tenKH) == 1)
                    {
                        KhachHang temp;
                        temp.nhapThongTin();
                        dsKhachHang->suaKH(tenKH, temp);
                    }
                    else
                    {
                        cout << "===== KHONG TIM THAY KHACH HANG CO TEN " << tenKH << " =====\n";
                    }
                    break;
                }
                case 4:
                {
                    cout << "===== XOA KHACH HANG =====\n";
                    cout << "Nhap ten khach hang can xoa: ";
                    getline(cin, tenKH);
                    if (dsKhachHang->timkiem(tenKH) == 1)
                    {
                        dsKhachHang->xoaKH(tenKH);
                    }
                    else
                    {
                        cout << "===== KHONG TIM THAY KHACH HANG CO TEN " << tenKH << " =====\n";
                    }
                }
                case 0:
                {
                    break;
                }
                default:
                {
                    break;
                }
                }
            } while (luachonKhachHang != 0);
            break;
        }
        case 3:
        {
            do
            {
                hienMenuQuanLyDonHang();
                cout << "Nhap lua chon cua ban: ";
                cin >> luachonDonHang;
                cin.ignore();
                switch (luachonDonHang)
                {
                case 1:
                {
                    DonHang a;
                    a.nhapThongTin();
                    dsDonHang->themDonHang(a);
                    break;
                }
                case 2:
                {
                    dsDonHang->hienThiDanhSach();
                    break;
                }
                case 3:
                {
                    cout << "===== SUA THONG TIN DON HANG =====\n";
                    cout << "Nhap ma don hang can thay doi thong tin: ";
                    cin >> madonhang;
                    if (dsDonHang->timkiem(madonhang) == 1)
                    {
                        DonHang temp;
                        temp.nhapThongTin();
                        dsDonHang->suaDH(madonhang, temp);
                    }
                    else
                    {
                        cout << "===== KHONG TIM THAY DON HANG CO MA " << madonhang << " =====\n";
                    }
                    break;
                }
                case 4:
                {
                    cout << "===== XOA DON HANG =====\n";
                    cout << "Nhap ma don hang can xoa: ";
                    cin >> madonhang;
                    if (dsDonHang->timkiem(madonhang) == 1)
                    {
                        dsDonHang->xoaDH(madonhang);
                    }
                    else
                    {
                        cout << "===== KHONG TIM THAY DON HANG CO MA " << madonhang << " =====\n";
                    }
                }
                case 0:
                {
                    break;
                }
                default:
                {
                    break;
                }
                }
            } while (luachonDonHang != 0);
            break;
        }
        case 0:
        {
            cout << "Ket thuc chuong trinh.\n";
            break;
        }
        default:
        {
            cout << "Lua chon khong hop le. Vui long chon lai";
        }
        }
    } while (luaChon != 0);

    return 0;
}
