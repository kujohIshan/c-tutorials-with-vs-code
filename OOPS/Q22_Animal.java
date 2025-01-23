class Animal{
    public void eat(){
        System.out.println("Eating");
    }
    public void sleep(){
        System.out.println("Sleeping");
    }
}
class Bird extends Animal{
    public void eat(){
        System.out.println("Bird is eating");
    }
    public void sleep(){
        System.out.println("Bird is sleeping");
    }
}
public class Q22_Animal {
    public static void main(String[] args) {
        Animal poshu= new Animal();
        poshu.eat();
        poshu.sleep();
        Bird pakhi = new Bird();
        pakhi.eat();
        pakhi.sleep();
    }
}
