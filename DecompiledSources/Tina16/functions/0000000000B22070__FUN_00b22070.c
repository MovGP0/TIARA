/* Ghidra address: 00b22070 */
/* Ghidra symbol: FUN_00b22070 */


void FUN_00b22070(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = FUN_00b21fe0();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = FUN_00b21fc0(param_2,iVar4);
      uVar3 = FUN_00b21fc0(param_2,iVar4);
      FUN_00b21ff0(param_1,uVar2,uVar3 >> 0x10);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

