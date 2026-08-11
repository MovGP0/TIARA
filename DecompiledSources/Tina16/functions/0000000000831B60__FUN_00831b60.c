/* Ghidra address: 00831b60 */
/* Ghidra symbol: FUN_00831b60 */


longlong * FUN_00831b60(longlong *param_1,longlong param_2,undefined8 param_3,undefined2 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined1 auStack_c8 [32];
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  byte local_56;
  byte local_55;
  int local_54;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_80 = auStack_c8;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  FUN_00414ad0(param_1,param_3);
  local_56 = FUN_00831a60(param_2,1);
  if ((local_56 & 1) == 0) {
    local_50 = 1;
    local_60 = 0;
    if (param_2 != 0) {
      local_60 = *(int *)(param_2 + -4);
    }
    local_a8 = local_60;
    local_54 = 1;
    if (0 < local_60) {
      do {
        uVar4 = FUN_008317e0(param_2,local_54);
        local_55 = (byte)uVar4;
        if (local_55 < 8) {
          uVar2 = (int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << (local_55 & 0x1f);
          bVar6 = (uVar2 & 6) != 0;
          uVar5 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),bVar6);
        }
        else {
          uVar5 = 0;
          bVar6 = false;
        }
        if (bVar6) {
          FUN_00414480(&local_30);
          iVar1 = local_50;
          FUN_00416dc0(&local_30,*param_1,1,local_50 + -1);
          local_20[0] = 0;
          uVar3 = FUN_00831b30(*(undefined2 *)(param_2 + (longlong)(local_54 + -1) * 2));
          FUN_00416780(&local_88,uVar3);
          FUN_00416ba0(local_20,local_30,local_88);
          local_64 = 0;
          if (*param_1 != 0) {
            local_64 = *(int *)(*param_1 + -4);
          }
          FUN_00414480(&local_28);
          FUN_00416dc0(&local_28,*param_1,iVar1,(local_64 - local_50) + 1);
          FUN_00416ba0(param_1,local_20[0],local_28);
          FUN_00414480(local_20);
          FUN_00414480(&local_28);
          FUN_00414480(&local_30);
          local_50 = local_50 + 1;
        }
        else {
          if (local_55 < 8) {
            bVar6 = ((int)CONCAT71((int7)(uVar5 >> 8),1) << (local_55 & 0x1f) & 0x30U) != 0;
          }
          else {
            bVar6 = false;
          }
          if (bVar6) {
            local_68 = 0;
            if (*param_1 != 0) {
              local_68 = *(int *)(*param_1 + -4);
            }
            if (local_68 < local_50) {
              FUN_00416780(&local_90,param_4);
              FUN_00416ad0(param_1,local_90);
            }
            local_50 = local_50 + 1;
          }
        }
        local_54 = local_54 + 1;
        local_a8 = local_a8 + -1;
      } while (local_a8 != 0);
    }
  }
  else {
    local_6c = 0;
    if (*param_1 != 0) {
      local_6c = *(int *)(*param_1 + -4);
    }
    local_50 = local_6c;
    local_70 = 0;
    if (param_2 != 0) {
      local_70 = *(int *)(param_2 + -4);
    }
    local_a4 = local_70 + -1;
    local_4c = 0;
    if (-1 < local_a4) {
      local_a4 = local_70;
      do {
        local_74 = 0;
        if (param_2 != 0) {
          local_74 = *(int *)(param_2 + -4);
        }
        local_54 = local_74 - local_4c;
        uVar4 = FUN_008317e0(param_2,local_54);
        local_55 = (byte)uVar4;
        if (local_55 < 8) {
          uVar2 = (int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << (local_55 & 0x1f);
          bVar6 = (uVar2 & 6) != 0;
          uVar5 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),bVar6);
        }
        else {
          uVar5 = 0;
          bVar6 = false;
        }
        if (bVar6) {
          FUN_00414480(&local_48);
          FUN_00416dc0(&local_48,*param_1,1,local_50);
          local_38 = 0;
          uVar3 = FUN_00831b30(*(undefined2 *)(param_2 + (longlong)(local_54 + -1) * 2));
          FUN_00416780(&local_98,uVar3);
          FUN_00416ba0(&local_38,local_48,local_98);
          local_78 = 0;
          if (*param_1 != 0) {
            local_78 = *(int *)(*param_1 + -4);
          }
          FUN_00414480(&local_40);
          FUN_00416dc0(&local_40,*param_1,local_50 + 1,local_78 - local_50);
          FUN_00416ba0(param_1,local_38,local_40);
          FUN_00414480(&local_38);
          FUN_00414480(&local_40);
          FUN_00414480(&local_48);
        }
        else {
          if (local_55 < 8) {
            bVar6 = ((int)CONCAT71((int7)(uVar5 >> 8),1) << (local_55 & 0x1f) & 0x30U) != 0;
          }
          else {
            bVar6 = false;
          }
          if (bVar6) {
            if (local_50 < 1) {
              FUN_00416780(&local_a0,param_4);
              FUN_00416ba0(param_1,local_a0,*param_1);
            }
            else {
              local_50 = local_50 + -1;
            }
          }
        }
        local_4c = local_4c + 1;
        local_a4 = local_a4 + -1;
      } while (local_a4 != 0);
    }
  }
  FUN_00414560(&local_a0,4);
  FUN_00414560(&local_48,2);
  FUN_00414560(&local_30,2);
  return param_1;
}

