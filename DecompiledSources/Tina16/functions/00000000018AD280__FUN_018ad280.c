/* Ghidra address: 018ad280 */
/* Ghidra symbol: FUN_018ad280 */


void FUN_018ad280(longlong *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  if (param_2 == 0) {
    local_20 = auStack_48;
    (**(code **)(*(longlong *)param_1[0xad] + 0x278))((longlong *)param_1[0xad],1);
  }
  else {
    (**(code **)(*(longlong *)param_1[0xad] + 0x278))((longlong *)param_1[0xad],param_2 + -1);
  }
  (**(code **)(*param_1 + 0x298))(param_1);
  plVar3 = (longlong *)FUN_006d6380(param_1[0xad]);
  (**(code **)(*plVar3 + 0x98))(plVar3,param_2);
  FUN_018b09c0(param_1[0xaf],param_2);
  iVar1 = FUN_006d5120(param_1[0xad]);
  if (-1 < iVar1) {
    *(undefined1 *)((longlong)param_1 + 0x571) = 1;
    uVar2 = FUN_006d5120(param_1[0xad]);
    lVar4 = FUN_018b0ad0(param_1[0xaf],uVar2);
    FUN_01977650(*(undefined8 *)(lVar4 + 0x30),param_1);
    *(undefined1 *)((longlong)param_1 + 0x571) = 0;
    uVar2 = FUN_006d5120(param_1[0xad]);
    lVar4 = param_1[0xaf];
    *(undefined4 *)(lVar4 + 0x40) = uVar2;
    uVar2 = FUN_006d5120(param_1[0xad]);
    FUN_018b0ae0(lVar4,uVar2);
  }
  (**(code **)(*param_1 + 0x2a0))(param_1,1);
  plVar3 = (longlong *)FUN_006d6380(param_1[0xad]);
  iVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
  FUN_018a97f0(param_1,1 < iVar1);
  iVar1 = FUN_004b2060(param_1[0xaf]);
  if (iVar1 == 0) {
    FUN_018a9ac0(param_1);
    *(undefined1 *)(param_1 + 0xae) = 0;
    (**(code **)(*param_1 + 0x188))(param_1);
  }
  return;
}

