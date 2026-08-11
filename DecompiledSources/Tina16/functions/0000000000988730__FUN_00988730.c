/* Ghidra address: 00988730 */
/* Ghidra symbol: FUN_00988730 */


/* WARNING: Removing unreachable block (ram,0x00988956) */

undefined8 FUN_00988730(undefined8 param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  longlong *plVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_b8;
  wchar_t *local_b0;
  undefined1 local_a8;
  undefined1 *local_a0;
  uint local_8c;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  uint local_6c;
  longlong local_68;
  int local_60;
  int local_5c;
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined8 local_30 [4];
  
  local_a0 = auStack_118;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_30[0] = 0;
  local_38 = 0;
  puVar2 = auStack_118;
  if ((*(int *)(param_4 + 0x10) != 2) && (puVar2 = auStack_118, *(int *)(param_4 + 0x10) != 3)) {
    local_b0 = L"substring";
    local_a8 = 0x11;
    local_f8 = 0;
    uVar5 = FUN_0044d530(&PTR_FUN_00901df0,1,L"Arguments mismatch error in %s().",&local_b0);
    FUN_004134c0(uVar5);
    puVar2 = local_a0;
  }
  local_a0 = puVar2;
  local_48 = (longlong *)0x0;
  local_50 = (longlong *)0x0;
  if (*(int *)(param_4 + 0x10) == 0) {
    FUN_00594f90();
  }
  local_40 = (longlong *)
             (**(code **)(*(longlong *)**(undefined8 **)(param_4 + 8) + 0x40))
                       ((longlong *)**(undefined8 **)(param_4 + 8),param_1,param_2,param_3);
  if (*(uint *)(param_4 + 0x10) < 2) {
    FUN_00594f90();
  }
  plVar1 = *(longlong **)(*(longlong *)(param_4 + 8) + 8);
  local_48 = (longlong *)(**(code **)(*plVar1 + 0x40))(plVar1,param_1,param_2,param_3);
  cVar3 = FUN_004113d0(local_40,&PTR_FUN_00927588);
  if (cVar3 == '\0') {
    local_b0 = L"substring";
    local_a8 = 0x11;
    local_f8 = 0;
    uVar5 = FUN_0044d530(&PTR_FUN_00901df0,1,
                         L"Argument mismatch error in %s(): Expression does not evaluate to string."
                         ,&local_b0);
    FUN_004134c0(uVar5);
  }
  cVar3 = FUN_004113d0(local_48,&PTR_FUN_00927180);
  if (cVar3 == '\0') {
    local_b0 = L"substring";
    local_a8 = 0x11;
    local_f8 = 0;
    uVar5 = FUN_0044d530(&PTR_FUN_00901df0,1,
                         L"Argument mismatch error in %s(): Expression does not evaluate to number."
                         ,&local_b0);
    FUN_004134c0(uVar5);
  }
  if (*(int *)(param_4 + 0x10) == 3) {
    plVar1 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x10);
    local_50 = (longlong *)(**(code **)(*plVar1 + 0x40))(plVar1,param_1,param_2,param_3);
    cVar3 = FUN_004113d0(local_50,&PTR_FUN_00927180);
    if (cVar3 == '\0') {
      local_b0 = L"substring";
      local_a8 = 0x11;
      local_f8 = 0;
      uVar5 = FUN_0044d530(&PTR_FUN_00901df0,1,
                           L"Argument mismatch error in %s(): Expression does not evaluate to number."
                           ,&local_b0);
      FUN_004134c0(uVar5);
    }
    (**(code **)(*local_48 + 0x100))(local_48);
    cVar3 = FUN_00526f10();
    if (cVar3 == '\0') {
      (**(code **)(*local_48 + 0x100))(local_48);
      cVar3 = FUN_00526f30();
      if (cVar3 == '\0') {
        (**(code **)(*local_50 + 0x100))(local_50);
        cVar3 = FUN_00526f10();
        if (cVar3 == '\0') {
          (**(code **)(*local_50 + 0x100))(local_50);
          cVar3 = FUN_00526f30();
          if (cVar3 == '\0') {
            (**(code **)(*local_48 + 0x100))(local_48);
            FUN_009489a0();
            local_78 = FUN_0040c840();
            local_80 = local_78;
            if (local_78 < 2) {
              local_80 = 1;
            }
            local_5c = (int)local_80;
            (**(code **)(*local_48 + 0x100))(local_48);
            dVar6 = (double)FUN_009489a0();
            (**(code **)(*local_50 + 0x100))(local_50);
            dVar7 = (double)FUN_009489a0();
            local_60 = FUN_0040c840(dVar6 + dVar7);
            local_60 = local_60 - local_5c;
            (**(code **)(*local_40 + 0x108))(local_40,&local_d0);
            FUN_00416430(&local_c8,local_d0,local_5c,local_60);
            local_58 = FUN_009906d0(&PTR_FUN_00927588,1,local_c8);
          }
          else {
            (**(code **)(*local_50 + 0x100))(local_50);
            cVar3 = FUN_00527050();
            if (cVar3 == '\x01') {
              local_30[0] = 0;
              (**(code **)(*local_40 + 0x108))(local_40,local_30);
              (**(code **)(*local_40 + 0x108))(local_40,&local_b8);
              local_68 = local_b8;
              local_6c = 0;
              if (local_b8 != 0) {
                local_6c = *(uint *)(local_b8 + -4) >> 1;
              }
              (**(code **)(*local_48 + 0x100))(local_48);
              FUN_009489a0();
              uVar4 = FUN_0040c840();
              FUN_00416430(&local_c0,local_30[0],uVar4,local_6c);
              local_58 = FUN_009906d0(&PTR_FUN_00927588,1,local_c0);
              FUN_00414520(local_30);
            }
            else {
              local_58 = FUN_009906d0(&PTR_FUN_00927588,1,0);
            }
          }
          goto code_r0x00988e43;
        }
      }
    }
    local_58 = FUN_009906d0(&PTR_FUN_00927588,1,0);
  }
  else {
    (**(code **)(*local_48 + 0x100))(local_48);
    cVar3 = FUN_00526f10();
    if (cVar3 == '\0') {
      (**(code **)(*local_48 + 0x100))(local_48);
      cVar3 = FUN_00526f30();
      if (cVar3 == '\0') {
        local_38 = 0;
        (**(code **)(*local_40 + 0x108))(local_40,&local_38);
        (**(code **)(*local_40 + 0x108))(local_40,&local_e0);
        local_88 = local_e0;
        local_8c = 0;
        if (local_e0 != 0) {
          local_8c = *(uint *)(local_e0 + -4) >> 1;
        }
        (**(code **)(*local_48 + 0x100))(local_48);
        FUN_009489a0();
        uVar4 = FUN_0040c840();
        FUN_00416430(&local_e8,local_38,uVar4,local_8c);
        local_58 = FUN_009906d0(&PTR_FUN_00927588,1,local_e8);
        FUN_00414520(&local_38);
      }
      else {
        (**(code **)(*local_48 + 0x100))(local_48);
        cVar3 = FUN_00527050();
        if (cVar3 == '\x01') {
          local_58 = FUN_009906d0(&PTR_FUN_00927588,1,0);
        }
        else {
          (**(code **)(*local_40 + 0x108))(local_40,&local_d8);
          local_58 = FUN_009906d0(&PTR_FUN_00927588,1,local_d8);
        }
      }
    }
    else {
      local_58 = FUN_009906d0(&PTR_FUN_00927588,1,0);
    }
  }
code_r0x00988e43:
  FUN_00410f20(local_40);
  FUN_00410f20(local_48);
  FUN_00410f20(local_50);
  FUN_004145c0(&local_e8,7);
  return local_58;
}

