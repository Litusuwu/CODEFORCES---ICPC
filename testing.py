import itertools

# Sílabos
syllables_2 = ["aZ", "iV", "EP"]
syllables_3 = ["PdK", "cj9", "JFy"]

# Generar todas las combinaciones posibles de los sílabos de 3 caracteres
comb_3 = list(itertools.permutations(syllables_3, 3))

# Crear las combinaciones obligatorias
comb_obligatorias = [((syllables_2[0], comb[0]), (syllables_2[1], comb[1]), (syllables_2[2], comb[2])) for comb in comb_3]

# Generar todas las permutaciones de las combinaciones obligatorias con los sílabos restantes
resultados = []
for comb in comb_obligatorias:
    remaining_syllables = set(syllables_2 + syllables_3) - set(comb)
    for perm in itertools.permutations(remaining_syllables):
        resultados.append(comb + perm)

# Mostrar todas las combinaciones
for resultado in resultados:
    print(resultado)
