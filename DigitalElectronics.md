## DIGITAL ELECTRONICS
<hr>

<br>

# GATES

## NOT GATE<br>
<img src="./visual/gates/NOT.png" width="250"/>

## AND GATE<br>
<img src="./visual/gates/AND.png" width="350"/>

## OR GATE<br>
<img src="./visual/gates/OR.png" width="350"/>

<br>

# LOGIC

## *Idempotency*
<!--
> A & A = A <br>
> A | A = A <br>
-->
$$\begin{align*}
A \land A & = A \\
A \lor  A & = A \\
\end{align*}$$

## *Annulment*
<!--
> A & 0 = 0 <br>
> A | 1 = 1 <br>
-->
$$\begin{align*}
A \land 0 & = 0 \\
A \lor  1 & = 1 \\
\end{align*}$$

## *Identity*
<!--
> A & 1 = A <br>
> A | 0 = A <br>
-->
$$\begin{align*}
A \land 1 & = A \\
A \lor  0 & = A \\
\end{align*}$$

## *Complement*
<!--
> A & ~A = 0 <br>
> A | ~A = 1 <br>
-->
$$\begin{align*}
A \land \neg A & = 0 \\
A \lor  \neg A & = 1 \\
\end{align*}$$

## *Commutativity*
<!--
> A & B = B & A <br>
> A | B = B | A <br>
-->
$$\begin{align*}
A \land B & = B \land A \\
A \lor  B & = B \lor  A \\
\end{align*}$$

## Associativity <br>
<!--
> A & (B & C) = (A & B) & C <br>
> A | (B | C) = (A | B) | C <br>
-->
$$\begin{align*}
A \land (B \land C) & = (A \land B) \land C \\
A \lor  (B \lor  C) & = (A \lor  B) \lor  C \\
\end{align*}$$

## Distributivity <br>
<!--
> A & (B | C) = (A & B) | (A & C) <br>
> A | (B & C) = (A | B) & (A | C) <br>
-->
$$\begin{align*}
A \land (B \lor  C) & = (A \land B) \lor  (A \land C) \\
A \lor  (B \land C) & = (A \lor  B) \land (A \lor  C) \\
\end{align*}$$

## NAND/NOR <br>
<!--
> ~(A & B) = ~A | ~B <br>
> ~(A | B) = ~A & ~B <br>
-->
$$\begin{align*}
\neg (A \land B) & = \neg A \lor  \neg B \\
\neg (A \lor  B) & = \neg A \land \neg B \\
\end{align*}$$

## XOR <br>
<!--
> A ^ B = (A & ~B) | (~A & B) <br>
-->
$$\begin{align*}
A \veebar B & = (A \land \neg B) \lor  (\neg A \land B)
\end{align*}$$

## XOR Annulment
<!--
> A ^ 1 = ~A <br>
> A ^ 0 = A <br>
-->
$$\begin{align*}
A \veebar 1 & = \neg A \\
A \veebar 0 & = ~~ A \\
\end{align*}$$

<br>

# NAND Forms
<!--
> ~A = ~(A & A) <br>
> A & B = ~(~(A & B) & ~(A & B)) <br>
> A | B = ~(~(A & A) & ~(B & B)) <br>
> A ^ B = ~(~(A & ~(A & B)) & ~(B & ~(A & B))) <br>
-->
$$\begin{align*}
\neg A & = \neg (A \land A) \\
A \land   B & = \neg (\neg (A \land B) \land \neg (A \land B)) \\
A \lor    B & = \neg (\neg (A \land A) \land \neg (B \land B)) \\
A \veebar B & = \neg (\neg (A \land \neg (A \land B))
\land \neg (B \land \neg (A \land B))) \\
\end{align*}$$

<img src="./visual/gates/XOR.png" width="400"/>

<br>

# LATCHES

## S(et)R(eset) Latch

<img src="./visual/latches/SR.png" width="250"/>

<!--
>  Q = ~(~S & ~Q) <br>
> ~Q = ~(~R & Q) <br>
>  Q |= S <br>
> ~Q |= R <br>
-->
$$\begin{align*}
 Q & = \neg (\overline S \land \overline Q)
 & \Leftrightarrow &&
 Q & = Q \lor S \\
 \overline Q & = \neg (\overline R \land Q)
 & \Leftrightarrow &&
 \overline Q & = \overline Q \lor R \\
\end{align*}$$

> *FORBIDDEN STATE* <br>
> S = 1 & R = 1 <br>
> hardware deviations determine outcome <br>

<br>

## D(ata) Latch

<img src="./visual/latches/D.png" width="400"/>

<!--
> ~S = ~(D & E) <br>
> ~R = ~(~D & E) <br>
> S = D <br>
> R = ~D <br>
-->
$$\begin{align*}
\overline S & = \neg (D \land E)
& \Rightarrow &&
S & = D \\
\overline R & = \neg (\overline D \land E)
& \Rightarrow &&
R & = \overline D \\
\end{align*}$$

<br>

## J(ack)K(ilby) Latch

<img src="./visual/latches/JK.png" width="400"/>

<!--
> ~S = ~(J & ~Q) <br>
> ~R = ~(K & Q) <br>
> S = J & ~Q <br>
> R = K & Q <br>
-->
$$\begin{align*}
\overline S & = \neg (J \land \overline Q)
& \Leftrightarrow &&
S & = J \land \overline Q \\
\overline R & = \neg (K \land Q)
& \Leftrightarrow &&
R & = K \land Q \\
\end{align*}$$

<br>

## T(oggle) Latch

<img src="./visual/latches/T.png" width="400"/>

<!--
~S = ~(T & ~Q)
~R = ~(T & Q)
S = T & ~Q
R = T & Q
-->
$$\begin{align*}
\overline S & = \neg (T \land \overline Q)
& \Leftrightarrow &&
S & = T \land \overline Q \\
\overline R & = \neg (T \land Q)
& \Leftrightarrow &&
R & = T \land Q \\
\end{align*}$$

<br>

# CLOCK

## Level Trigger

<img src="./visual/clock/LVL.png" width="400"/>

<br>

## Pulse Generation

<img src="./visual/clock/PLS.png" width="400"/>

<br>

## Edge Trigger

<img src="./visual/clock/EDG.png" width="400"/>

<br>

# MEMORY

## Register

<img src="./visual/memory/REG.png" width="600"/>

<br>

## Shift Register

<img src="./visual/memory/SHIFTREG.png" width="600"/>

<br>

## Floating Gate MOSFET

<br>

<a href="https://www.youtube.com/watch?v=r2KaVfSH884">
How Does Flash Memory Work? (SSD)</a>

<br><br>

# IO

## Multiplexer

<img src="./visual/io/MUX.png" width="400"/>

<br>

## Demultiplexer

<img src="./visual/io/DEMUX.png" width="300"/>

<br>

## Encoder

<img src="./visual/io/ENC.png" width="350"/>

<br>

## Decoder

<img src="./visual/io/DEC.png" width="500"/>

<br>

# MATH

## Adder

<img src="./visual/math/ADDER.png" width="550"/>

<br>

## Subtractor

<img src="./visual/math/SUBTRACTOR.png" width="550"/>

