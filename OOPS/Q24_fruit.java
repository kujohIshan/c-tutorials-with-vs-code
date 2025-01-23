class Fruit{
    String name;
    String size;
    String taste;
    // constructor
    Fruit(String name, String size, String taste){
        this.name=name;
        this.size= size;
        this.taste= taste;
    }
    void eat(){
        System.out.println(name+ " "+ taste);
    }
}
class Apple extends Fruit{
    // constructor
    Apple(){
        super("Apple", "small", "Sweet");
    }
    void eat(){
        System.out.println(name+ " tastes "+ taste +" ans is "+ size);
    }
}
class Orange extends Fruit{
    // constructor
    Orange(){
        super("Orange", "medium", "Sour");
    }
    void eat(){
        System.out.println(name+ " tastes "+ taste +" and is "+ size);
    }
}
public class Q24_fruit{
    public static void main(String[] args){
        Fruit apel = new Apple();
        Fruit orange = new Orange();
        Fruit phol = new Fruit("Mango " , "Large", "Sweet");

        apel.eat();
        orange.eat();
        phol.eat();
    }
}