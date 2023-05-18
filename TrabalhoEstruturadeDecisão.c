#include <stdio.h>

int main(){
    int cargo,data_adm,tempo_servico;
    char nome[20];
    float salario,novo_salario,diferenca_salario;
    const int data_atual=2023;

    //Entrada das informacoes do usuario

    printf("Digite seu nome:");
    scanf("%s",nome);
    printf("Digite seu salario:");
    scanf("%f",&salario);
    printf("Ano de Admissao:");
    scanf("%d",&data_adm);
    printf("Cargos:\n1-Gerente\n2-Engenheiro\n3-Analista de TI\n4-Outro Cargo\nDigite o numero do seu cargo:");
    scanf("%d",&cargo);
    

    tempo_servico=data_atual-data_adm;

//Salarios
if(cargo==1){
//Salarios do cargo Gerente
    if(tempo_servico>=5){
        //5 anos ou mais de trabalho
        diferenca_salario=salario*0.10;
        novo_salario=salario+diferenca_salario;
        printf("Nome:%s",nome);
        printf("\nSalario Antigo:%.2f",salario);
        printf("\nNovo salario:%.2f",novo_salario);
        printf("\nDiferenca salarial:%.2f",diferenca_salario);
    
    }else if(tempo_servico>=3 && tempo_servico<5){
        //de 3 a 5 anos de trabalho
        diferenca_salario=salario*0.09;
        novo_salario=salario+diferenca_salario;
        printf("Nome:%s",nome);
        printf("\nSalario Antigo:%.2f",salario);
        printf("\nNovo salario:%.2f",novo_salario);
        printf("\nDiferenca salarial:%.2f",diferenca_salario);

    }else{
        //menos que 3 anos de trabalho
        diferenca_salario=salario*0.08;
        novo_salario=salario+diferenca_salario;
        printf("Nome:%s",nome);
        printf("\nSalario Antigo:%.2f",salario);
        printf("\nNovo salario:%.2f",novo_salario);
        printf("\nDiferenca salarial:%.2f",diferenca_salario);
    }
}else if(cargo==2){
//salarios do cargo Engenheiro
    if(tempo_servico>=5){
        //5 anos ou mais de trabalho
        diferenca_salario=salario*0.11;
        novo_salario=salario+diferenca_salario;
        printf("Nome:%s",nome);
        printf("\nSalario Antigo:%.2f",salario);
        printf("\nNovo salario:%.2f",novo_salario);
        printf("\nDiferenca salarial:%.2f",diferenca_salario);
    
    }else if(tempo_servico>=3 && tempo_servico<5){
        //de 3 a 5 anos de trabalho
        diferenca_salario=salario*0.10;
        novo_salario=salario+diferenca_salario;
        printf("Nome:%s",nome);
        printf("\nSalario Antigo:%.2f",salario);
        printf("\nNovo salario:%.2f",novo_salario);
        printf("\nDiferenca salarial:%.2f",diferenca_salario);

    }else{
        //menos que 3 anos de trabalho
        diferenca_salario=salario*0.09;
        novo_salario=salario+diferenca_salario;
        printf("Nome:%s",nome);
        printf("\nSalario Antigo:%.2f",salario);
        printf("\nNovo salario:%.2f",novo_salario);
        printf("\nDiferenca salarial:%.2f",diferenca_salario);
    }
}else if(cargo==3){
    //Salarios do cargo Analista de TI

    if(tempo_servico>=5){
        //5 ou mais anos de trabalho
        diferenca_salario=salario*0.12;
        novo_salario=salario+diferenca_salario;
        printf("Nome:%s",nome);
        printf("\nSalario Antigo:%.2f",salario);
        printf("\nNovo salario:%.2f",novo_salario);
        printf("\nDiferenca salarial:%.2f",diferenca_salario);
    
    }else if(tempo_servico>=3 && tempo_servico<5){
        //de 3 a 5 anos de trabalho
        diferenca_salario=salario*0.11;
        novo_salario=salario+diferenca_salario;
        printf("Nome:%s",nome);
        printf("\nSalario Antigo:%.2f",salario);
        printf("\nNovo salario:%.2f",novo_salario);
        printf("\nDiferenca salarial:%.2f",diferenca_salario);

    }else{
        //menos que 3 anos de trabalho
        diferenca_salario=salario*0.10;
        novo_salario=salario+diferenca_salario;
        printf("Nome:%s",nome);
        printf("\nSalario Antigo:%.2f",salario);
        printf("\nNovo salario:%.2f",novo_salario);
        printf("\nDiferenca salarial:%.2f",diferenca_salario);
    }
}else{
    //Salario caso o cargo nao esteja na tabela
    //Tempo de servico nao sera necessario
    diferenca_salario=salario*0.07;
        novo_salario=salario+diferenca_salario;
        printf("Nome:%s",nome);
        printf("\nSalario Antigo:%.2f",salario);
        printf("\nNovo salario:%.2f",novo_salario);
        printf("\nDiferenca salarial:%.2f",diferenca_salario);
}
return 0;
}