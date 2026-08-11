/* Ghidra address: 00d20b50 */
/* Ghidra symbol: FUN_00d20b50 */


void FUN_00d20b50(undefined4 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00416880(&local_10,param_2);
  lVar1 = FUN_0044d490(&PTR_FUN_00d1d7b8,1,local_10);
  *(undefined4 *)(lVar1 + 0x30) = param_1;
  FUN_004134c0(lVar1);
  FUN_00414480(&local_10);
  return;
}

