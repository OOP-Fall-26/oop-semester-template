# CSCP2023 – Object Oriented Programming — Semester Repo

This is your **single repo for the whole semester**. Every assignment gets
its own top-level folder (`assignment1/`, `assignment2/`, ...). You only
create this repo once, at the start of the semester.

## First-time setup (do this once)

1. Fill in `STUDENT.md` with your name, roll number, and GitHub username.
2. Commit and push that change immediately, so it's recorded even before
   you start Assignment 1.

## For each assignment

1. Wait for the announcement that a new assignment is released — its
   folder (e.g. `assignment2/`) will already exist in your repo (it starts
   as just a placeholder `README.md` until release).
2. Read the assignment brief shared separately for the exact
   requirements, class signatures, and folder structure expected inside
   that assignment's folder.
3. Do your work **inside that assignment's folder only**.
4. Commit and push:
   ```bash
   git add assignment1/
   git commit -m "Assignment 1 submission"
   git push
   ```
5. Check the **Actions** tab of your repo on GitHub. A workflow will run
   automatically and show a green check (pass) or red cross (fail),
   with a detailed pass/fail breakdown per test inside the run's log.
6. You can push again as many times as you want before the deadline —
   each push re-runs the grader for that assignment.

## Assignment 1 — folder structure (already in your repo)

```
assignment1/
├── problem1_rectangle/
│   └── Rectangle.h
├── problem2_bankaccount/
│   ├── BankAccount.h
│   ├── BankAccount.cpp
│   └── (add your BankAccount_UML.png here)
├── problem3_student/
│   └── Student.h
└── RollNumber_Assignment1.cpp     <- rename "RollNumber" to your actual roll number
```

Every `.h` file currently has `// TODO` comments marking what to implement.
Do not rename or remove any method that's commented out as a TODO — the
autograder calls those exact method names.
