#include<stdio.h>
#include<stdlib.h>


struct tp_endereco{
    char rua[40];
    int numero;
    char bairro[40];
    char cidade[40];
    char estado[3];
    int cep;
};

struct tp_data_nasc
{
    int dia;
    char mes[10];
    int ano;
};

struct cadastro_cliente
{
    char nome_cliente[40];
    int telefone;

    struct tp_endereco endereco;
    struct tp_data_nasc data_nasc;
      
}cad_cliente[2];


int main(void){
    int i;
    printf("\n\n--------------Cadastro de Clientes --------------\n\n");

    for (i = 0; i <2; i++){
        printf("\n\nNome do cliente................: ");
        fflush(stdin);
        gets(cad_cliente[i].nome_cliente);

        printf("\nDigite o telefone do cliente...: ");
        scanf("%d", &cad_cliente[i].telefone);

        printf("\nDigite a rua...................: ");
        fflush(stdin);
        gets(cad_cliente[i].endereco.rua);
        
        printf("\nDigite o numero................: ");
        scanf("%d", &cad_cliente[i].endereco.numero);

        printf("\nDigite a Bairro................: ");
        fflush(stdin);
        gets(cad_cliente[i].endereco.bairro);

        printf("\nDigite a cidade................: ");
        fflush(stdin);
        gets(cad_cliente[i].endereco.cidade);

        printf("\nDigite a estado................: ");
        fflush(stdin);
        gets(cad_cliente[i].endereco.estado);

        printf("\nDigite o CEP...................: ");
        scanf("%d", &cad_cliente[i].endereco.cep);

        printf("\nDia de nascimento..............: ");
        scanf("%d", &cad_cliente[i].data_nasc.dia);

        printf("\nMes de nascimento..............: ");
        fflush(stdin);
        gets(cad_cliente[i].data_nasc.mes);

        printf("\nAno de nascimento..............: ");
        scanf("%d", &cad_cliente[i].data_nasc.ano);

    }
    for (i = 0; i < 2; i++){
        printf("\nNome.........................: %s", cad_cliente[i].nome_cliente);
        printf("\nTelefone.....................: %d", cad_cliente[i].telefone);
        printf("\nRua..........................: %s", cad_cliente[i].endereco.rua);
        printf("\nNumero.......................: %d", cad_cliente[i].endereco.numero);
        printf("\nBairro.......................: %s", cad_cliente[i].endereco.bairro);
        printf("\nCidade.......................: %s", cad_cliente[i].endereco.cidade);
        printf("\nEstado.......................: %s", cad_cliente[i].endereco.estado);
        printf("\nCEP..........................: %d", cad_cliente[i].endereco.cep);
        printf("\n");
        printf("\nNascimento...................: %d de %s de %d", cad_cliente[i].data_nasc.dia, cad_cliente[i].data_nasc.mes, cad_cliente[i].data_nasc.ano);  
        printf("\n");

        }






    return 0;
}