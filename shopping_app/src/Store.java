import java.awt.*;
import java.util.List;
import java.util.Scanner;
import java.util.Vector;

public class Store {
    Admin admin;
    Vector<Customer>customers;

    boolean findUserName(String username){
        for(int i = 0 ; i < customers.size() ; i++)
        {
            if(customers.elementAt(i).getUserName().equals(username)){
                return true;
            }
        }
        return false;
    }

    public void showOrders(){
        for(int i = 0 ; i < admin.getProducts().size() ; i++)
        {
            System.out.print("The product which its name is: ");
            System.out.println(admin.getProducts().elementAt(i).getName());
            System.out.print("its id is: ");
            System.out.println(admin.getProducts().elementAt(i).getId());
        }
    }
    public void loginAdmin(){
        Scanner scan = new Scanner(System.in);
        System.out.println("Please enter the username");
        String username = scan.next();
        System.out.println("Please enter the password");
        String password = scan.next();
        if(admin.getUserName().equals(username) && admin.getPassword().equals(password)){
            while (true){
                System.out.println("To add a product type 1");
                System.out.println("To delete a product type 2");
                System.out.println("To logout type anything else");
                int option = scan.nextInt();
                if(option == 1){
                    //add product
                    System.out.println("Please enter the product's name");
                    String productName = scan.next();
                    System.out.println("Please enter the product's price");
                    double price = scan.nextDouble();

                    Product newProduct = new Product(productName, price);
                    admin.addProduct(newProduct);
                }else if(option == 2){
                    //delete product
                    showOrders();

                    System.out.println("Please select the id of the product that you want to remove");
                    int id = scan.nextInt();
                    admin.removeProduct(id);
                }else{
                    break;
                }
            }
        }else{
            System.out.println("You entered a wrong username or password");
        }
    }

    public void loginCustomer(){
        Scanner scan = new Scanner(System.in);
        System.out.println("Please enter the username");
        String username = scan.next();
        System.out.println("Please enter the password");
        String password = scan.next();
        boolean loggedIn = false;
        for(int i = 0 ; i < customers.size() ; i++){
            if(customers.elementAt(i).equals(username)){
                if(customers.elementAt(i).getPassword().equals(password)){
                    //logged in
                    loggedIn = true;
                    while(true){
                        System.out.println("To add an order type 1");
                        System.out.println("To show your past orders type 2");
                        int option = scan.nextInt();
                        if(option == 1){
                            //add order
                            Vector<Product> cart = new Vector<Product>();
                            showOrders();
                            while(true){
                                System.out.println("Please enter the id of the product you want to buy or type -1 to checkout");
                                int id = scan.nextInt();
                                if(id == -1){
                                    break;
                                }else{
                                    int index = 0;
                                    for(int j = 0 ; j < admin.getProducts().size() ; j++)
                                    {
                                        if(admin.getProducts().elementAt(j).getId() == id){
                                            index = j;
                                            break;
                                        }
                                    }
                                    cart.add(admin.getProducts().elementAt(index));
                                }
                            }
                            //customers.elementAt(i).
                        }else if(option == 2){
                            //show past orders
                        }else{
                            break;
                        }
                    }
                }else{
                    System.out.println("Sorry you entered a wrong username or password");
                    break;
                }
            }
        }
        if(!loggedIn){
            System.out.println("Sorry you entered a wrong username or password");
        }
    }

    public void register(){
        Scanner scan = new Scanner(System.in);
        System.out.println("Please enter the username");
        String username = scan.next();
        System.out.println("Please enter the password");
        String password = scan.next();
        System.out.println("Please enter the your block number");
        int blockNumber = scan.nextInt();

        while (findUserName(username)){
            System.out.println("This username already exists please choose another");
            username = scan.next();
        }

        Customer newCustomer = new Customer(username, password, blockNumber);
        customers.add(newCustomer);
    }

    public Store() {
        admin = new Admin("admin", "admin123admin", new Vector<StoreHouse>());
        customers = new Vector<Customer>();
    }
}
