/* Ghidra address: 007e50f0 */
/* Ghidra symbol: FUN_007e50f0 */


undefined4 FUN_007e50f0(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  iVar1 = FUN_007e2ef0(param_1);
  if (iVar1 == 0) {
    uVar3 = FUN_007e8bb0();
    FUN_007e34c0(param_1,uVar3);
  }
  else {
    iVar1 = FUN_007e2ef0(param_1);
    uVar3 = FUN_007e2f10(param_1,iVar1 + -1);
    uVar2 = FUN_007e4f50(param_1,0,uVar3);
  }
  return uVar2;
}

