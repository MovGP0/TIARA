/* Ghidra address: 014b1f70 */
/* Ghidra symbol: FUN_014b1f70 */


bool FUN_014b1f70(longlong param_1)

{
  int iVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041ddd0(&local_10,&PTR_PTR_014b01e8);
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0xf8),local_10);
  FUN_00414480(&local_10);
  return iVar1 != 0;
}

