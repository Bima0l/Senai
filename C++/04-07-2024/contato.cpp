#include <iostream> 

void adicionarusuario(std::string usuarios[], std:: string telefones[], int tamanho, std::string usuario, std::string telefone)
{
    usuarios[tamanho] = usuario;      
    telefones[tamanho] = telefone; 
}



void exibirusuario(std::string usuarios[], std::string telefones[], int tamanho, std::string usuario, std::string telefone)
{
    std::cout << "Usuário atual:\n";  
     int i = 0;
     while(i<tamanho &&usuarios[i] != usuario)
     {
        i++;
     }
     if(i<tamanho){
        std::cout<<"Contato:"<<usuario<<"telefone:"<<telefone<<std::endl;
     }
}

int main()
{
    const int maxusuarios = 100;       
    std::string usuarios[maxusuarios]; 
    std::string telefones[maxusuarios];      
    int tamanho = 0;                   


    adicionarusuario(usuarios, telefones, tamanho, "Coringa", "666-666");
    tamanho++;
    adicionarusuario(usuarios, telefones, tamanho, "Duas Caras", "999-999" );
    tamanho++;
    adicionarusuario(usuarios, telefones, tamanho, "Arlequina", "333-333");
    tamanho++;



exibirusuario(usuarios,telefones, tamanho,  "Coringa", "666-666");
exibirusuario(usuarios,telefones,  tamanho,  "Duas Caras" , "999-999" );
    

    return 0;
}