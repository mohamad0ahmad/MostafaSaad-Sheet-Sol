import java.util.Scanner;


public class Main {
    public static void main(String[] args) {
        int c=0;
        Scanner sc = new Scanner(System.in);
        String string=sc.next();
        String instruction=sc.next();

        for(int i=0;i<instruction.length();i++){
            if (string.charAt(c) == instruction.charAt(i)){
                c++;
            }
        }
        System.out.println(++c);
    }
}