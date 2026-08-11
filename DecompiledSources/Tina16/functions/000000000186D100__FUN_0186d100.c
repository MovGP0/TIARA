/* Ghidra address: 0186d100 */
/* Ghidra symbol: FUN_0186d100 */


void FUN_0186d100(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                 undefined1 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined8 local_88;
  undefined1 *local_80;
  longlong local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  undefined8 local_48;
  longlong local_40;
  int local_34;
  undefined8 local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_80 = auStack_b8;
  local_88 = 0;
  local_48 = 0;
  if (((*(longlong *)(param_3 + 0x27) == 0) || (*(int *)(*(longlong *)(param_3 + 0x27) + 0x10) < 2))
     || (*(longlong *)(param_3 + 0x1f) == 0)) {
    local_98 = param_5;
    local_80 = auStack_b8;
    FUN_0197bf90(param_1,param_2,param_3,param_4);
  }
  else {
    local_30 = *(undefined8 *)(param_3 + 0x27);
    local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_004b67b0(local_28,1);
    local_20 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
    FUN_0186dc80(param_1,*(undefined8 *)(param_3 + 0x27),local_28);
    local_40 = (**(code **)(*local_28 + 0x30))(local_28,0);
    local_70 = FUN_0197c280(*(undefined8 *)(param_3 + 0x1f),local_40);
    *(undefined8 *)(param_3 + 0x27) = 0;
    local_50 = (double)FUN_01950860(local_40);
    local_58 = (double)FUN_019508b0(local_40);
    local_60 = local_50 + *(double *)(local_40 + 0xb0);
    local_68 = local_58 + *(double *)(local_40 + 0xa8);
    if (local_70 != 0) {
      local_98 = 1;
      FUN_0197d770(local_70,local_40,param_3,local_20);
    }
    iVar1 = (**(code **)(*local_28 + 0x28))(local_28);
    iVar1 = iVar1 + -1;
    local_34 = 1;
    if (0 < iVar1) {
      do {
        local_40 = (**(code **)(*local_28 + 0x30))(local_28,local_34);
        uVar3 = (**(code **)(*local_28 + 0x30))(local_28,local_34 + -1);
        lVar4 = FUN_00410ad0(uVar3);
        lVar5 = FUN_00410ad0(local_40);
        if (lVar4 != lVar5) {
          local_70 = FUN_0197c280(*(undefined8 *)(param_3 + 0x1f),local_40);
        }
        dVar6 = (double)FUN_01950860(local_40);
        if ((dVar6 < local_50) ||
           (dVar6 = (double)FUN_01950860(local_40), local_60 - 0.0001 <= dVar6)) {
          local_50 = (double)FUN_01950860(local_40);
          local_58 = (double)FUN_019508b0(local_40);
          local_60 = local_50 + *(double *)(local_40 + 0xb0);
          local_68 = local_58 + *(double *)(local_40 + 0xa8);
          uVar3 = FUN_00415f70(&DAT_0186d5fc);
          (**(code **)(*local_20 + 0x20))(local_20,uVar3,4);
        }
        dVar6 = (double)FUN_019508b0(local_40);
        if ((dVar6 < local_58) || (dVar6 = (double)FUN_019508b0(local_40), local_68 <= dVar6)) {
          local_58 = (double)FUN_019508b0(local_40);
          local_68 = local_58 + *(double *)(local_40 + 0xa8);
          uVar3 = FUN_00415f70(&LAB_0186d608);
          (**(code **)(*local_20 + 0x20))(local_20,uVar3,2);
        }
        if (local_70 != 0) {
          local_98 = 1;
          FUN_0197d770(local_70,local_40,param_3,local_20);
        }
        local_34 = local_34 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_004b6dc0(local_20,0);
    lVar4 = (**(code **)*local_20)(local_20);
    FUN_00416660(&local_48,lVar4 / 2);
    uVar3 = FUN_00415f70(local_48);
    uVar2 = (**(code **)*local_20)(local_20);
    (**(code **)(*local_20 + 0x18))(local_20,uVar3,uVar2);
    uVar3 = FUN_006a6030();
    FUN_004168b0(&local_88,local_48);
    FUN_006a58e0(uVar3,local_88);
    FUN_00410f20(local_20);
    FUN_00410f20(local_28);
    *(undefined8 *)(param_3 + 0x27) = local_30;
  }
  FUN_00414480(&local_88);
  FUN_00414520(&local_48);
  return;
}

