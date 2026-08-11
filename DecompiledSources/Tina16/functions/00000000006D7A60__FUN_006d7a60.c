/* Ghidra address: 006d7a60 */
/* Ghidra symbol: FUN_006d7a60 */


void FUN_006d7a60(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_006d5120(param_1);
  if (iVar1 < 0) {
    FUN_006d78a0(param_1,0);
  }
  else {
    plVar3 = (longlong *)FUN_006d6380(param_1);
    uVar2 = FUN_006d5120(param_1);
    uVar4 = (**(code **)(*plVar3 + 0x30))(plVar3,uVar2);
    FUN_006d78a0(param_1,uVar4);
  }
  return;
}

