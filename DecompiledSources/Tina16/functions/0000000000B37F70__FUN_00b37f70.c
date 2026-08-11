/* Ghidra address: 00b37f70 */
/* Ghidra symbol: FUN_00b37f70 */


int FUN_00b37f70(longlong param_1,int param_2,undefined8 param_3,undefined4 param_4,
                undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  int local_c4;
  int local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80 [2];
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50 [4];
  
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_80[0] = 0;
  local_50[0] = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  uVar1 = 0;
  local_b8 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + -4) >> 1;
  }
  if (uVar1 != 0) {
    local_c4 = 0;
    iVar8 = 0;
    FUN_0061d8e0(local_80,param_3);
    FUN_004156b0(local_50,local_80[0],&DAT_00b38504);
    iVar2 = FUN_00417250(&DAT_00b38514,local_50[0],1);
    iVar6 = 0;
    while (0 < iVar2) {
      FUN_00415ad0(&local_58,local_50[0],1,iVar2);
      iVar3 = FUN_00417250(&DAT_00b38524,local_58,1);
      FUN_00415ad0(&local_60,local_58,1,iVar3 + -1);
      uVar5 = 0;
      if (local_58 != 0) {
        uVar5 = *(undefined4 *)(local_58 + -4);
      }
      FUN_00415ad0(&local_58,local_58,iVar3 + 1,uVar5);
      iVar3 = FUN_00417250(&LAB_00b38534,local_60,1);
      FUN_00416880(&local_98,local_60);
      FUN_00416dc0(&local_90,local_98,1,iVar3 + -1);
      FUN_0043ea00(&local_88,local_90);
      iVar4 = FUN_0043fc00(local_88);
      uVar5 = 0;
      if (local_60 != 0) {
        uVar5 = *(undefined4 *)(local_60 + -4);
      }
      FUN_00416880(&local_b0,local_60);
      FUN_00416dc0(&local_a8,local_b0,iVar3 + 1,uVar5);
      FUN_0043ea00(&local_a0,local_a8);
      iVar3 = FUN_0043fc00(local_a0);
      uVar7 = local_70;
      if (0 < iVar4 - (iVar6 + 1)) {
        FUN_00416430(&local_68,param_1,iVar6 + 1,iVar4 - iVar6);
        uVar7 = FUN_00b238c0(local_68,param_4,param_5);
        local_70._0_4_ = (int)uVar7;
        local_c4 = local_c4 + (int)local_70;
        local_70._4_4_ = (int)((ulonglong)uVar7 >> 0x20);
        if (iVar8 < local_70._4_4_) {
          iVar8 = local_70._4_4_;
        }
      }
      local_70 = uVar7;
      uVar5 = FUN_00b36520(local_58,param_4,param_5);
      uVar7 = local_70;
      if (0 < iVar3 - iVar4) {
        FUN_00416430(&local_68,param_1,iVar4,(iVar3 - iVar4) + 1);
        uVar7 = FUN_00b238c0(local_68,uVar5,param_5);
        local_70._0_4_ = (int)uVar7;
        local_c4 = local_c4 + (int)local_70;
        local_70._4_4_ = (int)((ulonglong)uVar7 >> 0x20);
        if (iVar8 < local_70._4_4_) {
          iVar8 = local_70._4_4_;
        }
      }
      local_70 = uVar7;
      uVar5 = 0;
      if (local_50[0] != 0) {
        uVar5 = *(undefined4 *)(local_50[0] + -4);
      }
      FUN_00415ad0(local_50,local_50[0],iVar2 + 2,uVar5);
      iVar2 = FUN_00417250(&DAT_00b38514,local_50[0],1);
      iVar6 = iVar3;
    }
    uVar1 = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + -4) >> 1;
    }
    uVar7 = local_70;
    if (iVar6 < (int)uVar1) {
      uVar1 = 0;
      if (param_1 != 0) {
        uVar1 = *(uint *)(param_1 + -4) >> 1;
      }
      FUN_00416430(&local_68,param_1,iVar6 + 1,(uVar1 - (iVar6 + 1)) + 1);
      uVar7 = FUN_00b238c0(local_68,param_4,param_5);
      local_70._0_4_ = (int)uVar7;
      local_c4 = local_c4 + (int)local_70;
      local_70._4_4_ = (int)((ulonglong)uVar7 >> 0x20);
      if (iVar8 < local_70._4_4_) {
        iVar8 = local_70._4_4_;
      }
    }
    local_70 = uVar7;
    uVar1 = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + -4) >> 1;
    }
    iVar2 = FUN_0040c770((double)local_c4 * 1.035466 + ((double)local_c4 * 0.6) / (double)uVar1);
    iVar6 = FUN_0040c770((double)iVar8 * 1.5);
    local_c4 = iVar6;
    if ((param_2 != 0x5a) && (local_c4 = iVar2, param_2 != 0)) {
      dVar9 = (double)FUN_0040bcd0(((double)param_2 * 3.141592653589793) / 180.0);
      dVar10 = (double)FUN_0040bdd0(((double)param_2 * 3.141592653589793) / 180.0);
      local_c4 = FUN_0040c770((double)iVar2 * dVar9 + (double)iVar6 * dVar10);
    }
    if (local_c4 < 0xc) {
      local_c4 = 0xc;
    }
    local_b8 = local_c4;
  }
  FUN_00414560(&local_b0,6);
  FUN_004144d0(local_80);
  FUN_00414520(&local_68);
  FUN_00414590(&local_60,3);
  return local_b8;
}

