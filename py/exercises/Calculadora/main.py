import tkinter as tk
from Botoes import criar_botoes

janela = tk.Tk()
janela.title("Minha calculadora")
janela.geometry("400x500")

entrada = tk.Entry(janela, font=("Arial", 16))
entrada.pack(pady=30, ipady=10, ipadx=40)

def clicar(valor):
    if valor=="=":
        calcular()
    elif valor=="C":
        entrada.delete(0, tk.END)
    elif valor =="Del":
        entrada.delete(len(entrada.get())-1, tk.END)
    else:
        entrada.insert(tk.END, valor)

def calcular():
    try:
        conta = entrada.get()
        resultado = eval(conta)
        entrada.delete(0, tk.END)
        entrada.insert(tk.END, resultado)
    except:
        entrada.delete(0, tk.END)
        entrada.insert(tk.END, "ERROR")
    
criar_botoes(janela, clicar)


janela.mainloop()
