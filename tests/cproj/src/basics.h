// Header for general library file.

#if !defined(_CPROJ_BASICS_)
#define _CPROJ_BASICS_

//standard libraries

// misc
extern char GET_LUCKY [32];
void voided ();
extern int verbosity;

typedef enum PersonID {
  JOAN,
  HOOVER,
  MULAN=42,
  LESLIE,
  MARK,
  MARKUS=MARK,
  JACK,
} PersonID;

// structs
typedef struct struct0 {
  char nuc_name[6];
  int nuc_zz;
  short thermal_yield;
  double xs [63];
} struct0;


// regular functions
unsigned int func0(double x, unsigned int y);
unsigned int func1(int i, float f);
char * func2();
int func3(char *, char **, int);

// FIXME when enums are implemented properly in C++, see #96
//int func4(PersonID id);
int func4(int id); 

// structs
typedef struct ThreeNums
{
  double a;
  double b;
  double c;
  double (*op)(double, double, double);
} ThreeNums;

double call_threenums_op_from_c(ThreeNums x); 

// unions
typedef union SharedSpace
{
    int i_val;
    float f_val;
} SharedSpace;

typedef enum EventType {
	EVT_ONE=42,
	EVT_TWO,
} EventType;

// callbacks
typedef int (*event_cb_t) (int event, void* context);

void subscribe_for_event(event_cb_t event_cb, void* context);

void pulse_event();

#endif
