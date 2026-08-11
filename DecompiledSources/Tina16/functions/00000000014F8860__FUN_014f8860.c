/* Ghidra address: 014f8860 */
/* Ghidra symbol: FUN_014f8860 */


void FUN_014f8860(longlong param_1)

{
  int iVar1;
  
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0x10) = iVar1;
  if (0x32 < iVar1) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
    FUN_00448ea0();
    FUN_00448ad0();
    if (*(ushort *)(param_1 + 0x28) <=
        (ushort)((*(short *)(param_1 + 0x1a) - *(short *)(param_1 + 0x22)) * 1000 +
                (*(short *)(param_1 + 0x1c) - *(short *)(param_1 + 0x24)))) {
      *(undefined1 *)(param_1 + 0x14) = 1;
    }
  }
  return;
}

