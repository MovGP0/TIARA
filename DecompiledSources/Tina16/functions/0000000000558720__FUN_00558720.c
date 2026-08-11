/* Ghidra address: 00558720 */
/* Ghidra symbol: FUN_00558720 */


undefined8 FUN_00558720(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = (**(code **)(*param_1 + 0x20))(param_1);
  if (lVar2 == 0) {
    uVar3 = FUN_00534b60();
    FUN_004134c0(uVar3);
  }
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  uVar3 = FUN_005466a0(lVar2);
  uVar4 = FUN_00417740(param_2,&DAT_00527bf8);
  FUN_00538080(param_3 + iVar1,uVar3,uVar4);
  return param_2;
}

