/* Ghidra address: 008443c0 */
/* Ghidra symbol: FUN_008443c0 */


int FUN_008443c0(longlong param_1)

{
  undefined1 local_88 [16];
  int local_78;
  int local_40;
  
  FUN_00841d10(*(undefined8 *)(param_1 + 0xd0),local_88);
  if (*(int *)(param_1 + 0xd8) == 0) {
    local_78 = local_78 - *(int *)(*(longlong *)(param_1 + 0xd0) + 0x4e8);
  }
  else {
    local_78 = local_40 - *(int *)(*(longlong *)(param_1 + 0xd0) + 0x4ec);
  }
  if (local_78 < 1) {
    local_78 = 1;
  }
  return local_78;
}

