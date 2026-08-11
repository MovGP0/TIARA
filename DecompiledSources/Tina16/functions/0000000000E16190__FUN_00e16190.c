/* Ghidra address: 00e16190 */
/* Ghidra symbol: FUN_00e16190 */


double FUN_00e16190(byte param_1,longlong param_2,int param_3)

{
  double dVar1;
  
  if (param_1 < 5) {
    if (param_1 == 4) {
      return (double)*(int *)(param_2 + (longlong)param_3 * 4);
    }
    if (param_1 == 0) {
      return (double)*(byte *)(param_2 + param_3);
    }
    if (param_1 == 1) {
      return (double)(int)*(char *)(param_2 + param_3);
    }
    if (param_1 == 2) {
      return (double)(int)*(short *)(param_2 + (longlong)param_3 * 2);
    }
    if (param_1 == 3) {
      return (double)*(int *)(param_2 + (longlong)param_3 * 4);
    }
  }
  else {
    if (param_1 == 5) {
      dVar1 = (double)FUN_00e15e10(*(undefined4 *)(param_2 + (longlong)param_3 * 4));
      return dVar1;
    }
    if (param_1 == 6) {
      return *(double *)(param_2 + (longlong)param_3 * 8);
    }
    if (param_1 == 7) {
      dVar1 = (double)FUN_00c44590(param_2 + (longlong)param_3 * 0x10);
      return dVar1;
    }
  }
  return 0.0;
}

