public abstract class Hewan {
    protected String nama;
    protected int umur;
    protected double berat;
    protected Pemilik pemilik;
    protected String nomorKartu;
    protected boolean sudahVaksin;
    protected String catatan;

    public Hewan(String nama, int umur, double berat, Pemilik pemilik, String nomorKartu, boolean sudahVaksin, String catatan) {
        this.nama = nama; this.umur = umur; this.berat = berat; this.pemilik = pemilik;
        this.nomorKartu = nomorKartu; this.sudahVaksin = sudahVaksin; this.catatan = catatan;
    }

    public abstract String jenis();
    public abstract String suara();
    public abstract String detailKhusus();
    public abstract double hitungBiaya();

    public void tampilkanInfo() {
        String b = (berat == (long) berat) ? String.valueOf((long) berat) : String.valueOf(berat);
        System.out.println("  Jenis   : " + jenis());
        System.out.println("  Nama    : " + nama + " (" + umur + " th, " + b + " kg)");
        System.out.println("  Detail  : " + detailKhusus());
        System.out.println("  Suara   : " + suara());
        System.out.println("  Pemilik : " + pemilik);
        System.out.println("  Kartu   : [" + nomorKartu + "] Vaksin: " + (sudahVaksin ? "Sudah" : "Belum")
                + ", Catatan: " + catatan);
        System.out.println("  Biaya   : Rp" + (long) hitungBiaya());
    }
}
