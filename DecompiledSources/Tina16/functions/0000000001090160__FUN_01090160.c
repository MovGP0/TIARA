/* Ghidra address: 01090160 */
/* Ghidra symbol: FUN_01090160 */


void FUN_01090160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_004ae7e0(param_3,param_2);
  iVar2 = FUN_006dd8c0();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar1 = FUN_006dd770(param_2,iVar3);
      FUN_01090160(param_1,uVar1,param_3);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

