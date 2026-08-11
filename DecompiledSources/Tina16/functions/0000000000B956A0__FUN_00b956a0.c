/* Ghidra address: 00b956a0 */
/* Ghidra symbol: FUN_00b956a0 */


void FUN_00b956a0(int *param_1,int *param_2)

{
  if ((*param_2 <= *param_1) || (param_2[1] <= param_1[1])) {
    *param_1 = 0;
    param_1[1] = 0;
    *param_2 = 0;
    param_2[1] = 0;
  }
  return;
}

