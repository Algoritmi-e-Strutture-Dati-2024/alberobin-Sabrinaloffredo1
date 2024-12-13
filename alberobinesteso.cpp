#include <iostream>

template <typename T>
class AlberoBinario {
private:
    T nodi[100];
    AlberoBinario() {
 
        for (int i = 0; i < 50; i++) {
            nodi[i] = T();
        }
    }

    bool alberoVuoto() const {
        return nodi[0] == T(); 
    }

    bool inserisciRadice(const T& valore) {
        if (alberoVuoto()) {
            nodi[0] = valore;  
            return true;
        }
        return false;  
    }

    T leggiRadice() const {
        if (alberoVuoto()) {
            return T(); 
        }
        return nodi[0];
    }

    bool isFoglia(int indice) const {
        int sinistro = figlioSinistro(indice);
        int destro = figlioDestro(indice);
        return (sinistro == -1 && destro == -1); 
    }

    int figlioSinistro(int indice) const {
        int indiceSinistro = 2 * indice + 1;
        return (indiceSinistro < 100) ? indiceSinistro : -1; 
    }

    int figlioDestro(int indice) const {
        int indiceDestro = 2 * indice + 2;
        return (indiceDestro < 100) ? indiceDestro : -1; 
    }

    bool inserisciFiglioSinistro(int indice, const T& valore) {
        int indiceSinistro = figlioSinistro(indice);
        if (indiceSinistro != -1 && nodi[indiceSinistro] == T()) {
            nodi[indiceSinistro] = valore;
            return true;
        }
        return false; 
    }

    bool inserisciFiglioDestro(int indice, const T& valore) {
        int indiceDestro = figlioDestro(indice);
        if (indiceDestro != -1 && nodi[indiceDestro] == T()) {
            nodi[indiceDestro] = valore;
            return true;
        }
        return false; 
    }

    bool rimuovi(int indice) {
        if (èFoglia(indice)) {
            nodi[indice] = T(); 
        }
        return false; 
    }

    void stampa() const {
        for (int i = 0; i < 100; i++) {
            if (nodi[i] != T()) {  
                int sinistro = figlioSinistro(i);
                int destro = figlioDestro(i);
                std::cout << "Posizione " << i << ", Valore: " << nodi[i]
                          << ", Figliosinistro: " << (sinistro != -1 ? std::to_string(sinistro) : "Nessuno")
                          << ", Figliodestro: " << (destro != -1 ? std::to_string(destro) : "Nessuno") << std::endl;
            }
        }
    }
};

