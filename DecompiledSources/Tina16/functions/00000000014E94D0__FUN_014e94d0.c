/* Ghidra address: 014e94d0 */
/* Ghidra symbol: FUN_014e94d0 */


void FUN_014e94d0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  int local_3c;
  undefined8 local_38;
  longlong local_30;
  
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_30 = 0;
  local_38 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  FUN_00416cd0(param_1 + 0x58,3,*(undefined8 *)(param_1 + 8),L"vhdl\\tools\\",L"src-prmtvsgen\\");
  FUN_00416ba0(param_1 + 0x60,*(undefined8 *)PTR_DAT_020052a8,L"\\tool_tmp\\");
  FUN_00416ba0(param_1 + 0xa0,*(undefined8 *)PTR_DAT_020052a8,L"\\tool_dest\\");
  FUN_00440c30(*(undefined8 *)(param_1 + 0x60));
  FUN_00440c30(*(undefined8 *)(param_1 + 0xa0));
  if ((*(int *)(param_1 + 0x9c) == 0) && (*(int *)(param_1 + 0x98) == 0)) {
    FUN_00416ba0(param_1 + 0x70,*(undefined8 *)(param_1 + 0x50),
                 L"\\vhdl\\src\\simprims\\primitive\\other\\");
    FUN_00416ba0(param_1 + 0xa8,*(undefined8 *)(param_1 + 0x50),L"\\vhdl\\src\\simprims\\");
  }
  else if ((*(int *)(param_1 + 0x9c) == 0) && (*(int *)(param_1 + 0x98) == 1)) {
    FUN_00416ba0(param_1 + 0x70,*(undefined8 *)(param_1 + 0x50),L"\\vhdl\\src\\unisims\\primitive\\"
                );
    FUN_00416ba0(param_1 + 0xa8,*(undefined8 *)(param_1 + 0x50),L"\\vhdl\\src\\unisims\\");
  }
  else if ((*(int *)(param_1 + 0x9c) == 1) && (*(int *)(param_1 + 0x98) == 0)) {
    FUN_00416ba0(param_1 + 0x70,*(undefined8 *)(param_1 + 0x50),L"\\verilog\\src\\simprims\\");
  }
  else if ((*(int *)(param_1 + 0x9c) == 1) && (*(int *)(param_1 + 0x98) == 1)) {
    FUN_00416ba0(param_1 + 0x70,*(undefined8 *)(param_1 + 0x50),L"\\verilog\\src\\unisims\\");
  }
  else {
    uVar6 = FUN_0044d490(&PTR_FUN_004334c0,1,0);
    FUN_004134c0(uVar6);
  }
  iVar3 = FUN_00416db0(*(undefined8 *)(param_1 + 0x68),L"tina");
  if (iVar3 == 0) {
    FUN_00414ad0(param_1 + 0x80,*(undefined8 *)(param_1 + 0x70));
    FUN_00416ba0(param_1 + 0x70,*(undefined8 *)(param_1 + 8),L"vhdl\\tools\\");
  }
  iVar3 = FUN_00416db0(*(undefined8 *)(param_1 + 0x68),L"tina");
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0x9c) == 0) {
      FUN_00416ba0(&local_30,*(undefined8 *)(param_1 + 0x70),L"vhdl_analyze_order");
    }
    else {
      FUN_00416ba0(&local_30,*(undefined8 *)(param_1 + 0x70),L"verilog_analyze_order");
    }
    if (*(int *)(param_1 + 0x98) == 0) {
      FUN_00416ad0(&local_30,L"_simprim_tina");
    }
    else {
      FUN_00416ad0(&local_30,L"_unisim_tina");
    }
    cVar2 = FUN_00440a20(local_30,1);
    if (cVar2 == '\0') {
      FUN_00416ba0(local_50,local_30,L" is missing");
      uVar6 = FUN_0044d490(&PTR_FUN_004334c0,1,local_50[0]);
      FUN_004134c0(uVar6);
    }
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0xd8))(*(longlong **)(param_1 + 0x10),local_30);
  }
  else {
    iVar3 = FUN_00416db0(*(undefined8 *)(param_1 + 0x68),&DAT_014ea5b8);
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x9c);
      if (iVar3 == 0) {
        FUN_00416ba0(&local_30,*(undefined8 *)(param_1 + 0x70),L"vhdl_analyze_order");
      }
      else {
        FUN_00416ba0(&local_30,*(undefined8 *)(param_1 + 0x70),L"verilog_analyze_order");
      }
      if (iVar3 == 1) {
        uVar6 = FUN_0160e970(*(undefined8 *)(param_1 + 0x70),&DAT_014ea5cc);
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),uVar6);
        FUN_00410f20(uVar6);
      }
      if (*(int *)(param_1 + 0x9c) == 0) {
        cVar2 = FUN_00440a20(local_30,1);
        if (cVar2 == '\0') {
          FUN_00416ba0(&local_58,local_30,L" is missing");
          uVar6 = FUN_0044d490(&PTR_FUN_004334c0,1,local_58);
          FUN_004134c0(uVar6);
        }
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0xd8))
                  (*(longlong **)(param_1 + 0x10),local_30);
      }
    }
    else {
      uVar6 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Invalid prefix");
      FUN_004134c0(uVar6);
    }
  }
  if ((*(int *)(param_1 + 0x9c) == 0) && (*(int *)(param_1 + 0x98) == 0)) {
    FUN_00416ba0(&local_30,*(undefined8 *)(param_1 + 0xa8),L"simprim_Vcomponents.vhd");
    cVar2 = FUN_00440a20(local_30,1);
    if (cVar2 == '\0') {
      FUN_00416ba0(&local_60,local_30,L" is missing");
      uVar6 = FUN_0044d490(&PTR_FUN_004334c0,1,local_60);
      FUN_004134c0(uVar6);
    }
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0xd8))(*(longlong **)(param_1 + 0x38),local_30);
  }
  else if ((*(int *)(param_1 + 0x9c) == 0) && (*(int *)(param_1 + 0x98) == 1)) {
    FUN_00416ba0(&local_30,*(undefined8 *)(param_1 + 0xa8),L"unisim_VCOMP.vhd");
    cVar2 = FUN_00440a20(local_30,1);
    if (cVar2 == '\0') {
      FUN_00416ba0(&local_68,local_30,L" is missing");
      uVar6 = FUN_0044d490(&PTR_FUN_004334c0,1,local_68);
      FUN_004134c0(uVar6);
    }
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0xd8))(*(longlong **)(param_1 + 0x38),local_30);
  }
  if ((*(int *)(param_1 + 0x9c) == 1) && (*(int *)(param_1 + 0x98) == 1)) {
    local_3c = 0;
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xb0))
                      (*(longlong **)(param_1 + 0x10),L"BUFGMUX.v");
    if (-1 < iVar3) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0xa0))
                (*(longlong **)(param_1 + 0x10),iVar3,local_3c);
      local_3c = local_3c + 1;
    }
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xb0))
                      (*(longlong **)(param_1 + 0x10),L"BUFGMUX_1.v");
    if (-1 < iVar3) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0xa0))
                (*(longlong **)(param_1 + 0x10),iVar3,local_3c);
      local_3c = local_3c + 1;
    }
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xb0))
                      (*(longlong **)(param_1 + 0x10),L"BUFGCTRL.v");
    if (-1 < iVar3) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0xa0))
                (*(longlong **)(param_1 + 0x10),iVar3,local_3c);
      local_3c = local_3c + 1;
    }
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xb0))
                      (*(longlong **)(param_1 + 0x10),L"FDDRRSE.v");
    if (-1 < iVar3) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0xa0))
                (*(longlong **)(param_1 + 0x10),iVar3,local_3c);
      local_3c = local_3c + 1;
    }
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xb0))
                      (*(longlong **)(param_1 + 0x10),L"FDRSE.v");
    if (-1 < iVar3) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0xa0))
                (*(longlong **)(param_1 + 0x10),iVar3,local_3c);
      local_3c = local_3c + 1;
    }
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xb0))
                      (*(longlong **)(param_1 + 0x10),L"OBUF.v");
    if (-1 < iVar3) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0xa0))
                (*(longlong **)(param_1 + 0x10),iVar3,local_3c);
      local_3c = local_3c + 1;
    }
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xb0))
                      (*(longlong **)(param_1 + 0x10),L"OBUFT.v");
    if (-1 < iVar3) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0xa0))
                (*(longlong **)(param_1 + 0x10),iVar3,local_3c);
      local_3c = local_3c + 1;
    }
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xb0))
                      (*(longlong **)(param_1 + 0x10),L"FDDRCPE.v");
    if (-1 < iVar3) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0xa0))
                (*(longlong **)(param_1 + 0x10),iVar3,local_3c);
      local_3c = local_3c + 1;
    }
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xb0))
                      (*(longlong **)(param_1 + 0x10),L"FDCPE.v");
    if (-1 < iVar3) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0xa0))
                (*(longlong **)(param_1 + 0x10),iVar3,local_3c);
      local_3c = local_3c + 1;
    }
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xb0))
                      (*(longlong **)(param_1 + 0x10),L"CLKDLL.v");
    if (-1 < iVar3) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0xa0))
                (*(longlong **)(param_1 + 0x10),iVar3,local_3c);
      local_3c = local_3c + 1;
    }
  }
  FUN_014ebec0(uVar1);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
  iVar7 = 0;
  if (-1 < iVar3 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
                (*(longlong **)(param_1 + 0x10),&local_30,iVar7);
      *(undefined1 *)(param_1 + 0x4c) = 0;
      iVar4 = FUN_00416db0(*(undefined8 *)(param_1 + 0x68),L"tina");
      if (iVar4 == 0) {
        FUN_00414ad0(param_1 + 0x78,*(undefined8 *)(param_1 + 0x80));
      }
      else {
        FUN_00414ad0(param_1 + 0x78,*(undefined8 *)(param_1 + 0x70));
      }
      FUN_00416ba0(&local_70,*(undefined8 *)(param_1 + 0x78),local_30);
      cVar2 = FUN_00440a20(local_70,1);
      if (cVar2 == '\0') {
        FUN_00416cd0(&local_78,3,*(undefined8 *)(param_1 + 0x78),local_30,L" is missing");
        uVar6 = FUN_0044d490(&PTR_FUN_004334c0,1,local_78);
        FUN_004134c0(uVar6);
      }
      FUN_00416ba0(&local_80,*(undefined8 *)(param_1 + 0x78),local_30);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0xd8))(*(longlong **)(param_1 + 0x20),local_80)
      ;
      if (((local_30 == 0) || (cVar2 = FUN_014e8250(param_1,local_30), cVar2 != '\0')) ||
         ((*(int *)(param_1 + 0x9c) == 1 &&
          (cVar2 = FUN_01b22620(*(undefined8 *)(param_1 + 0x20),L"endgenerate",&local_3c,0),
          cVar2 != '\0')))) {
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x78))
                  (*(longlong **)(param_1 + 0x18),local_30);
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x88))
                  (*(longlong **)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x90))(*(longlong **)(param_1 + 0x20));
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x78))(*(longlong **)(param_1 + 0x28),0);
        if (*(int *)(param_1 + 0x9c) == 0) {
          FUN_004170c0(&DAT_014ea7d4,local_30,1);
          FUN_00416dc0(&local_88,local_30,1);
          FUN_0043e130(&local_38,local_88);
          iVar4 = FUN_004170c0(L"INTERNAL",local_38,1);
          if ((iVar4 == 0) &&
             (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0xb0))
                                (*(longlong **)(param_1 + 0x30),local_38), iVar4 == -1)) {
            (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                      (*(longlong **)(param_1 + 0x30),local_38);
          }
        }
        iVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))
                          (*(longlong **)(param_1 + 0x28));
        if (20000 < iVar4) {
          FUN_014e85a0(param_1);
          (**(code **)(**(longlong **)(param_1 + 0x28) + 0x90))(*(longlong **)(param_1 + 0x28));
          *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
          *(undefined1 *)(param_1 + 0x4c) = 1;
          if (((*(int *)(param_1 + 0x9c) == 0) && (*(int *)(param_1 + 0x98) == 0)) &&
             (0 < *(int *)(param_1 + 0x48))) {
            iVar4 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0xb0))
                              (*(longlong **)(param_1 + 0x30),L"X_BUFGMUX");
            if (iVar4 == -1) {
              (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                        (*(longlong **)(param_1 + 0x30),L"X_BUFGMUX");
            }
            iVar4 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0xb0))
                              (*(longlong **)(param_1 + 0x30),L"X_BUFGMUX_1");
            if (iVar4 == -1) {
              (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                        (*(longlong **)(param_1 + 0x30),L"X_BUFGMUX_1");
            }
            iVar4 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0xb0))
                              (*(longlong **)(param_1 + 0x30),L"X_INV");
            if (iVar4 == -1) {
              (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                        (*(longlong **)(param_1 + 0x30),L"X_INV");
            }
            iVar4 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0xb0))
                              (*(longlong **)(param_1 + 0x30),L"X_SIM_CONFIG_V6");
            if (iVar4 == -1) {
              (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                        (*(longlong **)(param_1 + 0x30),L"X_SIM_CONFIG_V6");
            }
          }
          iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))
                            (*(longlong **)(param_1 + 0x10));
          uVar5 = FUN_0040c770(((double)iVar7 / (double)iVar4) * 100.0);
          FUN_014ebef0(uVar1,uVar5);
        }
      }
      iVar7 = iVar7 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (*(char *)(param_1 + 0x4c) == '\0') {
    FUN_014e85a0(param_1);
  }
  if (*(int *)(param_1 + 0x9c) == 0) {
    FUN_014e8c40(param_1);
  }
  FUN_014ea970(param_1);
  FUN_00416ba0(&local_90,*(undefined8 *)(param_1 + 0x60),L"ignoredcomponents.txt");
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x100))(*(longlong **)(param_1 + 0x18),local_90);
  FUN_00414560(&local_90,9);
  FUN_00414560(&local_38,2);
  return;
}

