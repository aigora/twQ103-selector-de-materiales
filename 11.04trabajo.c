#include<stdio.h>
#include<string.h>
#include<unistd.h> // acceder a access, una funcion que permite saber que existe un fichero o no 

 

struct proyectos{
	int reaccion; 
	char material[100]; 
	char tipoRecipiente[100]; //tubo, vaso, probeta, matraz
	float precio;
	};
	
float CalcularPresupuesto(struct proyectos proyecto);

void NombreProyecto(char nameT[], int nproyectos);
void NombreReaccion(struct proyectos proyecto,char NombreReacc[]);
void imprimirBanner();
void imprimirTiposRecipiente(struct proyectos proyecto);
void imprimirDatosPantalla(struct proyectos proyecto,char NombreReacc[]);
//void imprimirDatosRecomendada(int reaccionRecom);

int main(){
	
	 system("COLOR 8F");
	
	 
	
	struct proyectos proyecto[100]; 
	struct proyectos recomendaciones[100];
	int i=0,nproyectos=0;
	char opcion,pulse,reaccionRecom;
	int n=0;
	FILE * fichero;
	float cuenta;
	
    char NombreReacc[100];
    char nameT[40];
   
	
	if(n==0){
		imprimirBanner();
	}

  
	
	do{
	
		
	   //MENÚ DE OPCIONES
	   printf("\n");
	   printf("                                                   MENU DE OPCIONES:\n\n\n");
	   printf("                                                   a. Iniciar proyecto nuevo\n\n");
	   printf("                                                   b. Modificar/ver proyecto\n\n");
	   printf("                                                   c. Recomendaciones\n\n");
	   printf("                                                   d. Salir del programa\n\n");
	   fflush(stdin);
       scanf("%c",&opcion);
       
       system("cls");
       
    
	   switch(opcion){
	    	case 'a': 
	    	
	    	//nproyectos++;
	    	
	    	
	    	printf("\n\n\n");
	    	printf("                                   Elija la reaccion que desea llevar a cabo en el laboratorio:\n\n\n");
			printf("                                               1. 2CaO + 2H2O = 2Ca(OH)2\n\n");
			printf("                                               2. CuSO4 + Fe = FeSO4\n\n");
			printf("                                               3. NH3 + HCl = NH4Cl\n\n");
			printf("                                               4. NaCl + AgNO3 = NaNO3 + AgCl\n\n");
			printf("                                               5. 2AgNO3 + Cu = Cu(NO3)2 + 2Ag\n\n");
			printf("                                               6. NH4OH + HCL = NHACl + H2O\n");
			printf("                                               7. K2Cr2O7 + 14HCl = 2CrCl3 + 3 Cl2 + 2KCl + 7H2O\n\n");
			printf("                                               8. 2MnO4 + 2H = 2O2 + H2 + 2MnO2\n\n");
			printf("                                               9. Volver\n");
	        fflush(stdin);
            scanf("%i", &proyecto[nproyectos].reaccion);
            
            
            system("cls");
	        
            
            if(proyecto[nproyectos].reaccion==1||proyecto[nproyectos].reaccion==5||proyecto[nproyectos].reaccion==7){
            	strcpy(proyecto[nproyectos].material,"plastico");
            	
            	
            	system("cls");
            	
            	
            		imprimirTiposRecipiente(proyecto[nproyectos]);
            		scanf("%s", proyecto[nproyectos].tipoRecipiente);
            		system("cls");
            		
            		
            		proyecto[nproyectos].precio=CalcularPresupuesto(proyecto[nproyectos]);
            		
            		
            		NombreProyecto(nameT, nproyectos);
            		
            		fichero=fopen(nameT,"w");
                    if(fichero==NULL){
	                	printf("Error en la apertura del fichero\n");
	                	return -1;
	                }
	                NombreReaccion(proyecto[nproyectos],NombreReacc);
	                	fprintf(fichero, " Reaccion: %s\n Material: %s\n Tipo de recipiente: %s\n Precio final: %.2f euros",NombreReacc, proyecto[nproyectos].material, proyecto[nproyectos].tipoRecipiente,proyecto[nproyectos].precio);
                 	
                	fclose(fichero);
                	imprimirDatosPantalla(proyecto[nproyectos],NombreReacc);
                	
                	if(n==0){
                	printf("                                   Pulse 'p' para calcular el precio de su proyecto\n\n");
                	scanf("%c",&pulse);
                	
					}
					if(pulse=='p'){
                	   printf("El precio de su material es %.2f\n\n",proyecto[nproyectos].precio);
					  }
                	
                	
                	
                	
                 	
	               
	            
				
			}
			else if(proyecto[nproyectos].reaccion==2||proyecto[nproyectos].reaccion==3||proyecto[nproyectos].reaccion==4||proyecto[nproyectos].reaccion==6||proyecto[nproyectos].reaccion==8){
				strcpy(proyecto[nproyectos].material,"vidrio");
            	
            		system("cls");
            	
            	
            		imprimirTiposRecipiente(proyecto[nproyectos]);
            		scanf("%s", proyecto[nproyectos].tipoRecipiente);
            		system("cls");
            		
            		proyecto[nproyectos].precio=CalcularPresupuesto(proyecto[nproyectos]);
            		
            		NombreProyecto(nameT, nproyectos);
            		
            		fichero=fopen(nameT,"w");
                    if(fichero==NULL){
	                	printf("Error en la apertura del fichero\n");
	                	return -1;
	                }
	                NombreReaccion(proyecto[nproyectos],NombreReacc);
	                fprintf(fichero, " Reaccion: %s\n Material: %s\n Tipo de recipiente: %s\n Precio final: %.2f euros",NombreReacc, proyecto[nproyectos].material, proyecto[nproyectos].tipoRecipiente,proyecto[nproyectos].precio);
                 	
                	fclose(fichero);
                	
                	
                	imprimirDatosPantalla(proyecto[nproyectos],NombreReacc);
            	
			}
			
			
        
	  
	    	break;
	    
	
	    
	    	
		    case 'b': 
		    
		    printf("\n\n\n");
	    	printf("                         Seleccione la reaccion para la cual quiere la eleccion de material recomendada:\n\n\n");
			printf("                                               1. 2CaO + 2H2O = 2Ca(OH)2\n\n");
			printf("                                               2. CuSO4 + Fe = FeSO4\n\n");
			printf("                                               3. NH3 + HCl = NH4Cl\n\n");
			printf("                                               4. NaCl + AgNO3 = NaNO3 + AgCl\n\n");
			printf("                                               5. 2AgNO3 + Cu = Cu(NO3)2 + 2Ag\n\n");
			printf("                                               6. NH4OH + HCL = NHACl + H2O\n\n");
			printf("                                               7. K2Cr2O7 + 14HCl = 2CrCl3 + 3 Cl2 + 2KCl + 7H2O\n\n");
			printf("                                               8. 2MnO4 + 2H = 2O2 + H2 + 2MnO2\n\n");
			printf("                                               9. Volver\n");
	        fflush(stdin);
            scanf("%i", &reaccionRecom);
            
            switch(reaccionRecom){
            	case 1:
            		fichero=fopen("recomendacion0.txt","r");
            		if(fichero==NULL){
	                	printf("Error en la apertura del fichero\n");
	                	return -1;
	                }
	                fscanf(fichero, "%s %s", recomendaciones[0].material,recomendaciones[0].tipoRecipiente);
	                printf("%s\n %s\n",recomendaciones[0].material,recomendaciones[0].tipoRecipiente);
	                
            	break;
			}
		    
		    
	    	break;
			
			case 'c':
			break;	
	    	
	    	
	    	case 'd':
			//break;
			//return 0;
	    	break;
	    	
	    	default: printf("opcion incorrecta");
	    	break;
	}

    
	}while(opcion!='C');
	
	
	
}


float CalcularPresupuesto(struct proyectos proyecto){
	float cuenta = 5.0;
	
	if(strcmp(proyecto.material,"plastico")==0){
		
		
		if(strcmp(proyecto.tipoRecipiente,"tubo")==0){
		cuenta=cuenta*0.1;	
		}
		else if(strcmp(proyecto.tipoRecipiente,"matraz")==0){
		cuenta=cuenta*2.0;	
		}
		else if(strcmp(proyecto.tipoRecipiente,"vaso")==0){
		cuenta=cuenta*0.75;	
		}
		else if(strcmp(proyecto.tipoRecipiente,"probeta")==0){
		cuenta=cuenta*1.5;	
		}
	    
	}
	else if(proyecto.material=="vidrio"){
		if(strcmp(proyecto.tipoRecipiente,"tubo")==0){
		cuenta=cuenta*0.3;	
		}
		else if(strcmp(proyecto.tipoRecipiente,"matraz")==0){
		cuenta=cuenta*2.5;	
		}
		else if(strcmp(proyecto.tipoRecipiente,"vaso")==0){
		cuenta=cuenta*1.25;	
		}
		else if(strcmp(proyecto.tipoRecipiente,"probeta")==0){
		cuenta=cuenta*2.0;	
		}
		
	}
	return cuenta;
}


void NombreProyecto(char nameT[], int nproyectos){
	
	char name[30]="proyectoReacc";
   	
    snprintf(nameT,sizeof name,"%s%d.txt",name, nproyectos); // esta función coge name, y un numero de bytes igual al tamaño de name,
	// y copia %s%d.txt donde %s es name y %d nproyectos y lo almacena en name
            		
    while(access(nameT,F_OK) != -1){ //accedes al proyecto y compruebas si existe
    nproyectos++; 
    snprintf(nameT,sizeof name,"%s%d.txt",name, nproyectos);
	}
		
}
void NombreReaccion(struct proyectos proyecto,char NombreReacc[]){
	
	switch(proyecto.reaccion){
		
		case 1:
			strcpy(NombreReacc,"2CaO + 2H2O = 2Ca(OH)");
		break;
		case 2:
			strcpy(NombreReacc,"CuSO4 + Fe = FeSO4");
		break;
		case 3:
			strcpy(NombreReacc,"NH3 + HCl = NH4Cl");
		break;
		case 4:
			strcpy(NombreReacc,"NaCl + AgNO3 = NaNO3 + AgCl");
		break;
		case 5:
			strcpy(NombreReacc,"2AgNO3 + Cu = Cu(NO3)2 + 2Ag");
		break;
		case 6:
			strcpy(NombreReacc,"NH4OH + HCL = NHACl + H2O");
		break;
		case 7:
			strcpy(NombreReacc,"K2Cr2O7 + 14HCl = 2CrCl3 + 3 Cl2 + 2KCl + 7H2O");
		break;
		case 8:
			strcpy(NombreReacc,"2MnO4 + 2H = 2O2 + H2 + 2MnO2");
		break;
	}
}
void imprimirBanner(){
	printf("                                                                                                    \n");
	printf("                                                                                                    \n");
	printf("                                        ----------------------------------------                    \n");
	printf("                                       |                                        |                   \n");
	printf("                                       |              BIENVENIDO                |                   \n");
	printf("                                       |        AL SELECTOR DE MATERIAL         |                   \n");
	printf("                                       |          PARA TU LABORATORIO           |                   \n");
	printf("                                       |              DE  QUIMICA               |                   \n");
	printf("                                       |                                        |                   \n");
	printf("                                        ----------------------------------------                    \n");
	printf("                                                                                                    \n");
	printf("                                                                                                    \n");
}
void imprimirTiposRecipiente(struct proyectos proyecto){
	if(proyecto.reaccion==1||proyecto.reaccion==2||proyecto.reaccion==8||proyecto.reaccion==6){
		printf("\n\n\n");
        printf("                        Elija el recipiente que va a utlilizar para su reaccion (escriba su eleccion por pantalla):\n\n\n");
		printf("                                                         tubo\n\n");
		printf("                                                         vaso\n\n");
		printf("                                                         probeta\n");
		
	}
	else if(proyecto.reaccion==3||proyecto.reaccion==7){
		printf("\n\n\n");
        printf("                        Elija el recipiente que va a utlilizar para su reaccion (escriba su eleccion por pantalla):\n\n\n");
		printf("                                                         matraz\n\n");
		printf("                                                         vaso\n\n");
		
	}
	else if(proyecto.reaccion==4){
		printf("\n\n\n");
        printf("                        Elija el recipiente que va a utlilizar para su reaccion (escriba su eleccion por pantalla):\n\n\n");
		printf("                                                         tubo\n\n");
		printf("                                                         vaso\n\n");
		
	}
	else if(proyecto.reaccion==5){
		printf("\n\n\n");
        printf("                        Elija el recipiente que va a utlilizar para su reaccion (escriba su eleccion por pantalla):\n\n\n");
		printf("                                                         vaso\n\n");
		
	}
}
void imprimirDatosPantalla(struct proyectos proyecto,char NombreReacc[]){
	                printf("\n\n                                   Este es el proyecto que ha creado:\n\n\n");
					printf("                                                  Reaccion: %s\n\n", NombreReacc);
					printf("                                                  Material: %s\n\n", proyecto.material);
					printf("                                                  Tipo de recipiente: %s\n\n\n", proyecto.tipoRecipiente);
	                //printf("                                  Estos datos se han guardado en un documento de texto.\n\n");
					
	
}

