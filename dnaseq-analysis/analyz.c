#include <stdio.h>
#include <stdlib.h>

void nucleocount();
void gcpercentage();

int main() {
    nucleocount();
    gcpercentage();
    return 0;
}

void nucleocount() {
    FILE *dnagenomfile = fopen("genome_and_dna_struct.txt", "r");
    
    if (dnagenomfile == NULL) {
        perror("Error opening file");
        exit(1);
    }

    int nucleotide_len = 0;
    int c;
    while ((c = fgetc(dnagenomfile)) != EOF) {
        nucleotide_len++; 
    }

    fclose(dnagenomfile);

    printf("Number of Nucleotides found: %d\n", nucleotide_len);
}

void gcpercentage() {
    FILE *dnagenomfile = fopen("genome_and_dna_struct.txt", "r");

    if (dnagenomfile == NULL) {
        perror("Error opening file");
        exit(1);
    }

    char nucleotide;
    int gc_count = 0;
    int total_count = 0;

    while ((nucleotide = fgetc(dnagenomfile)) != EOF) {
        if (nucleotide == 'G' || nucleotide == 'C') {
            gc_count++;
        }
        total_count++;
    }

    fclose(dnagenomfile);

    double gc_percent = (double)gc_count / total_count * 100.0;
    printf("GC Percentage: %.2f%%\n", gc_percent);
}
