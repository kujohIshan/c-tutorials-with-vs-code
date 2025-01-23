import java.util.*;
public class Q20_power {
    public static int powerInt(int num1, int num2){
        return (int) Math.pow(num1, num2);
    }
    public static double powerDouble(double num1, double num2){
        return (double) Math.pow(num1, num2);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the base number int both integer and double");
        int base_int= sc.nextInt();
        double base_doubl= sc.nextDouble();
        System.out.println("Enter the exponent number in both integetr and double");
        int expo_int= sc.nextInt();
        double expo_doubl= sc.nextDouble();
        System.out.println("Power in integer "+ powerInt(base_int, expo_int));
        System.out.println("Power in double "+ powerDouble(base_doubl, expo_doubl)) ;

        sc.close();
    }
}
