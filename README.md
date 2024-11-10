# DentalApp
Customer flow control application, C++ based | QT5+MySQL

---
# Programming, contributing and why we have branch protection rules

> This section can be changed soon

First and foremost, all code changes must be tested. At the very least, we need to ensure that the code can be compiled successfully. Additionally, unit tests will be implemented to validate the core program logic.

So, why do we have branch protection rules?

The protected main branch ensures stability. Since there are status checks in place, you can be confident that the code in the main branch will always compile successfully. This means that when you create a new wip/ branch from main, you don't need to worry about fixing any existing errors and can focus entirely on developing new features.
