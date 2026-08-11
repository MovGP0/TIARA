/* Ghidra address: 0164ae80 */
/* Ghidra symbol: FUN_0164ae80 */


double FUN_0164ae80(code *param_1,double param_2,undefined8 param_3,longlong param_4,
                   undefined8 param_5)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_248 [40];
  undefined8 local_220;
  undefined8 uStack_218;
  undefined1 *local_210;
  undefined4 local_204;
  double local_200;
  double local_1f8;
  double local_1f0 [2];
  undefined1 local_1e0 [16];
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 local_180 [16];
  undefined1 local_170 [128];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  double local_a0;
  double local_98;
  double local_90;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  double local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  longlong local_50;
  longlong local_48;
  undefined8 *local_40;
  
  local_210 = auStack_248;
  local_84 = 0x50;
  local_90 = 4.0;
  local_40 = (undefined8 *)FUN_00409570(0xca0);
  local_58 = (undefined8 *)FUN_00409570(0xca0);
  local_60 = (undefined8 *)FUN_00409570(0xcb0);
  local_68 = (undefined8 *)FUN_00409570(0xcb0);
  local_48 = FUN_00409570(0x9dd10);
  local_50 = FUN_00409570(0x9dd10);
  local_204 = 0x13ec60;
  FUN_0040d200(local_1f0,0x100,0);
  local_98 = local_90 * param_2;
  if (local_98 == 0.0) {
    local_70 = 0.0;
    FUN_0164ba40(0,local_210);
  }
  else {
    dVar7 = (double)FUN_0040c2f0(param_3);
    local_a0 = (dVar7 * -0.5) / local_98;
    FUN_00c44460(&local_f0,local_a0,0);
    if (param_4 != 0) {
      *(undefined8 *)(param_4 + 0x4a0) = local_f0;
      *(undefined8 *)(param_4 + 0x4a8) = uStack_e8;
    }
    (*param_1)(&local_220,&local_f0,param_4,param_5);
    FUN_00c44550(&local_220,0x3fe0000000000000,local_40);
    iVar3 = local_84 * 2;
    local_74 = 1;
    if (0 < iVar3) {
      do {
        FUN_00c44460(&local_f0,local_a0,((double)local_74 * 3.141592653589793) / local_98);
        if (param_4 != 0) {
          *(undefined8 *)(param_4 + 0x4a0) = local_f0;
          *(undefined8 *)(param_4 + 0x4a8) = uStack_e8;
        }
        (*param_1)(&local_220,&local_f0,param_4,param_5);
        local_40[(longlong)local_74 * 2] = local_220;
        (local_40 + (longlong)local_74 * 2)[1] = uStack_218;
        local_74 = local_74 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = local_84 * 2;
    local_74 = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar5 = (longlong)local_74;
        FUN_00c44460(&local_220,0,0);
        puVar1 = (undefined8 *)(local_48 + lVar5 * 0x640);
        *puVar1 = local_220;
        puVar1[1] = uStack_218;
        FUN_00c44790(local_40 + (longlong)(local_74 + 1) * 2,local_40 + lVar5 * 2,
                     local_50 + 0x10 + lVar5 * 0x640);
        local_74 = local_74 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_00c44460(&local_220,0,0);
    puVar1 = (undefined8 *)(local_48 + (longlong)(local_84 * 2) * 0x640);
    *puVar1 = local_220;
    puVar1[1] = uStack_218;
    iVar3 = local_84 + -1;
    local_80 = 1;
    if (0 < iVar3) {
      do {
        local_74 = (local_84 - local_80) * 2;
        if (-1 < local_74) {
          do {
            if ((local_74 < (local_84 - local_80) * 2) && (1 < local_80)) {
              lVar5 = (longlong)(local_80 + -1);
              FUN_00c44720(local_50 + (longlong)(local_74 + 1) * 0x640 + lVar5 * 0x10,
                           local_48 + (longlong)(local_74 + 1) * 0x640 + lVar5 * 0x10,local_1f0);
              FUN_00c44790(local_1f0,local_48 + (longlong)local_74 * 0x640 + lVar5 * 0x10,
                           local_50 + (longlong)local_74 * 0x640 + (longlong)local_80 * 0x10);
            }
            iVar4 = local_74 + 1;
            FUN_00c44500(local_50 + (longlong)iVar4 * 0x640 + (longlong)local_80 * 0x10,
                         local_50 + (longlong)local_74 * 0x640 + (longlong)local_80 * 0x10,local_1f0
                        );
            FUN_00c444b0(local_1f0,
                         local_48 + (longlong)iVar4 * 0x640 + (longlong)(local_80 + -1) * 0x10,
                         local_48 + (longlong)local_74 * 0x640 + (longlong)local_80 * 0x10);
            local_74 = local_74 + -1;
          } while (local_74 != -1);
        }
        local_80 = local_80 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *local_58 = *local_40;
    local_58[1] = local_40[1];
    local_7c = 1;
    iVar3 = local_84;
    if (0 < local_84) {
      do {
        lVar5 = (longlong)local_7c;
        iVar4 = local_7c * 2;
        FUN_00c44550(local_50 + lVar5 * 0x10,0xbff0000000000000,
                     local_58 + (longlong)(iVar4 + -1) * 2);
        FUN_00c44550(local_48 + lVar5 * 0x10,0xbff0000000000000,local_58 + (longlong)iVar4 * 2);
        local_7c = local_7c + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    uVar8 = FUN_0040bcd0((param_2 * 3.141592653589793) / local_98);
    uVar9 = FUN_0040bdd0((param_2 * 3.141592653589793) / local_98);
    FUN_00c44460(local_d0,uVar8,uVar9);
    FUN_00c44460(&local_220,0,0);
    *local_60 = local_220;
    local_60[1] = uStack_218;
    FUN_00c44460(&local_220,0x3ff0000000000000,0);
    *local_68 = local_220;
    local_68[1] = uStack_218;
    local_60[2] = *local_58;
    local_60[3] = local_58[1];
    FUN_00c44460(&local_220,0x3ff0000000000000,0);
    local_68[2] = local_220;
    local_68[3] = uStack_218;
    iVar3 = local_84 * 2;
    local_78 = 2;
    if (1 < iVar3 + 1) {
      do {
        lVar5 = (longlong)(local_78 + -1);
        FUN_00c44720(local_58 + lVar5 * 2,local_d0,local_e0);
        iVar4 = local_78 + -2;
        FUN_00c44720(local_e0,local_60 + (longlong)iVar4 * 2,local_1f0);
        lVar6 = (longlong)local_78;
        FUN_00c444b0(local_60 + lVar5 * 2,local_1f0,local_60 + lVar6 * 2);
        FUN_00c44720(local_e0,local_68 + (longlong)iVar4 * 2,local_1f0);
        FUN_00c444b0(local_68 + lVar5 * 2,local_1f0,local_68 + lVar6 * 2);
        local_78 = local_78 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = local_84 * 2;
    lVar5 = (longlong)iVar3;
    FUN_00c44500(local_58 + (longlong)(iVar3 + -1) * 2,local_58 + lVar5 * 2,local_1f0);
    FUN_00c44720(local_d0,local_1f0,local_1e0);
    FUN_00c44460(&local_220,0x3ff0000000000000,0);
    local_1d0 = local_220;
    uStack_1c8 = uStack_218;
    FUN_00c444b0(local_1e0,&local_1d0,&local_1c0);
    FUN_00c44550(&local_1c0,0x3fe0000000000000,local_b0);
    FUN_00c44720(local_d0,local_58 + lVar5 * 2,local_1f0);
    FUN_00c44790(local_1f0,local_b0,local_1e0);
    FUN_00c44790(local_1e0,local_b0,&local_1d0);
    FUN_00c44460(&local_220,0x3ff0000000000000,0);
    local_1c0 = local_220;
    uStack_1b8 = uStack_218;
    FUN_00c444b0(&local_1d0,&local_1c0,local_1b0);
    FUN_00c449c0(local_1b0,local_1a0);
    FUN_00c44460(&local_220,0x3ff0000000000000,0);
    local_190 = local_220;
    uStack_188 = uStack_218;
    FUN_00c44500(&local_190,local_1a0,local_180);
    FUN_00c44720(local_180,local_b0,local_170);
    FUN_00c44550(local_170,0xbff0000000000000,local_c0);
    FUN_00c44720(local_c0,local_60 + (longlong)(iVar3 + -1) * 2,local_1f0);
    FUN_00c444b0(local_60 + lVar5 * 2,local_1f0,local_60 + (longlong)(iVar3 + 1) * 2);
    FUN_00c44720(local_c0,local_68 + (longlong)(iVar3 + -1) * 2,local_1f0);
    FUN_00c444b0(local_68 + lVar5 * 2,local_1f0,local_68 + (longlong)(local_84 * 2 + 1) * 2);
    FUN_00c44790(local_60 + (longlong)(iVar3 + 1) * 2,local_68 + (longlong)(local_84 * 2 + 1) * 2,
                 local_1f0);
    local_1f8 = local_1f0[0];
    dVar7 = (double)FUN_0040af80(local_a0 * param_2);
    local_200 = (1.0 / local_98) * dVar7 * local_1f8;
    cVar2 = FUN_00526f10(local_200);
    if (cVar2 == '\0') {
      local_70 = local_200;
    }
    else {
      local_70 = 0.0;
    }
    FUN_004095f0(local_40);
    FUN_004095f0(local_48);
    FUN_004095f0(local_50);
    FUN_004095f0(local_58);
    FUN_004095f0(local_60);
    FUN_004095f0(local_68);
  }
  return local_70;
}

