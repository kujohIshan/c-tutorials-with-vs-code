class Author{
    String name;
    String email;
    char gender;
    // parameterised constructor
    public Author(String name, String email, char gender){
        this.name=name;
        this.email= email;
        this.gender= gender;
    }

    public String getname(){
        return name;
    }
    public void setname(String name){
        this.name=name;
    }
    public String getemail(){
        return email;
    }
    public void setemail(String email){
        this.email = email;
    }
    public char getgender(){
        return gender;
    }
    public void setgender(char gender){
        this.gender= gender;
    }

    @Override
    public String toString(){
        return "Author Name: " + name + "\nAuthor Email: " + email;
    }
}
class Book{
    String name;
    int quantity;
    double price;
    Author author; // Author object

    public Book(String name, Author author, int quantity, double price){
        this.name=name;
        this.author=author;
        this.quantity= quantity;
        this.price= price;
    }
    public String getname(){
        return name;
    }
    public void setname(String name){
        this.name=name;
    }
    public Author getAuthor(){
        return author;
    }
    public void setAuthor(Author author){
        this.author=author;
    }
    public int getquantity(){
        return quantity;
    }
    public void setquantity(int quantity){
        this.quantity=quantity;
    }
    public double getprice(){
        return price;
    }
    public void setprice(double price){
        this.price=price;
    }
    @Override
    public String toString(){
        return "Book name "+ name +" \nPrice " + price + " \nQuantity "+ quantity+ " \n "+ author.toString();
    }
}
public class Q21_Author {

    public static void main(String[] args) {
        Author author= new Author("Kentaro Muira","kentaroberser@gmail.com", 'M' );

        Book pustok = new Book("Berserk",author,13,2100.0);
        // author.setname("deep");
        System.out.println(pustok.toString());
    }
}