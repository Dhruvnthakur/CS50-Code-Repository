# WAV Volume Modifier

This C program modifies the volume of a `.wav` audio file by scaling its audio samples with a user-defined factor.

## Overview

The program reads a `.wav` file, scales each audio sample by a specified factor, and writes the result to a new output file. The 44-byte WAV header is preserved to ensure the output file remains a valid audio file.

## Usage

```bash
./volume input.wav output.wav factor
