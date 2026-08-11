/* Ghidra address: 0130b840 */
/* Ghidra symbol: FUN_0130b840 */


void FUN_0130b840(longlong param_1,double param_2,double param_3,double *param_4,double *param_5)

{
  if ((0.0 < *(double *)(param_1 + 0x188)) || (0.0 < *(double *)(param_1 + 0x180))) {
    if (*(double *)(param_1 + 0x188) <= param_2) {
      *param_4 = param_2;
    }
    if (param_3 <= *(double *)(param_1 + 0x180)) {
      *param_5 = param_3;
    }
  }
  else {
    *param_4 = param_2;
    *param_5 = param_3;
  }
  return;
}

