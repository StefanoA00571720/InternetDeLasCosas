int main(){
    int pid = fork(); //crea un hijo, identico menos una variable, 0 hijo
    if (pid == 0){
        printf("Soy el proceso hijo\n")
    }else{
        printf("Soy el proceso padre\n")
    }
    return 0; 
}