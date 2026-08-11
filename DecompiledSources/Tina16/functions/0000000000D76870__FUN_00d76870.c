/* Ghidra address: 00d76870 */
/* Ghidra symbol: FUN_00d76870 */


void FUN_00d76870(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_00d75ef0(param_1);
  iVar2 = FUN_00d77c90(param_1);
  if (0 < iVar2) {
    iVar2 = FUN_00d77c90();
    iVar3 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar1 = FUN_00d77ca0(param_1,iVar3);
        FUN_00d76870(uVar1);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

