/* Ghidra address: 01c821c0 */
/* Ghidra symbol: FUN_01c821c0 */


void FUN_01c821c0(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  longlong local_30;
  
  local_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_90 = 0;
  local_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_30 = 0;
  local_38 = 0;
  local_48 = 0;
  plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*plVar4 + 0xd8))(plVar4,*(undefined8 *)(param_1 + 200));
  iVar1 = (**(code **)(*plVar4 + 0x28))();
  iVar8 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_30,iVar8);
      iVar2 = FUN_004170c0(&DAT_01c82af0,local_30,1);
      if (0 < iVar2) {
        iVar2 = FUN_004170c0(&DAT_01c82af0,local_30,1);
        FUN_00416dc0(&local_58,local_30,1,iVar2 + -1);
        FUN_0043ea00(&local_50,local_58);
        FUN_0043e130(&local_38,local_50);
        iVar2 = FUN_004170c0(&DAT_01c82af0,local_30,1);
        uVar3 = 0;
        if (local_30 != 0) {
          uVar3 = *(undefined4 *)(local_30 + -4);
        }
        FUN_00416dc0(&local_68,local_30,iVar2 + 1,uVar3);
        FUN_0043ea00(&local_60,local_68);
        FUN_00414b50(&local_30,local_60);
        iVar2 = FUN_01c82130(param_1,0x29,local_30);
        FUN_00416dc0(&local_78,local_30,1,iVar2 + -1);
        FUN_0043ea00(&local_70,local_78);
        FUN_00414b50(&local_30,local_70);
        iVar2 = FUN_00416db0(local_38,&DAT_01c82b00);
        if (iVar2 == 0) {
          local_3c = FUN_01c81ff0(param_1,&local_30);
          FUN_01c82090(param_1,&local_48,&local_30);
          plVar5 = (longlong *)FUN_0149d160(0,&PTR_FUN_0149cf30);
          FUN_0149eb90(plVar5,local_48);
          (**(code **)(**(longlong **)(param_1 + 0x98) + 0x20))
                    (*(longlong **)(param_1 + 0x98),plVar5);
          uVar6 = FUN_0198d430(*(undefined8 *)(param_1 + 0x98));
          (**(code **)(*plVar5 + 0xe8))
                    (plVar5,uVar6,(longlong)(short)local_3c,(longlong)local_3c._2_2_);
        }
        else {
          iVar2 = FUN_00416db0(local_38,L"INPUT");
          if (iVar2 == 0) {
            local_3c = FUN_01c81ff0(param_1,&local_30);
            FUN_01c82090(param_1,&local_48,&local_30);
            iVar2 = FUN_004170c0(&DAT_01c82b30,local_48,1);
            if (iVar2 == 0) {
              (**(code **)(**(longlong **)(param_1 + 0x90) + 0x78))
                        (*(longlong **)(param_1 + 0x90),local_48);
            }
            plVar5 = (longlong *)FUN_01cf1750(0,&PTR_FUN_01cf10a8,3);
            *(undefined1 *)((longlong)plVar5 + 0xd1) = 1;
            *(undefined1 *)((longlong)plVar5 + 0xd3) = 0;
            FUN_00414ad0(plVar5 + 0x13,local_48);
            *(undefined1 *)(plVar5 + 0x15) = 1;
            FUN_01d38290(plVar5,1);
            FUN_01d04aa0(plVar5,0);
            FUN_01d07850(plVar5);
            (**(code **)(**(longlong **)(param_1 + 0x98) + 0x20))
                      (*(longlong **)(param_1 + 0x98),plVar5);
            uVar6 = FUN_0198d430(*(undefined8 *)(param_1 + 0x98));
            (**(code **)(*plVar5 + 0xe8))
                      (plVar5,uVar6,(longlong)(short)local_3c,(longlong)local_3c._2_2_);
          }
          else {
            iVar2 = FUN_00416db0(local_38,L"OUTPUT");
            if (iVar2 == 0) {
              local_3c = FUN_01c81ff0(param_1,&local_30);
              FUN_01c82090(param_1,&local_48,&local_30);
              if (*(char *)(param_1 + 0x8f) == '\0') {
                uVar3 = 4;
              }
              else {
                uVar3 = 0x3a;
              }
              plVar5 = (longlong *)FUN_01cf1750(0,&PTR_FUN_01cf10a8,uVar3);
              *(undefined1 *)((longlong)plVar5 + 0xd1) = 0;
              *(undefined1 *)((longlong)plVar5 + 0xd3) = 0;
              FUN_00414ad0(plVar5 + 0x13,local_48);
              FUN_01d38290(plVar5,1);
              FUN_01d04aa0(plVar5,0);
              FUN_01d07850(plVar5);
              (**(code **)(**(longlong **)(param_1 + 0x98) + 0x20))
                        (*(longlong **)(param_1 + 0x98),plVar5);
              uVar6 = FUN_0198d430(*(undefined8 *)(param_1 + 0x98));
              (**(code **)(*plVar5 + 0xe8))
                        (plVar5,uVar6,(longlong)(short)local_3c,(longlong)local_3c._2_2_);
            }
            else {
              iVar2 = FUN_00416db0(local_38,L"WIRE");
              if (iVar2 == 0) {
                lVar7 = FUN_00410e60(&PTR_FUN_00472dd0,1);
                while (FUN_0043ea00(&local_80,local_30), local_80 != 0) {
                  uVar3 = FUN_01c81ff0(param_1,&local_30);
                  local_3c._2_2_ = (short)((uint)uVar3 >> 0x10);
                  if (*(int *)(param_1 + 0x88) < (int)local_3c._2_2_) {
                    *(int *)(param_1 + 0x88) = (int)local_3c._2_2_;
                  }
                  local_3c = uVar3;
                  uVar6 = FUN_00b95a80(uVar3);
                  FUN_004ae7e0(lVar7,uVar6);
                }
                if (0 < *(int *)(lVar7 + 0x10)) {
                  FUN_01992db0(*(undefined8 *)(param_1 + 0x98),lVar7,0,0,0,0);
                }
                FUN_00410f20(lVar7);
              }
              else {
                iVar2 = FUN_004170c0(&PTR_LAB_01c82b74,local_38,1);
                if (iVar2 == 1) {
                  uVar3 = FUN_01c81ff0(param_1,&local_30);
                  local_3c._0_2_ = (short)uVar3;
                  local_3c._2_2_ = (short)((uint)uVar3 >> 0x10);
                  local_3c = CONCAT22(local_3c._2_2_ + -0x10,(short)local_3c + -0x18);
                  FUN_00416e20(&local_38,1,2);
                  iVar2 = FUN_0043fc50(local_38,2);
                  if (iVar2 == 2) {
                    uVar3 = 0x3eb;
                  }
                  else if (iVar2 == 3) {
                    uVar3 = 0x3f4;
                  }
                  else if (iVar2 == 4) {
                    uVar3 = 0x8f5;
                  }
                  else {
                    uVar3 = 0x3eb;
                  }
                  plVar5 = (longlong *)FUN_01cf1750(0,&PTR_FUN_01cf10a8,uVar3);
                  *(undefined1 *)((longlong)plVar5 + 0xd1) = 0;
                  *(undefined1 *)((longlong)plVar5 + 0xd3) = 0;
                  (**(code **)(*plVar5 + 0x128))(plVar5,&local_90);
                  FUN_019a44e0(*(undefined8 *)(param_1 + 0x98),&local_88,local_90,plVar5);
                  FUN_00414ad0(plVar5 + 0x13,local_88);
                  FUN_01d38290(plVar5,1);
                  FUN_01d04aa0(plVar5,0);
                  FUN_01d07850(plVar5);
                  (**(code **)(**(longlong **)(param_1 + 0x98) + 0x20))
                            (*(longlong **)(param_1 + 0x98),plVar5);
                  uVar6 = FUN_0198d430(*(undefined8 *)(param_1 + 0x98));
                  (**(code **)(*plVar5 + 0xe8))
                            (plVar5,uVar6,(longlong)(short)local_3c,(longlong)local_3c._2_2_);
                }
                else {
                  iVar2 = FUN_004170c0(&DAT_01c82b88,local_38,1);
                  if (iVar2 == 1) {
                    uVar3 = FUN_01c81ff0(param_1,&local_30);
                    local_3c._0_2_ = (short)uVar3;
                    local_3c._2_2_ = (short)((uint)uVar3 >> 0x10);
                    local_3c = CONCAT22(local_3c._2_2_ + -0x10,(short)local_3c + -0x18);
                    FUN_00416e20(&local_38,1,3);
                    iVar2 = FUN_0043fc50(local_38,2);
                    if (iVar2 == 2) {
                      uVar3 = 0x3ea;
                    }
                    else if (iVar2 == 3) {
                      uVar3 = 0x3f2;
                    }
                    else if (iVar2 == 4) {
                      uVar3 = 0x8ed;
                    }
                    else {
                      uVar3 = 0x3ea;
                    }
                    plVar5 = (longlong *)FUN_01cf1750(0,&PTR_FUN_01cf10a8,uVar3);
                    *(undefined1 *)((longlong)plVar5 + 0xd1) = 0;
                    *(undefined1 *)((longlong)plVar5 + 0xd3) = 0;
                    (**(code **)(*plVar5 + 0x128))(plVar5,&local_a0);
                    FUN_019a44e0(*(undefined8 *)(param_1 + 0x98),&local_98,local_a0,plVar5);
                    FUN_00414ad0(plVar5 + 0x13,local_98);
                    FUN_01d38290(plVar5,1);
                    FUN_01d04aa0(plVar5,0);
                    FUN_01d07850(plVar5);
                    (**(code **)(**(longlong **)(param_1 + 0x98) + 0x20))
                              (*(longlong **)(param_1 + 0x98),plVar5);
                    uVar6 = FUN_0198d430(*(undefined8 *)(param_1 + 0x98));
                    (**(code **)(*plVar5 + 0xe8))
                              (plVar5,uVar6,(longlong)(short)local_3c,(longlong)local_3c._2_2_);
                  }
                }
              }
            }
          }
        }
      }
      iVar8 = iVar8 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_a0,0xc);
  FUN_00414560(&local_38,2);
  return;
}

