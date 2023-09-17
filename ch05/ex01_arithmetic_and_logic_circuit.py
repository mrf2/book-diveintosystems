#!/usr/bin/python

from sympy.logic.boolalg import Or, And, Not
from sympy.abc import A, B

eq = Or(And(Not(A),Not(B)), And(A, B))
simplified_expr = eq.simplify()
print(simplified_expr)

