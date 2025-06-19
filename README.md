# Projeto: Impressão de Números com Ponteiros e Structs em C

Este repositório é uma introdução prática à manipulação de estruturas (`struct`) e ponteiros em linguagem C. Ideal para iniciantes que desejam entender como estruturar dados, navegar por ponteiros e organizar projetos em múltiplos arquivos (cabeçalho `.h`, implementação `.c` e execução `main.c`).

Autor: **Danilo Gonçalves**\
GitHub: [danilotuga](https://github.com/danilotuga)\
Email: [danilocgoncalves@gmail.com](mailto:danilocgoncalves@gmail.com)

---

## \:books: Conteúdo

- Manipulação de Structs
- Uso de Ponteiros com Structs
- Impressão formatada com `printf`
- Laços com `for`
- Organização modular com arquivos `.h`, `.c` e `main.c`

---

## \:floppy_disk: Estrutura de Arquivos

```bash
/
├── pessoa.h          # Definição da struct Person e protótipos
├── pessoa.c          # Implementação das funções declaradas
├── main.c            # Função principal do programa
├── Makefile          # (opcional) Para compilar facilmente
└── README.md         # Documentação
```

---

## \:bulb: Exemplo de Struct Utilizada

```c
typedef struct {
    int idPerson;
    char nmName[50];
    float vlWeight;
    float vlTall;
} Person;
```

---

## \:hammer_and_wrench: Exemplo de Implementação

```c
#define MAX 3
Person myPerson[MAX];

for (int i = 0; i < MAX; i++) {
    Person *ptr_person = &myPerson[i];
    ptr_person->idPerson = 100 + i;
    strcpy(ptr_person->nmName, "Carlos");
    ptr_person->vlWeight = 70.5;
    ptr_person->vlTall = 175.2;
    printf("ID: %d | Nome: %s | Peso: %.2fkg | Altura: %.2fcm\n",
           ptr_person->idPerson, ptr_person->nmName, ptr_person->vlWeight, ptr_person->vlTall);
}
```

---

## \:computer: Compilando e Executando

### Compilar

Se estiver usando GCC:

```bash
gcc -o programa main.c pessoa.c
```

### Executar

```bash
./programa
```

---

## \:bookmark_tabs: Funções Disponíveis

### infoPerson

```c
void infoPerson(Person *p, int id);
```

**Objetivo:** Imprime os dados da pessoa, dado um ponteiro para `Person` e um `id`.

### Outras Sugestões de Funções

- `void cadastrarPessoa(Person *p)`
- `void listarPessoas(Person pessoas[], int total)`
- `void alterarPeso(Person *p, float novoPeso)`

---

## \:memo: Pontos Importantes

- `%d` é usado para inteiros. Não use `%s` para `int`.
- Sempre use `\n` (barra invertida) para nova linha. Nunca use `/n`.
- Use `strcpy(destino, "texto")` para copiar string para campos `char[]`.
- Ponteiros para struct devem usar `->` para acessar os campos.
- Ao passar structs como parâmetro para função, prefira passar por ponteiro para evitar cópia desnecessária.

---

## \:x: Erros Comuns de Iniciantes

- ❌ Tentar acessar membros de struct com `.` ao usar ponteiros (use `->`)
- ❌ Usar `/n` em vez de `\n` para nova linha
- ❌ Declarar variável com `Person, *ptr = ...` (a vírgula está errada nesse contexto)
- ❌ Usar `myStruct[50]` como se fosse string (deve usar `strcpy`)
- ❌ Esquecer de inicializar o ponteiro com `&variavel`
- ❌ Acessar arrays fora do limite definido (overflow)

---

## \:nerd_face: Contribuindo

Pull requests são bem-vindas! Se você encontrar erros ou quiser melhorar algo, fique à vontade para colaborar.

---

## \:mailbox: Contato

Para dúvidas ou sugestões:

- **GitHub:** [danilotuga](https://github.com/danilotuga)
- **Email:** [danilocgoncalves@gmail.com](mailto:danilocgoncalves@gmail.com)

---

## \:scroll: Licença
