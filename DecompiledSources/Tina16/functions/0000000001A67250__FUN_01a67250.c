/* Ghidra address: 01a67250 */
/* Ghidra symbol: FUN_01a67250 */


void FUN_01a67250(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8 [2];
  undefined1 local_c0;
  undefined4 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  double local_40;
  undefined8 local_38;
  int local_2c;
  undefined4 local_28;
  int local_20;
  undefined2 local_1a;
  
  local_90 = auStack_128;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_1a = *(undefined2 *)(PTR_DAT_02004830 + 0x17a);
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = 0x2e;
  iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x758),L"butterworth");
  if (iVar2 == 0) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f8),&local_98);
    local_2c = FUN_0043fc00(local_98);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x700),&local_a0);
    local_78 = local_a0;
    local_40 = (double)FUN_00448650(local_a0,PTR_DAT_02004830);
    if ((local_2c < 1) || (100 < local_2c)) {
      local_c8[0] = 1;
      local_c0 = 0;
      local_b8 = 100;
      local_b0 = 0;
      FUN_00442f70(&local_a8,L"N must be in range [%d..%d]",local_c8,1);
      FUN_01a671e0(param_1,local_a8);
    }
    else {
      if ((0.0 < local_40) && (local_40 < 1.0)) {
        lVar1 = *(longlong *)(param_1 + 0xc18);
        *(int *)(lVar1 + 0xc) = local_2c;
        *(double *)(lVar1 + 0x18) = local_40;
        *(undefined4 *)(lVar1 + 8) = 0;
        goto LAB_01a67548;
      }
      local_c8[0] = 0;
      local_c0 = 0;
      local_b8 = 1;
      local_b0 = 0;
      FUN_00442f70(&local_d0,L"Wn must be greater than %d and less than %d",local_c8,1);
      FUN_01a671e0(param_1,local_d0);
    }
LAB_01a6774d:
    FUN_01a677d0(0,local_90);
  }
  else {
    iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x758),L"uniform_filter1d");
    if (iVar2 == 0) {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f8),&local_d8);
      local_2c = FUN_0043fc00(local_d8);
      if ((local_2c < 1) || (1000000 < local_2c)) {
        local_c8[0] = 1;
        local_c0 = 0;
        local_b8 = 1000000;
        local_b0 = 0;
        FUN_00442f70(&local_e0,L"N must be in range [%d..%d]",local_c8,1);
        FUN_01a671e0(param_1,local_e0);
        goto LAB_01a6774d;
      }
      lVar1 = *(longlong *)(param_1 + 0xc18);
      *(int *)(lVar1 + 0x10) = local_2c;
      *(undefined4 *)(lVar1 + 8) = 1;
    }
LAB_01a67548:
    uVar4 = FUN_00f309b0(&LAB_00f23b78,1);
    *(undefined8 *)(param_1 + 0x768) = uVar4;
    uVar5 = FUN_00f2e9d0(&LAB_00f22a90,1,*(undefined8 *)(param_1 + 0x758));
    FUN_00f30e70(uVar4,L"filter",uVar5);
    iVar2 = *(int *)(param_1 + 0x72c);
    local_20 = 0;
    if (-1 < iVar2 + -1) {
      do {
        local_108 = &local_50;
        local_100 = &local_58;
        FUN_01a67f30(param_1,*(undefined4 *)(param_1 + 0x730),local_20,&local_48);
        if (local_20 == 0) {
          local_68 = *(undefined8 *)(param_1 + 0x6f8);
        }
        if (local_20 == 1) {
          local_68 = *(undefined8 *)(param_1 + 0x700);
        }
        iVar3 = FUN_00416db0(local_58,&DAT_01a67980);
        if (iVar3 == 0) {
          FUN_0064dd90(local_68,&local_e8);
          local_28 = FUN_0043fc00(local_e8);
          uVar4 = FUN_00f2f8e0(&LAB_00f22f08,1,local_28);
          FUN_00f30e70(*(undefined8 *)(param_1 + 0x768),local_48,uVar4);
        }
        iVar3 = FUN_00416db0(local_58,&LAB_01a67990);
        if (iVar3 == 0) {
          FUN_0064dd90(local_68,&local_f0);
          local_80 = local_f0;
          local_38 = FUN_00448650(local_f0,PTR_DAT_02004830);
          uVar4 = FUN_00f2f680(&LAB_00f22f08,1,local_38);
          FUN_00f30e70(*(undefined8 *)(param_1 + 0x768),local_48,uVar4);
        }
        local_20 = local_20 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = local_1a;
  }
  FUN_00414560(&local_f0,2);
  FUN_00414480(&local_e0);
  FUN_00414480(&local_d8);
  FUN_00414480(&local_d0);
  FUN_00414480(&local_a8);
  FUN_00414560(&local_a0,2);
  FUN_00414560(&local_58,3);
  return;
}

