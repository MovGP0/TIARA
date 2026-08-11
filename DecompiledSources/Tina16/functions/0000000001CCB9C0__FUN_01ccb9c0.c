/* Ghidra address: 01ccb9c0 */
/* Ghidra symbol: FUN_01ccb9c0 */


void FUN_01ccb9c0(longlong param_1,undefined8 param_2,double *param_3)

{
  FUN_01ccb2f0(param_1,param_2,param_3,0);
  if (1 < *(int *)(param_1 + 0x24)) {
    *param_3 = *param_3 * 2.0;
  }
  return;
}

