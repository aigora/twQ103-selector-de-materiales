#include<stdio.h>
#include<string.h>
#include<unistd.h> // acceder a access, una funcion que permite saber que existe un fichero o no 
 

struct proyectos{
	int reaccion; //hay 8 reacciones
	char material[100]; //plastico o vidrio
	char tipoRecipiente[100]; //tubo, vaso, probeta, matraz
	//char tamano[100]; //pequeño, mediano, grande
	float precio;
	};
	
void CalcularPesupuesto(struct proyectos proyecto);

int main(){
	
	 system("COLOR 8F");
	
	 
	
	struct proyectos proyecto[100];  
	int i,nproyectos=0;
	char opcion;
	int n=0;
	FILE * fichero;
	
    char name[30]="proyectoReacc";
   	char nameT[30];
    snprintf(nameT,sizeof name,"%s%d.txt",name, nproyectos); // esta función coge name, y un numero de bytes igual al tamaño de name,
	// y copia %s%d.txt donde %s es name y %d nproyectos y lo almacena en name
            		
    while(access(nameT,F_OK) != -1){ //accedes al proyecto y compruebas si existe
    nproyectos++; 
    snprintf(nameT,sizeof name,"%s%d.txt",name, nproyectos);
	}
	

	
	
	do{
		
	   
	   printf("Elija una opcion:\nA. Iniciar proyecto nuevo\nB. Modificar/ver proyecto\nC. Recomendaciones\nD. Salir del programa\n");
	   fflush(stdin);
       scanf("%c",&opcion);
       
       system("cls");
       
    
	   switch(opcion){
	    	case 'A': 
	    	
	    	nproyectos++;
	    	
	    	
	    	
	    	printf("Elija una reaccion:\n1. 2CaO + 2H2O = 2Ca(OH)2\n2. CuSO4 + Fe = FeSO4\n3. NH3 + HCl = NH4Cl\n4. NaCl + AgNO3 = NaNO3 + AgCl\n5. 2AgNO3 + Cu = Cu(NO3)2 + 2Ag\n6. NH4OH + HCL = NHACl + H2O\n7. K2Cr2O7 + 14HCl = 2CrCl3 + 3 Cl2 + 2KCl + 7H2O\n8. 2MnO4 + 2H = 2O2 + H2 + 2MnO2\n9. Volver\n");
	        fflush(stdin);
            scanf("%i", &proyecto[nproyectos].reaccion);
            
            
            system("cls");
	        
            
            if(proyecto[nproyectos].reaccion==1||proyecto[nproyectos].reaccion==5||proyecto[nproyectos].reaccion==7){
            	strcpy(proyecto[nproyectos].material,"plastico");
            	
            	
            	system("cls");
            	
            	if(proyecto[nproyectos].reaccion==1){
            		printf("Elija un recipiente:\n  tubo\n  vaso\n  probeta\n");
            		scanf("%s", proyecto[nproyectos].tipoRecipiente);
            		
            		
            		
            		fichero=fopen(nameT,"w");
                    if(fichero==NULL){
	                	printf("Error en la apertura del fichero\n");
	                	return -1;
	                }
	                
	                	fprintf(fichero, " Reaccion: 2CaO + 2H2O = 2Ca(OH)\n Material: %s\n Tipo de recipiente: %s", proyecto[nproyectos].material, proyecto[nproyectos].tipoRecipiente);
                 	
                	fclose(fichero);
                	
                	
                	fichero=fopen("proyectoReacc1.txt","r");
                	if(fichero==NULL){
		                 printf("error en la apertura del fichero\n");
	                    	return -1;
                 	}
                 	
	                while(fscanf(fichero,"%i\n %s\n %s\n ",proyecto[n].reaccion, proyecto[n].material,proyecto[n].tipoRecipiente )!=EOF){
		            n++;
                    }
	               fclose(fichero);
	               
	               for(i=0;i<n;i++){
	            	printf("%i\n %s\n %s\n ",proyecto[i].reaccion, proyecto[i].material,proyecto[i].tipoRecipiente);
                 	} 
                	
				}
				else if(proyecto[nproyectos].reaccion==5){
            		printf("El recip mas adecuado es un vaso\n");
            		strcpy(proyecto[nproyectos].tipoRecipiente,"vaso");
            		
            		
            		fichero=fopen("proyectoReacc5.txt","w");
                    if(fichero==NULL){
	                	printf("Error en la apertura del fichero\n");
	                	return -1;
	                }
	                
	                	fprintf(fichero, " Reaccion: 2AgNO3 + Cu = Cu(NO3)2 + 2Ag\n Material: %s\n Tipo de recipiente: %s", proyecto[nproyectos].material, proyecto[nproyectos].tipoRecipiente);
                 	
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
	                
	                	fprintf(fichero, " Reaccion: K2Cr2O7 + 14HCl = 2CrCl3 + 3 Cl2 + 2KCl + 7H2O\n Material: %s\n Tipo de recipiente: %s", proyecto[nproyectos].material, proyecto[nproyectos].tipoRecipiente);
                 	
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
	                
	                	fprintf(fichero, " Reaccion: CuSO4 + Fe = FeSO4\n Material: %s\n Tipo de recipiente: %s", proyecto[nproyectos].material, proyecto[nproyectos].tipoRecipiente);
                 	
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
	                
	                	fprintf(fichero, " Reaccion: CuSO4 + Fe = FeSO4\n Material: %s\n Tipo de recipiente: %s", proyecto[nproyectos].material, proyecto[nproyectos].tipoRecipiente);
                 	
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
	                
	                	fprintf(fichero, " Reaccion: NH3 + HCl = NH4Cl\n Material: %s\n Tipo de recipiente: %s", proyecto[nproyectos].material, proyecto[nproyectos].tipoRecipiente);
                 	
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
	                
	                	fprintf(fichero, " Reaccion: NH4OH + HCL = NHACl + H2O\n Material: %s\n Tipo de recipiente: %s", proyecto[nproyectos].material, proyecto[nproyectos].tipoRecipiente);
                 	
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
	                
	                	fprintf(fichero, " Reaccion: 2MnO4 + 2H = 2O2 + H2 + 2MnO2\n Material: %s\n Tipo de recipiente: %s", proyecto[nproyectos].material, proyecto[nproyectos].tipoRecipiente);
                 	
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
	
	
	
}
/*proyecto[nproj].precio= CalcularPresupiesto(proyecto[nproj]);

float CalcularPesupuesto(struct proyectos proyecto){
	float cuenta = 0;
	
	if(proyecto.material=="plastico"){
		
		cuenta=5;
		
	    switch(proyecto.tipoRecipiente){
	    	
	    	case 'tubo':
	    		cuenta*0.1;
			break;
	    	case 'matraz':
	    		cuenta*;
	    	break;
	    	case 'vaso':
	    		cuenta+=3;
	    	break;
	    	case 'probeta':
	    		cuenta+4;
	    	break:
		}
	}
	else if(proyecto.material=="vidrio"){
		switch(proyecto.tipoRecipiente){
	    	
	    	case 'tubo':
	    		cuenta++;
			break;
	    	case 'matraz':
	    		cuenta+=2;
	    	break;
	    	case 'vaso':
	    		cuenta+=3;
	    	break;
	    	case 'probeta':
	    		cuenta+4;
	    	break:
		}
		
	}
	return cuenta;
}*/
