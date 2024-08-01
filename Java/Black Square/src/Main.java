import java.util.Scanner;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        int strip1=0,strip2=0,strip3=0,strip4=0,sum=0,currentStrip=0;
        String allStrips;
        Scanner scan = new Scanner(System.in);
        strip1 = scan.nextInt();
        strip2 = scan.nextInt();
        strip3 = scan.nextInt();
        strip4 = scan.nextInt();

        char []arr = scan.next().toCharArray();
        for(int i=0;i<arr.length;i++){

            switch (arr[i]) {
                case '1': sum += strip1;
                        break;
                case '2': sum += strip2;
                        break;
                case '3': sum += strip3;
                        break;
                case '4': sum += strip4;
                        break;
            }
        }

        System.out.println(sum);
    }
}