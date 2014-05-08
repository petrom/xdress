#include "basics.h"

char GET_LUCKY [32] = "She's up all night til the sun.";
void voided() {};
int verbosity = 0;

unsigned int func0(double x, unsigned int y) {
  return 1;
};


unsigned int func1(int i, float f) {
  return i*i;
};


char * func2() {
  return "Doing it right.";
};


int func3(char * val, char ** arr, int arr_len) {
  return -1;
};

// FIXME #96
//int func4(PersonID id)
int func4(int id) {
  return id;
};

double call_threenums_op_from_c(ThreeNums x) {
  return x.op(x.a, x.b, x.c);
}

static event_cb_t g_evt;
static void* g_context;

void subscribe_for_event(event_cb_t event_cb, void* context)
{
	g_evt = event_cb;
	g_context = context;
}

void pulse_event()
{
	g_evt(2, g_context);
}
