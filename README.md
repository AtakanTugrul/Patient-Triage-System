# Patient Triage System

I developed this project to simulate how hospitals sort patients based on their emergency level. The main goal was to understand memory management in C.

## What it does?
* **Sorting:** It checks keywords like "agir" (critical) or "orta" (moderate) and decides the treatment path.
* **Memory Saving:** I used `union` instead of `struct` for some parts. Since a patient cannot be "In-patient" and "Out-patient" at the same time, `union` helps to use less RAM.

## Usage
1. Compile the code with a C compiler (like GCC).
2. Enter patient details.
3. The system will automatically assign a treatment plan.
