## PoC de uso de um executável com uma biblioteca

Nesse repositório, temos uma prova de conceito (PoC) de que é possível 
rodar um `.exe` com uma função *definida e exportada* por uma biblioteca 
dinâmica do Windows, isto é, arquivos `.dll`. Também é possível criar 
uma DLL que, ao ser linkada com o `.lib` de outra DLL, possa chamar funções
dessa última.  

No entanto, a problemática da nossa situação se dá pelo fato de que em ambientes Windows modernos, 
a criação tanto de executáveis como de bibliotecas com linguagens suportadas e "modernas". 
Nessa lista, estão C#, VB.NET, C++, entre outras. 

Nossa DLL intermediária (`ATOMS.dll`), ou seja, a que liga o Aspen Hysys aos nossos modelos 
termodinâmicos (`Saturation.dll`) está escrita em **código legado** (em Visual Basic 6). 

Daqui podemos seguir dois caminhos: 

### 1) Tentar remendar o Visual Basic para chamar a DLL dos modelos 

Isso pode ser difícil, já que os métodos de *link* a DLLs suportados pela Microsoft atualmente são 
*link durante a compilação* e *link durante runtime*. Para fazer qualquer um dos dois, usamos o Visual 
Studio que já não suporta o Visual Basic 6. 


### 2) Reescrever a DLL intermediária em C++ 

A dificuldade desse caso está no investimento de tempo que será reescrever as ~200-300 linhas de VB6 em C++. 
O lado bom seria que teríamos uma DLL intermediária com suporte atual e sólida em termos de segurança e 
performance.

Como a própria Aspen só oferece duas opções para desenvolver extensões pro Hysys, em VB ou C++, essa é 
a outra (e única) possibilidade. 

Novamente, o código seria 100% moderno com a `ATOMS.dll` escrita em C++17 e a `Saturation.dll` em Rust, mas
tomaria mais tempo do projeto.



A prova de conceito está nos [Releases](https://github.com/OmarMesqq/dummy-hysys/releases/tag/1.0).
