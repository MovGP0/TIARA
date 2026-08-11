/* Ghidra address: 00f94a90 */
/* Ghidra symbol: FUN_00f94a90 */


void FUN_00f94a90(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_138 [32];
  wchar_t *local_118;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  wchar_t *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  wchar_t *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  char local_2d;
  
  local_40 = auStack_138;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = (wchar_t *)0x0;
  local_e0 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = (wchar_t *)0x0;
  local_a8 = 0;
  local_88 = 0;
  local_78 = 0;
  local_80 = 0;
  local_70 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = (wchar_t *)0x0;
  local_68 = 0;
  local_48 = 0;
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))(*(longlong **)(param_1 + 0x6f0));
  if (iVar3 != 4) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))(*(longlong **)(param_1 + 0x6f0))
    ;
    if (iVar3 != 8) {
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))
                        (*(longlong **)(param_1 + 0x6f0));
      if (iVar3 != 9) {
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))
                          (*(longlong **)(param_1 + 0x6f0));
        if (iVar3 != 10) {
          iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))
                            (*(longlong **)(param_1 + 0x6f0));
          if (iVar3 != 0xb) {
            iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))
                              (*(longlong **)(param_1 + 0x6f0));
            if (iVar3 != 0xc) {
              iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))
                                (*(longlong **)(param_1 + 0x6f0));
              if (iVar3 != 0xd) {
                FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e8),&local_48);
                local_2d = FUN_00f60f00(local_48);
                iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))
                                  (*(longlong **)(param_1 + 0x6f0));
                if (iVar3 != 2) {
                  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))
                                    (*(longlong **)(param_1 + 0x6f0));
                  if (iVar3 != 3) {
                    if (local_2d != '\0') {
                      FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e8),&local_88);
                      uVar4 = FUN_00f60f70(local_88);
                      *(undefined4 *)(param_1 + 0x710) = uVar4;
                      if ((*(int *)(param_1 + 0x710) < 0) || (0xff < *(int *)(param_1 + 0x710))) {
                        FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e8),&local_98);
                        uVar5 = FUN_00b89270();
                        FUN_0041ddd0(&local_a8,PTR_PTR_02004000);
                        FUN_00b8e650(uVar5,&local_a0,L"HDLStrings.Msg_FC_InvValue",local_a8);
                        local_118 = local_a0;
                        FUN_00416cd0(&local_90,3,local_98,&DAT_00f9527c);
                        uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,local_90);
                        FUN_004134c0(uVar5);
                      }
                    }
                    goto LAB_00f94f3a;
                  }
                }
                if (local_2d == '\0') {
                  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e8),&local_58);
                  uVar5 = FUN_00b89270();
                  FUN_0041ddd0(&local_68,PTR_PTR_02002978);
                  FUN_00b8e650(uVar5,&local_60,L"HDLStrings.Msg_FC_NotValidInt",local_68);
                  local_118 = local_60;
                  FUN_00416cd0(&local_50,3,local_58,&DAT_00f9527c);
                  FUN_00f94a20(param_1,local_50);
                }
                FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e8),&local_70);
                iVar3 = FUN_00f60f70(local_70);
                *(int *)(param_1 + 0x710) = iVar3;
                if (iVar3 != 2) {
                  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e8),&local_80);
                  local_118 = L"Only value=2 is applicable";
                  FUN_00416cd0(&local_78,3,local_80,&DAT_00f9527c);
                  uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,local_78);
                  FUN_004134c0(uVar5);
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00f94f3a:
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e8),&local_b0);
  FUN_00414ad0(param_1 + 0x708,local_b0);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e0),&local_b8);
  cVar1 = FUN_00f60aa0(local_b8);
  if (cVar1 == '\0') {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e0),&local_d0);
    uVar5 = FUN_00b89270();
    FUN_0041ddd0(&local_e0,PTR_PTR_02002020);
    FUN_00b8e650(uVar5,&local_d8,L"HDLStrings.Msg_FC_InvIdentifier",local_e0);
    local_118 = local_d8;
    FUN_00416cd0(&local_c8,3,local_d0,&DAT_00f9527c);
    uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,local_c8);
    FUN_004134c0(uVar5);
  }
  else {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e0),&local_c0);
    FUN_00414ad0(param_1 + 0x700,local_c0);
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))(*(longlong **)(param_1 + 0x6f0));
  *(undefined1 *)(param_1 + 0x714) = uVar2;
  FUN_00414560(&local_100,2);
  FUN_00414560(&local_f0,2);
  FUN_00414560(&local_e0,2);
  FUN_00414560(&local_d0,5);
  FUN_00414560(&local_a8,2);
  FUN_00414560(&local_98,6);
  FUN_00414560(&local_68,2);
  FUN_00414560(&local_58,3);
  return;
}

