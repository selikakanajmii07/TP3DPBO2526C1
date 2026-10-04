public class Burung extends Hewan {
    private double lebarSayap;
    private boolean bisaTerbang;

    public Burung(String nama, int umur, double berat, Pemilik pemilik, String nomorKartu, boolean sudahVaksin, String catatan, double lebarSayap, boolean bisaTerbang) {
        super(nama, umur, berat, pemilik, nomorKartu, sudahVaksin, catatan);
        this.lebarSayap = lebarSayap; this.bisaTerbang = bisaTerbang;
    }

    @Override public String jenis() { return "Burung"; }
    @Override public String suara() { return "Cuit cuit!"; }
    @Override public String detailKhusus() {
        return "Lebar sayap: " + (int) lebarSayap + " cm, Bisa terbang: " + (bisaTerbang ? "Ya" : "Tidak");
    }
    @Override public double hitungBiaya() { return 40000 + (bisaTerbang ? 0 : 30000); }
}
