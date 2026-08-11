/* Ghidra address: 0197f180 */
/* Ghidra symbol: FUN_0197f180 */


void FUN_0197f180(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_0197e8b0();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar1 = FUN_0197eaa0(param_1,iVar3);
      FUN_0197f350(uVar1,param_2);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

