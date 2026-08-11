/* Ghidra address: 018d34c0 */
/* Ghidra symbol: FUN_018d34c0 */


longlong * FUN_018d34c0(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_128 [36];
  int local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  char local_8a;
  char local_89;
  undefined8 local_88;
  bool local_79;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  char local_41;
  uint local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_a0 = auStack_128;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_30[0] = 0;
  local_38 = 0;
  FUN_00414480(param_1);
  iVar1 = FUN_00414cc0(param_2);
  if (3 < iVar1) {
    iVar1 = FUN_00414cc0(param_2);
    local_3c = 1;
    if (0 < iVar1) {
      do {
        local_41 = '\0';
        lVar5 = (longlong)local_3c;
        FUN_00416780(&local_a8,*(undefined2 *)(param_2 + -2 + lVar5 * 2));
        local_50 = local_a8;
        iVar2 = FUN_004170c0(local_a8,PTR_DAT_01fb68d0,1);
        iVar3 = local_3c;
        if (iVar2 != 0) {
          local_41 = '\x01';
          iVar2 = FUN_00414cc0(param_2);
          if (iVar3 < iVar2) {
            FUN_00416780(&local_b0,*(undefined2 *)(param_2 + -2 + (longlong)(local_3c + 1) * 2));
            local_58 = local_b0;
            iVar2 = FUN_004170c0(local_b0,PTR_DAT_01fb68c8,1);
            if (iVar2 != 0) {
              local_41 = '\0';
            }
          }
          iVar2 = FUN_00414cc0(param_2);
          if (iVar3 < iVar2) {
            FUN_00416780(&local_b8,*(undefined2 *)(param_2 + -2 + (longlong)(local_3c + 1) * 2));
            local_60 = local_b8;
            iVar3 = FUN_004170c0(local_b8,PTR_PTR_01fb68d8,1);
            if (iVar3 != 0) {
              local_41 = '\0';
            }
          }
        }
        FUN_00416780(&local_c0,*(undefined2 *)(param_2 + -2 + lVar5 * 2));
        local_68 = local_c0;
        iVar3 = FUN_004170c0(local_c0,PTR_DAT_01fb68c8,1);
        if (iVar3 != 0) {
          local_41 = '\x01';
          lVar5 = (longlong)local_3c;
          iVar3 = FUN_00414cc0(param_2);
          if (lVar5 < iVar3) {
            FUN_00416780(&local_c8,*(undefined2 *)(param_2 + -2 + (longlong)(local_3c + 1) * 2));
            local_70 = local_c8;
            iVar3 = FUN_004170c0(local_c8,PTR_LAB_01fb68e0,1);
            if (iVar3 != 0) {
              local_41 = '\0';
            }
          }
          iVar3 = FUN_00414cc0(param_2);
          if (lVar5 < (longlong)iVar3 + -2) {
            FUN_00416780(&local_d0,*(undefined2 *)(param_2 + -2 + (longlong)(local_3c + 1) * 2));
            local_78 = local_d0;
            iVar3 = FUN_004170c0(local_d0,PTR_DAT_01fb68d0,1);
            local_79 = iVar3 != 0;
          }
          else {
            local_79 = false;
          }
          if ((local_79 != false) &&
             (*(short *)(param_2 + -2 + (longlong)(local_3c + 1) * 2) ==
              *(short *)(param_2 + -2 + (longlong)(local_3c + 2) * 2))) {
            FUN_00416780(&local_d8,*(undefined2 *)(param_2 + -2 + (longlong)(local_3c + 3) * 2));
            local_88 = local_d8;
            iVar3 = FUN_004170c0(local_d8,PTR_DAT_01fb68c8,1);
            if (iVar3 != 0) {
              local_41 = '\0';
            }
          }
        }
        if (local_41 != '\0') {
          FUN_00416780(&local_e0,(undefined2)local_3c);
          FUN_00416ad0(param_1,local_e0);
        }
        local_3c = local_3c + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    local_104 = FUN_00414cb0(*param_1);
    local_3c = 1;
    if (0 < local_104) {
      do {
        local_40 = (uint)*(ushort *)(*param_1 + -2 + (longlong)local_3c * 2);
        FUN_00414480(local_30);
        FUN_004168b0(&local_e8,param_2);
        FUN_00416dc0(local_30,local_e8,1,(longlong)(int)local_40);
        FUN_004168e0(&local_f0,local_30[0]);
        local_89 = FUN_018d33f0(auStack_128,local_f0);
        FUN_00414480(local_30);
        if (local_89 == '\0') {
          local_8a = '\0';
        }
        else {
          FUN_00414480(&local_38);
          FUN_004168b0(&local_f8,param_2);
          FUN_00416dc0(&local_38,local_f8,(longlong)(int)(local_40 + 1),0xff);
          FUN_004168e0(&local_100,local_38);
          local_8a = FUN_018d33f0(auStack_128,local_100);
          FUN_00414480(&local_38);
        }
        if (local_8a == '\0') {
          lVar5 = FUN_00414de0(param_1);
          *(undefined2 *)(lVar5 + -2 + (longlong)local_3c * 2) = 0x44f;
        }
        local_3c = local_3c + 1;
        local_104 = local_104 + -1;
      } while (local_104 != 0);
    }
    while (iVar1 = FUN_004170c0(&DAT_018d3bac,*param_1,1), iVar1 != 0) {
      uVar4 = FUN_004170c0(&DAT_018d3bac,*param_1,1);
      FUN_00416e20(param_1,uVar4,1);
    }
  }
  FUN_00414520(&local_100);
  FUN_00414480(&local_f8);
  FUN_00414520(&local_f0);
  FUN_00414560(&local_e8,9);
  FUN_00414560(&local_38,2);
  return param_1;
}

