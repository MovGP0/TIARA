/* Ghidra address: 00a08ab0 */
/* Ghidra symbol: FUN_00a08ab0 */


void FUN_00a08ab0(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [36];
  int local_44;
  undefined1 *local_40;
  int local_38;
  int local_34;
  int local_2c;
  longlong local_28;
  longlong local_20;
  
  local_40 = auStack_68;
  local_28 = FUN_00a047c0(&DAT_00a03748,1);
  FUN_00a04c00(local_28,param_2);
  iVar2 = FUN_00a061b0(local_28);
  *(int *)(param_1 + 0x12) = iVar2;
  *(bool *)(param_1 + 0x10) = 1 < iVar2;
  uVar3 = FUN_00a04e10(local_28);
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  uVar3 = FUN_00a04e00(local_28);
  *(undefined4 *)(param_1 + 0x11) = uVar3;
  iVar2 = *(int *)(local_28 + 0x50);
  *(int *)((longlong)param_1 + 0x94) = iVar2;
  if (iVar2 < 0) {
    *(undefined4 *)((longlong)param_1 + 0x94) = 1;
  }
  else if (0 < iVar2) {
    *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + 1;
  }
  uVar1 = FUN_00a04e20(local_28);
  *(undefined1 *)(param_1 + 0x13) = uVar1;
  plVar4 = (longlong *)FUN_00a06950(local_28);
  param_1[0x16] = (longlong)plVar4;
  lVar5 = (**(code **)(*plVar4 + 0x50))(plVar4);
  if (lVar5 != 0) {
    uVar6 = FUN_0060c370(param_1[0x16]);
    thunk_FUN_0416f828(uVar6);
  }
  uVar6 = FUN_00608880(*(undefined8 *)PTR_DAT_020036e8);
  (**(code **)(*(longlong *)param_1[0x16] + 0x78))((longlong *)param_1[0x16],uVar6);
  local_44 = (int)param_1[0x12] + -1;
  local_2c = 0;
  iVar2 = (int)param_1[0x12];
  if (-1 < local_44) {
    do {
      local_44 = iVar2;
      local_20 = FUN_00a082e0(&DAT_00a077c0,1);
      uVar1 = FUN_00a062b0(local_28,local_2c);
      *(undefined1 *)(local_20 + 0x1c) = uVar1;
      uVar3 = FUN_00a06350(local_28,local_2c);
      *(undefined4 *)(local_20 + 8) = uVar3;
      uVar3 = FUN_00a06370(local_28,local_2c);
      *(undefined4 *)(local_20 + 0xc) = uVar3;
      uVar3 = FUN_00a06390(local_28,local_2c);
      *(undefined4 *)(local_20 + 0x10) = uVar3;
      uVar3 = FUN_00a063b0(local_28,local_2c);
      *(undefined4 *)(local_20 + 0x14) = uVar3;
      local_34 = FUN_00a06280(local_28,local_2c);
      local_34 = local_34 * 10;
      local_38 = local_34;
      if (local_34 < 0x1e) {
        local_38 = 0x1e;
      }
      *(int *)(local_20 + 0x18) = local_38;
      FUN_004ae7e0(param_1[0x17],local_20);
      local_2c = local_2c + 1;
      local_44 = local_44 + -1;
      iVar2 = local_44;
    } while (local_44 != 0);
  }
  if ((char)param_1[0x10] != '\0') {
    *(undefined1 *)((longlong)param_1 + 0xac) = 2;
  }
  FUN_00410f20(local_28);
  FUN_009ec900(param_1,param_1[0x16]);
  (**(code **)(*param_1 + 0x88))(param_1,*(undefined4 *)((longlong)param_1 + 0x84));
  (**(code **)(*param_1 + 0x80))(param_1,0);
  return;
}

