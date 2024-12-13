int main() {
    AlberoBinario<int> albero;

    if (albero.inserisciRadice(40)) {
        std::cout << "Radice inserita correttamente." << std::endl;
    } else {
        std::cout << "Errore nell'inserimento della radice." << std::endl;
    }

    if (albero.inserisciFiglioSinistro(0, 80)) {
        std::cout << "Figlio sinistro inserito correttamente." << std::endl;
    } else {
        std::cout << "Errore nell'inserimento del figlio sinistro." << std::endl;
    }

    if (albero.inserisciFiglioDestro(0, 60)) {
        std::cout << "Figlio destro inserito correttamente." << std::endl;
    } else {
        std::cout << "Errore nell'inserimento del figlio destro." << std::endl;
    }

  
    if (albero.inserisciFiglioSinistro(1, 80)) {
        std::cout << "Figlio sinistro al nodo 1 inserito correttamente." << std::endl;
    } else {
        std::cout << "Errore nell'inserimento del figlio sinistro al nodo 1." << std::endl;
    }

    std::cout << "Stampa dell'albero:" << std::endl;
    albero.stampa();

    if (albero.rimuovi(4)) {
        std::cout << "Nodo rimosso correttamente." << std::endl;
    } else {
        std::cout << "Errore nella rimozione del nodo." << std::endl;
    }

    std::cout << "Dopo la rimozione di un nodo foglia:" << std::endl;
    albero.stampa();

    return 0;
}
