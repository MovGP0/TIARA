/* Ghidra address: 018ab5d0 */
/* Ghidra symbol: FUN_018ab5d0 */


void FUN_018ab5d0(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_38;
  longlong local_30;
  int local_24;
  int local_20;
  undefined4 local_1c;
  
  local_40 = auStack_68;
  lVar3 = (**(code **)(*param_1 + 0x268))(param_1);
  if (lVar3 == 0) {
    return;
  }
  local_1c = *(undefined4 *)(param_1[0xaa] + 0x4a0);
  local_20 = *(int *)(param_1[0xaa] + 0x4b4);
  local_24 = (int)param_1[0xa5];
  lVar3 = (**(code **)(*param_1 + 0x278))(param_1);
  if (lVar3 != 0) {
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x278))(param_1);
    (**(code **)(*plVar4 + 0x88))(plVar4);
  }
  (**(code **)(*param_1 + 0x298))(param_1);
  *(undefined1 *)(param_1 + 0xa6) = 1;
  local_30 = param_1[0xab];
  iVar1 = FUN_004b2060(param_1[0xaf]);
  if ((iVar1 < 2) || (iVar1 = FUN_006d5120(param_1[0xad]), iVar1 < 1)) {
LAB_018ab85c:
    uVar5 = (**(code **)(*param_1 + 0x268))(param_1);
    FUN_01976270(uVar5,1);
  }
  else {
    uVar2 = FUN_006d5120(param_1[0xad]);
    lVar3 = FUN_018b0ad0(param_1[0xaf],uVar2);
    if (*(longlong *)(lVar3 + 0x40) == 0) goto LAB_018ab85c;
    uVar2 = FUN_006d5120(param_1[0xad]);
    lVar3 = FUN_018b0ad0(param_1[0xaf],uVar2);
    (**(code **)(**(longlong **)(lVar3 + 0x38) + 0x28))(*(longlong **)(lVar3 + 0x38));
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x268))(param_1);
    uVar5 = (**(code **)(*plVar4 + 0x118))(plVar4);
    uVar2 = FUN_006d5120(param_1[0xad]);
    lVar3 = FUN_018b0ad0(param_1[0xaf],uVar2);
    FUN_01977ff0(uVar5,*(undefined8 *)(lVar3 + 0x38));
    lVar3 = (**(code **)(*param_1 + 0x268))(param_1);
    uVar2 = FUN_006d5120(param_1[0xad]);
    lVar6 = FUN_018b0ad0(param_1[0xaf],uVar2);
    FUN_019789b0(*(undefined8 *)(lVar3 + 0x1a0),*(undefined8 *)(lVar6 + 0x38));
    lVar3 = (**(code **)(*param_1 + 0x268))(param_1);
    uVar5 = (**(code **)(*param_1 + 0x268))(param_1);
    lVar6 = FUN_0196f540(uVar5);
    *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(lVar3 + 0x1a0);
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x268))(param_1);
    uVar2 = FUN_006d5120(param_1[0xad]);
    lVar3 = FUN_018b0ad0(param_1[0xaf],uVar2);
    uVar5 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(lVar3 + 0x40));
    local_38 = FUN_004113f0(uVar5,&PTR_FUN_019342a8);
    if (local_38 != 0) {
      uVar5 = (**(code **)(*param_1 + 0x268))(param_1);
      FUN_01977d90(uVar5,local_38);
    }
  }
  param_1[0xab] = local_30;
  FUN_018a7200(param_1[0xa8],0);
  iVar1 = FUN_018a9b40(param_1);
  if (iVar1 < local_24) {
    uVar2 = FUN_018a9b40(param_1);
    FUN_018a9020(param_1,uVar2);
  }
  else {
    FUN_018a9020(param_1,local_24);
  }
  FUN_018aba70(param_1);
  FUN_018abf10(param_1);
  (**(code **)(*param_1 + 0x2a0))(param_1,1);
  *(undefined1 *)(param_1 + 0xa6) = 0;
  FUN_018932d0(param_1[0xaa],local_1c);
  if ((int)param_1[0xa5] == 1) {
    plVar4 = (longlong *)FUN_018a73a0(param_1[0xaa]);
    lVar3 = (**(code **)(*plVar4 + 8))(plVar4,0);
    if (*(double *)(lVar3 + 0x228) <= (double)local_20 &&
        (double)local_20 != *(double *)(lVar3 + 0x228)) {
      FUN_018933f0(param_1[0xaa],0);
      goto LAB_018ab96a;
    }
  }
  FUN_018933f0(param_1[0xaa],local_20);
LAB_018ab96a:
  FUN_018933f0(param_1[0xaa],local_20);
  FUN_018a7200(param_1[0xaa],0);
  (**(code **)(*(longlong *)param_1[0xaa] + 0x188))((longlong *)param_1[0xaa]);
  (**(code **)(*(longlong *)param_1[0xa8] + 0x188))((longlong *)param_1[0xa8]);
  iVar1 = FUN_018a9b40(param_1);
  if (iVar1 < local_24) {
    uVar2 = FUN_018a9b40(param_1);
    FUN_018a9020(param_1,uVar2);
  }
  return;
}

