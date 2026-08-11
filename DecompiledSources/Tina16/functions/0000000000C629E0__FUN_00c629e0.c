/* Ghidra address: 00c629e0 */
/* Ghidra symbol: FUN_00c629e0 */


bool FUN_00c629e0(longlong param_1)

{
  int iVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0060e940(&local_10,&PTR_FUN_005f6910);
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0xe0),local_10);
  FUN_00414480(&local_10);
  return iVar1 != 0;
}

