/* Ghidra address: 01b4dc60 */
/* Ghidra symbol: FUN_01b4dc60 */


void FUN_01b4dc60(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_res10 [3];
  undefined1 auStack_168 [32];
  wchar_t *local_148;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined2 local_a2;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88;
  int local_7c;
  int local_78;
  int local_74;
  int local_68;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_c0 = auStack_168;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  cVar1 = FUN_00440a20(local_res10[0],1);
  if (cVar1 == '\0') {
    local_148 = L"result-temp-s.log";
    FUN_00416cd0(&local_60,3,*(undefined8 *)(param_1 + 0x20),&DAT_01b4e5dc);
    cVar1 = FUN_00440a20(local_60,1);
    if (cVar1 == '\0') {
      uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,L"HB result not found");
      FUN_004134c0(uVar4);
    }
    else {
      (**(code **)(*local_28 + 0xd8))(local_28,local_60);
      cVar1 = FUN_01b22620(local_28,L"netlist error",&local_7c,1);
      if (cVar1 != '\0') {
        iVar2 = (**(code **)(*local_28 + 0x28))(local_28);
        local_64 = local_7c;
        if (local_7c <= iVar2 + -1) {
          iVar2 = ((iVar2 + -1) - local_7c) + 1;
          do {
            (**(code **)(*local_28 + 0x18))(local_28,&local_58,local_64);
            local_148 = (wchar_t *)CONCAT71(local_148._1_7_,3);
            FUN_00450070(&local_c8,local_58,L"Xyce",0);
            FUN_00414b50(&local_58,local_c8);
            (**(code **)(*local_30 + 0x78))(local_30,local_58);
            local_64 = local_64 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        local_148 = L"result-temp-s-pr.log";
        FUN_00416cd0(&local_d0,3,*(undefined8 *)(param_1 + 0x20),&DAT_01b4e5dc);
        (**(code **)(*local_30 + 0x100))(local_30,local_d0);
        uVar4 = FUN_0044d490(&PTR_FUN_01b4b770,1,L"Netlist error");
        FUN_004134c0(uVar4);
      }
    }
  }
  (**(code **)(*local_20 + 0xd8))(local_20,local_res10[0]);
  local_38 = FUN_010c9d50(&DAT_010c95c8,1);
  local_74 = (**(code **)(*local_20 + 0x28))(local_20);
  local_78 = 0;
  FUN_00419260(param_1 + 0x1488,&DAT_01b4ba28,1,(longlong)local_74);
  iVar2 = (**(code **)(*local_20 + 0x28))();
  local_64 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*local_20 + 0x18))(local_20,&local_d8,local_64);
      FUN_00414ad0(local_38 + 0x18,local_d8);
      *(undefined4 *)(local_38 + 8) = 1;
      if (local_64 == 0) {
        local_74 = 0;
        while (cVar1 = FUN_010c9ed0(local_38), cVar1 == '\0') {
          if (local_74 < 2) {
            FUN_010ca270(local_38,&local_40,0);
            FUN_010ca040(local_38,&local_e0);
          }
          else {
            FUN_010ca8a0(local_38,&local_40,1);
            FUN_010ca040(local_38,&local_e8,1);
            FUN_010c9e60(local_38);
            FUN_010ca040(local_38,&local_f0,1);
            local_a2 = FUN_010c9ea0(local_38);
            cVar1 = FUN_010c9e10(local_38,local_a2);
            if (cVar1 == '\0') {
              FUN_010caad0(local_38,&local_40,1);
              FUN_010ca040(local_38,&local_100,1);
              local_98 = FUN_0043fc00(local_40);
              FUN_010c9e60(local_38);
              FUN_010ca040(local_38,&local_108,1);
              FUN_010caad0(local_38,&local_40,1);
              FUN_010ca040(local_38,&local_110,1);
              uStack_94 = FUN_0043fc00(local_40);
            }
            else {
              FUN_010ca8a0(local_38,&local_40,1);
              FUN_010ca040(local_38,&local_f8,1);
              local_98 = FUN_01b4d020(param_1,local_40);
              uStack_94 = 0;
            }
            FUN_010c9e60(local_38);
            FUN_010ca040(local_38,&local_118,1);
            FUN_010ca040(local_38,&local_120,1);
            *(ulonglong *)(param_1 + 0x1070 + (longlong)local_78 * 8) = CONCAT44(uStack_94,local_98)
            ;
            local_78 = local_78 + 1;
            *(int *)(param_1 + 0x1498) = local_78;
          }
          local_74 = local_74 + 1;
        }
        local_74 = 0;
        iVar3 = (**(code **)(*local_20 + 0x28))(local_20);
        *(int *)(param_1 + 0x1494) = iVar3;
        local_68 = 0;
        if (-1 < iVar3 + -1) {
          do {
            FUN_00419260(*(longlong *)(param_1 + 0x1488) + (longlong)local_68 * 8,&DAT_01b4b9e0,1,
                         (longlong)*(int *)(param_1 + 0x1498));
            local_68 = local_68 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      else {
        iVar3 = FUN_004170c0(L"End of",*(undefined8 *)(local_38 + 0x18),1);
        if (iVar3 < 1) {
          FUN_010ca270(local_38,&local_40,0);
          FUN_010ca040(local_38,&local_128,1);
          FUN_010ca270(local_38,&local_40,0);
          local_90 = FUN_00448650(local_40,PTR_DAT_02004830);
          FUN_010ca040(local_38,&local_130,1);
          iVar3 = *(int *)(param_1 + 0x1498);
          local_68 = 0;
          if (-1 < iVar3 + -1) {
            do {
              FUN_010ca270(local_38,&local_40,0);
              local_88 = FUN_00448650(local_40,PTR_DAT_02004830);
              FUN_010ca040(local_38,&local_138,1);
              *(undefined8 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x1488) + (longlong)local_74 * 8) +
               (longlong)local_68 * 0x10) = local_90;
              *(undefined8 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x1488) + (longlong)local_74 * 8) + 8 +
               (longlong)local_68 * 0x10) = local_88;
              local_68 = local_68 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          local_74 = local_74 + 1;
        }
      }
      local_64 = local_64 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(int *)(param_1 + 0x1494) = local_74;
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00410f20(local_30);
  FUN_00410f20(local_38);
  FUN_00414560(&local_138,0xf);
  FUN_00414560(&local_60,5);
  FUN_00414480(local_res10);
  return;
}

