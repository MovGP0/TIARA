/* Ghidra address: 0183d140 */
/* Ghidra symbol: FUN_0183d140 */


void FUN_0183d140(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_0181e3e0();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar1 = FUN_0181e3c0(param_2,iVar3);
      FUN_0183d1c0(param_1,uVar1,param_3,param_4);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

