/* Ghidra address: 01483350 */
/* Ghidra symbol: FUN_01483350 */


void FUN_01483350(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined1 *local_110;
  undefined8 local_100;
  bool local_f1;
  undefined8 *local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  uint local_cc;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 *local_90;
  undefined8 local_88;
  uint local_80;
  uint local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_110 = auStack_138;
  local_118 = (undefined8 *)0x0;
  local_88 = 0;
  local_90 = (undefined8 *)0x0;
  local_30 = 0;
  local_38 = 0;
  FUN_00414480(&local_30);
  FUN_005d10a0(param_1,0,0);
  FUN_005d1300(&local_30,param_1);
  uVar3 = FUN_00f30500(local_30,0,0);
  local_40 = FUN_004113f0(uVar3,&LAB_00f23b78);
  FUN_00414480(&local_30);
  FUN_00414480(&local_38);
  FUN_005d10a0(param_2,0,0);
  FUN_005d1300(&local_38,param_2);
  uVar3 = FUN_00f30500(local_38,0,0);
  local_48 = FUN_004113f0(uVar3,&LAB_00f23b78);
  FUN_00414480(&local_38);
  local_50 = FUN_014860a0(local_40,L"connections");
  local_58 = FUN_014860a0(local_48,L"connections");
  local_68 = FUN_00f309b0(&LAB_00f23b78,1);
  iVar5 = *(int *)(*(longlong *)(local_50 + 0x10) + 0x10);
  local_7c = 0;
  if (-1 < iVar5 + -1) {
    do {
      local_d8 = *(longlong *)(local_50 + 0x10);
      if (*(uint *)(local_d8 + 0x10) <= local_7c) {
        FUN_00594f90();
      }
      plVar4 = *(longlong **)
                (*(longlong *)(*(longlong *)(local_d8 + 8) + (longlong)(int)local_7c * 8) + 0x10);
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_88);
      cVar1 = FUN_01488350(local_58,local_88,&local_b8);
      if (cVar1 != '\0') {
        uVar3 = FUN_00f30cb0(local_50,local_88);
        local_78 = FUN_004113f0(uVar3,&LAB_00f23b78);
        local_98 = FUN_014860c0(local_78,L"comps");
        local_a0 = FUN_014860c0(local_b8,L"comps");
        local_a8 = FUN_00f33100(&LAB_00f256b8,1);
        iVar6 = *(int *)(*(longlong *)(local_98 + 0x10) + 0x10);
        local_80 = 0;
        if (-1 < iVar6 + -1) {
          do {
            local_e0 = *(longlong *)(local_98 + 0x10);
            if (*(uint *)(local_e0 + 0x10) <= local_80) {
              FUN_00594f90();
            }
            plVar4 = (longlong *)
                     FUN_004113f0(*(undefined8 *)
                                   (*(longlong *)(local_e0 + 8) + (longlong)(int)local_80 * 8),
                                  &LAB_00f22a90);
            (**(code **)(*plVar4 + 0x18))(plVar4,&local_90);
            iVar7 = *(int *)(*(longlong *)(local_a0 + 0x10) + 0x10);
            local_cc = 0;
            if (-1 < iVar7 + -1) {
              do {
                local_e8 = *(longlong *)(local_a0 + 0x10);
                if (*(uint *)(local_e8 + 0x10) <= local_cc) {
                  FUN_00594f90();
                }
                plVar4 = (longlong *)
                         FUN_004113f0(*(undefined8 *)
                                       (*(longlong *)(local_e8 + 8) + (longlong)(int)local_cc * 8),
                                      &LAB_00f22a90);
                (**(code **)(*plVar4 + 0x18))(plVar4,&local_118);
                local_f0 = local_118;
                if (local_118 == local_90) {
                  local_f1 = true;
                }
                else if ((local_118 == (undefined8 *)0x0) || (local_90 == (undefined8 *)0x0)) {
                  local_f1 = false;
                }
                else {
                  iVar2 = FUN_0043e420(local_118,local_90);
                  local_f1 = iVar2 == 0;
                }
                if (local_f1 != false) {
                  local_100 = FUN_00f2e9d0(&LAB_00f22a90,1,local_90);
                  FUN_00f335b0(local_a8,local_100);
                  break;
                }
                local_cc = local_cc + 1;
                iVar7 = iVar7 + -1;
              } while (iVar7 != 0);
            }
            local_80 = local_80 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        local_70 = FUN_00f309b0(&LAB_00f23b78,1);
        FUN_00f30e70(local_70,L"comps",local_a8);
        cVar1 = FUN_01486310(local_78,L"classIDs",&local_b0);
        if (cVar1 != '\0') {
          uVar3 = FUN_00f33b20(local_b0);
          uVar3 = FUN_004113f0(uVar3,&LAB_00f256b8);
          FUN_00f30e70(local_70,L"classIDs",uVar3);
        }
        cVar1 = FUN_014883d0(local_78,L"pin_count",&local_bc);
        if (cVar1 != '\0') {
          uVar3 = FUN_00f2f8e0(&LAB_00f22f08,1,local_bc);
          FUN_00f30e70(local_70,L"pin_count",uVar3);
        }
        cVar1 = FUN_014883d0(local_78,L"classID",&local_c0);
        if (cVar1 != '\0') {
          uVar3 = FUN_00f2f8e0(&LAB_00f22f08,1,local_c0);
          FUN_00f30e70(local_70,L"classID",uVar3);
        }
        FUN_00f30e70(local_68,local_88,local_70);
      }
      local_7c = local_7c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_60 = FUN_00f309b0(&LAB_00f23b78,1);
  FUN_00f30e70(local_60,L"connections",local_68);
  FUN_0147d210(param_3,local_60);
  FUN_00410f20(local_40);
  FUN_00410f20(local_48);
  FUN_00410f20(local_60);
  FUN_00414480(&local_118);
  FUN_00414560(&local_90,2);
  FUN_00414560(&local_38,2);
  return;
}

