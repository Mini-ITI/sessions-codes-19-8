import java.util.Scanner;

public class MAIN {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        Store store = new Store();
        while (true){
            System.out.println("To Login type 1");
            System.out.println("To Register type 2");
            int option = scan.nextInt();
            if(option == 1){
                //login
                System.out.println("if you are an admin type 1");
                System.out.println("if you are a customer type 2");
                int type = scan.nextInt();
                if(type == 1){
                    store.loginAdmin();
                }else{
                    store.loginCustomer();
                }
            }
            else if(option == 2){
                store.register();
            }
            else{
                break;
            }
        }
    }
}
