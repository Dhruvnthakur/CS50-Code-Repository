# Image Filter Program — CS50 `helpers.c`

This C program provides image filter transformations for a bitmap image. It is part of the **CS50 Problem Set 4: Filter (More)** assignment. The program modifies an image using four filters:

- Grayscale
- Sepia
- Reflect (horizontal flip)
- Blur

---

## 🖼️ Supported Filters

### 1. 🩶 Grayscale

Converts each pixel to grayscale by averaging the red, green, and blue values.

**Formula**:
```c
gray = round((red + green + blue) / 3.0)
```
### 2. 🟤 Sepia

Applies a vintage-style sepia filter using a weighted formula.

**Formula**:
```c
sepiaRed = 0.393*R + 0.769*G + 0.189*B
sepiaGreen = 0.349*R + 0.686*G + 0.168*B
sepiaBlue = 0.272*R + 0.534*G + 0.131*B
```
### 3. 🔁 Reflect
Reflects the image horizontally by swapping pixels across the vertical centerline of each row.

### 4. 💧 Blur
Applies a box blur by averaging the color values of a 3×3 box centered on each pixel.

Uses a copy of the original image to avoid modifying the input during processing.

Averages color values of valid neighboring pixels.

Handles edge and corner cases properly.
