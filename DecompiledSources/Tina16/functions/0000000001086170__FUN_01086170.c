/* Ghidra address: 01086170 */
/* Ghidra symbol: FUN_01086170 */


undefined8 FUN_01086170(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x7d8);
  iVar2 = FUN_006d5120(uVar1);
  if (iVar2 < 0) {
    FUN_00414480(param_2);
  }
  else {
    plVar4 = (longlong *)FUN_006d6380(uVar1);
    uVar3 = FUN_006d5120(uVar1);
    (**(code **)(*plVar4 + 0x18))(plVar4,param_2,uVar3);
  }
  return param_2;
}

