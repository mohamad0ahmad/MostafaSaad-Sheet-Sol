import java.util.Scanner;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        long s1=0, s2=0, s3=0, s4=0,shoes =0;
        Scanner sc = new Scanner(System.in);
        s1 = sc.nextInt();
        s2 = sc.nextInt();
        s3 = sc.nextInt();
        s4 = sc.nextInt();
        long arr[]={s1,s2,s3,s4};
        for(int i=0;i<arr.length;i++){
            for(int j=i+1;j<arr.length;j++){
                if(arr[i]==arr[j]){
                    shoes++;
                }
            }
        }

        if(shoes == 3){
            System.out.println(2);
        }
        if(shoes == 6){
            System.out.println(3);
        }

        if(shoes == 2  || shoes == 0 || shoes == 1 ){
            System.out.println(shoes);
        }
    }
}