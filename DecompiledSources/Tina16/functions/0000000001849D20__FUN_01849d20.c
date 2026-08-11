/* Ghidra address: 01849d20 */
/* Ghidra symbol: FUN_01849d20 */


void FUN_01849d20(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_20 = *(undefined8 *)(param_1 + 0x20);
  local_18 = 0x11;
  FUN_00442f70(&local_10,*(undefined8 *)PTR_DAT_020047d0,&local_20,0);
  uVar1 = FUN_0044d490(&PTR_FUN_004334c0,1,local_10);
  FUN_004134c0(uVar1);
  FUN_00414480(&local_10);
  return;
}

