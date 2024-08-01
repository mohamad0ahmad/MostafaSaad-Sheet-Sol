import java.util.Scanner;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        int k=0,c=0,amount=0;
        Scanner sc = new Scanner(System.in);
         k=sc.nextInt();
         c=sc.nextInt();
         for(int i=1;i<=10000;i++){
                 if(((k*i-c) % 10 == 0) || ((k*i) % 10 == 0) ) {
                     amount = i;
                     i=10001;
                     break;
                 }
         }
        System.out.println(amount);
    }
}