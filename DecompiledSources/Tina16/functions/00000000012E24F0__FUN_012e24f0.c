/* Ghidra address: 012e24f0 */
/* Ghidra symbol: FUN_012e24f0 */


void FUN_012e24f0(undefined8 param_1,longlong param_2,int param_3)

{
  if (-1 < param_3) {
    param_3 = param_3 + 1;
    do {
      FUN_00414480(param_2);
      param_2 = param_2 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

