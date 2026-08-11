/* Ghidra address: 0059b740 */
/* Ghidra symbol: FUN_0059b740 */


void FUN_0059b740(undefined8 *param_1,undefined8 *param_2)

{
  longlong local_20 [2];
  
  local_20[0] = (longlong)*(int *)(param_1 + 1);
  FUN_00418e30(param_2,param_1[2],1,local_20);
  FUN_004185b0(*param_2,*param_1,
               **(undefined8 **)(param_1[2] + 6 + (ulonglong)*(byte *)(param_1[2] + 1)),local_20[0])
  ;
  return;
}

