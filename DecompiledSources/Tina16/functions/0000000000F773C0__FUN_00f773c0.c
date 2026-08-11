/* Ghidra address: 00f773c0 */
/* Ghidra symbol: FUN_00f773c0 */


undefined1 FUN_00f773c0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  undefined8 local_e0;
  undefined1 local_c9;
  int local_c8;
  int local_c4;
  undefined8 local_c0;
  undefined1 *local_b8;
  undefined8 local_b0 [4];
  undefined1 local_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  undefined4 local_64;
  longlong *local_60;
  int local_54;
  undefined8 local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  int local_2c [3];
  
  local_b0[0] = 0;
  local_b8 = (undefined1 *)0x0;
  local_c0 = 0;
  local_78 = 0;
  local_80 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x90))(*(longlong **)(param_1 + 0x10));
  FUN_00f767f0(param_1,L">> Objects");
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
  local_c8 = 0;
  if (-1 < iVar5 + -1) {
    do {
      local_38 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),local_c8);
      FUN_00f6f150(local_38);
      FUN_00f6f410(local_38);
      cVar2 = FUN_00f6f8e0(local_38);
      if (cVar2 != '\0') {
        local_40 = (longlong *)FUN_004113f0(local_38,&PTR_FUN_00f6a950);
        *(undefined4 *)(local_40 + 0x27) = 0xffffffff;
        *(undefined1 *)((longlong)local_40 + 0x13c) = 0;
        *(undefined4 *)(local_40 + 0x28) = 0xffffffff;
        *(undefined1 *)((longlong)local_40 + 0x144) = 0;
      }
      FUN_0043f750(&local_b8,*(undefined4 *)((longlong)local_38 + 0x3c));
      FUN_00f6f640(local_38,&local_c0);
      local_e8 = (longlong *)&DAT_00f77bf4;
      local_e0 = local_c0;
      FUN_00416cd0(local_b0,4,L"obj_idx: ",local_b8);
      FUN_00f767f0(param_1,local_b0[0]);
      local_c8 = local_c8 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00f767f0(param_1,L"Next objects, pin array is cleared for all objects");
  FUN_00f767f0(param_1,0);
  FUN_00f767f0(param_1,L">> Building graph...");
  FUN_00f767f0(param_1,L"Pass1");
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
  local_c8 = 0;
  if (-1 < iVar5 + -1) {
    do {
      local_38 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),local_c8);
      cVar2 = FUN_00f6f8f0(local_38);
      if (cVar2 != '\0') {
        iVar6 = (int)local_38[0x1d];
        local_54 = 0;
        if (-1 < iVar6 + -1) {
          do {
            local_50 = (**(code **)(*local_38 + 0x20))(local_38,local_54);
            iVar7 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
            local_c4 = 0;
            if (-1 < iVar7 + -1) {
              do {
                local_48 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),local_c4);
                if (local_38 != local_48) {
                  cVar2 = FUN_00f6f8e0(local_48);
                  if (cVar2 == '\0') {
                    FUN_00f77120(auStack_108);
                  }
                  else {
                    FUN_00f76cc0(auStack_108);
                  }
                }
                local_c4 = local_c4 + 1;
                iVar7 = iVar7 + -1;
              } while (iVar7 != 0);
            }
            local_54 = local_54 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
      }
      local_c8 = local_c8 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00f767f0(param_1,0);
  FUN_00f767f0(param_1,L"After Pass1");
  FUN_00f76850(auStack_108);
  FUN_00f767f0(param_1,L"Pass2");
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
  local_c8 = 0;
  if (-1 < iVar5 + -1) {
    do {
      local_38 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),local_c8);
      cVar2 = FUN_00f6f8e0(local_38);
      if ((cVar2 == '\0') || (cVar2 = FUN_00f6f3b0(local_38), cVar2 != '\0')) {
        cVar2 = FUN_00f6f8e0(local_38);
        if (cVar2 != '\0') {
          local_40 = (longlong *)FUN_004113f0(local_38,&PTR_FUN_00f6a950);
          iVar6 = FUN_00f702b0(local_40);
          if (1 < iVar6) {
            uVar3 = FUN_00f6f1c0(local_40,0);
            local_2c[0] = FUN_00f6f1d0(local_40,0);
            local_48 = (longlong *)FUN_00f65130(*(undefined8 *)(param_1 + 0x18),uVar3);
            local_88 = (**(code **)(*local_40 + 0x20))(local_40,1);
            iVar6 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
            local_54 = 0;
            if (-1 < iVar6 + -1) {
              do {
                local_60 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),local_54);
                cVar2 = FUN_00f6f8f0(local_60);
                if (cVar2 != '\0') {
                  iVar7 = (int)local_60[0x1d];
                  local_c4 = 0;
                  if (-1 < iVar7 + -1) {
                    do {
                      local_50 = (**(code **)(*local_60 + 0x20))(local_60,local_c4);
                      cVar2 = FUN_00f606d0(&local_50,&local_88);
                      if (((cVar2 != '\0') &&
                          (iVar4 = (**(code **)(*local_60 + 0x28))(local_60), iVar4 == local_c4)) &&
                         ((char)local_60[6] != '\b')) {
                        FUN_00f6f400(local_48,local_2c[0],*(undefined4 *)((longlong)local_60 + 0x3c)
                                     ,1);
                        *(int *)((longlong)local_48 + 0x94) =
                             *(int *)((longlong)local_48 + 0x94) + 1;
                        goto LAB_00f77af6;
                      }
                      local_c4 = local_c4 + 1;
                      iVar7 = iVar7 + -1;
                    } while (iVar7 != 0);
                  }
                }
                local_54 = local_54 + 1;
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
            }
          }
        }
      }
      else {
        local_40 = (longlong *)FUN_004113f0(local_38,&PTR_FUN_00f6a950);
        local_88 = (**(code **)(*local_40 + 0x20))(local_40,1);
        local_e8 = &local_70;
        cVar2 = FUN_00f64f70(*(undefined8 *)(param_1 + 0x18),&local_88,local_40,local_90);
        if (cVar2 != '\0') {
          lVar1 = local_40[0x27];
          local_64 = *(undefined4 *)(local_70 + 0x140);
          local_48 = (longlong *)FUN_00f65130(*(undefined8 *)(param_1 + 0x18),local_64);
          if (local_48 != (longlong *)0x0) {
            FUN_00f6f1a0(local_40,1,local_64,0);
            FUN_00f70270(local_40,local_48,1,1);
            local_88 = (**(code **)(*local_40 + 0x20))(local_40,0);
            local_48 = (longlong *)FUN_00f65130(*(undefined8 *)(param_1 + 0x18),(int)lVar1);
            if ((local_48 != (longlong *)0x0) &&
               (FUN_00f6f790(local_48,&local_88,local_2c), local_2c[0] != -1)) {
              FUN_00f6f400(local_48,local_2c[0],local_64,1);
              *(int *)((longlong)local_48 + 0x94) = *(int *)((longlong)local_48 + 0x94) + 1;
            }
          }
        }
      }
LAB_00f77af6:
      local_c8 = local_c8 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00f767f0(param_1,0);
  FUN_00f767f0(param_1,L"> After Pass2");
  FUN_00f76850(auStack_108);
  FUN_00414560(&local_c0,3);
  FUN_00414560(&local_80,2);
  return local_c9;
}

