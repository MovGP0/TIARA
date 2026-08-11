/* Ghidra address: 006f9440 */
/* Ghidra symbol: FUN_006f9440 */


void FUN_006f9440(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  plVar4 = (longlong *)FUN_00777cd0();
  cVar1 = (**(code **)(*plVar4 + 0x98))(plVar4);
  if (cVar1 == '\0') {
    FUN_00658310(param_1,param_2);
  }
  else {
    uVar5 = FUN_0065b870(param_1);
    iVar2 = thunk_FUN_04119211(uVar5,1);
    FUN_00658310(param_1,param_2);
    uVar5 = FUN_0065b870(param_1);
    iVar3 = thunk_FUN_04119211(uVar5,1);
    if (iVar2 != iVar3) {
      uVar5 = FUN_0065b870(param_1);
      thunk_FUN_03a2fc9d(uVar5,0,0xffffffff);
    }
  }
  return;
}

