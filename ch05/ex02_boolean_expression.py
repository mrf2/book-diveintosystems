#!/usr/bin/python

from sympy.logic.boolalg import Not, And, Or
from sympy.abc import A, B

equation = Or(And(Not(A), B), And(A, Not(B)))
simplified_expr = equation.simplify()
print(simplified_expr)

