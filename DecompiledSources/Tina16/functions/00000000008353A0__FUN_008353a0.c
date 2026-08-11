/* Ghidra address: 008353a0 */
/* Ghidra symbol: FUN_008353a0 */


void FUN_008353a0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  
  cVar3 = FUN_008355d0(param_1);
  if (cVar3 == '\0') {
    (**(code **)(*param_1 + -0x38))(param_1,param_2);
  }
  else {
    FUN_006809e0(param_1);
    FUN_008364a0(param_1,0x2e);
    cVar3 = FUN_0065be20(param_1);
    if (cVar3 != '\0') {
      uVar1 = FUN_0065b870(param_1);
      uVar1 = thunk_FUN_03de17fb(uVar1);
      uVar2 = FUN_0065b870(param_1);
      uVar4 = thunk_FUN_04133d57(uVar2);
      uVar2 = FUN_0065b870(param_1);
      thunk_FUN_041b2403(uVar1,0x111,uVar4 & 0xffff | 0x3000000,uVar2);
    }
  }
  return;
}

