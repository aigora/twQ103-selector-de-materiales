#include<stdio.h>
#include<string.h>
 

struct proyectos{
	int reaccion; //hay 8 reacciones
	char material[100]; //plastico o vidrio
	char tipoRecipiente[100]; //tubo, vaso, probeta, matraz
	char tamano[100]; //pequeño, mediano, grande
	float precio[100];
	};

int main(){
	
	 system("COLOR 8F");
	
	 
	
	struct proyectos proyecto[100];  
	int i,nproyectos=0;
	char opcion;
	
	//FILE * fichero;
	

	
	
	do{
		
	   
	   printf("Elija una opcion:\nA. Iniciar proyecto nuevo\nB. Modificar/ver proyecto\nC. Recomendaciones\nD. Salir del programa\n");
	   fflush(stdin);
       scanf("%c",&opcion);
       
       system("cls");
       
    
	   switch(opcion){
	    	case 'A': 
	    	
	    	nproyectos++;
	    	
	    	printf("Elija una reaccion:\n1. reacc1\n2. Reacc2\n3. Reacc3\n4. Reacc4\n5. reacc5\n6. Reacc6\n7. Reacc7\n8. Reacc8\n9. Volver\n");
	        fflush(stdin);
            scanf("%i", &proyecto[nproyectos].reaccion);
            
            //fichero=fopen("proyecto.txt","w");
            
            if(proyecto[nproyectos].reaccion==1||proyecto[nproyectos].reaccion==5){
            	printf("Ha elegido la reaccion %i\n", proyecto[nproyectos].reaccion);
            	strcpy(proyecto[nproyectos].material,"plastico");
            	printf("El material es %s\n", proyecto[nproyectos].material);
            	
            	system("cls");
            	
            	if(proyecto[nproyectos].reaccion==1){
            		printf("Elija un recipiente:\n  tubo\n  vaso\n  probeta\n");
            		scanf("%s", proyecto[nproyectos].tipoRecipiente);
            		printf("el recip es %s\n",proyecto[nproyectos].tipoRecipiente);
				}
				else if(proyecto[nproyectos].reaccion==5){
            		printf("El recip mas adecuado es un vaso\n");
            		strcpy(proyecto[nproyectos].tipoRecipiente,"vaso");
            		printf("el recip es %s\n",proyecto[nproyectos].tipoRecipiente);
				}
			}
			else if(proyecto[nproyectos].reaccion==2||proyecto[nproyectos].reaccion==3||proyecto[nproyectos].reaccion==4||proyecto[nproyectos].reaccion==6||proyecto[nproyectos].reaccion==7||proyecto[nproyectos].reaccion==8){
				strcpy(proyecto[nproyectos].material,"vidrio");
            	printf("El material es %s\n", proyecto[nproyectos].material);
            	
            	if(proyecto[nproyectos].reaccion==2){
            		printf("Elija un recipiente:\n  tubo\n  vaso\n  probeta\n");
            		scanf("%s", proyecto[nproyectos].tipoRecipiente);
            		printf("el recip es %s\n",proyecto[nproyectos].tipoRecipiente);
				}
				
				else if(proyecto[nproyectos].reaccion==3){
            		printf("Elija un recipiente:\n  matraz\n  vaso\n");
            		scanf("%s", proyecto[nproyectos].tipoRecipiente);
            		printf("el recip es %s\n",proyecto[nproyectos].tipoRecipiente);
				}
				
				else if(proyecto[nproyectos].reaccion==4){
            		printf("Elija un recipiente:\n  tubo\n  vaso\n");
            		scanf("%s", proyecto[nproyectos].tipoRecipiente);
            		printf("el recip es %s\n",proyecto[nproyectos].tipoRecipiente);
				}
				
				else if(proyecto[nproyectos].reaccion==6){
            		printf("Elija un recipiente:\n  tubo\n  vaso\n probeta\n");
            		scanf("%s", proyecto[nproyectos].tipoRecipiente);
            		printf("el recip es %s\n",proyecto[nproyectos].tipoRecipiente);
				}
				
				else if(proyecto[nproyectos].reaccion==7){
            		printf("Elija un recipiente:\n  matraz\n  vaso\n");
            		scanf("%s", proyecto[nproyectos].tipoRecipiente);
            		printf("el recip es %s\n",proyecto[nproyectos].tipoRecipiente);
				}
				
				else if(proyecto[nproyectos].reaccion==8){
            		printf("Elija un recipiente:\n  tubo\n  vaso\n probeta\n");
            		scanf("%s", proyecto[nproyectos].tipoRecipiente);
            		printf("el recip es %s\n",proyecto[nproyectos].tipoRecipiente);
				}
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
