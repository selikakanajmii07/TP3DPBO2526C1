import java.util.ArrayList;

public class Klinik {
    private String nama;
    private ArrayList<Hewan> daftarPasien = new ArrayList<>();

    public Klinik(String nama) { this.nama = nama; }

    public void tambahPasien(Hewan h) { daftarPasien.add(h); }

    public double totalBiaya() {
        double total = 0;
        for (Hewan h : daftarPasien) total += h.hitungBiaya();
        return total;
    }

    public void tampilSemua(String judul) {
        System.out.println("\n===== " + nama + " (" + daftarPasien.size() + " pasien) =====");
        for (int i = 0; i < daftarPasien.size(); i++) {
            System.out.println("Pasien #" + (i + 1));
            daftarPasien.get(i).tampilkanInfo();
        }
        System.out.println("Total pendapatan: Rp" + (long) totalBiaya());
    }
}
