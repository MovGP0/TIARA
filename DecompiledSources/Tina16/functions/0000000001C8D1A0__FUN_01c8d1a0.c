/* Ghidra address: 01c8d1a0 */
/* Ghidra symbol: FUN_01c8d1a0 */


void FUN_01c8d1a0(undefined8 param_1,undefined8 *param_2,int param_3,undefined4 param_4)

{
  if (-1 < param_3) {
    param_3 = param_3 + 1;
    do {
      FUN_007e2f80(*param_2,param_4);
      FUN_007e2da0(*param_2,param_4);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

