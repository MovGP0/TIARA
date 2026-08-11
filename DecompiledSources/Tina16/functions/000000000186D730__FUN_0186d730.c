/* Ghidra address: 0186d730 */
/* Ghidra symbol: FUN_0186d730 */


void FUN_0186d730(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                 undefined1 param_5)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 *local_90;
  char local_82;
  byte local_81;
  longlong local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  longlong local_58;
  int local_4c;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  int local_30;
  int local_2c;
  undefined8 local_28;
  undefined4 local_1c;
  
  local_90 = auStack_c8;
  local_28 = 0;
  if ((*(longlong *)(param_3 + 0x27) == 0) || (*(int *)(*(longlong *)(param_3 + 0x27) + 0x10) < 2))
  {
    local_a8 = param_5;
    local_90 = auStack_c8;
    FUN_0197c070(param_1,param_2,param_3,param_4);
  }
  else {
    local_48 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
    local_40 = *(undefined8 *)(param_3 + 0x27);
    local_38 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_0186dc80(param_1,*(undefined8 *)(param_3 + 0x27),local_38);
    *(undefined8 *)(param_3 + 0x27) = 0;
    local_82 = '\x01';
    uVar3 = FUN_006a6030();
    FUN_006a5810(uVar3,&local_28);
    local_58 = (**(code **)(*local_38 + 0x30))(local_38,0);
    local_60 = (double)FUN_01950860(local_58);
    local_68 = (double)FUN_019508b0(local_58);
    local_70 = local_60 + *(double *)(local_58 + 0xb0);
    local_78 = local_68 + *(double *)(local_58 + 0xa8);
    local_80 = FUN_0197c280(*(undefined8 *)(param_3 + 0x1f),local_58);
    local_1c = 1;
    local_30 = 1;
    local_2c = 1;
    local_81 = FUN_0186d610(auStack_c8,0);
    if (local_82 != '\0') {
      uVar3 = FUN_00415ab0(&DAT_0186dc78);
      (**(code **)(*local_48 + 0x20))(local_48,uVar3,2);
    }
    lVar4 = FUN_00414de0(&local_28);
    (**(code **)(*local_48 + 0x20))(local_48,lVar4 + -2 + (longlong)local_2c * 2,local_30 * 2);
    if (local_80 != 0) {
      local_a8 = 1;
      FUN_0197e380(local_80,local_58,param_3,local_48);
    }
    FUN_004b6e40(local_48,0);
    iVar2 = (**(code **)(*local_38 + 0x28))(local_38);
    iVar2 = iVar2 + -1;
    local_4c = 1;
    if (0 < iVar2) {
      do {
        local_58 = (**(code **)(*local_38 + 0x30))(local_38,local_4c);
        uVar3 = (**(code **)(*local_38 + 0x30))(local_38,local_4c + -1);
        lVar4 = FUN_00410ad0(uVar3);
        lVar5 = FUN_00410ad0(local_58);
        if (lVar4 != lVar5) {
          local_80 = FUN_0197c280(*(undefined8 *)(param_3 + 0x1f),local_58);
        }
        local_30 = 0;
        dVar6 = (double)FUN_01950860(local_58);
        if ((dVar6 < local_60) || (dVar6 = (double)FUN_01950860(local_58), local_70 <= dVar6)) {
          local_60 = (double)FUN_01950860(local_58);
          local_68 = (double)FUN_019508b0(local_58);
          local_70 = local_60 + *(double *)(local_58 + 0xb0);
          local_78 = local_68 + *(double *)(local_58 + 0xa8);
          if (local_81 != 0) {
            FUN_0186d610(auStack_c8,local_81);
          }
          local_81 = FUN_0186d610(auStack_c8,0);
        }
        else {
          dVar6 = (double)FUN_019508b0(local_58);
          if ((dVar6 < local_68) || (dVar6 = (double)FUN_019508b0(local_58), local_78 <= dVar6)) {
            bVar1 = 1;
          }
          else {
            bVar1 = 0;
          }
          if ((local_81 & bVar1) != 0) {
            local_68 = (double)FUN_019508b0(local_58);
            local_78 = local_68 + *(double *)(local_58 + 0xa8);
            local_81 = FUN_0186d610(auStack_c8,0);
          }
        }
        if ((local_80 != 0) && (0 < local_30)) {
          if (local_82 != '\0') {
            uVar3 = FUN_00415ab0(&DAT_0186dc78);
            (**(code **)(*local_48 + 0x20))(local_48,uVar3,2);
          }
          lVar4 = FUN_00414de0(&local_28);
          (**(code **)(*local_48 + 0x20))(local_48,lVar4 + -2 + (longlong)local_2c * 2,local_30 * 2)
          ;
          local_a8 = 1;
          FUN_0197e380(local_80,local_58,param_3,local_48);
          FUN_004b6e40(local_48,0);
        }
        local_4c = local_4c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00410f20(local_38);
    *(undefined8 *)(param_3 + 0x27) = local_40;
    FUN_00410f20(local_48);
  }
  FUN_00414480(&local_28);
  return;
}

