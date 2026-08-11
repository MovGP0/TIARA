/* Ghidra address: 01cc8540 */
/* Ghidra symbol: FUN_01cc8540 */


void FUN_01cc8540(longlong param_1,undefined8 param_2,double *param_3)

{
  FUN_01cc7e10(param_1,param_2,param_3,0);
  *param_3 = *(double *)(*(longlong *)(param_1 + 8) + 0x28) * *param_3;
  return;
}

