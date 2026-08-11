/* Ghidra address: 00c5a450 */
/* Ghidra symbol: FUN_00c5a450 */


undefined4 FUN_00c5a450(longlong param_1)

{
  undefined4 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0064dd90(param_1,&local_10);
  uVar1 = FUN_0043fc50(local_10,*(undefined4 *)(param_1 + 0x4d8));
  FUN_00414480(&local_10);
  return uVar1;
}

