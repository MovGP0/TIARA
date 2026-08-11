/* Ghidra address: 00fab0d0 */
/* Ghidra symbol: FUN_00fab0d0 */


void FUN_00fab0d0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x828),&local_10);
  uVar1 = FUN_0043fc00(local_10);
  *(undefined4 *)(param_1 + 0x878) = uVar1;
  FUN_00414480(&local_10);
  return;
}

