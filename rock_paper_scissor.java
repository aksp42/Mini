import java.util.Scanner;
import java.util.Random;
public class rock_paper_scissor {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter Your move : ");
        int Player=s.nextInt();
        switch(Player){
            case 1 : System.out.println("You have chosen Rock");
            break;
            case 2 : System.out.println("You have chosen Paper");
            break;
            case 3 : System.out.println("You have chosen Scissor");
            break;
            default : System.out.println("Choose again ! you chose a Invalid move");
        }
         Random r=new Random();
           int Computer=r.nextInt(3)+1;
        switch(Computer){
            case 1 : System.out.println("Computer have chosen : "  + Computer);
                break;
            case 2 : System.out.println("Computer have chosen : "  +  Computer);
                break;
            case 3 : System.out.println("Computer have chosen : "  +  Computer);
                break;
        }
        if (Player==Computer){
            System.out.println("Match tie");}
        else if ((Player==1 && Computer==2) || (Player==2 && Computer==3) || (Player==3 && Computer==1)  ){
            System.out.println("You Lost the Game! Computer Won");
        }
        else if (Player==2 && Computer==1 || Player==3 && Computer==2 || Player==1 && Computer==3  ) {
            System.out.println("Congrats ! You Won ");
        }

        System.out.println("Thank you for playing Game");




    }
}
