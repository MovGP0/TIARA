/* Ghidra address: 01c29d30 */
/* Ghidra symbol: FUN_01c29d30 */


bool FUN_01c29d30(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = (**(code **)(*param_1 + 0xb0))(param_1,local_res10[0]);
  FUN_00414480(local_res10);
  return -1 < iVar1;
}

