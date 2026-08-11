/* Ghidra address: 009e4700 */
/* Ghidra symbol: FUN_009e4700 */


void FUN_009e4700(undefined8 param_1,undefined1 *param_2,int param_3)

{
  if (param_3 == 1) {
    *param_2 = 0;
  }
  else if (param_3 == 2) {
    *param_2 = 3;
  }
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  return;
}

