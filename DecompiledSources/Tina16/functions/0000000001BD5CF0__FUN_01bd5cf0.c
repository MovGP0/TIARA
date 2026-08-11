/* Ghidra address: 01bd5cf0 */
/* Ghidra symbol: FUN_01bd5cf0 */


void FUN_01bd5cf0(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00654c00();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar1 = FUN_00654bc0(param_1,iVar3);
      FUN_0064cfb0(uVar1,param_1);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_01c01a70(param_1);
  return;
}

