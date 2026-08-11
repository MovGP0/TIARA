/* Ghidra address: 010b10b0 */
/* Ghidra symbol: FUN_010b10b0 */


void FUN_010b10b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_2 + 0x18) + 0x10);
  if ((iVar4 == *(int *)(*(longlong *)(param_1 + 0x18) + 0x10)) && (iVar3 = 0, -1 < iVar4 + -1)) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x18),iVar3);
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar3);
      if (0 < *(int *)(*(longlong *)(lVar1 + 0x40) + 0x10)) {
        FUN_010afb50(uVar2,lVar1);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

