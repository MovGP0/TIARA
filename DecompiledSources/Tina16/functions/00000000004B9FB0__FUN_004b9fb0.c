/* Ghidra address: 004b9fb0 */
/* Ghidra symbol: FUN_004b9fb0 */


void FUN_004b9fb0(longlong *param_1,int param_2)

{
  undefined8 uVar1;
  int local_1c [3];
  
  local_1c[0] = param_2;
  uVar1 = (**(code **)(*param_1 + 0x68))(param_1,local_1c);
  FUN_004b9c20(param_1,uVar1,param_1[2]);
  param_1[4] = (longlong)local_1c[0];
  return;
}

