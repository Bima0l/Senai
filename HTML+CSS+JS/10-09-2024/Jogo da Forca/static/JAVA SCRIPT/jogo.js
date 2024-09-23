let palavraAtual;
let dicaAtual;
let letrasAdivinhadas = [];
const tentativasMaximas = 6;
let tentativasRestantes;

function iniciarJogo() {
    const palavras = ["convivência",
    "adaptabilidade",
    "amor",
    "desafios",
    "apartamento",
    "solução",
    "comédia",
    "cozinha",
    "diálogo",
    "moradores",
    "amizade",
    "preconceito",
    "estilo de vida",
    "conflito",
    "vida cotidiana",
    "compromisso",
    "decoração",
    "superação",
    "sentimentos",
    "relacionamento",
    "amizades",
    "história de vida",
    "ajuda",
    "solidão",
    "pragmatismo",
    "reflexão",
    "companhia",
    "rotina",
    "tensão",
    "planos",
    "conversas",
    "jardim",
    "trabalho",
    "séries",
    "humor",
    "mudança",
    "solidão",
    "preconceito",
    "superação",
    "sentimentos",
    "ajuda",
    "reflexão",
    "convivência",
    "desafios",
    "amizade",
    "solução",
    "relacionamento",
    "humor",
    "vivência"]; 
    const dicas = ["A forma como duas pessoas lidam com o fato de compartilhar um espaço é um tema central da história.",
    "Os personagens precisam ajustar suas vidas para se adaptarem a novas circunstâncias.",
    "A relação entre os protagonistas evolui de uma maneira que não é apenas amigável.",
    "Viver juntos em um espaço pequeno apresenta vários obstáculos que precisam ser superados.",
    "O cenário principal da história é um tipo de moradia que oferece privacidade limitada.",
    "Encontrar maneiras de resolver os problemas que surgem é essencial para os personagens.",
    "O livro mistura elementos engraçados com uma narrativa envolvente.",
    "Um dos cômodos do apartamento é descrito detalhadamente e reflete a personalidade dos personagens.",
    "A comunicação entre os personagens é fundamental para o desenrolar da trama.",
    "As pessoas que vivem no mesmo espaço têm um impacto significativo na história.",
    "Os laços formados entre os personagens são importantes para o desenvolvimento do enredo.",
    "Existem julgamentos e expectativas preconceituosas que afetam as interações dos personagens.",
    "A forma como os personagens levam suas vidas diárias é um aspecto explorado na história.",
    "Conflitos surgem e precisam ser resolvidos para que a convivência seja harmoniosa.",
    "A história examina a rotina e os desafios diários enfrentados pelos personagens.",
    "Os personagens precisam manter uma promessa ou compromisso ao longo da trama.",
    "Os detalhes do ambiente em que os personagens vivem ajudam a contar a história.",
    "A jornada dos personagens envolve superar obstáculos significativos.",
    "As emoções dos personagens desempenham um papel importante em como eles lidam com a situação.",
    "O desenvolvimento da relação entre os protagonistas é um foco principal da narrativa.",
    "As novas relações que os personagens formam têm um impacto na trama.",
    "O passado dos personagens é revelado gradualmente e ajuda a entender suas ações.",
    "A cooperação mútua entre os personagens é crucial para resolver os problemas.",
    "Sentimentos de isolamento são abordados quando os personagens enfrentam a solidão.",
    "Os personagens mostram uma abordagem prática para lidar com as adversidades.",
    "A introspecção dos personagens sobre suas próprias vidas e decisões é um tema recorrente.",
    "A companhia dos outros é importante para o desenvolvimento pessoal e relacional dos personagens.",
    "A rotina diária afeta as interações e a dinâmica entre os personagens.",
    "A tensão entre os personagens cria momentos intensos e impactantes.",
    "Os personagens fazem planos para o futuro que influenciam a direção da história.",
    "Discussões profundas e reveladoras entre os personagens são comuns na narrativa.",
    "Um espaço ao ar livre, como um pequeno jardim, adiciona um elemento ao ambiente.",
    "A vida profissional e as responsabilidades dos personagens influenciam suas ações.",
    "Programas de entretenimento assistidos pelos personagens refletem aspectos de suas vidas.",
    "A história é enriquecida por momentos de leveza e humor que aliviam a tensão.",
    "A adaptação dos personagens a novas situações é um tema central da narrativa.",
    "Os momentos de solidão dos personagens fornecem uma perspectiva sobre suas vidas e escolhas.",
    "Os preconceitos dos personagens moldam suas interações e são desafiados ao longo da trama.",
    "Superar dificuldades é um aspecto crucial para o crescimento dos personagens.",
    "As reações emocionais dos personagens são exploradas para mostrar suas experiências internas.",
    "A ajuda mútua entre os personagens é fundamental para enfrentar os desafios da convivência.",
    "A reflexão pessoal dos personagens sobre suas escolhas e circunstâncias é um tema importante.",
    "A dinâmica entre os personagens é complexa e afeta a história de várias maneiras.",
    "Os obstáculos enfrentados pelos personagens revelam suas características e histórias pessoais.",
    "A importância da amizade é destacada enquanto os personagens enfrentam juntos as adversidades.",
    "Criar soluções para os problemas da convivência é um tema chave no livro.",
    "O relacionamento entre os personagens é examinado em profundidade ao longo da narrativa.",
    "O humor é uma ferramenta usada para explorar e suavizar as situações difíceis.",
    "A maneira como os personagens vivem suas experiências em um espaço compartilhado é central para a história."]; 
    
    const indiceAleatorio = Math.floor(Math.random() * palavras.length); 
    palavraAtual = palavras[indiceAleatorio];
    dicaAtual = dicas[indiceAleatorio];
    letrasAdivinhadas = [];
    tentativasRestantes = tentativasMaximas;
    atualizarDisplayDoJogo();
}

function atualizarDisplayDoJogo() {
    let palavraExibida = "";
    for (let i = 0; i < palavraAtual.length; i++) { 
        const letra = palavraAtual[i];
        if (letrasAdivinhadas.indexOf(letra) !== -1 || letra === " ") {
            palavraExibida += letra;
        } else {
            palavraExibida += " ";
        }
    }

    document.getElementById("palavra").textContent = palavraExibida; 
    document.getElementById("dica").textContent = `Dica: ${dicaAtual}`;
    document.getElementById("status").textContent = `Tentativas restantes: ${tentativasRestantes}`;
    document.getElementById("attempts").textContent = `Letras já tentadas: ${letrasAdivinhadas.join(", ")}`;
}

function adivinharLetra() {
    const entradaAdivinhacao = document.getElementById("guess"); 
    const letraAdivinhada = entradaAdivinhacao.value.toLowerCase();

    if (letraAdivinhada.length === 1 && /^[a-záéíóúäöç\s]+$/.test(letraAdivinhada)) {
        if (letrasAdivinhadas.indexOf(letraAdivinhada) === -1) {
            letrasAdivinhadas.push(letraAdivinhada);

            let letraNaoEncontrada = true;
            for (let i = 0; i < palavraAtual.length; i++) { 
                if (palavraAtual[i] === letraAdivinhada) { 
                    letraNaoEncontrada = false;
                    break;
                }
            }
            if (letraNaoEncontrada) {
                tentativasRestantes--;
            }

            atualizarDisplayDoJogo();
            desenharBoneco(tentativasRestantes); 

            let palavraCompleta = true;
            for (let i = 0; i < palavraAtual.length; i++) {
                if (letrasAdivinhadas.indexOf(palavraAtual[i]) === -1 && palavraAtual[i] !== " ") {
                    palavraCompleta = false;
                    break;
                }
            }

            if (palavraCompleta) {
                document.getElementById("status").textContent = "Você venceu!";
            } else if (tentativasRestantes <= 0) {
                document.getElementById("status").textContent = `Você perdeu! A palavra era: ${palavraAtual}`;
            }
        }
    }
    entradaAdivinhacao.value = "";
}

document.addEventListener("DOMContentLoaded", iniciarJogo);

