/* Ghidra address: 00c27910 */
/* Ghidra symbol: FUN_00c27910 */


void FUN_00c27910(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 < 1) {
    *(int *)(param_1 + 0x48) = param_2;
  }
  else {
    *(uint *)(param_1 + 0x48) =
         *(uint *)(param_1 + 0x48) & *(uint *)(&DAT_01ea0838 + (longlong)iVar1 * 4) |
         param_2 << ((byte)iVar1 & 0x1f);
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  while (7 < *(int *)(param_1 + 0x4c)) {
    FUN_00c25db0(*(undefined8 *)(param_1 + 0x40),*(undefined1 *)(param_1 + 0x48));
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) >> 8;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -8;
  }
  if (param_2 == *(short *)(param_1 + 0x60)) {
    while (0 < *(int *)(param_1 + 0x4c)) {
      FUN_00c25db0(*(undefined8 *)(param_1 + 0x40),*(undefined1 *)(param_1 + 0x48));
      *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) >> 8;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -8;
    }
  }
  return;
}

