/* Ghidra address: 00d77fd0 */
/* Ghidra symbol: FUN_00d77fd0 */


void FUN_00d77fd0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  *(longlong *)(param_1 + 0xa0) = param_2;
  if (param_2 != 0) {
    FUN_00d77ec0(param_1,*(undefined1 *)(param_2 + 0xb1));
  }
  iVar1 = FUN_00d77c90(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_00d77c90();
    iVar3 = 0;
    if (-1 < iVar1 + -1) {
      do {
        uVar2 = FUN_00d77ca0(param_1,iVar3);
        FUN_00d77fd0(uVar2,param_2);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}

