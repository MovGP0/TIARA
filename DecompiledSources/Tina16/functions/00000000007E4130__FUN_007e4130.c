/* Ghidra address: 007e4130 */
/* Ghidra symbol: FUN_007e4130 */


void FUN_007e4130(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = FUN_007e2ef0(param_1);
  iVar2 = iVar2 + -1;
  if (-1 < iVar2) {
    do {
      uVar1 = FUN_007e2f10(param_1,iVar2);
      FUN_00410f20(uVar1);
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  return;
}

