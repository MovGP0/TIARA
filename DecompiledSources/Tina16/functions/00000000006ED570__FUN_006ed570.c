/* Ghidra address: 006ed570 */
/* Ghidra symbol: FUN_006ed570 */


void FUN_006ed570(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_38 [32];
  
  iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004b2070(*(undefined8 *)(param_1 + 8),iVar2);
      if (*(int *)(lVar1 + 0x38) < 0) break;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_004b1830(param_1,iVar2 != *(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x10));
  FUN_006ed430(auStack_38);
  return;
}

