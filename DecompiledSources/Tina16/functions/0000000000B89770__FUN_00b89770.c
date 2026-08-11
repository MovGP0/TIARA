/* Ghidra address: 00b89770 */
/* Ghidra symbol: FUN_00b89770 */


void FUN_00b89770(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_00b896a0(param_1,param_2);
  iVar2 = FUN_007e2ef0();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar1 = FUN_007e2f10(param_2,iVar3);
      FUN_00b89770(param_1,uVar1);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

