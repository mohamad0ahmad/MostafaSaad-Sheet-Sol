import java.util.Scanner;


public class Main {
    public static void main(String[] args) {
        int numOfOranges =0,maxSizeOfOranges = 0,maxSizeOfJucier=0,juice=0,times=0;
        Scanner input = new Scanner(System.in);

        numOfOranges = input.nextInt();
        maxSizeOfOranges = input.nextInt();
        maxSizeOfJucier = input.nextInt();

        int[] orangesSize = new int[numOfOranges];
        for (int i = 0; i < numOfOranges; i++) {
            orangesSize[i] = input.nextInt();
        }


        for (int i = 0; i < numOfOranges; i++) {
            if (orangesSize[i] <= maxSizeOfOranges) {

                juice += orangesSize[i];
                if(juice > maxSizeOfJucier){
                    juice = 0;
                    times++;
                }
            }else{

            }
        }

        System.out.println(times);
    }
}