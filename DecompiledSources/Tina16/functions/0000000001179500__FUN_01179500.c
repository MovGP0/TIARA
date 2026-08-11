/* Ghidra address: 01179500 */
/* Ghidra symbol: FUN_01179500 */


void FUN_01179500(longlong param_1)

{
  if ((*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x4c) ||
     (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x48)) {
    FUN_0064cc50(*(undefined8 *)(param_1 + 0x848),0x162);
  }
  else {
    FUN_0064cc50(*(undefined8 *)(param_1 + 0x848),0x146);
  }
  FUN_0064cc50(*(undefined8 *)(param_1 + 0x840),0x46);
  FUN_0064cb90(*(undefined8 *)(param_1 + 0x7b0),
               *(undefined4 *)(*(longlong *)(param_1 + 0x848) + 0x9c));
  FUN_0064cb90(*(undefined8 *)(param_1 + 0x7c0),
               (*(int *)(*(longlong *)(param_1 + 0x7a0) + 0x9c) -
               *(int *)(*(longlong *)(param_1 + 0x840) + 0x9c)) + -4);
  return;
}

