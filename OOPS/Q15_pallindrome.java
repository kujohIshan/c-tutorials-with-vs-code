import java.util.*;
public class Q15_pallindrome {
    public static boolean ispal(int n){
        int copy= n;
        int reverse=0;
        while(n!=0)
        {
            int d= n%10;
            reverse= reverse*10 + d;
            n=n/10;
        }
        if(copy== reverse){
            return true;
        }
        else{
            return false;
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number to check ");
        int num= sc.nextInt();
        if(ispal(num)){
            System.out.println( num+" is palindrome");
        }
        else{
            System.out.println(num+ " is not palindrome");
        }
    }
}
