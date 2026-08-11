/* Ghidra address: 00c5f7d0 */
/* Ghidra symbol: FUN_00c5f7d0 */


void FUN_00c5f7d0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      plVar2 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),iVar3);
      (**(code **)(*plVar2 + 0xa8))
                (plVar2,*(undefined8 *)
                         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x948) + 0x310));
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  FUN_00c5f0f0(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))(*(longlong **)(param_1 + 0x30));
  FUN_0064e770(*(undefined8 *)(lVar1 + 0x948));
  return;
}

