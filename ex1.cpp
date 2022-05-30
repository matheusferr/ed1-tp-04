//#include <iostream>
//
//using namespace std;
//
//struct Employee {
//    int prontuario;
//    string nome;
//    double salario;
//};
//
//struct List {
//    Employee *data;
//    List *previous;
//};
//
//List *initList() {
//    return nullptr;
//}
//
//List *addItem(List *list, Employee *employee) {
//    List *newItem = new List();
//
//    newItem->data = employee;
//
//    newItem->previous = list;
//
//    return newItem;
//}
//
//List *removeItem(List *list, int prontuario) {
//    List *aux = list;
//
//    List *previousItem = nullptr;
//
//    while (aux != nullptr && aux->data->prontuario != prontuario) {
//        previousItem = aux;
//        aux = aux->previous;
//    }
//
//    if (aux == nullptr) {
//        return list;
//    }
//
//    if (previousItem == nullptr) {
//        list = aux->previous;
//    } else {
//        previousItem->previous = aux->previous;
//    }
//
//    free(aux);
//
//    return list;
//}
//
//Employee *findItem(List *list, int prontuario) {
//    auto aux = list;
//
//    while (aux != nullptr) {
//        if (aux->data->prontuario == prontuario)
//            return aux->data;
//        aux = aux->previous;
//    }
//
//    return nullptr;
//}
//
//bool includesItem(List *list, int prontuario) {
//    bool foundItem = false;
//
//    List *aux = list;
//
//    if (aux == nullptr) return foundItem;
//
//    while (aux != nullptr) {
//        if (aux->data->prontuario == prontuario) {
//            foundItem = true;
//            break;
//        } else
//            aux = aux->previous;
//    };
//
//    return foundItem;
//}
//
//List *addEmployee(List *list) {
//    auto employee = new Employee();
//
//    cout << "Nome: ";
//    cin >> employee->nome;
//
//    cout << "Prontuario: ";
//    cin >> employee->prontuario;
//
//    cout << "Salario: ";
//    cin >> employee->salario;
//
//    if (includesItem(list, employee->prontuario)) {
//        cout << "Funcionario ja cadastrado" << endl;
//
//        return list;
//    } else {
//        return addItem(list, employee);
//    }
//}
//
//List *removeEmployee(List *list) {
//    int prontuario;
//
//    cout << "Prontuario: ";
//    cin >> prontuario;
//
//    if (!includesItem(list, prontuario)) {
//        cout << "Funcionario nao encontrado" << endl;
//
//        return list;
//    } else
//        return removeItem(list, prontuario);
//}
//
//void searchEmployee(List *list) {
//    int prontuario;
//
//    cout << "Prontuario: ";
//    cin >> prontuario;
//
//    Employee *employee = findItem(list, prontuario);
//
//    if (employee == nullptr) {
//        cout << "Funcionario nao encontrado" << endl;
//    } else {
//        cout << "Nome: " + employee->nome << endl;
//        cout << "Pronturio: " + to_string(employee->prontuario) << endl;
//        cout << "Salario: " + to_string(employee->salario) << endl;
//    }
//}
//
//
//void listEmployees(List *list) {
//    if (list == nullptr) {
//        cout << "Nao ha funcionarios cadastrados";
//    } else {
//        double total = 0;
//
//        auto aux = list;
//
//        while (aux != nullptr) {
//            cout << "Nome: " + aux->data->nome << endl;
//            cout << "Pronturio: " + to_string(aux->data->prontuario) << endl;
//            cout << "Salario: " + to_string(aux->data->salario) << endl;
//
//            total += aux->data->salario;
//
//            aux = aux->previous;
//        }
//
//        cout << "Total salarios: " + to_string(total) << endl;
//    }
//}
//
//
//List *menu(bool *end, List *employeeList) {
//    List *list = employeeList;
//
//    int opt;
//
//    cout << "0. Sair" << endl;
//
//    cout << "1. Incluir" << endl;
//
//    cout << "2. Excluir" << endl;
//
//    cout << "3. Pesquisar" << endl;
//
//    cout << "4. Listar" << endl;
//
//    cout << "Opt: ";
//
//    cin >> opt;
//
//    switch (opt) {
//        case 1: {
//            list = addEmployee(list);
//            break;
//        }
//        case 2: {
//            list = removeEmployee(list);
//            break;
//        }
//        case 3: {
//            searchEmployee(list);
//            break;
//        }
//        case 4: {
//            listEmployees(list);
//            break;
//        }
//        default: {
//            *end = true;
//            break;
//        }
//    }
//
//    return list;
//
//}
//
//int main() {
//    bool end = false;
//
//    List *list = initList();
//
//    while (!end) {
//        list = menu(&end, list);
//    }
//
//    return 0;
//}

#include<stdio.h>
#include<ios>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

float cont, nota, media, mediafinal;
int valor;

 do{
    printf("\nCalcular a media - 1\nEncerrar o programa 0:\n");
    scanf("%d", &valor);
    switch (valor){
        case 1:
        for(cont = 0; cont < 3; cont++){
        printf("Nota: ");
        scanf("%f", &nota);
        media += nota;
        mediafinal = media/3;
    }
    if(mediafinal >= 5){
        printf("O aluno com a media foi aprovado\n");
        //printf("media:%f",media);
    }else{
        printf("Aluno reprovado\n");
    }
        printf("\nA média é: %0.2f", mediafinal);
        media = 0;
    break;
    }

} while (valor != 0);

return 0;
}