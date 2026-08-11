/* Ghidra address: 013a85f0 */
/* Ghidra symbol: FUN_013a85f0 */


char FUN_013a85f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_1e8 [32];
  wchar_t *local_1c8;
  wchar_t *local_1c0;
  undefined *local_1b8;
  wchar_t *local_1b0;
  undefined *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_160;
  undefined8 local_158;
  undefined1 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8;
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
  undefined1 *local_a0;
  char local_85;
  int local_84;
  longlong *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  char local_39;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_a0 = auStack_1e8;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_148 = 0;
  local_140 = 0;
  local_108 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  FUN_00414610(local_res18);
  FUN_00414610(local_res20);
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b4b10(local_30,local_res18);
  local_38 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b4b10(local_38,local_res20);
  FUN_015fca00(&local_a8,0,0);
  local_1c8 = L"conv";
  FUN_00416cd0(&local_48,3,local_a8,L"\\Temp\\");
  cVar1 = FUN_00440b00(local_48,1);
  if (cVar1 == '\0') {
    FUN_00440c30(local_48);
  }
  local_1c8 = L"obj_dir";
  local_1c0 = L"\\";
  FUN_00416cd0(&local_b0,4,local_48,&DAT_013a9314);
  cVar1 = FUN_00440b00(local_b0,1);
  if (cVar1 != '\0') {
    local_1c8 = L"obj_dir";
    local_1c0 = L"\\";
    FUN_00416cd0(&local_b8,4,local_48,&DAT_013a9314);
    FUN_01b22b20(local_b8);
  }
  FUN_00441920(&local_c8,local_res8);
  local_1c8 = (wchar_t *)local_c8;
  FUN_00416cd0(&local_c0,3,local_48,&DAT_013a9314);
  FUN_015f21c0(local_res8,local_c0);
  FUN_00414b50(&local_58,L"-Wall --sc ");
  FUN_00441920(&local_d0,local_res8);
  local_1c8 = L"\\";
  local_1c0 = L"bin64";
  local_1b8 = &DAT_013a9314;
  local_1b0 = L"verilator_bin.exe";
  local_1a8 = &DAT_013a93bc;
  local_1a0 = local_58;
  local_198 = local_d0;
  FUN_00416cd0(&local_50,9,&DAT_013a9364,DAT_02108370);
  FUN_00416ba0(&local_d8,local_48,L"\\c.bat");
  FUN_01b214f0(local_50,local_d8);
  FUN_01056150(local_20,local_50,local_48,1);
  FUN_00416ba0(&local_e0,local_48,L"\\log_convert.txt");
  (**(code **)(*local_20 + 0x100))(local_20,local_e0);
  FUN_00414ad0(param_6,local_48);
  local_85 = FUN_013a6d80(local_20,param_5,param_7);
  if (local_85 != '\0') {
    local_1c8 = L"obj_dir";
    local_1c0 = L"\\";
    FUN_00416cd0(&local_48,4,local_48,&DAT_013a9314);
    local_80 = (longlong *)FUN_01604950(local_48,L"*.cpp");
    iVar2 = (**(code **)(*local_80 + 0x28))();
    local_84 = 0;
    if (-1 < iVar2 + -1) {
      do {
        (**(code **)(*local_80 + 0x18))(local_80,&local_60,local_84);
        FUN_00441920(&local_68,local_60);
        iVar3 = FUN_00416db0(local_68,L"VFiles_all.cpp");
        if ((iVar3 != 0) && (iVar3 = FUN_00416db0(local_68,L"main.cpp"), iVar3 != 0)) {
          local_1c8 = L"\"";
          FUN_00416cd0(&local_68,3,L"#include \"",local_68);
          (**(code **)(*local_28 + 0x78))(local_28,local_68);
        }
        local_84 = local_84 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00416ba0(&local_e8,local_48,L"\\VFiles_all.cpp");
    (**(code **)(*local_28 + 0x100))(local_28,local_e8);
    FUN_00410f20(local_80);
    (**(code **)(*local_28 + 0x90))(local_28);
    FUN_00414b50(&local_70,L"bool");
    local_100 = local_res10;
    local_f8 = 0x11;
    FUN_00442f70(&local_f0,L"#include \"V%s.h\"",&local_100,0);
    (**(code **)(*local_28 + 0x78))(local_28,local_f0);
    (**(code **)(*local_28 + 0x78))(local_28,0);
    (**(code **)(*local_28 + 0x78))(local_28,L"int sc_main(int argc, char* argv[])");
    (**(code **)(*local_28 + 0x78))(local_28,&DAT_013a956c);
    (**(code **)(*local_28 + 0x78))(local_28,L" Verilated::commandArgs(argc, argv);");
    (**(code **)(*local_28 + 0x78))(local_28,0);
    iVar2 = (**(code **)(*local_30 + 0x28))();
    local_84 = 0;
    if (-1 < iVar2 + -1) {
      do {
        (**(code **)(*local_30 + 0x18))(local_30,&local_78,local_84);
        local_138 = local_70;
        local_130 = 0x11;
        local_128 = local_78;
        local_120 = 0x11;
        local_118 = local_70;
        local_110 = 0x11;
        FUN_00442f70(&local_108,L" sc_signal<%s>* %s = new sc_signal<%s>;",&local_138,2);
        (**(code **)(*local_28 + 0x78))(local_28,local_108);
        local_84 = local_84 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = (**(code **)(*local_38 + 0x28))();
    local_84 = 0;
    if (-1 < iVar2 + -1) {
      do {
        (**(code **)(*local_38 + 0x18))(local_38,&local_78,local_84);
        local_138 = local_70;
        local_130 = 0x11;
        local_128 = local_78;
        local_120 = 0x11;
        local_118 = local_70;
        local_110 = 0x11;
        FUN_00442f70(&local_140,L" sc_signal<%s>* %s = new sc_signal<%s>;",&local_138,2);
        (**(code **)(*local_28 + 0x78))(local_28,local_140);
        local_84 = local_84 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    (**(code **)(*local_28 + 0x78))(local_28,0);
    local_168 = local_res10;
    local_160 = 0x11;
    local_158 = local_res10;
    local_150 = 0x11;
    FUN_00442f70(&local_148,L" V%s* top = new V%s(\"TOP\");",&local_168,1);
    (**(code **)(*local_28 + 0x78))(local_28,local_148);
    (**(code **)(*local_28 + 0x78))(local_28,0);
    iVar2 = (**(code **)(*local_30 + 0x28))();
    local_84 = 0;
    if (-1 < iVar2 + -1) {
      do {
        (**(code **)(*local_30 + 0x18))(local_30,&local_78,local_84);
        local_168 = local_78;
        local_160 = 0x11;
        local_158 = local_78;
        local_150 = 0x11;
        FUN_00442f70(&local_170,L" top->%s(*%s);",&local_168,1);
        (**(code **)(*local_28 + 0x78))(local_28,local_170);
        local_84 = local_84 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = (**(code **)(*local_38 + 0x28))();
    local_84 = 0;
    if (-1 < iVar2 + -1) {
      do {
        (**(code **)(*local_38 + 0x18))(local_38,&local_78,local_84);
        local_168 = local_78;
        local_160 = 0x11;
        local_158 = local_78;
        local_150 = 0x11;
        FUN_00442f70(&local_178,L" top->%s(*%s);",&local_168,1);
        (**(code **)(*local_28 + 0x78))(local_28,local_178);
        local_84 = local_84 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    (**(code **)(*local_28 + 0x78))(local_28,0);
    (**(code **)(*local_28 + 0x78))(local_28,L" return 0;");
    (**(code **)(*local_28 + 0x78))(local_28,&DAT_013a96c4);
    FUN_00416ba0(&local_180,local_48,L"\\main.cpp");
    (**(code **)(*local_28 + 0x100))(local_28,local_180);
  }
  local_39 = local_85;
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00410f20(local_30);
  FUN_00410f20(local_38);
  FUN_00414560(&local_180,3);
  FUN_00414560(&local_148,2);
  FUN_00414480(&local_108);
  FUN_00414560(&local_f0,10);
  FUN_00414560(&local_78,7);
  FUN_00414560(&local_res8,4);
  return local_39;
}

