/* Ghidra address: 014bc020 */
/* Ghidra symbol: FUN_014bc020 */


void FUN_014bc020(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = FUN_00416db0(local_res10[0],*(undefined8 *)(param_1 + 0x150));
  if (iVar1 != 0) {
    FUN_00414ad0(param_1 + 0x150,local_res10[0]);
  }
  FUN_00414480(local_res10);
  return;
}

