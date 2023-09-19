#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// GTAGCTCCTACACTTGCAAAGATCACTTTCTGTGAGCGCTGGCCGCTATTCAACGTTAAGAACGCAATCACAAGATGAGGGGTATACACAGCAATCTTTT

int main() {
    srand(time(NULL));

    int sequenceLength = 100;
    char nucleotides[] = "ATCG";

    FILE *outputFile = fopen("genome_and_dna_struct.txt", "w");

    if (outputFile == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    for (int i = 0; i < sequenceLength; i++) {
        char randomNucleotide = nucleotides[rand() % 4];
        fprintf(outputFile, "%c", randomNucleotide);
    }

    fclose(outputFile);

    printf("Synthetic sequence generated and saved to genome_and_dna_struct.txt.\n");

    return 0;
}
