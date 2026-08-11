/* Ghidra address: 0059b6d0 */
/* Ghidra symbol: FUN_0059b6d0 */


void FUN_0059b6d0(undefined8 *param_1,undefined8 *param_2)

{
  longlong local_20 [2];
  
  local_20[0] = (longlong)*(int *)(param_1 + 1);
  FUN_00418e30(param_2,param_1[2],1,local_20);
  FUN_00409a70(*param_1,*param_2,
               local_20[0] * *(int *)(param_1[2] + 2 + (ulonglong)*(byte *)(param_1[2] + 1)));
  return;
}

