#include <iostream>
#include <mysql/mysql.h>
#include <sstream>

using namespace std;

int pilih;
char kembali;
const char *hostname = "172.24.112.1";
const char *user = "root";
const char *pass = "";
const char *dbname = "uas";
unsigned int port = 3306;
const char *unixsocket = NULL;
unsigned long clientflag = 0;

MYSQL *connectdb()
{
    MYSQL *conn;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, hostname, user, pass, dbname, port, unixsocket, clientflag);
    if (conn)
    {
        return conn;
    }
    else
    {
        cout << "Database tidak bisa tersambung" << endl;
        return conn;
    }
}

class CRUD
{

private:
    stringstream inserttodb, selectdb, updatedb, deletedb;
    string kd_dosen, nama, nim, id;

public:
    void createDosen(MYSQL *conn)
    {
        stringstream inserttodb;
        string kd_dosen, nama;
        int qstate = 0;
        cout << "insert Kode Dosen : " << endl;
        cin >> kd_dosen;
        cout << "insert Nama : " << endl;
        cin >> nama;
        inserttodb << "INSERT INTO dosen (kd_dosen, nama) VALUES ('" + kd_dosen + "','" + nama + "')";
        string query = inserttodb.str();
        const char *q = query.c_str();
        qstate = mysql_query(conn, q);
        if (qstate == 0)
        {
            cout << "berhasil insert" << endl;
        }
        else
        {
            cout << "gagal" << endl;
        }
    }

    void createMahasiswa(MYSQL *conn)
    {
        int qstate = 0;
        stringstream inserttodb;
        string nim, nama;
        cout << "insert Kode NIM : " << endl;
        cin >> nim;
        cout << "insert Nama : " << endl;
        cin >> nama;
        inserttodb << "INSERT INTO mahasiswa (nim, nama) VALUES ('" + nim + "','" + nama + "')";
        string query = inserttodb.str();
        const char *q = query.c_str();
        qstate = mysql_query(conn, q);
        if (qstate == 0)
        {
            cout << "berhasil insert" << endl;
        }
        else
        {
            cout << "gagal" << endl;
        }
    }

    void displayData(MYSQL *conn)
    {
        MYSQL_ROW row;
        MYSQL_RES *res;

        if (conn)
        {
            int qstate = mysql_query(conn, "SELECT * FROM mahasiswa JOIN dosen ON mahasiswa.id = dosen.id");
            if (!qstate)
            {
                res = mysql_store_result(conn);
                int count = mysql_num_fields(res);
                cout << "====================================================================================LIST DATA====================================================================================\n";
                cout << "\tID\tNIM\tNAMA\t\tCreated at\t\tLast Updated\t\tID\tKode Dosen\tNama\tCreated at\t\t Last Updated\n";
                while (row = mysql_fetch_row(res))
                {
                    for (int i = 0; i < count; i++)
                    {
                        cout << "\t" << row[i];
                        if (i == 2 || i == 6)
                        {
                            cout << "\t";
                        }
                    }
                    cout << endl;
                }
            }
        }
        else
        {
            cout << "Data Kosong" << endl;
        }
    }

    void updateMahasiswa(MYSQL *conn)
    {
        MYSQL_ROW row;
        MYSQL_RES *res;
        string id;
        cout << "enter id : " << endl;
        cin >> id;
        stringstream selectdb, updatedb;
        selectdb << "SELECT * FROM mahasiswa WHERE id = '" + id + "' ";
        string query = selectdb.str();
        const char *q = query.c_str();
        mysql_query(conn, q);
        res = mysql_store_result(conn);
        int count = mysql_num_fields(res);
        my_ulonglong x = mysql_num_rows(res);
        string nim, nama;
        if (x > 0)
        {
            cout << "insert NIM : " << endl;
            cin >> nim;
            cout << "insert Nama : " << endl;
            cin >> nama;
            updatedb << "UPDATE mahasiswa SET nim = '" + nim + "', nama= '" + nama + "' WHERE id = '" + id + "' ";
            string query = updatedb.str();
            const char *q = query.c_str();
            mysql_query(conn, q);
        }
        else
        {
            cout << "error\n";
        }
    }

    void updateDosen(MYSQL *conn)
    {
        MYSQL_ROW row;
        MYSQL_RES *res;
        string id;
        cout << "enter id : " << endl;
        cin >> id;
        stringstream selectdb, updatedb;
        selectdb << "SELECT * FROM dosen WHERE id = '" + id + "' ";
        string query = selectdb.str();
        const char *q = query.c_str();
        mysql_query(conn, q);
        res = mysql_store_result(conn);
        int count = mysql_num_fields(res);
        my_ulonglong x = mysql_num_rows(res);
        string nama, kd_dosen;
        if (x > 0)
        {
            cout << "insert Kode Dosen : " << endl;
            cin >> kd_dosen;
            cout << "insert Nama : " << endl;
            cin >> nama;
            updatedb << "UPDATE dosen SET nim = '" + kd_dosen + "', nama= '" + nama + "' WHERE id = '" + id + "' ";
            string query = updatedb.str();
            const char *q = query.c_str();
            mysql_query(conn, q);
        }
        else
        {
            cout << "error\n";
        }
    }

    void deleteMahasiswa(MYSQL *conn)
    {
        MYSQL_ROW row;
        MYSQL_RES *res;
        string id;
        cout << "enter id : " << endl;
        cin >> id;
        stringstream selectdb, deletedb;
        selectdb << "SELECT * FROM mahasiswa WHERE id = '" + id + "' ";
        string query = selectdb.str();
        const char *q = query.c_str();
        mysql_query(conn, q);
        res = mysql_store_result(conn);
        int count = mysql_num_fields(res);
        my_ulonglong x = mysql_num_rows(res);

        if (x > 0)
        {
            deletedb << "DELETE FROM mahasiswa WHERE id = '" + id + "' ";
            string query = deletedb.str();
            const char *q = query.c_str();
            mysql_query(conn, q);
        }
        else
        {
            cout << "error\n";
        }
    }

    void deleteDosen(MYSQL *conn)
    {
        MYSQL_ROW row;
        MYSQL_RES *res;
        string id;
        cout << "enter id : " << endl;
        cin >> id;
        stringstream selectdb, deletedb;
        selectdb << "SELECT * FROM dosen WHERE id = '" + id + "' ";
        string query = selectdb.str();
        const char *q = query.c_str();
        mysql_query(conn, q);
        res = mysql_store_result(conn);
        int count = mysql_num_fields(res);
        my_ulonglong x = mysql_num_rows(res);

        if (x > 0)
        {
            deletedb << "DELETE FROM dosen WHERE id = '" + id + "' ";
            string query = deletedb.str();
            const char *q = query.c_str();
            mysql_query(conn, q);
        }
        else
        {
            cout << "error\n";
        }
    }
};

int main()
{
    MYSQL *conn = connectdb();
    CRUD C;
    do
    {
        cout << "MENU";
        cout << "\n 1. Create Mahasiswa ";
        cout << "\n 2. Create Dosen ";
        cout << "\n 3. Read Mahasiswa & Dosen ";
        cout << "\n 4. Update Mahasiswa ";
        cout << "\n 5. Update Dosen";
        cout << "\n 6. Delete Mahasiswa";
        cout << "\n 7. Delete Dosen";
        cout << "\n 8. EXIT ";

        cout << "\nPilih : ";
        cin >> pilih;

        switch (pilih)
        {
        case 1:
            C.createMahasiswa(conn);
            break;
        case 2:
            C.createDosen(conn);
            break;
        case 3:
            C.displayData(conn);
            break;
        case 4:
            C.updateMahasiswa(conn);
            break;
        case 5:
            C.updateDosen(conn);
            break;
        case 6:
            C.deleteMahasiswa(conn);
            break;
        case 7:
            C.deleteDosen(conn);
            break;
        case 8:
            cout << " Thank you !" << endl;
            return 0;
        default:
            cout << "Pilihan Salah" << endl;
            break;
        }
        cout << "Ingin memilih menu lain (y/t)? ";
        cin >> kembali;
        cout << endl;
    } while (kembali != 't');
    cout << "Thanks" << endl;
    return 0;
}