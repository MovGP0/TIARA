/* Ghidra address: 017ad620 */
/* Ghidra symbol: FUN_017ad620 */


int * FUN_017ad620(int *param_1,undefined8 *param_2)

{
  *(undefined8 *)param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = param_2[1];
  if (param_1[2] < *param_1) {
    FUN_017ad610(param_1,param_1 + 2);
  }
  if (param_1[3] < param_1[1]) {
    FUN_017ad610(param_1 + 1,param_1 + 3);
  }
  return param_1;
}

