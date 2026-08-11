/* Ghidra address: 00f42340 */
/* Ghidra symbol: FUN_00f42340 */


void FUN_00f42340(longlong param_1)

{
  char cVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
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
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  short local_2c [2];
  short local_28;
  undefined4 local_1c;
  
  local_b8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  local_40 = 0;
  local_38 = 0;
  if (*PTR_DAT_020039a8 == '\0') {
    if (*(char *)(param_1 + 0x738) == '\0') {
      if (*(int *)(*(longlong *)(param_1 + 0x6d0) + 0x4e0) < 4) {
        FUN_00849e90(*(longlong *)(param_1 + 0x6d0),local_2c,1,0);
      }
      else {
        cVar1 = FUN_013ae260(*(undefined8 *)(param_1 + 0x740));
        if ((cVar1 == '\0') || (*(int *)(*(longlong *)(param_1 + 0x6d0) + 0x4e0) < 5)) {
          FUN_00849e90(*(undefined8 *)(param_1 + 0x6d0),local_2c,1,3);
        }
        else {
          FUN_00849e90(*(undefined8 *)(param_1 + 0x6d0),local_2c,1,4);
        }
      }
    }
    else {
      FUN_00849e90(*(undefined8 *)(param_1 + 0x6d0),local_2c,1,0);
    }
    iVar4 = FUN_00429b10(local_2c);
    if (iVar4 == 0) {
      local_1c = CONCAT22(local_28 + 7,local_2c[0] + 10);
      uVar5 = FUN_0065b870(*(undefined8 *)(param_1 + 0x6d0));
      lVar6 = (longlong)local_1c;
      thunk_FUN_0413e052(uVar5,0x201,0,lVar6);
      uVar5 = FUN_0065b870(*(undefined8 *)(param_1 + 0x6d0));
      thunk_FUN_0413e052(uVar5,0x202,0,lVar6);
    }
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x6b8);
    FUN_0082bc30(lVar6,0);
    *(undefined4 *)(lVar6 + 0x4f0) = 0;
    uVar5 = FUN_00b89270();
    FUN_00b8e520(uVar5,&local_40,0x130);
    FUN_0064de00(lVar6,local_40);
    FUN_0082ba70(lVar6,0);
    FUN_0082bff0(lVar6,0xffffffff);
    lVar6 = *(longlong *)(param_1 + 0x6d0);
    FUN_008483b0(lVar6,1);
    FUN_00848a30(lVar6,0);
    *(undefined8 *)PTR_DAT_02005518 = *(undefined8 *)(param_1 + 0x740);
    *PTR_DAT_02002cb8 = 1;
    FUN_00849e90(lVar6,local_2c,*(undefined4 *)(lVar6 + 0x4a8),*(undefined4 *)(lVar6 + 0x4ac));
    local_1c = CONCAT22(local_28 + 7,local_2c[0] + 10);
    uVar5 = FUN_0065b870(*(undefined8 *)(param_1 + 0x6d0));
    lVar6 = (longlong)local_1c;
    thunk_FUN_0413e052(uVar5,0x201,0,lVar6);
    uVar5 = FUN_0065b870(*(undefined8 *)(param_1 + 0x6d0));
    thunk_FUN_0413e052(uVar5,0x202,0,lVar6);
  }
  uVar5 = FUN_019a4600();
  FUN_019af250(uVar5);
  uVar5 = FUN_019a4600();
  FUN_019af200(uVar5,*(undefined8 *)(param_1 + 0x740));
  uVar5 = FUN_00b89270();
  FUN_00b8d260(uVar5,param_1,0xffffffff);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x720),&local_38);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0xf8))(*(longlong **)(param_1 + 0x740));
  cVar1 = FUN_01d420a0(uVar2);
  if (cVar1 == '\0') {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0xf8))(*(longlong **)(param_1 + 0x740));
    cVar1 = FUN_01d42070(uVar2);
    if (cVar1 == '\0') {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0xf8))
                        (*(longlong **)(param_1 + 0x740));
      cVar1 = FUN_01d420d0(uVar2);
      if (cVar1 == '\0') {
        sVar3 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0xf8))
                          (*(longlong **)(param_1 + 0x740));
        if (sVar3 != 0xb7) {
          sVar3 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0xf8))
                            (*(longlong **)(param_1 + 0x740));
          if (sVar3 != 0xb4) {
            sVar3 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0xf8))
                              (*(longlong **)(param_1 + 0x740));
            if (sVar3 != 0xc4) {
              uVar2 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0xf8))
                                (*(longlong **)(param_1 + 0x740));
              cVar1 = FUN_01d420e0(uVar2);
              if (cVar1 == '\0') {
                sVar3 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0xf8))
                                  (*(longlong **)(param_1 + 0x740));
                if (sVar3 != 0xb8) {
                  sVar3 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0xf8))
                                    (*(longlong **)(param_1 + 0x740));
                  if (sVar3 == 0xbb) {
                    uVar5 = FUN_00b89270();
                    FUN_0041ddd0(&local_90,&PTR_PTR_00f42240);
                    FUN_00b8e650(uVar5,&local_88,L"Proped.sLoadS5PFile",local_90);
                    FUN_0064de00(*(undefined8 *)(param_1 + 0x720),local_88);
                  }
                  else {
                    sVar3 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0xf8))
                                      (*(longlong **)(param_1 + 0x740));
                    if (sVar3 == 0xbc) {
                      uVar5 = FUN_00b89270();
                      FUN_0041ddd0(&local_a0,&PTR_PTR_00f42250);
                      FUN_00b8e650(uVar5,&local_98,L"Proped.sLoadS6PFile",local_a0);
                      FUN_0064de00(*(undefined8 *)(param_1 + 0x720),local_98);
                    }
                    else {
                      sVar3 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0xf8))
                                        (*(longlong **)(param_1 + 0x740));
                      if (sVar3 == 0xbd) {
                        uVar5 = FUN_00b89270();
                        FUN_0041ddd0(&local_b0,&PTR_PTR_00f42260);
                        FUN_00b8e650(uVar5,&local_a8,L"Proped.sLoadS7PFile",local_b0);
                        FUN_0064de00(*(undefined8 *)(param_1 + 0x720),local_a8);
                      }
                      else {
                        sVar3 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0xf8))
                                          (*(longlong **)(param_1 + 0x740));
                        if (sVar3 == 0xc2) {
                          uVar5 = FUN_00b89270();
                          FUN_0041ddd0(&local_c0,&PTR_PTR_00f42270);
                          FUN_00b8e650(uVar5,&local_b8,L"Proped.sLoadS8PFile",local_c0);
                          FUN_0064de00(*(undefined8 *)(param_1 + 0x720),local_b8);
                        }
                        else {
                          FUN_0064de00(*(undefined8 *)(param_1 + 0x720),local_38);
                        }
                      }
                    }
                  }
                  goto LAB_00f42ac8;
                }
              }
              uVar5 = FUN_00b89270();
              FUN_0041ddd0(&local_80,&PTR_PTR_00f42230);
              FUN_00b8e650(uVar5,&local_78,L"Proped.sLoadS4PFile",local_80);
              FUN_0064de00(*(undefined8 *)(param_1 + 0x720),local_78);
              goto LAB_00f42ac8;
            }
          }
        }
      }
      uVar5 = FUN_00b89270();
      FUN_0041ddd0(&local_70,&PTR_PTR_00f42220);
      FUN_00b8e650(uVar5,&local_68,L"Proped.sLoadS3PFile",local_70);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x720),local_68);
    }
    else {
      uVar5 = FUN_00b89270();
      FUN_0041ddd0(&local_60,&PTR_PTR_00f42200);
      FUN_00b8e650(uVar5,&local_58,L"Proped.sLoadS1PFile",local_60);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x720),local_58);
    }
  }
  else {
    uVar5 = FUN_00b89270();
    FUN_0041ddd0(&local_50,&PTR_PTR_00f42210);
    FUN_00b8e650(uVar5,&local_48,L"Proped.sLoadS2PFile",local_50);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x720),local_48);
  }
LAB_00f42ac8:
  if (*(char *)(param_1 + 0x738) != '\0') {
    uVar5 = thunk_FUN_04128719();
    *(undefined8 *)(param_1 + 0x778) = uVar5;
    uVar5 = FUN_0065b870();
    uVar5 = FUN_007f94c0(uVar5);
    *(undefined8 *)(param_1 + 0x770) = uVar5;
  }
  FUN_00414560(&local_c0,0x12);
  return;
}

