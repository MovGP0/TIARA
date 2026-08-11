/* Ghidra address: 0061d970 */
/* Ghidra symbol: FUN_0061d970 */


int FUN_0061d970(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar1 = FUN_00415ab0(param_2);
  uVar2 = FUN_00415ab0(param_1);
  lVar3 = FUN_0061dbb0(uVar1,uVar2);
  if (lVar3 != 0) {
    iVar4 = ((int)lVar3 - (int)uVar1) + 1;
  }
  return iVar4;
}

