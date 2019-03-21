#include<stdio.h>

int main(){

	char opcion;
	do{
	   printf("Elija una opcion:\nA. Iniciar proyecto nuevo\nB. Continuar proyecto\nC. Salir del programa\n");
	   fflush(stdin);
       scanf("%c",&opcion);
	   switch(opcion){
	    	case 'A': 
	    	
	    	printf("Elija una estructura:\n1. Bomba\n2. Mezclador\n3. Calentador\n4. Volver\n");
	   fflush(stdin);
       scanf("%c",&opcion);
	   switch(opcion){
	    	case '1': 
	    	printf("Elija las caracteristicas de la bomba\n");
	
	    	break;
	    	
		    case '2': 
		    printf("Elija las caracteristicas del mezclador\n");
		    
	    	break;
			
			case '3': 
			printf("Elija las caracteristicas del calentador\n");	
	    	
	    	
	    	case '4': return 0;
	    	break;
	    }
	
	    	break;
	    	
		    case 'B': 
		    printf("Seleccione su proyecto:\n");
		    
	    	break;	
	    	
	    	
	    	case 'C': return 0;
	    	break;
	    	
	    	default: printf("opcion incorrecta");
	}

	}while(opcion!='C');
}
	

