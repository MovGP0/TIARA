/* Ghidra address: 0157fc90 */
/* Ghidra symbol: FUN_0157fc90 */


void FUN_0157fc90(longlong param_1)

{
  int iVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined1 auStack_148 [36];
  int local_124;
  undefined1 *local_120;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  undefined4 local_e4;
  uint local_e0;
  undefined2 local_dc;
  undefined2 local_da;
  undefined2 local_d8;
  undefined2 local_d6;
  int local_d4;
  int local_d0;
  short local_cc;
  undefined2 local_ca;
  undefined2 local_c8;
  undefined2 local_c6;
  undefined2 local_c4;
  undefined4 local_c2;
  undefined4 local_be;
  undefined4 local_ba;
  undefined4 local_b6;
  short local_b2;
  short local_b0;
  short local_ae;
  undefined2 local_ac;
  undefined2 local_aa;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  longlong local_78;
  undefined1 local_6a [74];
  
  local_120 = auStack_148;
  FUN_00417580(&local_ca,&DAT_015764a8);
  FUN_00417580(local_6a,&DAT_015764a8);
  if ((*(char *)(param_1 + 8) == '\x02') || (*(char *)(param_1 + 8) == '\x03')) {
    FUN_004b6dc0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x28));
    local_e4 = DAT_01f654d8;
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x10);
    local_124 = iVar1 + -1;
    local_e0 = 0;
    if (-1 < local_124) {
      do {
        local_124 = iVar1;
        FUN_00417740(local_6a,&DAT_015764a8);
        local_f0 = *(longlong *)(param_1 + 0x30);
        if (*(uint *)(local_f0 + 0x10) <= local_e0) {
          FUN_00594f90();
        }
        FUN_00417c40(local_6a,*(longlong *)(local_f0 + 8) + (longlong)(int)local_e0 * 0x42,
                     &DAT_015764a8);
        FUN_00417c40(&local_ca,local_6a,&DAT_015764a8);
        FUN_00417740(local_6a,&DAT_015764a8);
        FUN_0157cb00(*(undefined8 *)(param_1 + 0x10),local_e4,4);
        FUN_0157caa0(*(undefined8 *)(param_1 + 0x10),local_ca,2);
        FUN_0157caa0(*(undefined8 *)(param_1 + 0x10),local_c8,2);
        FUN_0157caa0(*(undefined8 *)(param_1 + 0x10),local_c6,2);
        FUN_0157caa0(*(undefined8 *)(param_1 + 0x10),local_c4,2);
        FUN_0157cb00(*(undefined8 *)(param_1 + 0x10),local_c2,4);
        FUN_0157cb00(*(undefined8 *)(param_1 + 0x10),local_be,4);
        FUN_0157cb00(*(undefined8 *)(param_1 + 0x10),local_ba,4);
        FUN_0157cb00(*(undefined8 *)(param_1 + 0x10),local_b6,4);
        sVar2 = local_b2;
        FUN_0157caa0(*(undefined8 *)(param_1 + 0x10),local_b2,2);
        sVar3 = local_b0;
        FUN_0157caa0(*(undefined8 *)(param_1 + 0x10),local_b0,2);
        sVar4 = local_ae;
        FUN_0157caa0(*(undefined8 *)(param_1 + 0x10),local_ae,2);
        FUN_0157caa0(*(undefined8 *)(param_1 + 0x10),local_ac,2);
        FUN_0157caa0(*(undefined8 *)(param_1 + 0x10),local_aa,2);
        FUN_0157cb00(*(undefined8 *)(param_1 + 0x10),local_a8,4);
        FUN_0157cb00(*(undefined8 *)(param_1 + 0x10),local_a4,4);
        if (sVar2 != 0) {
          FUN_0157ca00(*(undefined8 *)(param_1 + 0x10),local_a0,sVar2);
        }
        if (sVar3 != 0) {
          FUN_0157ca00(*(undefined8 *)(param_1 + 0x10),local_98,sVar3);
        }
        if (sVar4 != 0) {
          FUN_0157ca00(*(undefined8 *)(param_1 + 0x10),local_90,sVar4);
        }
        local_e0 = local_e0 + 1;
        local_124 = local_124 + -1;
        iVar1 = local_124;
      } while (local_124 != 0);
    }
    FUN_0040d200(&local_dc,0x12,0);
    local_d8 = *(undefined2 *)(*(longlong *)(param_1 + 0x30) + 0x10);
    local_d6 = local_d8;
    local_d4 = FUN_004b6da0(*(undefined8 *)(param_1 + 0x10));
    local_d0 = *(int *)(param_1 + 0x28);
    local_d4 = local_d4 - local_d0;
    local_f8 = *(longlong *)(param_1 + 0x38);
    local_100 = local_f8;
    if (local_f8 != 0) {
      local_100 = *(longlong *)(local_f8 + -8);
    }
    if (0xffff < local_100) {
      FUN_00419260(param_1 + 0x38,&DAT_00406578,1,0xffff);
    }
    local_108 = *(longlong *)(param_1 + 0x38);
    local_110 = local_108;
    if (local_108 != 0) {
      local_110 = *(longlong *)(local_108 + -8);
    }
    local_cc = (short)local_110;
    local_e4 = DAT_01f654d4;
    FUN_0157cb00(*(undefined8 *)(param_1 + 0x10),DAT_01f654d4,4);
    FUN_0157caa0(*(undefined8 *)(param_1 + 0x10),local_dc,2);
    FUN_0157caa0(*(undefined8 *)(param_1 + 0x10),local_da,2);
    FUN_0157caa0(*(undefined8 *)(param_1 + 0x10),local_d8,2);
    FUN_0157caa0(*(undefined8 *)(param_1 + 0x10),local_d6,2);
    FUN_0157cb00(*(undefined8 *)(param_1 + 0x10),local_d4,4);
    FUN_0157cb00(*(undefined8 *)(param_1 + 0x10),local_d0,4);
    FUN_0157caa0(*(undefined8 *)(param_1 + 0x10),local_cc,2);
    if (local_cc != 0) {
      FUN_0157ca00(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x38),local_cc);
    }
  }
  *(undefined1 *)(param_1 + 8) = 0;
  local_78 = *(longlong *)(param_1 + 0x30);
  FUN_00598040(local_78 + 8);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    local_80 = (undefined8 *)(param_1 + 0x18);
    local_88 = *local_80;
    *local_80 = 0;
    FUN_00410f20(local_88);
  }
  FUN_00417740(&local_ca,&DAT_015764a8);
  FUN_00417740(local_6a,&DAT_015764a8);
  return;
}

