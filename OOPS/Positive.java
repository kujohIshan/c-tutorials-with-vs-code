import java.util.Scanner;
public class Positive{
    public static void main(String[]args){
        Scanner gen= new Scanner(System.in);
        System.out.println("Enter the number");
        int num= gen.nextInt();
        if(num>0){
            System.out.println(num+" is positive");
        }
        else if(num< 0){
            System.out.println(num+" is negative");
        }
        else{
            System.out.println(num);
        }
        gen.close();
    }
}