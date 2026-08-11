/* Ghidra address: 01178d10 */
/* Ghidra symbol: FUN_01178d10 */


void FUN_01178d10(longlong param_1)

{
  undefined1 auStack_48 [36];
  int local_24;
  undefined1 *local_20;
  int local_c;
  
  local_20 = auStack_48;
  if ((*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x4c) ||
     (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x48)) {
    local_20 = auStack_48;
    FUN_0064cc50(*(undefined8 *)(param_1 + 0x7a8),0x162);
  }
  else {
    FUN_0064cc50(*(undefined8 *)(param_1 + 0x7a8),0x146);
  }
  FUN_0064cc50(*(undefined8 *)(param_1 + 0x7b8),0x46);
  FUN_0064cb90(*(undefined8 *)(param_1 + 0x7b0),
               *(undefined4 *)(*(longlong *)(param_1 + 0x7a8) + 0x9c));
  FUN_0064cb90(*(undefined8 *)(param_1 + 0x7c0),
               (*(int *)(*(longlong *)(param_1 + 0x7a0) + 0x9c) -
               *(int *)(*(longlong *)(param_1 + 0x7b8) + 0x9c)) + -4);
  local_24 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x7a8) + 0x4a0) + 0x28))();
  local_c = 0;
  if (-1 < local_24 + -1) {
    do {
      FUN_0068bca0(*(undefined8 *)(param_1 + 0x7a8),local_c);
      local_c = local_c + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  return;
}

