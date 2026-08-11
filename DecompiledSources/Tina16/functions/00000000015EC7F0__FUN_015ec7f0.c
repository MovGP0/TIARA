/* Ghidra address: 015ec7f0 */
/* Ghidra symbol: FUN_015ec7f0 */


longlong FUN_015ec7f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  undefined8 local_res10 [3];
  undefined *in_stack_fffffffffffffe98;
  longlong local_148;
  int local_13c;
  longlong local_120;
  int local_10c;
  int local_fc;
  int local_f8;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  char local_29;
  
  local_e0 = 0;
  local_e8 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_70[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  bVar2 = false;
  local_29 = '\0';
  cVar3 = FUN_015ec5a0(param_1 + 0x8f8);
  if (cVar3 == '\0') {
    iVar4 = 0;
  }
  else {
    local_148 = FUN_015f2d20(local_res10[0],*(undefined8 *)(param_1 + 0x8f8),&local_29);
    iVar4 = FUN_015ec610();
    uVar5 = FUN_00e0e000(local_148,1);
    FUN_01566d10(param_1,uVar5);
    FUN_00e0e710(local_148,&local_58);
  }
  if (iVar4 == 0) {
    cVar3 = '\x01';
    while (cVar3 != '\0') {
      cVar3 = FUN_015ec460(param_1 + 0x8f8);
    }
    bVar13 = true;
  }
  else {
    cVar3 = FUN_015f2cb0(*(undefined8 *)(param_1 + 0x8f8));
    bVar13 = cVar3 == '\0';
  }
  if (bVar13) {
    iVar4 = FUN_01566d00(param_1);
    uVar9 = FUN_015f27d0(local_res10[0],param_3,0,*(undefined8 *)(param_1 + 0x8f8),0,iVar4,
                         L"GetVHDLCircuitFromMemory",1);
    uVar9 = FUN_015f9cf0(param_3,uVar9);
    uVar10 = FUN_015f9d00(param_3);
    FUN_004167a0(&local_38,uVar10);
    FUN_00414b50(&local_40,L"ignored");
    plVar1 = *(longlong **)(param_1 + 0x8f8);
    uVar9 = FUN_015f9ee0(param_3,uVar9,PTR_DAT_020030c0[0x3c],&local_30);
    if (local_30 == 1) {
      uVar10 = FUN_00b89270();
      FUN_00b8e520(uVar10,local_70,0x89d);
      FUN_015fcf20(local_70[0],0,0,0);
    }
    if (local_29 == '\0') {
      FUN_004167a0(&local_58,uVar9);
    }
    iVar6 = FUN_004170c0(&DAT_015ed63c,local_58,1);
    if (0 < iVar6) {
      FUN_00416dc0(&local_50,local_58,1,iVar6 + -1);
      iVar7 = 0;
      if (local_58 != 0) {
        iVar7 = *(int *)(local_58 + -4);
      }
      FUN_00416dc0(&local_60,local_58,iVar6 + 1,iVar7 - iVar6);
      FUN_00414b50(&local_58,local_50);
      bVar2 = true;
    }
    plVar11 = (longlong *)FUN_01b21300(local_58,&DAT_015ed64c,0);
    iVar6 = (**(code **)(*plVar11 + 0x28))();
    local_13c = 0;
    if (-1 < iVar6 + -1) {
      do {
        (**(code **)(*plVar11 + 0x18))(plVar11,&local_48,local_13c);
        plVar12 = (longlong *)FUN_01b21480(local_48);
        iVar7 = (**(code **)(*plVar12 + 0x28))();
        local_fc = 0;
        if (-1 < iVar7 + -1) {
          do {
            (**(code **)(*plVar12 + 0x18))(plVar12,&local_48,local_fc);
            iVar8 = 0;
            if (local_48 != 0) {
              iVar8 = *(int *)(local_48 + -4);
            }
            if (0x10 < iVar8) {
              plVar11 = (longlong *)FUN_00b89270();
              FUN_0041ddd0(&local_88,PTR_DAT_02002060);
              FUN_00416cd0(&local_80,3,local_48,&DAT_015ed6a8,local_88);
              FUN_00b8e650(plVar11,&local_78,L"HDLStrings.Msg_MaximumPinLength",local_80);
              uVar9 = FUN_0044d490(&PTR_FUN_004334c0,1,local_78);
              FUN_004134c0(uVar9);
            }
            local_fc = local_fc + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        FUN_00410f20(plVar12);
        local_13c = local_13c + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    FUN_00410f20(plVar11);
    if ((((iVar4 == 1) || (iVar4 == 5)) || (iVar4 == 6)) || ((iVar4 == 7 || (iVar4 == 8)))) {
      (**(code **)(*plVar1 + 200))(plVar1,0,L"------------------------------------");
      (**(code **)(*plVar1 + 200))(plVar1,1,L"-- TINA HDL Macro Description Begin");
      (**(code **)(*plVar1 + 200))(plVar1,2,&DAT_015ed768);
      FUN_00416cd0(&local_90,3,L"-- entity_name:",local_38,&DAT_015ed64c);
      (**(code **)(*plVar1 + 200))(plVar1,3,local_90);
      FUN_00416cd0(&local_98,3,L"-- arch_name:",local_40,&DAT_015ed64c);
      (**(code **)(*plVar1 + 200))(plVar1,4,local_98);
      FUN_00416cd0(&local_a0,3,L"-- ports:",local_58,&DAT_015ed64c);
      (**(code **)(*plVar1 + 200))(plVar1,5,local_a0);
      local_13c = 6;
      if (bVar2) {
        FUN_00416cd0(&local_a8,3,L"-- _vec:",local_60,&DAT_015ed64c);
        (**(code **)(*plVar1 + 200))(plVar1,6,local_a8);
        local_13c = 7;
      }
      FUN_015fc2e0(&local_b8,iVar4);
      in_stack_fffffffffffffe98 = &DAT_015ed64c;
      FUN_00416cd0(&local_b0,3,L"-- Mode:",local_b8,&DAT_015ed64c);
      (**(code **)(*plVar1 + 200))(plVar1,local_13c,local_b0);
      (**(code **)(*plVar1 + 200))(plVar1,local_13c + 1,&DAT_015ed768);
      (**(code **)(*plVar1 + 200))(plVar1,local_13c + 2,L"-- TINA HDL Macro Description End");
      (**(code **)(*plVar1 + 200))(plVar1,local_13c + 3,L"------------------------------------");
      (**(code **)(*plVar1 + 200))(plVar1,local_13c + 4,0);
    }
    else {
      (**(code **)(*plVar1 + 200))(plVar1,0,L"////////////////////////////////////");
      (**(code **)(*plVar1 + 200))(plVar1,1,L"// TINA HDL Macro Description Begin");
      (**(code **)(*plVar1 + 200))(plVar1,2,&DAT_015ed92c);
      FUN_00416cd0(&local_c0,3,L"// entity_name:",local_38,&DAT_015ed64c);
      (**(code **)(*plVar1 + 200))(plVar1,3,local_c0);
      FUN_00416cd0(&local_c8,3,L"// arch_name:",local_40,&DAT_015ed64c);
      (**(code **)(*plVar1 + 200))(plVar1,4,local_c8);
      FUN_00416cd0(&local_d0,3,L"// ports:",local_58,&DAT_015ed64c);
      (**(code **)(*plVar1 + 200))(plVar1,5,local_d0);
      local_13c = 6;
      if (bVar2) {
        FUN_00416cd0(&local_d8,3,L"// _vec:",local_60,&DAT_015ed64c);
        (**(code **)(*plVar1 + 200))(plVar1,6,local_d8);
        local_13c = 7;
      }
      FUN_015fc2e0(&local_e8,iVar4);
      in_stack_fffffffffffffe98 = &DAT_015ed64c;
      FUN_00416cd0(&local_e0,3,L"// Mode:",local_e8,&DAT_015ed64c);
      (**(code **)(*plVar1 + 200))(plVar1,local_13c,local_e0);
      (**(code **)(*plVar1 + 200))(plVar1,local_13c + 1,&DAT_015ed92c);
      (**(code **)(*plVar1 + 200))(plVar1,local_13c + 2,L"// TINA HDL Macro Description End");
      (**(code **)(*plVar1 + 200))(plVar1,local_13c + 3,L"////////////////////////////////////");
      (**(code **)(*plVar1 + 200))(plVar1,local_13c + 4,0);
    }
  }
  if (local_29 == '\0') {
    local_148 = FUN_015f2d20(local_res10[0],*(undefined8 *)(param_1 + 0x8f8),&local_29);
  }
  if (local_29 == '\0') {
    local_120 = 0;
  }
  else {
    local_120 = FUN_0198b200(0,&PTR_FUN_01984d18,0,0);
    *(undefined1 *)(local_120 + 0x490) = 1;
    iVar4 = (**(code **)(**(longlong **)(local_148 + 0x30) + 0x28))
                      (*(longlong **)(local_148 + 0x30));
    local_10c = (iVar4 + 1) * 0x10;
    iVar4 = 0;
    if (*(longlong *)(local_148 + 0x40) != 0) {
      iVar4 = 0x10;
      local_10c = local_10c + 0x10;
    }
    iVar6 = (**(code **)(**(longlong **)(local_148 + 0x30) + 0x28))
                      (*(longlong **)(local_148 + 0x30));
    iVar7 = iVar4 + 0x10;
    local_13c = 0;
    if (-1 < iVar6 + -1) {
      do {
        FUN_00e0ef90(*(undefined8 *)(local_148 + 0x30),&local_48,local_13c);
        iVar7 = iVar7 + 0x10;
        in_stack_fffffffffffffe98 =
             (undefined *)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe98 >> 8),2);
        FUN_015ec400(local_120,local_48,0x10,iVar7,in_stack_fffffffffffffe98);
        local_13c = local_13c + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = (**(code **)(**(longlong **)(local_148 + 0x38) + 0x28))
                      (*(longlong **)(local_148 + 0x38));
    iVar7 = iVar4 + 0x10;
    local_13c = 0;
    if (-1 < iVar6 + -1) {
      do {
        FUN_00e0ef90(*(undefined8 *)(local_148 + 0x38),&local_48,local_13c);
        iVar7 = iVar7 + 0x10;
        in_stack_fffffffffffffe98 =
             (undefined *)((ulonglong)in_stack_fffffffffffffe98 & 0xffffffffffffff00);
        FUN_015ec400(local_120,local_48,local_10c + iVar4 + 0x10,iVar7,in_stack_fffffffffffffe98);
        local_13c = local_13c + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (*(longlong *)(local_148 + 0x40) != 0) {
      iVar6 = (**(code **)(**(longlong **)(local_148 + 0x40) + 0x28))
                        (*(longlong **)(local_148 + 0x40));
      local_f8 = iVar4 + 0x10;
      local_13c = 0;
      if (-1 < iVar6 + -1) {
        do {
          FUN_00e0ef90(*(undefined8 *)(local_148 + 0x40),&local_48,local_13c);
          local_f8 = local_f8 + 0x10;
          FUN_015ec400(local_120,local_48,local_f8,0x10,1);
          local_13c = local_13c + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    if (*(longlong *)(local_148 + 0x48) != 0) {
      iVar6 = (**(code **)(**(longlong **)(local_148 + 0x48) + 0x28))
                        (*(longlong **)(local_148 + 0x48));
      local_f8 = iVar4 + 0x10;
      local_13c = 0;
      if (-1 < iVar6 + -1) {
        do {
          FUN_00e0ef90(*(undefined8 *)(local_148 + 0x48),&local_48,local_13c);
          local_f8 = local_f8 + 0x10;
          FUN_015ec400(local_120,local_48,local_f8,local_10c + iVar4 + 0x10,3);
          local_13c = local_13c + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    FUN_00410f20(local_148);
  }
  FUN_00414560(&local_e8,0x10);
  FUN_00414560(&local_60,6);
  FUN_00414480(local_res10);
  return local_120;
}

