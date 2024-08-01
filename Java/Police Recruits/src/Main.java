import java.util.Scanner;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        int numOfCrimes =0;
        int numOfPolice =0;
        int numOfEnents =0;
        int currentEvent =0;
        Scanner input = new Scanner(System.in);
        numOfEnents = input.nextInt();
        for (int i = 0; i < numOfEnents; i++) {
            currentEvent = input.nextInt();
            if (currentEvent > 0) {
                numOfPolice += currentEvent;
            } else if (currentEvent < 0) {
                if(numOfPolice > 0){
                    numOfPolice--;
                } else {
                    numOfCrimes++;
                }
            }
        }
        System.out.println(numOfCrimes);
    }
}