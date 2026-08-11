/* Ghidra address: 0082bdf0 */
/* Ghidra symbol: FUN_0082bdf0 */


bool FUN_0082bdf0(longlong param_1)

{
  int iVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_0064dd90(param_1,&local_10);
  FUN_0041ddd0(&local_18,*(undefined8 *)(&DAT_01e177c0 + (ulonglong)*(byte *)(param_1 + 0x529) * 8))
  ;
  iVar1 = FUN_0043e650(local_10,local_18);
  FUN_00414480(&local_18);
  FUN_00414480(&local_10);
  return iVar1 != 0;
}

