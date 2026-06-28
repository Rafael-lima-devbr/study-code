class Conta:
    def __init__ (self, titular, numero, saldo):
        self.__saldo= saldo
        self._titular=titular
        self._numero=numero

        
    def get_saldo(self):
        return self.__saldo

   
    def set_saldo(self, saldo):
        if (saldo<0):
            print("Valor não aceito: Saldo não pode ser negativo")
        else:
            self.__saldo = saldo

    def saque(self, valor):
        if (self.__saldo>=valor):
            self.__saldo-=valor
            print("Saque realizado com sucesso")
        else:
            print("Saldo insuficiente")
    
    def deposita(self, valor):
        self.__saldo+=valor
        print("Depósito realizado com sucesso")

    def extrato(self):
        print("Cliente: ", self._titular, " Saldo Atual: ", self.__saldo)
