#include<stdio.h>

struct proyectos{
	int reaccion;
	char material[100];
	char tipoRecipiente[100];
	char tamano[100];
	float precio[100];
	};

int main(){
	
	struct proyectos proyecto[100];  
	int i,nproyectos=0;
	char opcion;
	
	
	//char reacc1[100], reacc2[100], reacc3[100], reacc4[100], reacc5[100], reacc6[100], reacc7[100], reacc8[100];
    char material1, material2, material3, material4;
	
	
	do{
		
	   
	   printf("Elija una opcion:\nA. Iniciar proyecto nuevo\nB. Modificar/ver proyecto\nC. Recomendaciones\nD. Salir del programa\n");
	   fflush(stdin);
       scanf("%c",&opcion);
       
    
	   switch(opcion){
	    	case 'A': 
	    	
	    	nproyectos++;
	    	
	    	printf("Elija una reaccion:\n1. reacc1\n2. Reacc2\n3. Reacc3\n4. Reacc4\n5. reacc5\n6. Reacc6\n7. Reacc7\n8. Reacc8\n9. Volver\n");
	        fflush(stdin);
            scanf("%i", &proyecto[1].reaccion);
            if(proyecto[nproyectos].reaccion==1||proyecto[nproyectos].reaccion==2){
            	material1=proyecto[nproyectos].material;
            	printf("El material es %s\n", proyecto[nproyectos].material);
			}
			else if(proyecto[nproyectos].reaccion==3||proyecto[nproyectos].reaccion==4){
				material2=proyecto[nproyectos].material[0];
			}
			else if(proyecto[nproyectos].reaccion==5||proyecto[nproyectos].reaccion==6){
				material3=proyecto[nproyectos].material[0];
			}
			else if(proyecto[nproyectos].reaccion==7||proyecto[nproyectos].reaccion==8){
				material4=proyecto[nproyectos].material[0];
			}
			
        
	  
	    	break;
	    
	
	    
	    	
		    case 'B': 
		    printf("Seleccione su proyecto:\n");
		    
	    	break;
			
			case 'C':
			break;	
	    	
	    	
	    	case 'D':
			
			return 0;
	    	break;
	    	
	    	default: printf("opcion incorrecta");
	}

    
	}while(opcion!='C');
	
	//printf("El material es %s", proyecto[nproyectos].material);
	
}
