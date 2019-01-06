# 1.1 The Elements of Programming

When describing a language, we should pay close attention to the means
that the language provides for combining simple ideas to form more complex ones.

Every powerful language is has 3 mechanics for accomplishing this:

- __Primitive Expressions__, which represent the simplest entities the language
is concerned with.

- __Means of Combination__, by which compound elements are built from simpler
ones

- __Means of Abstraction__, by which compoung elements can be named and
manipulated as units.


In programming, we deal with two kinds of elements: _procedures_ and _data_.

_Data_ is "stuff" that we want to manipulate

_Procedures_ are descriptions of the rules for manipulating data.

## 1.1.1 Expressions

The interpreter responds to _expressions_ by evaluating them.

Presenting List with a number:

```*.scm
486
```

the interpreter will respond by printing

```*.scm
486
```

Expressions representing numbers may be combined with an expression representing
a primitive procedure (such as + or *) to form a compound expression that
represents the application of the procedure to those numbers. For example:

```*.scm
(+ 137 349)
486
(- 1000 334)
666
(* 5 99)
495
(/ 10 5)
2
(+ 2.7 10)
12.7
```

Expressions such as these, formed by delimiting a list of expressions within
parentheses in order to denote procedure application, are called _combinations_.

The convention of placing the operator to the left of the operands is known as
_prefix notation_.

```*.scm
(+ 21 35 12 7)
=> 75

(* 25 4 12)
=> 1200
```

Allows combinations to be nested, that is, to have combinations whose elements are
themselves combinations:

```*.scm
(+ (* 3 5) (- 10 6))
=> 19
```