/* Ghidra address: 00c5a400 */
/* Ghidra symbol: FUN_00c5a400 */


void FUN_00c5a400(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_00682010(param_1);
  uVar1 = FUN_00c5a450(param_1);
  iVar2 = FUN_00c5a530(param_1,uVar1);
  iVar3 = FUN_00c5a450(param_1);
  if (iVar2 != iVar3) {
    uVar1 = FUN_00c5a450(param_1);
    FUN_00c5a4c0(param_1,uVar1);
  }
  return;
}

