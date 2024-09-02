import java.util.Scanner;
public class Interest{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the age ");
        int age= sc.nextInt();
        sc.nextLine();
        System.out.println("Enter the Gender Male of Female");
        String gen= sc.nextLine();
        double interest=0;
        if(gen.equals("Female")){
            if(age>=1 && age<=58){
                interest=8.2;
            }
            else if(age>58 && age<=100 ){
                interest= 9.2;
            }
            else{
                interest = 8.2;
            }
        }
        else if(gen.equals("Male")){
            if(age>=1 && age<=58){
                interest=8.4;
            }
            else if(age>58 && age<=100 ){
                interest= 10.5;
            }
            else{
                interest = 8.4;
            }
        }
        else{
            System.out.println("Wrong gender choice");
        }
        System.out.println("The interest is "+ interest +"%");
        sc.close();
    }
}