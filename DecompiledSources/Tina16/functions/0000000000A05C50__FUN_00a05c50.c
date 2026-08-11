/* Ghidra address: 00a05c50 */
/* Ghidra symbol: FUN_00a05c50 */


void FUN_00a05c50(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x48);
  iVar2 = 0;
  do {
    *(undefined4 *)((longlong)plVar1 + (longlong)iVar2 * 4 + 0x10) = 0;
    *(undefined4 *)((longlong)plVar1 + (longlong)iVar2 * 4 + 0x4010) = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x1000);
  *(int *)(plVar1 + 0x1204) = *(int *)(*plVar1 + 0x20) + 1;
  iVar2 = 1 << (*(byte *)(*plVar1 + 0x20) & 0x1f);
  *(int *)((longlong)plVar1 + 0x9014) = iVar2;
  *(int *)(plVar1 + 0x1203) = iVar2 + 1;
  *(int *)((longlong)plVar1 + 0x901c) = *(int *)((longlong)plVar1 + 0x9014) + -1;
  iVar2 = (1 << ((char)(int)plVar1[0x1204] - 1U & 0x1f)) + 2;
  *(int *)((longlong)plVar1 + 0x9044) = iVar2;
  *(int *)(plVar1 + 0x1209) = iVar2;
  *(undefined1 *)((longlong)plVar1 + 0x9034) = 0;
  return;
}

