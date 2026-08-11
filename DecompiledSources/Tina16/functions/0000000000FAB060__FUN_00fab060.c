/* Ghidra address: 00fab060 */
/* Ghidra symbol: FUN_00fab060 */


void FUN_00fab060(longlong param_1)

{
  undefined4 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x830),&local_10);
  uVar1 = FUN_0043fc00(local_10);
  *(undefined4 *)(param_1 + 0x87c) = uVar1;
  FUN_00414480(&local_10);
  return;
}

