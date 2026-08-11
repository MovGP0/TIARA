/* Ghidra address: 00c2b820 */
/* Ghidra symbol: FUN_00c2b820 */


void FUN_00c2b820(longlong *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 auStack_138 [32];
  ulonglong local_118;
  undefined1 *local_110;
  undefined8 local_108;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_e0 [16];
  undefined1 *local_d0;
  undefined1 local_c0 [18];
  short local_ae;
  longlong local_a8;
  uint local_a0;
  ulonglong local_58;
  byte local_4d;
  int local_4c;
  longlong *local_48;
  undefined4 local_3c;
  undefined8 local_30;
  
  local_d0 = auStack_138;
  local_f0 = 0;
  local_e8 = 0;
  puVar1 = auStack_138;
  if (param_2 == param_1) goto LAB_00c2bfb9;
  if (param_2 == (longlong *)0x0) {
    local_d0 = auStack_138;
    FUN_00c28830(param_1);
    puVar1 = local_d0;
    goto LAB_00c2bfb9;
  }
  cVar2 = FUN_004113d0(param_2,&LAB_00c14270);
  if (cVar2 != '\0') {
    FUN_00c28830(param_1);
    cVar2 = FUN_00c28880(param_2);
    puVar1 = local_d0;
    if (cVar2 == '\0') {
      param_1[9] = param_2[9];
      *(short *)(param_1 + 10) = (short)param_2[10];
      FUN_00c28a90(param_1);
      if ((param_1[6] != 0) && (param_2[6] != 0)) {
        FUN_00409a70(param_2[6],param_1[6],(longlong)(int)param_1[7]);
      }
      uVar5 = FUN_00c29d60(param_2);
      (**(code **)(*(longlong *)param_1[8] + 0x10))((longlong *)param_1[8],uVar5);
      (**(code **)(*(longlong *)param_1[0xb] + 0x10))((longlong *)param_1[0xb],param_2[0xb]);
      cVar2 = FUN_00c28b00(param_2);
      puVar1 = local_d0;
      if (cVar2 != '\0') {
        FUN_00c28b40(param_1);
        uVar5 = FUN_00c29a40(param_2);
        (**(code **)(*(longlong *)param_1[2] + 0x10))((longlong *)param_1[2],uVar5);
        puVar1 = local_d0;
      }
    }
    goto LAB_00c2bfb9;
  }
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_005f92e8);
  if (cVar2 != '\0') {
    FUN_00c28830(param_1);
    cVar2 = (**(code **)(*param_2 + 0x40))(param_2);
    puVar1 = local_d0;
    if (cVar2 == '\0') {
      uVar4 = (**(code **)(*param_2 + 0x60))(param_2);
      FUN_00c29f80(param_1,uVar4);
      uVar4 = (**(code **)(*param_2 + 0x48))(param_2);
      FUN_00c29ed0(param_1,uVar4);
      local_4d = FUN_00609f90(param_2);
      if (local_4d == 0) {
        FUN_0040d200(local_c0,0x68,0);
        uVar5 = (**(code **)(*param_2 + 0xe8))(param_2);
        thunk_FUN_03d2c01a(uVar5,0x68,local_c0);
        if (local_a8 == 0) {
          local_a0 = 0;
        }
        if (local_a0 < 0x28) {
          if (local_ae == 1) {
            local_4d = 1;
          }
          else if (local_ae == 4) {
            local_4d = 2;
          }
          else if (local_ae == 8) {
            local_4d = 3;
          }
        }
      }
      if ((local_4d < 4) && (local_4d != 0)) {
        FUN_00c28b40(param_1);
        (**(code **)(*(longlong *)param_1[2] + 0x10))((longlong *)param_1[2],param_2);
      }
      else {
        if (*(char *)(param_1[1] + 0x68) == '\t') {
          local_58 = (**(code **)(*param_2 + 0x50))(param_2);
        }
        else {
          local_58 = 0;
        }
        lVar6 = param_1[1];
        local_118 = local_58;
        lVar6 = FUN_00c22790(param_2,*(undefined1 *)(lVar6 + 0x68),*(undefined1 *)(lVar6 + 0xe8),
                             *(undefined4 *)(lVar6 + 0x6c));
        param_1[2] = lVar6;
        local_4d = FUN_00609f90(lVar6);
      }
      FUN_00c28a90(param_1);
      local_3c = 0;
      local_118 = local_118 & 0xffffffff00000000;
      FUN_004238d0(local_e0,0,0,0);
      FUN_0041ddd0(&local_e8,PTR_PTR_02003090);
      lVar6 = param_1[1];
      pcVar7 = (code *)FUN_00411550(lVar6,0xfffd);
      local_118 = local_118 & 0xffffffffffffff00;
      local_110 = local_e0;
      local_108 = local_e8;
      uVar5 = (*pcVar7)(lVar6,param_1,0,(undefined1)local_3c);
      if (local_4d < 8) {
        bVar8 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) << (local_4d & 0x1f) & 0x4eU) != 0;
      }
      else {
        bVar8 = false;
      }
      if (!bVar8) {
        local_4d = 6;
      }
      local_30 = FUN_00c1b520(&PTR_FUN_00c1af80,1,param_1[2],local_4d);
      if (local_4d == 1) {
        FUN_00c2ad60(auStack_138);
      }
      else if (local_4d == 2) {
        FUN_00c2ab60(auStack_138);
      }
      else if (local_4d == 3) {
        FUN_00c2a8a0(auStack_138);
      }
      else {
        FUN_00c2af40(auStack_138);
      }
      FUN_00410f20(local_30);
      cVar2 = (**(code **)(*param_2 + 0x58))(param_2);
      if (cVar2 != '\0') {
        if ((local_4d < 4) && (local_4d != 0)) {
          uVar4 = FUN_0060a330(param_2);
          local_4c = FUN_00c22f00(param_1[8],uVar4);
          if (local_4c != -1) {
            FUN_00c2b2f0(auStack_138,local_4c);
          }
        }
        else {
          uVar5 = (**(code **)(*param_2 + 0xf0))(param_2);
          FUN_00c2b4f0(auStack_138,uVar5);
          cVar2 = FUN_00c2a4a0(param_1);
          if (cVar2 != '\0') {
            uVar5 = FUN_00c29d60(param_1);
            uVar3 = FUN_00c2e3e0(param_1[0xc]);
            uVar4 = FUN_0060a330(param_2);
            FUN_00c23600(uVar5,uVar3,uVar4);
          }
        }
      }
      local_3c = 100;
      lVar6 = param_1[1];
      local_118 = local_118 & 0xffffffff00000000;
      FUN_004238d0(local_e0,0,0,0);
      FUN_0041ddd0(&local_f0,PTR_PTR_02003090);
      pcVar7 = (code *)FUN_00411550(lVar6,0xfffd);
      local_118 = CONCAT71(local_118._1_7_,*(undefined1 *)(lVar6 + 0x3a));
      local_110 = local_e0;
      local_108 = local_f0;
      (*pcVar7)(lVar6,param_1,2,(undefined1)local_3c);
      puVar1 = local_d0;
    }
    goto LAB_00c2bfb9;
  }
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_005f6910);
  if (cVar2 == '\0') {
    cVar2 = FUN_004113d0(param_2,&DAT_005f7500);
    if (cVar2 == '\0') {
      FUN_004b1060(param_1,param_2);
      puVar1 = local_d0;
    }
    else {
      (**(code **)(*param_1 + 0x10))(param_1,param_2[3]);
      puVar1 = local_d0;
    }
    goto LAB_00c2bfb9;
  }
  FUN_00c28830(param_1);
  cVar2 = (**(code **)(*param_2 + 0x40))(param_2);
  puVar1 = local_d0;
  if (cVar2 != '\0') goto LAB_00c2bfb9;
  local_48 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_005fa0c8);
  if (cVar2 == '\0') {
    cVar2 = FUN_004113d0(param_2,&PTR_FUN_005f86c8);
    if (cVar2 != '\0') goto code_r0x00c2be7e;
    (**(code **)(*local_48 + 0x10))(local_48,param_2);
  }
  else {
code_r0x00c2be7e:
    FUN_00c2b280(auStack_138,local_48,param_2);
  }
  (**(code **)(*param_1 + 0x10))(param_1,local_48);
  FUN_00410f20(local_48);
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_005fa0c8);
  if (cVar2 != '\0') {
    FUN_00c2b5b0(auStack_138,param_2);
  }
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_005f86c8);
  puVar1 = local_d0;
  if (cVar2 != '\0') {
    FUN_00c2b720(auStack_138,param_2);
    puVar1 = local_d0;
  }
LAB_00c2bfb9:
  local_d0 = puVar1;
  FUN_00414560(&local_f0,2);
  return;
}

