/* Ghidra address: 018acbf0 */
/* Ghidra symbol: FUN_018acbf0 */


void FUN_018acbf0(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                 undefined1 param_5,undefined8 param_6)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  FUN_00414610(param_6);
  FUN_018acaa0(param_1);
  (**(code **)(*param_1 + 0x298))(param_1);
  if (param_4 == 0) {
    plVar2 = (longlong *)FUN_006d6380(param_1[0xad]);
    (**(code **)(*plVar2 + 0x80))(plVar2,param_3,param_2);
  }
  else {
    plVar2 = (longlong *)FUN_006d6380(param_1[0xad]);
    (**(code **)(*plVar2 + 0x80))(plVar2,param_4,param_2);
  }
  local_38 = param_5;
  FUN_018b08b0(param_1[0xaf],param_2,param_6,param_3);
  plVar2 = (longlong *)FUN_006d6380(param_1[0xad]);
  iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
  FUN_018a97f0(param_1,1 < iVar1);
  plVar2 = (longlong *)param_1[0xad];
  plVar3 = (longlong *)FUN_006d6380(plVar2);
  iVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
  (**(code **)(*plVar2 + 0x278))(plVar2,iVar1 + -1);
  FUN_018ad060(param_1,0);
  (**(code **)(*param_1 + 0x2a0))(param_1,1);
  FUN_00414480(&param_6);
  return;
}

