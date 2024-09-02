import java.util.Scanner;
public class Lastdigit {
    public static void main(String[] args) {
        Scanner gen= new Scanner(System.in);
        System.out.println("Enter the 2 numbers");
        int n1= gen.nextInt();
        int n2= gen.nextInt();
        int last_dig1=n1%10;
        int last_dig2= n2 %10;
        if (last_dig1== last_dig2) {
            System.out.println(last_dig1 + " and " + last_dig2+ " Are same");
        }
        else{
            System.out.println("They aren't same");
        }
        gen.close();
    }
    
}
