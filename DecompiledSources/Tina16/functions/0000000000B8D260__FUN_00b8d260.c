/* Ghidra address: 00b8d260 */
/* Ghidra symbol: FUN_00b8d260 */


void FUN_00b8d260(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined8 local_140;
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
  undefined8 local_40 [2];
  
  local_138 = 0;
  local_140 = 0;
  local_128 = 0;
  local_130 = 0;
  local_118 = 0;
  local_120 = 0;
  local_108 = 0;
  local_110 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_d0 = 0;
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
  local_40[0] = 0;
  if ((param_3 != -1) && (*(int *)(param_1 + 0x28) != param_3)) {
    *(int *)(param_1 + 0x28) = param_3;
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x90))(*(longlong **)(param_1 + 0x18));
    cVar1 = FUN_00b8a400(param_1,param_3);
    if (cVar1 == '\0') goto LAB_00b8dad4;
    if (*(int *)(param_1 + 0x28) == 1) {
      FUN_00414ad0(&DAT_01e93e58,&PTR_DAT_00b8ddf0);
    }
    else {
      FUN_004b3cf0(*(undefined8 *)(param_1 + 0x10),local_40,*(int *)(param_1 + 0x28) + -2);
      FUN_00414ad0(&DAT_01e93e58,local_40[0]);
    }
  }
  cVar1 = FUN_005b8460(L"MessageForm_",*(undefined8 *)(param_2 + 0x10));
  if (cVar1 == '\0') {
    FUN_00b8d110(param_1,param_2);
    iVar2 = FUN_004d3e30();
    iVar7 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar5 = FUN_004d3de0(param_2,iVar7);
        cVar1 = FUN_004113d0(uVar5,&PTR_FUN_007ec678);
        if (cVar1 == '\0') {
          FUN_00b8ac60(param_1,param_2,uVar5);
        }
        else {
          uVar5 = FUN_004113f0(uVar5,&PTR_FUN_007ec678);
          iVar3 = FUN_004d3e30();
          iVar8 = 0;
          if (-1 < iVar3 + -1) {
            do {
              uVar6 = FUN_004d3de0(uVar5,iVar8);
              FUN_00b8ac60(param_1,uVar5,uVar6);
              iVar8 = iVar8 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
        }
        iVar7 = iVar7 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (((*(byte *)(param_2 + 0x6a8) & 8) == 0) && (*(longlong *)(param_2 + 0x560) != 0)) {
      (**(code **)(param_2 + 0x560))(*(undefined8 *)(param_2 + 0x568),0);
    }
  }
  else {
    cVar1 = FUN_004563b0(L"Warning",*(undefined8 *)(param_2 + 0x10));
    if (cVar1 == '\0') {
      cVar1 = FUN_004563b0(L"Error",*(undefined8 *)(param_2 + 0x10));
      if (cVar1 == '\0') {
        cVar1 = FUN_004563b0(L"Information",*(undefined8 *)(param_2 + 0x10));
        if (cVar1 == '\0') {
          cVar1 = FUN_004563b0(L"Confirm",*(undefined8 *)(param_2 + 0x10));
          if (cVar1 != '\0') {
            FUN_0064dd90(param_2,&local_80);
            FUN_00b8a7d0(param_1,&local_78,L"tina.exe.Strings.Vcl.Consts_SMsgDlgConfirm",local_80);
            FUN_0064de00(param_2,local_78);
          }
        }
        else {
          FUN_0064dd90(param_2,&local_70);
          FUN_00b8a7d0(param_1,&local_68,L"tina.exe.Strings.Vcl.Consts_SMsgDlgInformation",local_70)
          ;
          FUN_0064de00(param_2,local_68);
        }
      }
      else {
        FUN_0064dd90(param_2,&local_60);
        FUN_00b8a7d0(param_1,&local_58,L"tina.exe.Strings.Vcl.Consts_SMsgDlgError",local_60);
        FUN_0064de00(param_2,local_58);
      }
    }
    else {
      FUN_0064dd90(param_2,&local_50);
      FUN_00b8a7d0(param_1,&local_48,L"tina.exe.Strings.Vcl.Consts_SMsgDlgWarning",local_50);
      FUN_0064de00(param_2,local_48);
    }
    iVar2 = FUN_004d3e30();
    iVar7 = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar4 = FUN_004d3de0(param_2,iVar7);
        cVar1 = FUN_004113d0(lVar4,&PTR_FUN_00673008);
        if (cVar1 != '\0') {
          iVar3 = *(int *)(lVar4 + 0x4f0);
          if (iVar3 < 7) {
            if (iVar3 == 6) {
              FUN_0064dd90(lVar4,&local_90);
              FUN_00b8a7d0(param_1,&local_88,L"tina.exe.Strings.Vcl.Consts_SMsgDlgYes",local_90);
              FUN_0064de00(lVar4,local_88);
            }
            else if (iVar3 < 4) {
              if (iVar3 == 3) {
                FUN_0064dd90(lVar4,&local_d0);
                FUN_00b8a7d0(param_1,&local_c8,L"tina.exe.Strings.Vcl.Consts_SMsgDlgAbort",local_d0)
                ;
                FUN_0064de00(lVar4,local_c8);
              }
              else if (iVar3 == 0) {
                FUN_0064dd90(lVar4,&local_130);
                FUN_00b8a7d0(param_1,&local_128,L"tina.exe.Strings.Vcl.Consts_SMsgDlgHelp",local_130
                            );
                FUN_0064de00(lVar4,local_128);
              }
              else if (iVar3 == 1) {
                FUN_0064dd90(lVar4,&local_b0);
                FUN_00b8a7d0(param_1,&local_a8,L"tina.exe.Strings.Vcl.Consts_SMsgDlgOK",local_b0);
                FUN_0064de00(lVar4,local_a8);
              }
              else if (iVar3 == 2) {
                FUN_0064dd90(lVar4,&local_c0);
                FUN_00b8a7d0(param_1,&local_b8,L"tina.exe.Strings.Vcl.Consts_SMsgDlgCancel",local_c0
                            );
                FUN_0064de00(lVar4,local_b8);
              }
            }
            else if (iVar3 == 4) {
              FUN_0064dd90(lVar4,&local_e0);
              FUN_00b8a7d0(param_1,&local_d8,L"tina.exe.Strings.Vcl.Consts_SMsgDlgRetry",local_e0);
              FUN_0064de00(lVar4,local_d8);
            }
            else if (iVar3 == 5) {
              FUN_0064dd90(lVar4,&local_f0);
              FUN_00b8a7d0(param_1,&local_e8,L"tina.exe.Strings.Vcl.Consts_SMsgDlgIgnore",local_f0);
              FUN_0064de00(lVar4,local_e8);
            }
          }
          else if (iVar3 < 0xd) {
            if (iVar3 == 0xc) {
              FUN_0064dd90(lVar4,&local_100);
              FUN_00b8a7d0(param_1,&local_f8,L"tina.exe.Strings.Vcl.Consts_SMsgDlgAll",local_100);
              FUN_0064de00(lVar4,local_f8);
            }
            else if (iVar3 == 7) {
              FUN_0064dd90(lVar4,&local_a0);
              FUN_00b8a7d0(param_1,&local_98,L"tina.exe.Strings.Vcl.Consts_SMsgDlgNo",local_a0);
              FUN_0064de00(lVar4,local_98);
            }
            else if (iVar3 == 8) {
              FUN_0064dd90(lVar4,&local_140);
              FUN_00b8a7d0(param_1,&local_138,L"tina.exe.Strings.Vcl.Consts_SMsgDlgClose",local_140)
              ;
              FUN_0064de00(lVar4,local_138);
            }
          }
          else if (iVar3 == 0xd) {
            FUN_0064dd90(lVar4,&local_110);
            FUN_00b8a7d0(param_1,&local_108,L"tina.exe.Strings.Vcl.Consts_SMsgDlgNoToAll",local_110)
            ;
            FUN_0064de00(lVar4,local_108);
          }
          else if (iVar3 == 0xe) {
            FUN_0064dd90(lVar4,&local_120);
            FUN_00b8a7d0(param_1,&local_118,L"tina.exe.Strings.Vcl.Consts_SMsgDlgYesToAll",local_120
                        );
            FUN_0064de00(lVar4,local_118);
          }
        }
        iVar7 = iVar7 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
LAB_00b8dad4:
  FUN_00414480(&local_140);
  FUN_00414480(&local_138);
  FUN_00414480(&local_130);
  FUN_00414480(&local_128);
  FUN_00414480(&local_120);
  FUN_00414480(&local_118);
  FUN_00414480(&local_110);
  FUN_00414480(&local_108);
  FUN_00414480(&local_100);
  FUN_00414480(&local_f8);
  FUN_00414480(&local_f0);
  FUN_00414480(&local_e8);
  FUN_00414480(&local_e0);
  FUN_00414480(&local_d8);
  FUN_00414480(&local_d0);
  FUN_00414480(&local_c8);
  FUN_00414480(&local_c0);
  FUN_00414480(&local_b8);
  FUN_00414480(&local_b0);
  FUN_00414480(&local_a8);
  FUN_00414480(&local_a0);
  FUN_00414480(&local_98);
  FUN_00414480(&local_90);
  FUN_00414480(&local_88);
  FUN_00414480(&local_80);
  FUN_00414480(&local_78);
  FUN_00414480(&local_70);
  FUN_00414480(&local_68);
  FUN_00414480(&local_60);
  FUN_00414480(&local_58);
  FUN_00414480(&local_50);
  FUN_00414560(&local_48,2);
  return;
}

