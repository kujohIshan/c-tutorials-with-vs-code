public class Q12_primeinrange {
    boolean isprime(int num){
        if(num <= 1){
            return false;
        }
        else{
            for(int i=2;i<= Math.sqrt(num);i++)
            {
                if(num%i==0){
                    return false;
                }
            }
            return true;
        }
    }
    public static void main(String[] args) {
        Q12_primeinrange primecheck= new Q12_primeinrange();
        for(int i=10; i<=99;i++){
            if (primecheck.isprime(i)) {
                System.out.print(i+ " ");
            }
        }
    }
}
