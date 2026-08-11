/* Ghidra address: 014c2920 */
/* Ghidra symbol: FUN_014c2920 */


undefined1
FUN_014c2920(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5,
            undefined1 param_6)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined1 local_145;
  int local_144;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
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
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_128 = 0;
  local_130 = 0;
  local_140 = 0;
  local_138 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_e8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_98 = 0;
  local_88 = 0;
  local_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_res10[0] = param_2;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res20);
  local_145 = 1;
  plVar3 = (longlong *)FUN_014c07f0(local_res10[0],&DAT_014c3318);
  iVar1 = (**(code **)(*plVar3 + 0x28))();
  local_144 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*plVar3 + 0x18))(plVar3,local_50,local_144);
      FUN_0043ea00(&local_30,local_50[0]);
      FUN_014c24c0(&local_38,local_30);
      plVar4 = (longlong *)FUN_014c2550(local_30);
      iVar2 = FUN_0043e6d0(local_38,L"doLogin");
      if (iVar2 == 0) {
        iVar2 = (**(code **)(*plVar4 + 0x28))(plVar4);
        if (0 < iVar2) {
          (**(code **)(*plVar4 + 0x18))(plVar4,&local_58,0);
          iVar2 = 0;
          if (local_58 != 0) {
            iVar2 = *(int *)(local_58 + -4);
          }
          if (0 < iVar2) {
            (**(code **)(*plVar4 + 0x18))(plVar4,&local_60,0);
            FUN_0072d730(local_60,0xffffffff,0xffffffff);
          }
        }
        plVar4 = (longlong *)FUN_014bca40(&PTR_FUN_014bc4a8);
        iVar2 = (**(code **)(*plVar4 + 0x2d0))(plVar4);
        if (iVar2 == 1) {
          FUN_00416cd0(&local_40,3,*(undefined8 *)(param_1 + 8),L"ajaxfuncsgwt.php?",L"func=login");
          plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
          (**(code **)(*plVar5 + 0x90))(plVar5);
          FUN_014bcab0(plVar4,&local_70);
          FUN_00416ba0(&local_68,L"name=",local_70);
          (**(code **)(*plVar5 + 0x78))(plVar5,local_68);
          FUN_014bcad0(plVar4,&local_80);
          FUN_00416ba0(&local_78,L"password=",local_80);
          (**(code **)(*plVar5 + 0x78))(plVar5,local_78);
          local_145 = FUN_014c1be0(param_1,local_40,plVar5,param_5,param_6,param_3 + 1);
          FUN_00410f20(plVar5);
        }
        else {
          local_145 = 0;
        }
      }
      else {
        iVar2 = FUN_0043e6d0(local_38,L"reLogin");
        if (iVar2 == 0) {
          (**(code **)(*plVar4 + 0x18))(plVar4,&local_88,0);
          iVar2 = FUN_0072d440(local_88,3,0xc,0);
          if (iVar2 == 1) {
            uVar6 = FUN_014bca40(&PTR_FUN_014bc4a8);
            FUN_00416cd0(&local_40,3,*(undefined8 *)(param_1 + 8),L"ajaxfuncsgwt.php?",
                         L"func=login&logout=on");
            plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
            (**(code **)(*plVar4 + 0x90))(plVar4);
            FUN_014bcab0(uVar6,&local_98);
            FUN_00416ba0(&local_90,L"name=",local_98);
            (**(code **)(*plVar4 + 0x78))(plVar4,local_90);
            FUN_014bcad0(uVar6,&local_a8);
            FUN_00416ba0(&local_a0,L"password=",local_a8);
            (**(code **)(*plVar4 + 0x78))(plVar4,local_a0);
            local_145 = FUN_014c1be0(param_1,local_40,plVar4,param_5,param_6,param_3 + 1);
            FUN_00410f20(plVar4);
          }
          else {
            local_145 = 0;
          }
        }
        else {
          iVar2 = FUN_0043e6d0(local_38,L"setSSID");
          if (iVar2 == 0) {
            (**(code **)(*plVar4 + 0x18))(plVar4,&local_b0,0);
            FUN_00414ad0(param_1 + 0x18,local_b0);
            FUN_00416ba0(&local_b8,*(undefined8 *)PTR_DAT_02005010,L"\\tina.ini");
            plVar4 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_b8);
            (**(code **)(*plVar4 + 0x18))(plVar4,L"TINACloud",L"sessionid");
            FUN_00410f20(plVar4);
            local_145 = 0;
          }
          else {
            iVar2 = FUN_0043e6d0(local_38,L"loggedIn");
            if (iVar2 == 0) {
              (**(code **)(*plVar4 + 0x18))(plVar4,&local_c0,0);
              FUN_00414ad0(param_1 + 0x20,local_c0);
              iVar2 = FUN_004170c0(L"func=login",local_res20,1);
              local_145 = iVar2 != 0;
              if ((bool)local_145) {
                FUN_0041ddd0(&local_d0,&LAB_014c2908);
                (**(code **)(*plVar4 + 0x18))(plVar4,&local_e8,0);
                local_e0 = local_e8;
                local_d8 = 0x11;
                FUN_00442f70(&local_c8,local_d0,&local_e0);
                FUN_0072d440(local_c8,2,4,0);
              }
            }
            else {
              iVar2 = FUN_0043e6d0(local_38,L"showMessage");
              if (iVar2 == 0) {
                (**(code **)(*plVar4 + 0x18))(plVar4,&local_f0,0);
                FUN_0072d440(local_f0,2,4,0);
                local_145 = 0;
              }
              else {
                iVar2 = FUN_0043e6d0(local_38,L"showWarning");
                if (iVar2 == 0) {
                  (**(code **)(*plVar4 + 0x18))(plVar4,&local_f8,0);
                  FUN_0072d440(local_f8,0,4,0);
                  local_145 = 0;
                }
                else {
                  iVar2 = FUN_0043e6d0(local_38,L"showError");
                  if (iVar2 == 0) {
                    (**(code **)(*plVar4 + 0x18))(plVar4,&local_100,0);
                    FUN_0072d440(local_100,1,4,0);
                    local_145 = 0;
                  }
                  else {
                    iVar2 = FUN_0043e6d0(local_38,L"showStatus");
                    if (iVar2 == 0) {
                      if (*(longlong *)(param_1 + 0x28) == 0) {
                        (**(code **)(*plVar4 + 0x18))(plVar4,&local_110,0);
                        FUN_0072d440(local_110,2,4,0);
                      }
                      else {
                        (**(code **)(*plVar4 + 0x18))(plVar4,&local_108,0);
                        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x30),local_108);
                      }
                      local_145 = 0;
                    }
                    else {
                      iVar2 = FUN_0043e6d0(local_38,L"parent.tscUploaded");
                      if (iVar2 == 0) {
                        (**(code **)(*plVar4 + 0x18))(plVar4,&local_118,0);
                        iVar2 = 0;
                        if (local_118 != 0) {
                          iVar2 = *(int *)(local_118 + -4);
                        }
                        if (iVar2 < 1) {
                          uVar6 = FUN_00b89270();
                          FUN_0041ddd0(&local_138,&PTR_PTR_014c28f8);
                          FUN_00b8e650(uVar6,&local_130,L"cloudutils.CircuitUploaded",local_138);
                          (**(code **)(*plVar4 + 0x18))(plVar4,&local_140,1);
                          local_e0 = local_140;
                          local_d8 = 0x11;
                          FUN_00442f70(&local_128,local_130,&local_e0,0);
                          FUN_0072d440(local_128,2,4,0);
                        }
                        else {
                          (**(code **)(*plVar4 + 0x18))(plVar4,&local_120,0);
                          FUN_0072d440(local_120,1,4,0);
                        }
                        local_145 = 0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      local_144 = local_144 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(plVar3);
  FUN_00414560(&local_140,0xc);
  FUN_00414560(&local_d0,0x11);
  FUN_00414560(&local_40,3);
  FUN_00414480(local_res10);
  FUN_00414480(&local_res20);
  return local_145;
}

