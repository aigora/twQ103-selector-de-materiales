#include<stdio.h>
#include<string.h>
 

struct proyectos{
	int reaccion; //hay 8 reacciones
	char material[100]; //plastico o vidrio
	char tipoRecipiente[100]; //tubo, vaso, probeta, matraz
	//char tamano[100]; //pequeño, mediano, grande
	float precio[100];
	};

int main(){
	
	 system("COLOR 8F");
	
	 
	
	struct proyectos proyecto[100];  
	int i,nproyectos=0;
	char opcion;
	FILE * fichero;
	
	
	

	
	
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
            
            
	        
	        
            
            if(proyecto[nproyectos].reaccion==1||proyecto[nproyectos].reaccion==5||proyecto[nproyectos].reaccion==7){
            	printf("Ha elegido la reaccion %i\n", proyecto[nproyectos].reaccion);
            	strcpy(proyecto[nproyectos].material,"plastico");
            	
            	
            	system("cls");
            	
            	if(proyecto[nproyectos].reaccion==1){
            		printf("Elija un recipiente:\n  tubo\n  vaso\n  probeta\n");
            		scanf("%s", proyecto[nproyectos].tipoRecipiente);
            		
            		
            		fichero=fopen("proyectoReacc1.txt","w");
                    if(fichero==NULL){
	                	printf("Error en la apertura del fichero\n");
	                	return -1;
	                }
	                
	                	fprintf(fichero, " Reaccion: reacc1\n Material: %s\n Tipo de recipiente: %s", proyecto[nproyectos].material, proyecto[nproyectos].tipoRecipiente);
                 	
                	fclose(fichero);
				}
				else if(proyecto[nproyectos].reaccion==5){
            		printf("El recip mas adecuado es un vaso\n");
            		strcpy(proyecto[nproyectos].tipoRecipiente,"vaso");
            		
            		
            		fichero=fopen("proyectoReacc5.txt","w");
                    if(fichero==NULL){
	                	printf("Error en la apertura del fichero\n");
	                	return -1;
	                }
	                
	                	fprintf(fichero, " Reaccion: reacc5\n Material: %s\n Tipo de recipiente: %s", proyecto[nproyectos].material, proyecto[nproyectos].tipoRecipiente);
                 	
                	fclose(fichero);
				}
				else if(proyecto[nproyectos].reaccion==7){
            		printf("Elija un recipiente:\n  matraz\n  vaso\n");
            		scanf("%s", proyecto[nproyectos].tipoRecipiente);
            		
            		
            		fichero=fopen("proyectoReacc7.txt","w");
                    if(fichero==NULL){
	                	printf("Error en la apertura del fichero\n");
	                	return -1;
	                }
	                
	                	fprintf(fichero, " Reaccion: reacc7\n Material: %s\n Tipo de recipiente: %s", proyecto[nproyectos].material, proyecto[nproyectos].tipoRecipiente);
                 	
                	fclose(fichero);
				}
			}
			else if(proyecto[nproyectos].reaccion==2||proyecto[nproyectos].reaccion==3||proyecto[nproyectos].reaccion==4||proyecto[nproyectos].reaccion==6||proyecto[nproyectos].reaccion==8){
				strcpy(proyecto[nproyectos].material,"vidrio");
            	
            	
            	if(proyecto[nproyectos].reaccion==2){
            		printf("Elija un recipiente:\n  tubo\n  vaso\n  probeta\n");
            		scanf("%s", proyecto[nproyectos].tipoRecipiente);
            		
            		
            		fichero=fopen("proyectoReacc2.txt","w");
                    if(fichero==NULL){
	                	printf("Error en la apertura del fichero\n");
	                	return -1;
	                }
	                
	                	fprintf(fichero, " Reaccion: reacc2\n Material: %s\n Tipo de recipiente: %s", proyecto[nproyectos].material, proyecto[nproyectos].tipoRecipiente);
                 	
                	fclose(fichero);
				}
				
				else if(proyecto[nproyectos].reaccion==3){
            		printf("Elija un recipiente:\n  matraz\n  vaso\n");
            		scanf("%s", proyecto[nproyectos].tipoRecipiente);
            		
            		
            		fichero=fopen("proyectoReacc3.txt","w");
                    if(fichero==NULL){
	                	printf("Error en la apertura del fichero\n");
	                	return -1;
	                }
	                
	                	fprintf(fichero, " Reaccion: reacc3\n Material: %s\n Tipo de recipiente: %s", proyecto[nproyectos].material, proyecto[nproyectos].tipoRecipiente);
                 	
                	fclose(fichero);
				}
				
				else if(proyecto[nproyectos].reaccion==4){
            		printf("Elija un recipiente:\n  tubo\n  vaso\n");
            		scanf("%s", proyecto[nproyectos].tipoRecipiente);
            		
            		
            		
            		fichero=fopen("proyectoReacc4.txt","w");
                    if(fichero==NULL){
	                	printf("Error en la apertura del fichero\n");
	                	return -1;
	                }
	                
	                	fprintf(fichero, " Reaccion: reacc4\n Material: %s\n Tipo de recipiente: %s", proyecto[nproyectos].material, proyecto[nproyectos].tipoRecipiente);
                 	
                	fclose(fichero);
				}
				
				else if(proyecto[nproyectos].reaccion==6){
            		printf("Elija un recipiente:\n  tubo\n  vaso\n probeta\n");
            		scanf("%s", proyecto[nproyectos].tipoRecipiente);
            		
            		
            		fichero=fopen("proyectoReacc6.txt","w");
                    if(fichero==NULL){
	                	printf("Error en la apertura del fichero\n");
	                	return -1;
	                }
	                
	                	fprintf(fichero, " Reaccion: reacc6\n Material: %s\n Tipo de recipiente: %s", proyecto[nproyectos].material, proyecto[nproyectos].tipoRecipiente);
                 	
                	fclose(fichero);
				}
				
				
				
				else if(proyecto[nproyectos].reaccion==8){
            		printf("Elija un recipiente:\n  tubo\n  vaso\n probeta\n");
            		scanf("%s", proyecto[nproyectos].tipoRecipiente);
            		
            		
            		
            		fichero=fopen("proyectoReacc8.txt","w");
                    if(fichero==NULL){
	                	printf("Error en la apertura del fichero\n");
	                	return -1;
	                }
	                
	                	fprintf(fichero, " Reaccion: reacc8\n Material: %s\n Tipo de recipiente: %s", proyecto[nproyectos].material, proyecto[nproyectos].tipoRecipiente);
                 	
                	fclose(fichero);
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
