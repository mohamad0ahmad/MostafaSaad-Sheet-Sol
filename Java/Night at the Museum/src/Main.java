import java.util.Scanner;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        String c =new String();
        int sum = 0,current = 0;
        Scanner sc = new Scanner(System.in);
        c =sc.nextLine();
        current = Math.abs(('a' - c.charAt(0)));
        if(current > 13){
            current = 26 -current;
            sum += current;
        } else {
            sum += current;
        }
        for(int i =0; i<(c.length() - 1); i++){
            current = Math.abs((c.charAt(i) - c.charAt(i+1)));
            if(current > 13){
                current = 26 -current;
                sum += current;
            } else {
                sum += current;
            }
        }
        System.out.println(sum);
    }
}