/* Ghidra address: 00f2cd90 */
/* Ghidra symbol: FUN_00f2cd90 */


void FUN_00f2cd90(longlong param_1)

{
  longlong *plVar1;
  ushort *puVar2;
  bool bVar3;
  ushort *local_20;
  
  if ((**(short **)(param_1 + 8) == 0x2e) &&
     (*(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 2,
     *(ulonglong *)(param_1 + 0x10) <= *(ulonglong *)(param_1 + 8))) {
    *(undefined1 *)(param_1 + 0x28) = 4;
  }
  else {
    plVar1 = (longlong *)(param_1 + 8);
    while (((ushort *)*plVar1 < *(ushort **)(param_1 + 0x10) && (*(ushort *)*plVar1 < 0x21))) {
      *plVar1 = *plVar1 + 2;
    }
    for (puVar2 = *(ushort **)(param_1 + 8); local_20 = puVar2,
        puVar2 < *(ushort **)(param_1 + 0x10); puVar2 = puVar2 + 1) {
      if ((ushort)(*puVar2 - 0x28) < 0x40) {
        bVar3 = (1L << ((byte)(*puVar2 - 0x28) & 0x3f) & 0x8000000000040U) != 0;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) break;
    }
    do {
      local_20 = local_20 + -1;
      if (local_20 <= *(ushort **)(param_1 + 8)) break;
    } while (*local_20 < 0x21);
    FUN_00414740(param_1 + 0x20,*(longlong *)(param_1 + 8),
                 ((longlong)local_20 - *(longlong *)(param_1 + 8)) / 2 + 1U & 0xffffffff);
    *(ushort **)(param_1 + 8) = puVar2 + -1;
    if (*(longlong *)(param_1 + 0x20) == 0) {
      FUN_00f2cc20(param_1,PTR_PTR_02002d18);
    }
    else {
      *(undefined1 *)(param_1 + 0x28) = 1;
    }
  }
  return;
}

