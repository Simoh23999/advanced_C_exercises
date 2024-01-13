

int nb_occurrence(char T[], int n, char c){
    int i,p_occ,d_occ,compt=0;

    for(i = 0; i < n ; i++){
        if(T[i] == c){
            p_occ = i;
            break;
        }
    }
        
    for(i = n - 1 ; i >= 0 ; i--){
        if(T[i] == c){
        d_occ = i;
        break;
        }
    }

    printf("d_occ = %d et p_occ = %d \n",d_occ,p_occ);
    for( i = 0 ; i < n; i++)
        if(T[i] == c) 
            compt++;

    return compt;
}
