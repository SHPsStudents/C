class PartyAnimal:
    x = 0
    name = ""
    def __init__(sel, z):
        sel.name = z
        print(sel.name,"constructed")

    def party(sel):
        sel.x = sel.x + 1
        print(sel.name,"party count", sel.x)

s = PartyAnimal('Sally')
s.party()

j = PartyAnimal('Jim')
j.party()
j.party()

s.party()
s.party()
