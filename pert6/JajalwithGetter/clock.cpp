class Clock
{
public:
    Clock(int jam = 0, int menit = 0, int detik = 0);
    void setWaktu(int jamInput, int menitInput, int detikInput);
    int getJam();
    int getMenit();
    int getDetik();
    void displayWaktu();
    void tambahJam();
    void tambahMenit();
    void tambahDetik();

    /* Bagian dari encapsulation, penempatan variabel pada private agar variabel yang di declare tidak dapat di akses secara
sembarangan di program ini. Dan hanya dapat di akses oleh kelas ini atau kelas turunan dari kelas induk ini. atau
yang berkepentingan dengan kelas induk ini.*/
private:
    int jam;
    int menit;
    int detik;
};

Clock::Clock(int jam, int menit, int detik)
{
    setWaktu(jam, menit, detik);
}

// Meng over-ride method yang ada di kelas induk abstract inilah yang membuat suatu kelas disebut kelas Abstract.
void Clock::setWaktu(int jamInput, int menitInput, int detikInput)
{
    if ((jamInput >= 0 && jamInput < 24) && (menitInput >= 0 && menitInput < 60) && (detikInput >= 0 && detikInput < 60))
    {
        jam = jamInput;
        menit = menitInput;
        detik = detikInput;
    }
    else
    {
        cout << "Format waktu yang anda input Invalid!" << endl;
    }
}

int Clock::getJam()
{
    return jam;
}
int Clock::getMenit()
{
    return menit;
}

int Clock::getDetik()
{
    return detik;
}

void Clock::tambahJam()
{
    jam++;
}

void Clock::tambahMenit()
{
    menit++;
}

void Clock::tambahDetik()
{
    detik++;
}