#include <stdio.h>
#include <string.h>

struct employee {
  char firstname[50];
  double sapid;
  char email[50];
};

void print_details(struct employee e);

int main() {
  struct employee e1;
  strcpy(e1.firstname, "Kausik Devanathan");
  e1.sapid = 51279303;
  strcpy(e1.email, "kausik.dev2@xyz.com");

  struct employee e2;
  printf("Enter the name of the employee: ");
  fgets(e2.firstname, sizeof(e2.firstname), stdin);
  // gets(e2.firstname);
  printf("Enter the SAPID: ");
  scanf("%lf", &e2.sapid);
  // getchar(); // Consume the newline character
  printf("Enter the email: ");
  fgets(e2.email, sizeof(e2.email), stdin);
  // gets(e2.email);

  print_details(e1);
  print_details(e2);

  return 0;
}

void print_details(struct employee e) {
  printf("Name: %s\n", e.firstname);
  printf("SAPID: %lf\n", e.sapid);
  printf("Email: %s\n", e.email);
}
