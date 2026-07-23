#  C Student Management System (CRP)

[![Language: C](https://img.shields.io/badge/Language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Compiler: GCC](https://img.shields.io/badge/Compiler-GCC-green.svg)](https://gcc.gnu.org/)
[![Platform: Linux / Termux](https://img.shields.io/badge/Platform-Termux-orange.svg)](https://termux.dev/)

نظام إدارة طلاب عملي ومتكامل تم بناؤه بلغة **C**، يعتمد على الهيكلة النمطية وإدارة الذاكرة الديناميكية.

---

##  المفاهيم البرمجية المُطبقة (Core Concepts)

 **السجلات (`struct`)**: تمثيل بيانات الطالب وقاعدة البيانات.
*  **المصفوفات الديناميكية (`Dynamic Arrays`)**: إدارة الذاكرة بمرونة باستعمال `malloc` و `realloc` و `free`.
*  **المؤشرات (`Pointers`)**: التعديل المباشر على البيانات في الذاكرة.
*  **البرمجة النمطية (`Modular Programming`)**: تقسيم المشروع إلى `student.h` و `student.c` و `main.c`.
*  **التحكم والترتيب (`Control Flow & Algorithms`)**: قوائم تفاعلية (`do-while` / `switch`) مع خوارزميات الترتيب والبحث.

---

##  طريقة التجميع والتشغيل (How to Run)

```bash
# 1. تجميع الكود
gcc main.c student.c -o CRP

# 2. تشغيل البرنامج
./CRP
