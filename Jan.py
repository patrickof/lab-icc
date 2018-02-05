from functools import partial
from tkinter import *

def bt_click(botao):
    func['text'] = botao['text']
    

janela = Tk()
#Título
janela.title('Counter Cells')
#Cor Janela

#Text
lb = Label(janela, text ='Counter Cells')
lb.place(x=100, y=1)

func = Label(janela, text = ' ')
func.place(x=100,y=200)

#Button
bt1 = Button(janela, width=20, text = 'Início')
bt1.place(x=50, y=100)
bt1['command'] = partial(bt_click,bt1)

bt2 = Button(janela, width=20, text = 'Estatísticas')
bt2.place(x=50, y=130)
bt2['command'] = partial(bt_click,bt2)

bt3 = Button(janela, width=20, text = 'Sair')
bt3.place(x=50, y=160)
bt3['command'] = partial(bt_click,bt3)



#LxA+E+T
janela.geometry('300x250+100+100')

janela.mainloop()

