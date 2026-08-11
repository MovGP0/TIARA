/* Ghidra address: 01c7eb30 */
/* Ghidra symbol: FUN_01c7eb30 */


void FUN_01c7eb30(undefined8 param_1,undefined8 *param_2,int param_3,undefined4 param_4)

{
  if (-1 < param_3) {
    param_3 = param_3 + 1;
    do {
      FUN_007e2da0(*param_2,param_4);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

