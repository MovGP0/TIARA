/* Ghidra address: 01bfe260 */
/* Ghidra symbol: FUN_01bfe260 */


void FUN_01bfe260(longlong param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if ((param_2 <= *(uint *)(param_1 + 0x90)) && (iVar1 = FUN_004b1870(param_1), iVar1 != 0)) {
    uVar2 = FUN_01bfd960(param_1);
    iVar1 = FUN_004b1870(param_1);
    lVar3 = FUN_01bfb960(uVar2,iVar1 + -1);
    if (*(int *)(lVar3 + 0x90) != 0) {
      return;
    }
  }
  iVar1 = FUN_004b1870(param_1);
  iVar1 = iVar1 + 1;
  lVar3 = FUN_01bfd960(param_1);
  iVar6 = *(int *)(*(longlong *)(lVar3 + 0x10) + 0x10) + -1;
  if (iVar1 <= iVar6) {
    iVar6 = (iVar6 - iVar1) + 1;
    do {
      uVar2 = FUN_01bfd960(param_1);
      lVar3 = FUN_01bfb960(uVar2,iVar1);
      if (*(int *)(param_1 + 0x90) == *(int *)(lVar3 + 0x90)) {
        *(uint *)(lVar3 + 0x90) = param_2;
      }
      else {
        uVar4 = *(int *)(param_1 + 0x90) - *(int *)(lVar3 + 0x90);
        uVar5 = (int)uVar4 >> 0x1f;
        *(uint *)(lVar3 + 0x90) = param_2 + ((uVar4 ^ uVar5) - uVar5);
      }
      iVar1 = iVar1 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(uint *)(param_1 + 0x90) = param_2;
  return;
}

