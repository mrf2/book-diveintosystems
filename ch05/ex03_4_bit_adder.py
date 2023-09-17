#!/usr/bin/python

from sympy.logic.boolalg import Not, And, Or
from sympy.abc import A, B, N

equation = Or(And(Not(A), Not(B), N), And(Not(A), B, Not(N)), And(A, Not(B), Not(N)),
                And(A, B, N))

simplified_expr = equation.simplify()
print(simplified_expr)

