#include <iostream>
#include <iomanip>  // Para usar manipuladores como std::setw

int main() {
	
	system ("color 0a");
	
    int numero = 50705;
    
    
    std::cout << std::setw(11) << std::setfill('/') << std::setiosflags (std::ios::left) ; 
    
    //manipulador que modifica el formato de salida, std::setw(11) determina el ancho, setfill() rellena espacios, setiosflags() se utiliza para desarmar las banderas de formato especificadas por la máscara de parametro
	// afectan todas las salidas siguientes
	
	std::cout << numero << std::endl; 
	std::cout << std::setw(8);
    std::cout << 11 << std::endl;  
    
    std::cout << std::setw(11) << std::resetiosflags (std::ios::left);
    std::cout << numero << std::endl;

    return 0;
}



