/* Ghidra address: 006d6f90 */
/* Ghidra symbol: FUN_006d6f90 */


void FUN_006d6f90(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_006d7630();
  iVar4 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_006d7610(param_1,iVar4);
      lVar2 = FUN_006d7610(param_1,iVar4);
      FUN_006d6a80(uVar1,*(undefined1 *)(lVar2 + 0x4a2));
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

