/* Ghidra address: 0107e580 */
/* Ghidra symbol: FUN_0107e580 */


void FUN_0107e580(longlong param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_188 [32];
  wchar_t *local_168;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
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
  undefined1 *local_60;
  undefined8 local_58;
  undefined1 local_50 [12];
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_1c;
  
  local_60 = auStack_188;
  local_150 = 0;
  local_158 = 0;
  local_148 = 0;
  local_140 = 0;
  local_130 = 0;
  local_138 = 0;
  local_120 = 0;
  local_128 = 0;
  local_110 = 0;
  local_118 = 0;
  local_100 = 0;
  local_108 = 0;
  local_f8 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_98 = 0;
  local_80 = 0;
  local_88 = 0;
  local_78 = 0;
  local_68 = 0;
  local_70 = 0;
  local_38 = 0;
  local_28 = 0;
  local_40 = 0;
  local_30 = 0;
  if (*(int *)(param_1 + 0xad8) == 4) {
    local_168 = L"Makefile";
    local_60 = auStack_188;
    FUN_00416cd0(&local_38,3,*(undefined8 *)PTR_DAT_020049a0,L"\\Vhdl\\MCU\\C Compiler\\AVR\\");
    cVar2 = FUN_00440a20(local_38,1);
    if (cVar2 == '\0') {
      uVar4 = FUN_00b89270();
      FUN_0041ddd0(&local_d0,PTR_PTR_02001d40);
      FUN_00b8e650(uVar4,&local_c8,L"HDLStrings.Msg_MakeFileTemplateNotFound",local_d0);
      uVar4 = FUN_0044d490(&PTR_FUN_015ef458,1,local_c8);
      FUN_004134c0(uVar4);
      puVar1 = local_60;
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0xbb0) + 0xd8))
                (*(longlong **)(param_1 + 0xbb0),local_38);
      local_1c = (**(code **)(**(longlong **)(param_1 + 0xbb0) + 0xb0))
                           (*(longlong **)(param_1 + 0xbb0),L"# MCU name");
      if (local_1c == -1) {
        uVar4 = FUN_00b89270();
        FUN_0041ddd0(&local_70,PTR_PTR_02005170);
        FUN_00b8e650(uVar4,&local_68,L"HDLStrings.Msg_InvalidMakefileTemplate",local_70);
        uVar4 = FUN_0044d490(&PTR_FUN_015ef458,1,local_68);
        FUN_004134c0(uVar4);
      }
      (**(code **)(**(longlong **)(param_1 + 0xbb0) + 0x18))
                (*(longlong **)(param_1 + 0xbb0),&local_28,local_1c + 1);
      FUN_0043e1a0(&local_78,*(undefined8 *)(param_1 + 0xb38));
      FUN_00416ad0(&local_28,local_78);
      (**(code **)(**(longlong **)(param_1 + 0xbb0) + 0x40))
                (*(longlong **)(param_1 + 0xbb0),local_1c + 1,local_28);
      local_1c = (**(code **)(**(longlong **)(param_1 + 0xbb0) + 0xb0))
                           (*(longlong **)(param_1 + 0xbb0),L"# Processor frequency.");
      if (local_1c == -1) {
        uVar4 = FUN_00b89270();
        FUN_0041ddd0(&local_88,PTR_PTR_02005170);
        FUN_00b8e650(uVar4,&local_80,L"HDLStrings.Msg_InvalidMakefileTemplate",local_88);
        uVar4 = FUN_0044d490(&PTR_FUN_015ef458,1,local_80);
        FUN_004134c0(uVar4);
      }
      (**(code **)(**(longlong **)(param_1 + 0xbb0) + 0x18))
                (*(longlong **)(param_1 + 0xbb0),&local_28,local_1c + 1);
      FUN_00414480(&local_30);
      local_58 = *(undefined8 *)(*(longlong *)(param_1 + 0xad0) + 0x108);
      FUN_00448450(&local_30,local_58,PTR_DAT_02004830);
      FUN_00416ad0(&local_28,local_30);
      FUN_00414480(&local_30);
      (**(code **)(**(longlong **)(param_1 + 0xbb0) + 0x40))
                (*(longlong **)(param_1 + 0xbb0),local_1c + 1,local_28);
      local_1c = (**(code **)(**(longlong **)(param_1 + 0xbb0) + 0xb0))
                           (*(longlong **)(param_1 + 0xbb0),
                            L"# Optimization level, can be [0, 1, 2, 3, s].");
      if (local_1c == -1) {
        uVar4 = FUN_00b89270();
        FUN_0041ddd0(&local_98,PTR_PTR_02005170);
        FUN_00b8e650(uVar4,&local_90,L"HDLStrings.Msg_InvalidMakefileTemplate",local_98);
        uVar4 = FUN_0044d490(&PTR_FUN_015ef458,1,local_90);
        FUN_004134c0(uVar4);
      }
      (**(code **)(**(longlong **)(param_1 + 0xbb0) + 0x18))
                (*(longlong **)(param_1 + 0xbb0),&local_28,local_1c + 3);
      uVar3 = FUN_010b3620(*(undefined8 *)(param_1 + 0xac8));
      FUN_01055870(&local_a0,uVar3);
      FUN_00416ad0(&local_28,local_a0);
      (**(code **)(**(longlong **)(param_1 + 0xbb0) + 0x40))
                (*(longlong **)(param_1 + 0xbb0),local_1c + 3,local_28);
      local_1c = (**(code **)(**(longlong **)(param_1 + 0xbb0) + 0xb0))
                           (*(longlong **)(param_1 + 0xbb0),
                            L"# Target file name (without extension).");
      if (local_1c == -1) {
        uVar4 = FUN_00b89270();
        FUN_0041ddd0(&local_b0,PTR_PTR_02005170);
        FUN_00b8e650(uVar4,&local_a8,L"HDLStrings.Msg_InvalidMakefileTemplate",local_b0);
        uVar4 = FUN_0044d490(&PTR_FUN_015ef458,1,local_a8);
        FUN_004134c0(uVar4);
      }
      (**(code **)(**(longlong **)(param_1 + 0xbb0) + 0x18))
                (*(longlong **)(param_1 + 0xbb0),&local_28,local_1c + 1);
      FUN_0043e1a0(&local_b8,*(undefined8 *)(*(longlong *)(param_1 + 0xac8) + 0x10));
      FUN_00416ad0(&local_28,local_b8);
      (**(code **)(**(longlong **)(param_1 + 0xbb0) + 0x40))
                (*(longlong **)(param_1 + 0xbb0),local_1c + 1,local_28);
      FUN_0107e350(auStack_188,
                   L"# List C source files here. (C dependencies are automatically generated.)",
                   &PTR_DAT_0107f5e0);
      FUN_0107e350(auStack_188,
                   L"# List C++ source files here. (C dependencies are automatically generated.)",
                   L".CPP");
      FUN_0107e350(auStack_188,L"# List Assembler source files here.",L".ASM");
      local_168 = L"Makefile";
      FUN_00416cd0(&local_c0,3,*(undefined8 *)(param_1 + 0xb40),&DAT_0107f71c);
      (**(code **)(**(longlong **)(param_1 + 0xbb0) + 0x100))
                (*(longlong **)(param_1 + 0xbb0),local_c0);
      puVar1 = local_60;
    }
  }
  else {
    puVar1 = auStack_188;
    if (*(int *)(param_1 + 0xad8) == 0x100) {
      local_168 = L"Makefile";
      FUN_00416cd0(&local_38,3,*(undefined8 *)PTR_DAT_020049a0,L"\\Vhdl\\MCU\\C Compiler\\ARM\\");
      cVar2 = FUN_00440a20(local_38,1);
      if (cVar2 == '\0') {
        uVar4 = FUN_00b89270();
        FUN_0041ddd0(&local_158,PTR_PTR_02001d40);
        FUN_00b8e650(uVar4,&local_150,L"HDLStrings.Msg_MakeFileTemplateNotFound",local_158);
        uVar4 = FUN_0044d490(&PTR_FUN_015ef458,1,local_150);
        FUN_004134c0(uVar4);
        puVar1 = local_60;
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0xbb0) + 0xd8))
                  (*(longlong **)(param_1 + 0xbb0),local_38);
        local_1c = (**(code **)(**(longlong **)(param_1 + 0xbb0) + 0xb0))
                             (*(longlong **)(param_1 + 0xbb0),L"# MCU family");
        if (local_1c == -1) {
          uVar4 = FUN_00b89270();
          FUN_0041ddd0(&local_e0,PTR_PTR_02005170);
          FUN_00b8e650(uVar4,&local_d8,L"HDLStrings.Msg_InvalidMakefileTemplate",local_e0);
          uVar4 = FUN_0044d490(&PTR_FUN_015ef458,1,local_d8);
          FUN_004134c0(uVar4);
        }
        (**(code **)(**(longlong **)(param_1 + 0xbb0) + 0x18))
                  (*(longlong **)(param_1 + 0xbb0),&local_28,local_1c + 1);
        cVar2 = FUN_010adb90(*(undefined8 *)(param_1 + 0xb38));
        if (cVar2 == '\0') {
          FUN_00416ad0(&local_28,L"arm7tdmi");
        }
        else {
          FUN_00416ad0(&local_28,L"arm9tdmi");
        }
        (**(code **)(**(longlong **)(param_1 + 0xbb0) + 0x40))
                  (*(longlong **)(param_1 + 0xbb0),local_1c + 1,local_28);
        local_1c = (**(code **)(**(longlong **)(param_1 + 0xbb0) + 0xb0))
                             (*(longlong **)(param_1 + 0xbb0),L"# Define project name here");
        if (local_1c == -1) {
          uVar4 = FUN_00b89270();
          FUN_0041ddd0(&local_f0,PTR_PTR_02005170);
          FUN_00b8e650(uVar4,&local_e8,L"HDLStrings.Msg_InvalidMakefileTemplate",local_f0);
          uVar4 = FUN_0044d490(&PTR_FUN_015ef458,1,local_e8);
          FUN_004134c0(uVar4);
        }
        (**(code **)(**(longlong **)(param_1 + 0xbb0) + 0x18))
                  (*(longlong **)(param_1 + 0xbb0),&local_28,local_1c + 1);
        FUN_0043e1a0(&local_f8,*(undefined8 *)(*(longlong *)(param_1 + 0xac8) + 0x10));
        FUN_00416ad0(&local_28,local_f8);
        (**(code **)(**(longlong **)(param_1 + 0xbb0) + 0x40))
                  (*(longlong **)(param_1 + 0xbb0),local_1c + 1,local_28);
        local_1c = (**(code **)(**(longlong **)(param_1 + 0xbb0) + 0xb0))
                             (*(longlong **)(param_1 + 0xbb0),L"# Define linker script file here");
        if (local_1c == -1) {
          uVar4 = FUN_00b89270();
          FUN_0041ddd0(&local_108,PTR_PTR_02005170);
          FUN_00b8e650(uVar4,&local_100,L"HDLStrings.Msg_InvalidMakefileTemplate",local_108);
          uVar4 = FUN_0044d490(&PTR_FUN_015ef458,1,local_100);
          FUN_004134c0(uVar4);
        }
        FUN_010b2670(*(undefined8 *)(param_1 + 0xac8),&local_40,&local_44,local_50);
        if (local_44 == 0) {
          uVar4 = FUN_00b89270();
          FUN_0041ddd0(&local_118,PTR_PTR_02003028);
          FUN_00b8e650(uVar4,&local_110,L"HDLStrings.Msg_MissingLinkerScript",local_118);
          uVar4 = FUN_0044d490(&PTR_FUN_015ef458,1,local_110);
          FUN_004134c0(uVar4);
        }
        if (1 < local_44) {
          uVar4 = FUN_00b89270();
          FUN_0041ddd0(&local_128,PTR_PTR_020021b0);
          FUN_00b8e650(uVar4,&local_120,L"HDLStrings.Msg_MoreThanOneLinkerScript",local_128);
          uVar4 = FUN_0044d490(&PTR_FUN_015ef458,1,local_120);
          FUN_004134c0(uVar4);
        }
        (**(code **)(**(longlong **)(param_1 + 0xbb0) + 0x18))
                  (*(longlong **)(param_1 + 0xbb0),&local_28,local_1c + 1);
        FUN_00416ad0(&local_28,local_40);
        (**(code **)(**(longlong **)(param_1 + 0xbb0) + 0x40))
                  (*(longlong **)(param_1 + 0xbb0),local_1c + 1,local_28);
        local_1c = (**(code **)(**(longlong **)(param_1 + 0xbb0) + 0xb0))
                             (*(longlong **)(param_1 + 0xbb0),L"# Define optimisation level here");
        if (local_1c == -1) {
          uVar4 = FUN_00b89270();
          FUN_0041ddd0(&local_138,PTR_PTR_02005170);
          FUN_00b8e650(uVar4,&local_130,L"HDLStrings.Msg_InvalidMakefileTemplate",local_138);
          uVar4 = FUN_0044d490(&PTR_FUN_015ef458,1,local_130);
          FUN_004134c0(uVar4);
        }
        (**(code **)(**(longlong **)(param_1 + 0xbb0) + 0x18))
                  (*(longlong **)(param_1 + 0xbb0),&local_28,local_1c + 1);
        uVar3 = FUN_010b3620(*(undefined8 *)(param_1 + 0xac8));
        FUN_01055870(&local_140,uVar3);
        local_168 = (wchar_t *)local_140;
        FUN_00416cd0(&local_28,3,local_28,&DAT_0107f9c4);
        (**(code **)(**(longlong **)(param_1 + 0xbb0) + 0x40))
                  (*(longlong **)(param_1 + 0xbb0),local_1c + 1,local_28);
        FUN_0107e350(auStack_188,L"# List C source files here",&PTR_DAT_0107f5e0);
        FUN_0107e350(auStack_188,L"# List ASM source files here",&LAB_0107fa64);
        local_168 = L"Makefile";
        FUN_00416cd0(&local_148,3,*(undefined8 *)(param_1 + 0xb40),&DAT_0107f71c);
        (**(code **)(**(longlong **)(param_1 + 0xbb0) + 0x100))
                  (*(longlong **)(param_1 + 0xbb0),local_148);
        puVar1 = local_60;
      }
    }
  }
  local_60 = puVar1;
  FUN_00414560(&local_158,0x1f);
  FUN_00414560(&local_40,4);
  return;
}

