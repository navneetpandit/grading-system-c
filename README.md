# 🎓 Grading System in C (Extended with GPA Evaluation)

This repository contains my **C programming projects** for grading students.  
It started with a **basic grading system** and later expanded to include **GPA evaluation**.

---

## 🚀 Features

### Version 1: Basic Grading System (`marks.c`)
- Input marks (0–100)
- Output grades:
  - A (90–100)
  - B (80–89)
  - C (70–79)
  - D (60–69)
  - Fail (< 60)
- Input validation for marks

### Version 2: Grading + GPA Evaluation (`grading_gpa.c`)
- Includes everything from Version 1
- Adds GPA input (0.0–10.0) with evaluation:
  - Excellent (≥ 9.5)
  - Awesome (≥ 8.5)
  - Good (≥ 7.5)
  - Average (≥ 6.5)
  - Needs Improvement (< 6.5)
- GPA validation

---
🎯 Learning Outcome

Practiced if-else conditions with ranges

Validated multiple inputs (marks + GPA)

Extended a project instead of starting from scratch

Learned how to structure multiple versions in one repo

🔮 What’s Next

Allow grading of multiple students in one run (loops)

Save results into a file (file handling in C)

Add a menu system for better user experience

⚡ This repo now contains my Version 1 & Version 2 grading projects in C. More updates coming soon 🚀

# Run Version 2 (Grading + GPA Evaluation)
gcc grading_gpa.c -o grading_gpa
./grading_gpa
