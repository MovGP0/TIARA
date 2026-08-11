/* Ghidra address: 008f3ce0 */
/* Ghidra symbol: FUN_008f3ce0 */


longlong FUN_008f3ce0(longlong param_1,char param_2,undefined8 param_3,undefined4 param_4,
                     undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined1 *local_c0;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong *local_20;
  
  local_c0 = auStack_138;
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
  local_res8 = param_1;
  puVar1 = auStack_138;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_c0;
  }
  local_c0 = puVar1;
  *(undefined8 *)(local_res8 + 0x40) = 0;
  FUN_008f3620(local_res8,0,param_3,param_4);
  *(undefined4 *)(local_res8 + 0x38) = 0;
  local_20 = (longlong *)FUN_008e5e30(&PTR_FUN_008d2398,param_3);
  if (local_20 == (longlong *)0x0) {
    local_30 = FUN_008e5de0(&PTR_FUN_008d2398,param_5);
    if (local_30 == 0) {
      local_28 = FUN_008e5de0(&PTR_FUN_008d2398,param_6);
      if (local_28 == 0) {
        FUN_0041ddd0(&local_118,PTR_PTR_020049a8);
        uVar3 = FUN_0044d490(&PTR_FUN_00436080,1,local_118);
        FUN_004134c0(uVar3);
      }
      else {
        *(longlong *)(local_res8 + 0x40) = local_28;
      }
    }
    else {
      *(longlong *)(local_res8 + 0x40) = local_30;
    }
  }
  else {
    cVar2 = (**(code **)(*local_20 + 0x68))(*local_20,param_5);
    if (cVar2 == '\0') {
      cVar2 = FUN_008e6a90(&PTR_FUN_008d3958,param_5);
      if (cVar2 == '\0') {
        cVar2 = FUN_008e6a90(&PTR_FUN_008d3d18,param_5);
        if (cVar2 == '\0') {
          cVar2 = FUN_008e6a90(&PTR_FUN_008d5358,param_5);
          if (cVar2 == '\0') {
            cVar2 = FUN_008e6a90(&PTR_FUN_008d4498,param_5);
            if (cVar2 == '\0') {
              local_30 = FUN_008e5de0(&PTR_FUN_008d2398,param_5);
              if (local_30 == 0) {
                (**(code **)(*local_20 + 0x60))(*local_20,&local_110);
                local_a8 = local_110;
                local_b0 = local_110;
                if (local_110 != 0) {
                  local_b0 = *(longlong *)(local_110 + -8);
                }
                *(undefined4 *)(local_res8 + 0x38) = (undefined4)local_b0;
                *(longlong **)(local_res8 + 0x40) = local_20;
              }
              else {
                *(longlong *)(local_res8 + 0x40) = local_30;
              }
            }
            else {
              cVar2 = FUN_004113d0(local_20,&PTR_FUN_008d4498);
              if (cVar2 == '\0') {
                cVar2 = FUN_004113d0(local_20,&PTR_FUN_008d40d8);
                if (cVar2 == '\0') {
                  cVar2 = FUN_004113d0(local_20,&PTR_FUN_008d4858);
                  if (cVar2 == '\0') {
                    cVar2 = FUN_004113d0(local_20,&PTR_FUN_008d4c20);
                    if (cVar2 == '\0') {
                      uVar3 = FUN_008e6740(&PTR_FUN_008d4498,1);
                      *(undefined8 *)(local_res8 + 0x40) = uVar3;
                    }
                    else {
                      (**(code **)(*local_20 + 0x60))(*local_20,&local_108);
                      local_98 = local_108;
                      local_a0 = local_108;
                      if (local_108 != 0) {
                        local_a0 = *(longlong *)(local_108 + -8);
                      }
                      *(undefined4 *)(local_res8 + 0x38) = (undefined4)local_a0;
                      uVar3 = FUN_008e6740(&PTR_FUN_008d4c20,1);
                      *(undefined8 *)(local_res8 + 0x40) = uVar3;
                    }
                  }
                  else {
                    (**(code **)(*local_20 + 0x60))(*local_20,&local_100);
                    local_88 = local_100;
                    local_90 = local_100;
                    if (local_100 != 0) {
                      local_90 = *(longlong *)(local_100 + -8);
                    }
                    *(undefined4 *)(local_res8 + 0x38) = (undefined4)local_90;
                    uVar3 = FUN_008e6740(&PTR_FUN_008d4858,1);
                    *(undefined8 *)(local_res8 + 0x40) = uVar3;
                  }
                }
                else {
                  (**(code **)(*local_20 + 0x60))(*local_20,&local_f8);
                  local_78 = local_f8;
                  local_80 = local_f8;
                  if (local_f8 != 0) {
                    local_80 = *(longlong *)(local_f8 + -8);
                  }
                  *(undefined4 *)(local_res8 + 0x38) = (undefined4)local_80;
                  uVar3 = FUN_008e6740(&PTR_FUN_008d40d8,1);
                  *(undefined8 *)(local_res8 + 0x40) = uVar3;
                }
              }
              else {
                (**(code **)(*local_20 + 0x60))(*local_20,&local_f0);
                local_68 = local_f0;
                local_70 = local_f0;
                if (local_f0 != 0) {
                  local_70 = *(longlong *)(local_f0 + -8);
                }
                *(undefined4 *)(local_res8 + 0x38) = (undefined4)local_70;
                uVar3 = FUN_008e6740(&PTR_FUN_008d4498,1);
                *(undefined8 *)(local_res8 + 0x40) = uVar3;
              }
            }
          }
          else {
            cVar2 = FUN_004113d0(local_20,&PTR_FUN_008d3d18);
            if (cVar2 == '\0') {
              cVar2 = FUN_004113d0(local_20,&PTR_FUN_008d3958);
              if (cVar2 == '\0') {
                uVar3 = FUN_008e6740(&PTR_FUN_008d5358,1);
                *(undefined8 *)(local_res8 + 0x40) = uVar3;
              }
              else {
                (**(code **)(*local_20 + 0x60))(*local_20,&local_e8);
                local_58 = local_e8;
                local_60 = local_e8;
                if (local_e8 != 0) {
                  local_60 = *(longlong *)(local_e8 + -8);
                }
                *(undefined4 *)(local_res8 + 0x38) = (undefined4)local_60;
                uVar3 = FUN_008e6740(&PTR_FUN_008d4fe8,1);
                *(undefined8 *)(local_res8 + 0x40) = uVar3;
              }
            }
            else {
              (**(code **)(*local_20 + 0x60))(*local_20,&local_e0);
              local_48 = local_e0;
              local_50 = local_e0;
              if (local_e0 != 0) {
                local_50 = *(longlong *)(local_e0 + -8);
              }
              *(undefined4 *)(local_res8 + 0x38) = (undefined4)local_50;
              uVar3 = FUN_008e6740(&PTR_FUN_008d5358,1);
              *(undefined8 *)(local_res8 + 0x40) = uVar3;
            }
          }
        }
        else {
          cVar2 = FUN_004113d0(local_20,&PTR_FUN_008d3958);
          if (cVar2 != '\0') {
            FUN_0041ddd0(&local_d8,PTR_PTR_020045c0);
            uVar3 = FUN_0044d490(&PTR_FUN_00436080,1,local_d8);
            FUN_004134c0(uVar3);
          }
          uVar3 = FUN_008e6740(&PTR_FUN_008d3d18,1);
          *(undefined8 *)(local_res8 + 0x40) = uVar3;
        }
      }
      else {
        cVar2 = FUN_004113d0(local_20,&PTR_FUN_008d3d18);
        if (cVar2 != '\0') {
          FUN_0041ddd0(&local_d0,PTR_PTR_020045c0);
          uVar3 = FUN_0044d490(&PTR_FUN_00436080,1,local_d0);
          FUN_004134c0(uVar3);
        }
        uVar3 = FUN_008e6740(&PTR_FUN_008d3958,1);
        *(undefined8 *)(local_res8 + 0x40) = uVar3;
      }
    }
    else {
      (**(code **)(*local_20 + 0x60))(*local_20,&local_c8);
      local_38 = local_c8;
      local_40 = local_c8;
      if (local_c8 != 0) {
        local_40 = *(longlong *)(local_c8 + -8);
      }
      *(undefined4 *)(local_res8 + 0x38) = (undefined4)local_40;
      *(longlong **)(local_res8 + 0x40) = local_20;
    }
  }
  FUN_008f46e0(local_res8);
  if (*(longlong **)(local_res8 + 0x40) != local_20) {
    FUN_00410f20(local_20);
  }
  FUN_00414480(&local_118);
  FUN_00417840(&local_110,&DAT_00406578,7);
  FUN_00414560(&local_d8,2);
  FUN_00419430(&local_c8,&DAT_00406578);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

