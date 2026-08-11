/* Ghidra address: 00bff510 */
/* Ghidra symbol: FUN_00bff510 */


void FUN_00bff510(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  uVar3 = 0;
  if (lVar1 != 0) {
    uVar3 = *(undefined4 *)(lVar1 + -4);
  }
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  iVar4 = *(int *)(param_1 + 0x38);
  iVar5 = 0;
  if (lVar1 != 0) {
    iVar5 = *(int *)(lVar1 + -4);
  }
  if (iVar4 <= iVar5) {
    iVar5 = (iVar5 - iVar4) + 1;
    do {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x360))
                        (*(longlong **)(param_1 + 0x70),
                         *(undefined2 *)(*(longlong *)(param_1 + 0x48) + -2 + (longlong)iVar4 * 2));
      if (cVar2 == '\0') {
        *(int *)(param_1 + 0x40) = iVar4;
        break;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(undefined4 *)(param_1 + 0x30) = 1;
  iVar4 = *(int *)(param_1 + 0x38) + -1;
  if (0 < iVar4) {
    do {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x360))
                        (*(longlong **)(param_1 + 0x70),
                         *(undefined2 *)(*(longlong *)(param_1 + 0x48) + -2 + (longlong)iVar4 * 2));
      if (cVar2 == '\0') {
        *(int *)(param_1 + 0x30) = iVar4 + 1;
        return;
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

