/* Ghidra address: 01b4d0a0 */
/* Ghidra symbol: FUN_01b4d0a0 */


void FUN_01b4d0a0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 local_res10 [3];
  undefined1 auStack_588 [32];
  wchar_t *local_568;
  undefined8 local_550;
  undefined8 local_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined8 local_528;
  undefined8 local_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined8 local_508;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined1 *local_4c0;
  undefined2 local_4aa;
  undefined8 auStack_4a0 [129];
  undefined4 local_98;
  undefined4 uStack_94;
  double local_90;
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
  
  local_4c0 = auStack_588;
  local_550 = 0;
  local_548 = 0;
  local_540 = 0;
  local_538 = 0;
  local_530 = 0;
  local_528 = 0;
  local_520 = 0;
  local_518 = 0;
  local_510 = 0;
  local_508 = 0;
  local_500 = 0;
  local_4f8 = 0;
  local_4f0 = 0;
  local_4e8 = 0;
  local_4e0 = 0;
  local_4d8 = 0;
  local_4d0 = 0;
  local_4c8 = 0;
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
    local_568 = L"result-temp-s.log";
    FUN_00416cd0(&local_60,3,*(undefined8 *)(param_1 + 0x20),&DAT_01b4db1c);
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
            local_568 = (wchar_t *)CONCAT71(local_568._1_7_,3);
            FUN_00450070(&local_4c8,local_58,L"Xyce",0);
            FUN_00414b50(&local_58,local_4c8);
            (**(code **)(*local_30 + 0x78))(local_30,local_58);
            local_64 = local_64 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        local_568 = L"result-temp-s-pr.log";
        FUN_00416cd0(&local_4d0,3,*(undefined8 *)(param_1 + 0x20),&DAT_01b4db1c);
        (**(code **)(*local_30 + 0x100))(local_30,local_4d0);
        uVar4 = FUN_0044d490(&PTR_FUN_01b4b770,1,L"Netlist error");
        FUN_004134c0(uVar4);
      }
    }
  }
  cVar1 = FUN_00440a20(local_res10[0],1);
  if (cVar1 == '\0') {
    uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,L"HB result not found");
    FUN_004134c0(uVar4);
  }
  (**(code **)(*local_20 + 0xd8))(local_20,local_res10[0]);
  local_38 = FUN_010c9d50(&DAT_010c95c8,1);
  local_74 = (**(code **)(*local_20 + 0x28))(local_20);
  local_78 = 0;
  uVar4 = FUN_00409570((longlong)(local_74 << 4));
  *(undefined8 *)(param_1 + 0x1480) = uVar4;
  iVar2 = (**(code **)(*local_20 + 0x28))();
  local_64 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*local_20 + 0x18))(local_20,&local_4d8,local_64);
      FUN_00414ad0(local_38 + 0x18,local_4d8);
      *(undefined4 *)(local_38 + 8) = 1;
      if (local_64 == 0) {
        local_74 = 0;
        while (cVar1 = FUN_010c9ed0(local_38), cVar1 == '\0') {
          if (local_74 < 2) {
            FUN_010ca270(local_38,&local_40,0);
            FUN_010ca040(local_38,&local_4e0);
          }
          else {
            FUN_010ca8a0(local_38,&local_40,1);
            FUN_010ca040(local_38,&local_4e8,1);
            FUN_0043e130(&local_50,local_40);
            FUN_010c9e60(local_38);
            FUN_010ca040(local_38,&local_4f0,1);
            FUN_010ca8a0(local_38,&local_40,1);
            FUN_010ca040(local_38,&local_4f8,1);
            FUN_010c9e60(local_38);
            FUN_010ca040(local_38,&local_500,1);
            local_4aa = FUN_010c9ea0(local_38);
            cVar1 = FUN_010c9e10(local_38,local_4aa);
            if (cVar1 == '\0') {
              FUN_010caad0(local_38,&local_40,1);
              FUN_010ca040(local_38,&local_510,1);
              local_98 = FUN_0043fc00(local_40);
              FUN_010c9e60(local_38);
              FUN_010ca040(local_38,&local_518,1);
              FUN_010caad0(local_38,&local_40,1);
              FUN_010ca040(local_38,&local_520,1);
              uStack_94 = FUN_0043fc00(local_40);
            }
            else {
              FUN_010ca8a0(local_38,&local_40,1);
              FUN_010ca040(local_38,&local_508,1);
              local_98 = FUN_01b4d020(param_1,local_40);
              uStack_94 = 0;
            }
            FUN_010c9e60(local_38);
            FUN_010ca040(local_38,&local_528,1);
            FUN_010c9e60(local_38);
            FUN_010ca040(local_38,&local_530,1);
            FUN_010ca040(local_38,&local_538,1);
            iVar3 = FUN_00416db0(local_50,&PTR_DAT_01b4dc30);
            if (iVar3 == 0) {
              auStack_4a0[local_78] = CONCAT44(uStack_94,local_98);
              local_78 = local_78 + 1;
            }
          }
          local_74 = local_74 + 1;
        }
        local_74 = 0;
      }
      else {
        iVar3 = FUN_004170c0(L"End of",*(undefined8 *)(local_38 + 0x18),1);
        if (iVar3 < 1) {
          FUN_010ca270(local_38,&local_40,0);
          FUN_010ca040(local_38,&local_540,1);
          FUN_010ca270(local_38,&local_40,0);
          local_90 = (double)FUN_00448650(local_40,PTR_DAT_02004830);
          FUN_010ca040(local_38,&local_548,1);
          if (0.0 <= local_90) {
            lVar5 = (longlong)local_74;
            *(double *)(*(longlong *)(param_1 + 0x1480) + lVar5 * 0x10) = local_90;
            uVar4 = FUN_00409570((longlong)(local_78 << 4));
            *(undefined8 *)(*(longlong *)(param_1 + 0x1480) + 8 + lVar5 * 0x10) = uVar4;
            iVar3 = local_78 * 2;
            local_68 = 0;
            if (-1 < iVar3 + -1) {
              do {
                FUN_010ca270(local_38,&local_40,0);
                local_88 = FUN_00448650(local_40,PTR_DAT_02004830);
                FUN_010ca040(local_38,&local_550,1);
                if (local_68 % 2 == 0) {
                  *(undefined8 *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x1480) + 8 + (longlong)local_74 * 0x10) +
                   (longlong)(local_68 / 2) * 0x10) = local_88;
                }
                else {
                  *(undefined8 *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x1480) + 8 + (longlong)local_74 * 0x10) +
                    8 + (longlong)(local_68 / 2) * 0x10) = local_88;
                }
                local_68 = local_68 + 1;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
            local_74 = local_74 + 1;
          }
        }
      }
      local_64 = local_64 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(int *)(param_1 + 0x1490) = local_74;
  *(int *)(param_1 + 0x149c) = local_78;
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00410f20(local_30);
  FUN_00410f20(local_38);
  FUN_00414560(&local_550,0x12);
  FUN_00414560(&local_60,5);
  FUN_00414480(local_res10);
  return;
}

