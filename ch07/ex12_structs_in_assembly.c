#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct studentT {
	char name[64];
	int age;
	int grad_yr;
	float gpa;
};

struct studentTM {
	char name[63];
	int age;
	int grad_yr;
	float gpa;
};

struct studentTM2 {
	int age;
	int grad_yr;
	float gpa;
	char name[63];
};

void initStudent(struct studentT *s,
		char *nm,
		int ag,
		int gr,
		float g)
{
	strncpy(s->name, nm, 64);
	s->age = ag;
	s->grad_yr = gr;
	s->gpa = g;
}

int main()
{
	struct studentT* s;
	s = malloc (sizeof (struct studentT));
	initStudent(s, "Your good name", 33, 2012, 3.33);
	printf("Name: %s, Age: %d, Grade Year: %d, CGPA: %f\n", s->name, s->age, s->grad_yr, s->gpa);
	struct studentT student2;	    // check if padding has been added
	struct studentTM2 student3;
	struct studentTM2 courseSection[5]; // now check if padding has been added

	return 0;
}

