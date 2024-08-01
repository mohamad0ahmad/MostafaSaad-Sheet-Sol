import java.util.Scanner;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int wires=0;
        wires=sc.nextInt();

        int birdsOnWires[];
        birdsOnWires=new int[wires];
        for(int i=0;i<wires;i++){
            birdsOnWires[i]=sc.nextInt();
        }

        int shoots =0;
        shoots=sc.nextInt();

         int[] numOfWire=new int[shoots];
         int[] numOfKilledBird=new int[shoots];
         for(int i=0;i<shoots;i++){
             numOfWire[i]=sc.nextInt();
             numOfKilledBird[i]=sc.nextInt();
         }
         for(int i=0;i<shoots;i++){
             if(numOfWire[i]== 1){

             }else{
                 birdsOnWires[numOfWire[i]-2] += (numOfKilledBird[i]-1);
             }
             if (numOfWire[i] == wires){

             }else{
                 birdsOnWires[numOfWire[i]] += (birdsOnWires[numOfWire[i]-1]-numOfKilledBird[i]);
             }

             birdsOnWires[numOfWire[i]-1] = 0;
         }
         for(int i=0;i<wires;i++){
             System.out.println(birdsOnWires[i]);
         }
    }
}