public class Pemilik {
    private String nama, telepon, alamat;

    public Pemilik(String nama, String telepon, String alamat) {
        this.nama = nama; this.telepon = telepon; this.alamat = alamat;
    }

    public String getNama() { return nama; }

    @Override
    public String toString() { return nama + " (" + telepon + "), " + alamat; }
}
