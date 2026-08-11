/* Ghidra address: 014c93e0 */
/* Ghidra symbol: FUN_014c93e0 */


bool FUN_014c93e0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x58),local_res10[0]);
  FUN_00414480(local_res10);
  return iVar1 == 0;
}

