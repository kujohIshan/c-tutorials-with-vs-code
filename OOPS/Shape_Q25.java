class Shape{
    void draw(){
        System.out.println("Drawing shape");
    }
    void erase(){
        System.out.println("Erassing shape");
    }
}
class Circle extends Shape{
    void draw(){
        System.out.println("Drawing circle");
    }
    void erase(){
        System.out.println("Erassing circle");
    }
}

class Triangle extends Shape{
    void draw(){
        System.out.println("Drawing Triangle");
    }
    void erase(){
        System.out.println("Erassing Triangle");
    }
}

class Square extends Shape{
    void draw(){
        System.out.println("Drawing square");
    }
    void erase(){
        System.out.println("Erassing square");
    }
}

public class Shape_Q25 {
    public static void main(String[] args){
        
        Shape t= new Triangle();
        Shape c= new Circle();
        Shape s= new Square();

        t.draw();
        t.erase();

        c.draw();
        c.erase();

        s.draw();
        s.erase();
    }

}
