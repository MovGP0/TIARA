/* Ghidra address: 0096c8b0 */
/* Ghidra symbol: FUN_0096c8b0 */


undefined1 FUN_0096c8b0(longlong *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  uint local_74;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_47;
  char local_46;
  char local_45;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_29;
  
  local_80 = auStack_d8;
  local_90 = 0;
  local_88 = 0;
  local_38 = 0;
  local_40 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  FUN_00947610(&local_38,param_1[0x11]);
  FUN_00414b90(param_1 + 0x11,local_38);
  iVar2 = FUN_00416420(param_1[0x11],0);
  if (iVar2 == 0) {
    local_29 = 0;
  }
  else {
    local_29 = 1;
    uVar3 = FUN_00414520(&local_50);
    uVar4 = FUN_00414520(&local_58);
    uVar5 = FUN_00414520(&local_68);
    local_a0 = FUN_00414520(&local_70);
    local_b8 = uVar3;
    local_b0 = uVar4;
    local_a8 = uVar5;
    local_46 = FUN_0096bbf0(param_1,param_1[0x11],&local_47,&local_48);
    FUN_00414b90(param_1 + 0x11,local_70);
    if (local_46 == '\0') {
      *(undefined1 *)(param_1 + 9) = 0x70;
    }
    else {
      if (param_1 == (longlong *)0x0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = param_1 + 0x13;
      }
      local_98 = FUN_0096fb60(&PTR_FUN_0091e960,1,0,plVar7);
      param_1[7] = local_98;
      lVar6 = FUN_004113f0(local_98,&PTR_FUN_0091e960);
      FUN_00414b90(lVar6 + 0x88,local_50);
      lVar6 = FUN_004113f0(param_1[7],&PTR_FUN_0091e960);
      *(undefined1 *)(lVar6 + 0x90) = local_47;
      lVar6 = FUN_004113f0(param_1[7],&PTR_FUN_0091e960);
      *(undefined1 *)(lVar6 + 0x91) = local_48;
      lVar6 = FUN_004113f0(param_1[7],&PTR_FUN_0091e960);
      FUN_00414b90(lVar6 + 0x98,local_68);
      lVar6 = FUN_004113f0(param_1[7],&PTR_FUN_0091e960);
      FUN_00414b90(lVar6 + 0xa8,param_1[3]);
      uVar1 = (**(code **)(*param_1 + 0x20))(param_1);
      lVar6 = FUN_004113f0(param_1[7],&PTR_FUN_0091e960);
      *(undefined1 *)(lVar6 + 0xb0) = uVar1;
      iVar2 = FUN_00416420(local_58,0);
      if (iVar2 != 0) {
        FUN_00947190(local_58,&local_60,&local_45);
        if ((local_45 == '\0') && (iVar2 = FUN_00416420(local_60,0), iVar2 != 0)) {
          while (iVar2 = FUN_00416420(local_60,0), iVar2 != 0) {
            local_44 = FUN_00417170(&DAT_0096cdb4,local_60,1);
            if (local_44 == 0) {
              FUN_00414be0(&local_40,local_60);
              FUN_00414520(&local_60);
            }
            else {
              FUN_00416430(&local_88,local_60,1,local_44 + -1);
              FUN_00947610(&local_40,local_88);
              local_74 = 0;
              if (local_60 != 0) {
                local_74 = *(uint *)(local_60 + -4) >> 1;
              }
              FUN_00416430(&local_90,local_60,local_44 + 1,local_74 - local_44);
              FUN_00947610(&local_38,local_90);
              FUN_00414be0(&local_60,local_38);
              iVar2 = FUN_00416420(local_60,0);
              if (iVar2 == 0) {
                *(undefined1 *)(param_1 + 9) = 0x70;
                break;
              }
            }
            lVar6 = FUN_004113f0(param_1[7],&PTR_FUN_0091e960);
            (**(code **)(**(longlong **)(lVar6 + 0xa0) + 0x68))(*(longlong **)(lVar6 + 0xa0));
          }
        }
        else {
          *(undefined1 *)(param_1 + 9) = 0x70;
        }
      }
    }
  }
  FUN_004145c0(&local_90,2);
  FUN_004145c0(&local_70,5);
  FUN_004145c0(&local_40,2);
  return local_29;
}

