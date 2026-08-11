/* Ghidra address: 005bbfb0 */
/* Ghidra symbol: FUN_005bbfb0 */


undefined8 FUN_005bbfb0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_005bbae0();
  iVar2 = FUN_005bbae0(param_2);
  if (iVar1 == iVar2) {
    uVar3 = 0;
  }
  else if (iVar1 < iVar2) {
    uVar3 = 0xff;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

