public class Anjing extends Hewan {
    private String ras;
    private boolean terlatih;

    public Anjing(String nama, int umur, double berat, Pemilik pemilik, String nomorKartu, boolean sudahVaksin, String catatan, String ras, boolean terlatih) {
        super(nama, umur, berat, pemilik, nomorKartu, sudahVaksin, catatan);
        this.ras = ras; this.terlatih = terlatih;
    }

    @Override public String jenis() { return "Anjing"; }
    @Override public String suara() { return "Guk guk!"; }
    @Override public String detailKhusus() { return "Ras: " + ras + ", Terlatih: " + (terlatih ? "Ya" : "Tidak"); }
    @Override public double hitungBiaya() { return 60000 + berat * 2000; }
}
