public class Main
{
	public static void main(String[] args) {
        double nota = -5;
        
        if(nota>=7){
            System.out.println("APROVADO");
        }
        else if(nota>=5 && nota <7){
            System.out.println("RECUPERAÇÃO");
        }
        else if(nota>=0 && nota<5){
            System.out.println("REPROVADO");
        }
        else if(nota<0 || nota>10){
            System.out.println("NOTA INVÁLIDA");
        }
        System.out.println("*****FIM DO PROGRAMA*****");
	}
}
