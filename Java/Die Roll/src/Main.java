import java.util.Scanner;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        int Y=0,W=0,numerator=0,denominator=6;
        Scanner sc = new Scanner(System.in);
        Y=sc.nextInt();
        W=sc.nextInt();
        if(W>Y){
            numerator=7-W;
        }else {
            numerator=7-Y;
        }
        if(numerator%2==0 || numerator%3==0){
            while (numerator%2==0 && denominator%2==0){
                numerator=numerator/2;
                denominator=denominator/2;
            }
            while (numerator%3==0 && denominator%3==0){
                numerator=numerator/3;
                denominator=denominator/3;
            }
            System.out.println(numerator+"/"+denominator);
        }else{
            System.out.println(numerator+"/"+denominator);
        }
    }
}