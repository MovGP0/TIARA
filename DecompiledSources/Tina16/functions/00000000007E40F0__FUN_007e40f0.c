/* Ghidra address: 007e40f0 */
/* Ghidra symbol: FUN_007e40f0 */


void FUN_007e40f0(undefined8 param_1,undefined8 *param_2,int param_3)

{
  if (-1 < param_3) {
    param_3 = param_3 + 1;
    do {
      FUN_007e34c0(param_1,*param_2);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

