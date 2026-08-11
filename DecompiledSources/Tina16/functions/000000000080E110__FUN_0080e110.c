/* Ghidra address: 0080e110 */
/* Ghidra symbol: FUN_0080e110 */


void FUN_0080e110(undefined8 param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00808090();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar1 = FUN_00808070(DAT_02012670,iVar3);
      FUN_0064fca0(uVar1,param_2,param_3,param_4);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

