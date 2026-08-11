/* Ghidra address: 0185f130 */
/* Ghidra symbol: FUN_0185f130 */


void FUN_0185f130(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x48);
  iVar3 = (int)plVar1[0x1202] + -1;
  if (-1 < iVar3) {
    do {
      *(int *)((longlong)plVar1 + 0x904c) = *(int *)((longlong)plVar1 + 0x904c) + 1;
      iVar2 = *(int *)((longlong)plVar1 + 0x903c) * *(int *)(*plVar1 + 0xc) + (int)plVar1[0x1207];
      if ((-1 < iVar2) && (iVar2 < *(int *)(*plVar1 + 0x38))) {
        *(undefined1 *)(*(longlong *)(*plVar1 + 0x30) + (longlong)iVar2) =
             *(undefined1 *)((longlong)plVar1 + (longlong)iVar3 + 0x8010);
      }
      FUN_0185efc0(param_1);
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  *(undefined4 *)(plVar1 + 0x1202) = 0;
  return;
}

