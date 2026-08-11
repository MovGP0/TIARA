/* Ghidra address: 01b72860 */
/* Ghidra symbol: FUN_01b72860 */


void FUN_01b72860(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d0),&local_10);
  uVar1 = FUN_0043fc00(local_10);
  FUN_012be110(param_2,uVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x6c0) + 0x4d8));
  FUN_00414480(&local_10);
  return;
}

