import tkinter as tk

estilo_butao = {
    "width": 3,
    "height": 2,
    "font": ("Arial",14),
}

botoes = [
    ("C", 0, 2),
    ("Del", 0, 3),
    ("7", 1, 0),
    ("8", 1, 1),
    ("9", 1, 2),
    ("*", 1, 3),
    ("4", 2, 0),
    ("5", 2, 1),
    ("6", 2, 2),
    ("-", 2, 3),
    ("3", 3, 0),
    ("2", 3, 1),
    ("1", 3, 2),
    ("+", 3, 3),
    ("/", 4, 0),
    ("0", 4, 1),
    (".", 4, 2),
    ("=", 4, 3), 
]

def criar_botoes(janela, ao_clicar):
    frame = tk.Frame(janela)
    frame.pack()

    for texto, linha, coluna in botoes:
        botao = tk.Button(
            frame,
            text=texto,
            **estilo_butao,
            command=lambda valor=texto: ao_clicar(valor),
        )
        
        botao.grid(row=linha, column=coluna, padx=5, pady=5)
