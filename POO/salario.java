public class Main
{
	public static void main(String[] args) {
        double salario = 15000;
        double desconto = 0;
        double liquido = 0; 
        
        if(salario>=7000){
            desconto=salario*0.18;
            liquido=salario-desconto;
            System.out.println("Salário Bruto: " + salario);
            System.out.println("Desconto: " + desconto);
            System.out.println("Salário Líquido: " + liquido);
        }else if(salario<7000 && salario>=5000){
            desconto=salario*0.13;
            liquido=salario-desconto;
            System.out.println("Salário Bruto: " + salario);
            System.out.println("Desconto: " + desconto);
            System.out.println("Salário Líquido: " + liquido);
        }else if(salario<5000 && salario>=2000){
            desconto=salario*0.09;
            liquido=salario-desconto;
            System.out.println("Salário Bruto: " + salario);
            System.out.println("Desconto: " + desconto);
            System.out.println("Salário Líquido: " + liquido);
        }else if(salario>=1500 && salario<2000){
            desconto=0;
            liquido=salario-desconto;
            System.out.println("Salário Bruto: " + salario);
            System.out.println("Desconto: " + desconto);
            System.out.println("Salário Líquido: " + liquido);
        }
	}
}
        