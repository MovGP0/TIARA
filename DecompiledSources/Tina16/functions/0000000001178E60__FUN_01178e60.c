/* Ghidra address: 01178e60 */
/* Ghidra symbol: FUN_01178e60 */


void FUN_01178e60(longlong param_1)

{
  FUN_0064cc50(*(undefined8 *)(param_1 + 0x7a8),0x62);
  if ((*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x4c) ||
     (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x48)) {
    FUN_0064cc50(*(undefined8 *)(param_1 + 0x7b8),0x146);
  }
  else {
    FUN_0064cc50(*(undefined8 *)(param_1 + 0x7b8),0x12a);
  }
  FUN_0064cb90(*(undefined8 *)(param_1 + 0x7b0),
               *(undefined4 *)(*(longlong *)(param_1 + 0x7a8) + 0x9c));
  FUN_0064cb90(*(undefined8 *)(param_1 + 0x7c0),
               (*(int *)(*(longlong *)(param_1 + 0x7a0) + 0x9c) -
               *(int *)(*(longlong *)(param_1 + 0x7b8) + 0x9c)) + -4);
  return;
}

