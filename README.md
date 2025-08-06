# Caesar Cipher — CS50 Edition

This C program implements the **Caesar cipher**, a classical encryption technique where each letter in the plaintext is shifted by a fixed number of positions (key) in the alphabet.

---

## 🔐 What is Caesar Cipher?

The Caesar cipher is a **simple substitution cipher** that replaces each letter in the plaintext with a letter a fixed number of positions down the alphabet.

Example with a key of `1`:

Plaintext : A B C D ...
Ciphertext: B C D E ...

---

## 🧠 How the Program Works

1. **Takes a single command-line argument** (the key).
2. **Validates** the argument to ensure it's a non-negative integer.
3. **Prompts** the user for plaintext input using `get_string()`.
4. **Encrypts** each letter using the Caesar cipher algorithm:
   - Wraps from Z to A (or z to a) if needed.
   - Leaves punctuation and numbers unchanged.
5. **Prints** the resulting ciphertext.

---

## 📌 Example Usage

### Terminal Input

./caesar 5
plaintext: CS50 is cool!
ciphertext: HX50 nx httq!
./caesar 2
plaintext: Hello, CS50!
