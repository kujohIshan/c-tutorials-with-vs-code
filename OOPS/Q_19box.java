public class Q_19box {
    double height, width, depth;
    Q_19box(double w, double h, double d){
        width=w;
        height=h;
        depth=d;
    }
    double volume(){
        return width *depth*height;
    }
    public static void main(String[] args) {
        Q_19box box = new Q_19box(10, 5, 5);
        System.out.println("Volume of the box is: "+ box.volume());
    }
}
