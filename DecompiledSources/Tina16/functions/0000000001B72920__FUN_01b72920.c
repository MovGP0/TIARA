/* Ghidra address: 01b72920 */
/* Ghidra symbol: FUN_01b72920 */


void FUN_01b72920(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  int local_c;
  
  local_20 = auStack_48;
  local_28 = 0;
  puVar1 = auStack_48;
  if (*(char *)(param_1 + 0x6e8) != '\0') {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d0),&local_28);
    local_c = FUN_0043fc00(local_28);
    if ((local_c < 0) || (puVar1 = local_20, 100 < local_c)) {
      *param_3 = 0;
      FUN_00801e40(param_1,*(undefined8 *)(param_1 + 0x6d0));
      FUN_00680ad0(*(undefined8 *)(param_1 + 0x6d0));
      FUN_016fea20(0x409);
      puVar1 = local_20;
    }
  }
  local_20 = puVar1;
  *(undefined1 *)(param_1 + 0x6e8) = 0;
  FUN_00414480(&local_28);
  return;
}

