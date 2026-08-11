/* Ghidra address: 00bd1820 */
/* Ghidra symbol: FUN_00bd1820 */


undefined4 FUN_00bd1820(undefined4 param_1)

{
  undefined4 uVar1;
  undefined8 local_20;
  undefined1 local_16 [14];
  
  local_20 = 0;
  thunk_FUN_039c31b1(param_1,0x1004,local_16,6);
  FUN_00416830(&local_20,local_16,7);
  uVar1 = thunk_FUN_041a78f9();
  uVar1 = FUN_0043fc50(local_20,uVar1);
  FUN_00414480(&local_20);
  return uVar1;
}

