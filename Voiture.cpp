#include <iostream>
#include <string>

class Voiture {
private:
    std::string marque;
    std::string modele;
    int annee;
    float kilometrage;
    float vitesse;

public:
    // Constructeur par défaut
    Voiture() : marque("Inconnue"), modele("Inconnu"), annee(0), kilometrage(0.0), vitesse(0.0) {}

    // Constructeur avec paramètres
    Voiture(std::string m, std::string mod, int a, float km, float v) 
        : marque(m), modele(mod), annee(a), kilometrage(km), vitesse(v) {}

    // Méthode pour accélérer
    void accelerer(float valeur) {
        vitesse += valeur;
    }

    // Méthode pour freiner
    void freiner(float valeur) {
        vitesse -= valeur;
        if (vitesse < 0) {
            vitesse = 0;
        }
    }

    // Méthode pour afficher les informations sur la voiture
    void afficherInfo() const {
        std::cout << "Marque: " << marque << std::endl;
        std::cout << "Modèle: " << modele << std::endl;
        std::cout << "Année: " << annee << std::endl;
        std::cout << "Kilométrage: " << kilometrage << " km" << std::endl;
        std::cout << "Vitesse: " << vitesse << " km/h" << std::endl;
    }
};

int main() {
    // Exemple d'utilisation de la classe Voiture
    Voiture maVoiture("Toyota", "Corolla", 2020, 15000, 0);
    
    maVoiture.afficherInfo();
    
    maVoiture.accelerer(50);
    std::cout << "Après accélération:" << std::endl;
    maVoiture.afficherInfo();
    
    maVoiture.freiner(20);
    std::cout << "Après freinage:" << std::endl;
    maVoiture.afficherInfo();

    maVoiture.freiner(40);
    std::cout << "Après un freinage supplémentaire:" << std::endl;
    maVoiture.afficherInfo();

    return 0;
}