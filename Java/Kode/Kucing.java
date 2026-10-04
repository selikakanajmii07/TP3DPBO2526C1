public class Kucing extends Hewan {
    private boolean buluPanjang;

    public Kucing(String nama, int umur, double berat, Pemilik pemilik, String nomorKartu, boolean sudahVaksin, String catatan, boolean buluPanjang) {
        super(nama, umur, berat, pemilik, nomorKartu, sudahVaksin, catatan);
        this.buluPanjang = buluPanjang;
    }

    @Override public String jenis() { return "Kucing"; }
    @Override public String suara() { return "Meow~"; }
    @Override public String detailKhusus() { return "Bulu panjang: " + (buluPanjang ? "Ya" : "Tidak"); }
    @Override public double hitungBiaya() { return 50000 + (buluPanjang ? 25000 : 0); }
}
