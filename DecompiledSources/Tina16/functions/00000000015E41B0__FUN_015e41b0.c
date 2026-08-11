/* Ghidra address: 015e41b0 */
/* Ghidra symbol: FUN_015e41b0 */


longlong FUN_015e41b0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 local_54 [64];
  int local_14;
  longlong local_10;
  
  if (*(short *)(param_1 + 0x1c0) == 1) {
    local_10 = 0;
  }
  else {
    FUN_015948e0(param_1 + 0x18,local_54);
    uVar1 = FUN_004095c0((longlong)*(int *)(param_1 + 0x1c4));
    *(undefined8 *)(param_1 + 0x1b0) = uVar1;
    local_10 = FUN_004095c0((longlong)*(int *)(param_1 + 0x1c4));
    iVar2 = *(int *)(param_1 + 0x1c4);
    local_14 = 0;
    if (-1 < iVar2 + -1) {
      do {
        *(undefined1 *)(*(longlong *)(param_1 + 0x1b0) + (longlong)local_14) = local_54[local_14];
        *(undefined1 *)(local_10 + local_14) = local_54[local_14];
        local_14 = local_14 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return local_10;
}

