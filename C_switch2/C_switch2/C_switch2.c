#include <stdio.h>
void main() {
	enum syllable {Do, Re, Mi, Fa} tone;
	for (tone = Do; tone <= Fa; tone += 1) {
		switch (tone) {
		case Do: printf("Do Mi Sol \n\n");
			break;
		case Re: printf("Re Fa La \n\n");
			break;
		case Mi: printf("Mi Sol Si \n\n");
			break;
		case Fa: printf("Fa La Do \n");
			break; 
		}
	}
}