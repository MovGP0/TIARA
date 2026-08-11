/* Ghidra address: 00af25c0 */
/* Ghidra symbol: FUN_00af25c0 */


void FUN_00af25c0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  FUN_006586f0(param_1);
  if ((*(ushort *)(param_1 + 0x8a0) & 4) == 0) {
    cVar2 = FUN_00af2f30(param_1);
    if (cVar2 == '\0') {
      FUN_00af2940(param_1);
    }
    else {
      FUN_00af1c20(param_1);
    }
    FUN_00af26c0(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x758) + 0x494));
    lVar1 = *(longlong *)(param_1 + 0x750);
    iVar4 = *(int *)(lVar1 + 0x49c) - *(int *)(*(longlong *)(param_1 + 0x740) + 0x98);
    iVar3 = *(int *)(lVar1 + 0x494);
    if (iVar4 <= *(int *)(lVar1 + 0x494)) {
      iVar3 = iVar4;
    }
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    FUN_0068e980(lVar1,iVar3);
  }
  return;
}

