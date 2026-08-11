/* Ghidra address: 01094c90 */
/* Ghidra symbol: FUN_01094c90 */


bool FUN_01094c90(longlong param_1)

{
  int iVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0041ddd0(&local_10,&PTR_PTR_01090fd8);
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0xf8),local_10);
  FUN_00414480(&local_10);
  return iVar1 != 0;
}

