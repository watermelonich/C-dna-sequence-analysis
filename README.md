# DNA Analysis C Program

This C program performs basic analysis on DNA sequences, including counting nucleotides and calculating GC percentage.

## Features

- [x] Count the number of nucleotides in the DNA sequence
- [x] Calculate the GC percentage of the DNA sequence

## To-Do List

- [ ] Implement error handling and user interaction
- [ ] Add command-line argument support for filename input
- [ ] Enable dynamic memory allocation for arbitrary sequence lengths
- [ ] Analyze the frequency of specific nucleotides (A, T, G, C)
- [ ] Compare two DNA sequences for similarity or differences
- [ ] Generate the reverse complement of a DNA sequence
- [ ] Implement transcription and translation
- [ ] Read and analyze multiple DNA sequences from a file
- [ ] Calculate the molecular weight of a DNA sequence
- [ ] Save analysis results to an output file for record-keeping
- [ ] Implement unit tests to ensure function correctness

## Usage

Compile and run the program using a C compiler. For example:

```bash
gcc analyz.c -o analyz
./analyz
```

# License
This project is licensed under the MIT License - see the LICENSE file for details.

# Notes
- The program reads DNA sequences from a file named genome_and_dna_struct.txt.
- The maximum line length and filename length are defined as constants (MAX_LINE_LEN and MAX_FILENAME_LEN respectively) in the program.
- The maximum number of lines a file can have is defined by MAX_FILE_LINES.
