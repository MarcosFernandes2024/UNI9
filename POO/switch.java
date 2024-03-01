public class Main
{
	public static void main(String[] args) {
        
        char estadoCivil = 's';
        
        switch(estadoCivil){
            case 's':
                System.out.println("SOLTEIRO");
                break;
            case 'c':
                System.out.println("CASADO");
                break;
            case 'v':
                System.out.println("VIÚVO");
                break;
            case 'd':
                System.out.println("DIVORCIADO");
                break;
            default:
                System.out.println("OPÇÃO INVÁLIDA");
                break;
        }
	}
}
  