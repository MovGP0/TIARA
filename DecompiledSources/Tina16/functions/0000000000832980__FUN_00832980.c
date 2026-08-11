/* Ghidra address: 00832980 */
/* Ghidra symbol: FUN_00832980 */


longlong * FUN_00832980(longlong *param_1,longlong param_2,undefined8 param_3,undefined2 param_4)

{
  longlong lVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  int local_c0;
  undefined2 local_b8;
  int local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined4 local_74;
  int local_70;
  int local_6c;
  int local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_44;
  byte local_3d;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  local_80 = auStack_e8;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_28 = 0;
  local_20 = 0;
  local_30 = 0;
  FUN_00414ad0(param_1,param_3);
  local_50 = 0;
  if (param_2 != 0) {
    local_50 = *(int *)(param_2 + -4);
  }
  local_3c = 1;
  iVar6 = local_50;
  if (0 < local_50) {
    do {
      uVar5 = FUN_008317e0(param_2,local_3c);
      local_3d = (byte)uVar5;
      if (local_3d < 8) {
        bVar8 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) << (local_3d & 0x1f) & 6U) != 0;
      }
      else {
        bVar8 = false;
      }
      if (bVar8) {
        local_38 = FUN_008323e0(param_2,local_3c);
        local_54 = 0;
        lVar1 = *param_1;
        if (lVar1 != 0) {
          local_54 = *(int *)(lVar1 + -4);
        }
        local_34 = local_54 + 1;
        local_58 = local_30;
        local_5c = 0;
        if (lVar1 != 0) {
          local_5c = *(int *)(lVar1 + -4);
        }
        local_2c = local_30;
        if (local_30 <= local_5c + -1) {
          iVar7 = ((local_5c + -1) - local_30) + 1;
          do {
            sVar3 = FUN_00831b30(*(undefined2 *)(param_2 + (longlong)(local_3c + -1) * 2));
            if (*(short *)(*param_1 + (longlong)local_2c * 2) == sVar3) {
              local_34 = local_2c + 1;
              break;
            }
            local_2c = local_2c + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        local_60 = 0;
        if (*param_1 != 0) {
          local_60 = *(int *)(*param_1 + -4);
        }
        if (local_60 < local_34) {
          uVar4 = FUN_00831b30(*(undefined2 *)(param_2 + (longlong)(local_3c + -1) * 2));
          FUN_00416780(&local_88,uVar4);
          FUN_00416ad0(param_1,local_88);
        }
        local_c8 = CONCAT44(local_c8._4_4_,local_34);
        local_c0 = local_38 - (local_30 + 1);
        local_b8 = param_4;
        FUN_00832540(&local_90,param_2,*param_1,local_30 + 1);
        FUN_00414ad0(param_1,local_90);
        local_30 = local_38;
      }
      local_3c = local_3c + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  local_64 = 0;
  if (param_2 != 0) {
    local_64 = *(undefined4 *)(param_2 + -4);
  }
  local_44 = FUN_008323e0(param_2,local_64);
  local_68 = 0;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    local_68 = *(int *)(lVar1 + -4);
  }
  if (local_68 != local_44) {
    local_6c = 0;
    if (lVar1 != 0) {
      local_6c = *(int *)(lVar1 + -4);
    }
    local_c8 = CONCAT44(local_c8._4_4_,local_6c + 1);
    local_c0 = local_44 - local_30;
    local_b8 = param_4;
    FUN_00832540(&local_98,param_2,*param_1,local_30 + 1);
    FUN_00414ad0(param_1,local_98);
  }
  local_70 = 0;
  if (*param_1 != 0) {
    local_70 = *(int *)(*param_1 + -4);
  }
  local_a4 = local_70 + -1;
  local_38 = 0;
  if (-1 < local_a4) {
    local_a4 = local_70;
    do {
      if ((*(short *)(*param_1 + (longlong)local_38 * 2) == 0x20) &&
         (cVar2 = FUN_008324f0(param_2,local_38), cVar2 == '\0')) {
        FUN_00414480(&local_28);
        FUN_00416dc0(&local_28,*param_1,1,local_38);
        FUN_00414480(&local_20);
        local_74 = 0;
        if (*param_1 != 0) {
          local_74 = *(undefined4 *)(*param_1 + -4);
        }
        FUN_00416dc0(&local_20,*param_1,local_38 + 2,local_74);
        FUN_00416780(&local_a0,param_4);
        local_c8 = local_20;
        FUN_00416cd0(param_1,3,local_28,local_a0);
        FUN_00414480(&local_20);
        FUN_00414480(&local_28);
      }
      local_38 = local_38 + 1;
      local_a4 = local_a4 + -1;
    } while (local_a4 != 0);
  }
  FUN_00414560(&local_a0,4);
  FUN_00414560(&local_28,2);
  return param_1;
}

