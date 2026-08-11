/* Ghidra address: 00744750 */
/* Ghidra symbol: FUN_00744750 */


void FUN_00744750(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_118 [40];
  undefined1 *local_f0;
  int local_dc;
  int local_d8;
  int local_d4;
  longlong local_d0;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  longlong local_b8;
  int local_ac;
  longlong local_a8;
  longlong local_a0;
  longlong local_88;
  undefined8 local_7c;
  undefined8 local_74;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  longlong *local_50;
  undefined4 local_48;
  undefined1 local_44;
  
  local_f0 = auStack_118;
  local_48 = 0;
  local_50 = (longlong *)FUN_00410e60(&PTR_FUN_00472dd0,1);
  local_68 = *(int *)(*(longlong *)(param_1 + 0x50) + 4);
  local_a0 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x4b0);
  iVar4 = *(int *)(*(longlong *)(local_a0 + 0x10) + 0x10);
  local_58 = 0;
  if (-1 < iVar4 + -1) {
    do {
      local_6c = **(int **)(param_1 + 0x50);
      lVar2 = FUN_00746290(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x4b0),local_58);
      local_60 = local_68 + *(int *)(lVar2 + 0x28);
      local_a8 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x4b8);
      iVar5 = *(int *)(*(longlong *)(local_a8 + 0x10) + 0x10);
      local_54 = 0;
      if (-1 < iVar5 + -1) {
        do {
          local_88 = FUN_00747010(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x4c0),local_54,
                                  local_58);
          lVar2 = FUN_00746290(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x4b8),local_54);
          plVar1 = local_50;
          local_64 = local_6c + *(int *)(lVar2 + 0x28);
          if ((((local_88 != 0) && (*(longlong *)(local_88 + 0x18) != 0)) &&
              (*(int *)(local_88 + 0x20) == local_54)) && (*(int *)(local_88 + 0x24) == local_58)) {
            (**(code **)(*local_50 + 0x10))(local_50);
            FUN_004ae7e0(plVar1,*(undefined8 *)(local_88 + 0x18));
            local_44 = *(undefined1 *)(*(longlong *)(local_88 + 0x18) + 0xad);
            local_7c = CONCAT44(local_68,local_6c);
            local_74 = CONCAT44(local_60,local_64);
            if (1 < *(uint *)(local_88 + 0x28)) {
              local_ac = local_54 + 1;
              local_b8 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x4b8);
              local_bc = local_54 + *(uint *)(local_88 + 0x28) + -1;
              local_c0 = *(int *)(*(longlong *)(local_b8 + 0x10) + 0x10) + -1;
              local_c4 = local_c0;
              if (local_bc < local_c0) {
                local_c4 = local_bc;
              }
              local_5c = local_ac;
              if (local_ac <= local_c4) {
                iVar3 = (local_c4 - local_ac) + 1;
                do {
                  lVar2 = FUN_00746290(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x4b8),
                                       local_5c);
                  local_74 = CONCAT44(local_74._4_4_,(int)local_74 + *(int *)(lVar2 + 0x28));
                  local_5c = local_5c + 1;
                  iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
              }
            }
            if (1 < *(uint *)(local_88 + 0x2c)) {
              local_c8 = local_58 + 1;
              local_d0 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x4b0);
              local_d4 = local_58 + *(uint *)(local_88 + 0x2c) + -1;
              local_d8 = *(int *)(*(longlong *)(local_d0 + 0x10) + 0x10) + -1;
              local_dc = local_d8;
              if (local_d4 < local_d8) {
                local_dc = local_d4;
              }
              local_5c = local_c8;
              if (local_c8 <= local_dc) {
                iVar3 = (local_dc - local_c8) + 1;
                do {
                  lVar2 = FUN_00746290(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x4b0),
                                       local_5c);
                  local_74 = CONCAT44(local_74._4_4_ + *(int *)(lVar2 + 0x28),(int)local_74);
                  local_5c = local_5c + 1;
                  iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
              }
            }
            FUN_007446f0(param_1,&local_7c);
            FUN_007444f0(param_1,*(undefined8 *)(local_88 + 0x18),&local_7c,&local_50);
          }
          local_6c = local_64;
          local_54 = local_54 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      local_68 = local_60;
      local_58 = local_58 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00410f20(local_50);
  return;
}

