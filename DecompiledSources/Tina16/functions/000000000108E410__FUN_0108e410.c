/* Ghidra address: 0108e410 */
/* Ghidra symbol: FUN_0108e410 */


void FUN_0108e410(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_1b8 [32];
  wchar_t *local_198;
  wchar_t *local_190;
  wchar_t *local_188;
  wchar_t *local_180;
  wchar_t *local_178;
  undefined8 local_170;
  wchar_t *local_168;
  undefined8 local_160;
  wchar_t *local_158;
  wchar_t *local_150;
  undefined8 local_148;
  undefined *local_140;
  wchar_t *local_138;
  wchar_t *local_130;
  wchar_t *local_128;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  longlong *local_c0;
  int local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  wchar_t *local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_d0 = auStack_1b8;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_48 = 0;
  local_50 = (wchar_t *)0x0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_38 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_40 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00414480(&local_68);
  if (*(longlong *)(PTR_DAT_020030c0 + 0x50) == 0) {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,
                         L"Configure Atmel Studio path in Analysis/Options/Advanced");
    FUN_004134c0(uVar3);
  }
  FUN_0044f8b0(&local_d8,*(undefined8 *)(PTR_DAT_020030c0 + 0x50));
  local_198 = L"toolchain\\avr8\\avr8-gnu-toolchain\\bin";
  local_190 = L"\\";
  FUN_00416cd0(&local_58,4,local_d8,&DAT_0108f0c4);
  cVar1 = FUN_00b96de0(local_58);
  if (cVar1 == '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Invalid Atmel Studio path");
    FUN_004134c0(uVar3);
  }
  FUN_00416ba0(&local_e0,local_58,L"avr-gcc.exe");
  cVar1 = FUN_00440a20(local_e0,1);
  if (cVar1 != '\0') {
    FUN_00416ba0(&local_e8,local_58,L"avr-objcopy.exe");
    cVar1 = FUN_00440a20(local_e8,1);
    if (cVar1 != '\0') {
      FUN_00416ba0(&local_f0,local_58,L"avr-objdump.exe");
      cVar1 = FUN_00440a20(local_f0,1);
      if (cVar1 != '\0') {
        FUN_00416ba0(&local_f8,local_58,L"avr-size.exe");
        cVar1 = FUN_00440a20(local_f8,1);
        if (cVar1 != '\0') goto LAB_0108e6f6;
      }
    }
  }
  uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Invalid Atmel Studio path");
  FUN_004134c0(uVar3);
LAB_0108e6f6:
  FUN_0044f8b0(&local_100,*(undefined8 *)(PTR_DAT_020030c0 + 0x50));
  local_198 = L"Packs\\atmel";
  local_190 = L"\\";
  FUN_00416cd0(&local_70,4,local_100,&DAT_0108f0c4);
  FUN_00416ba0(&local_108,local_70,L"ATtiny_DFP\\");
  local_c0 = (longlong *)FUN_0160dab0(local_108,0,0);
  iVar2 = (**(code **)(*local_c0 + 0x28))(local_c0);
  if (iVar2 == 0) {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"DFP directory not found (tiny)");
    FUN_004134c0(uVar3);
  }
  (**(code **)(*local_c0 + 0x18))(local_c0,&local_98,0);
  FUN_00410f20(local_c0);
  FUN_00416ba0(&local_110,local_70,L"ATmega_DFP\\");
  local_c0 = (longlong *)FUN_0160dab0(local_110,0,0);
  iVar2 = (**(code **)(*local_c0 + 0x28))(local_c0);
  if (iVar2 == 0) {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"DFP directory not found (mega)");
    FUN_004134c0(uVar3);
  }
  (**(code **)(*local_c0 + 0x18))(local_c0,&local_a0,0);
  FUN_00410f20(local_c0);
  FUN_0107a920(param_1,&local_60,*(undefined8 *)(param_1 + 0xb38));
  iVar2 = FUN_00416db0(local_60,L"wifi");
  if (iVar2 == 0) {
    FUN_00414b50(&local_60,L"atmega328p");
  }
  iVar2 = FUN_00416db0(local_60,L"atmega328p_32");
  if (iVar2 == 0) {
    FUN_00414b50(&local_60,L"atmega328p");
  }
  iVar2 = FUN_004170c0(L"tiny",local_60,1);
  if (0 < iVar2) {
    FUN_00416ba0(&local_68,L"ATtiny_DFP\\",local_98);
  }
  iVar2 = FUN_004170c0(L"mega",local_60,1);
  if (0 < iVar2) {
    FUN_00416ba0(&local_68,L"ATmega_DFP\\",local_a0);
  }
  if (local_68 == 0) {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Tiny or Mega supported");
    FUN_004134c0(uVar3);
  }
  local_198 = L"\\include";
  FUN_00416cd0(&local_78,3,local_70,local_68);
  cVar1 = FUN_00b96de0(local_78);
  if (cVar1 == '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Invalid Atmel Studio path (include)");
    FUN_004134c0(uVar3);
  }
  local_198 = L"\\gcc\\dev\\";
  local_190 = (wchar_t *)local_60;
  FUN_00416cd0(&local_80,4,local_70,local_68);
  cVar1 = FUN_00b96de0(local_80);
  if (cVar1 == '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Invalid Atmel Studio path (general path)");
    FUN_004134c0(uVar3);
  }
  FUN_0160f110(&local_a8,*(longlong *)(param_1 + 0xac8) + 0x28);
  local_198 = L"avr-gcc.exe\" ";
  local_190 = L"-x c -funsigned-char -funsigned-bitfields -DDEBUG ";
  local_188 = L"-I\"";
  local_180 = (wchar_t *)local_78;
  local_178 = L"\" ";
  local_170 = local_a8;
  local_168 = L" -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=";
  local_160 = local_60;
  local_158 = L" ";
  local_150 = L"-B \"";
  local_148 = local_80;
  local_140 = &DAT_0108f598;
  local_138 = L"-c -std=gnu99 -MD -MP -MF ";
  local_130 = L"\"Debug\\%s.d\" ";
  local_128 = L"-MT\"Debug\\%s.d\" -MT\"Debug\\%s.o\" -o \"Debug\\%s.o\" \"%s.c\"";
  FUN_00416cd0(local_20,0x11,&DAT_0108f4d8,local_58);
  FUN_00414480(&local_90);
  iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xac8) + 0x18) + 0x10);
  local_b4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      local_b0 = FUN_010b2ee0(*(undefined8 *)(param_1 + 0xac8),local_b4);
      cVar1 = FUN_010af9d0(local_b0);
      if (cVar1 == '\0') {
        FUN_010af830(local_b0,&local_48);
        FUN_004414c0(&local_50,local_48,&DAT_0108f76c);
        (**(code **)(*local_38 + 0x78))(local_38,local_48);
        local_198 = local_50;
        local_190 = L" ";
        FUN_00416cd0(&local_90,4,local_90,L"Debug\\");
      }
      local_b4 = local_b4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_198 = L"avr-gcc.exe\" -o Debug\\";
  local_190 = *(wchar_t **)(*(longlong *)(param_1 + 0xac8) + 0x10);
  local_188 = L".elf ";
  local_180 = (wchar_t *)local_90;
  local_178 = L"-Wl,-Map=\"Debug\\";
  local_170 = *(undefined8 *)(*(longlong *)(param_1 + 0xac8) + 0x10);
  local_168 = L".map\" -Wl,--start-group -Wl,-lm  -Wl,--end-group -Wl,--gc-sections -mmcu=";
  local_160 = local_60;
  local_158 = L" -B ";
  local_150 = L"\"";
  local_148 = local_80;
  local_140 = &DAT_0108f4d8;
  FUN_00416cd0(&local_28,0xe,&DAT_0108f4d8,local_58);
  local_198 = 
  L"avr-objcopy.exe\" -O ihex -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures  \"";
  local_190 = L"Debug\\";
  local_188 = *(wchar_t **)(*(longlong *)(param_1 + 0xac8) + 0x10);
  local_180 = L".elf\" \"";
  local_178 = L"Debug\\";
  local_170 = *(undefined8 *)(*(longlong *)(param_1 + 0xac8) + 0x10);
  local_168 = L".hex";
  FUN_00416cd0(&local_88,9,&DAT_0108f4d8,local_58);
  (**(code **)(*local_40 + 0x90))(local_40);
  iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xac8) + 0x18) + 0x10);
  local_b4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      local_b0 = FUN_010b2ee0(*(undefined8 *)(param_1 + 0xac8),local_b4);
      cVar1 = FUN_010af9d0(local_b0);
      if (cVar1 == '\0') {
        FUN_010af830(local_b0,&local_118);
        FUN_0108e1e0(auStack_1b8,local_118,local_40);
      }
      local_b4 = local_b4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_0108bd30(param_1,local_40,1);
  (**(code **)(*local_30 + 0x88))(local_30,local_40);
  (**(code **)(*local_40 + 0x90))(local_40);
  FUN_0108e370(auStack_1b8,local_40);
  FUN_0108bd30(param_1,local_40,0);
  (**(code **)(*local_30 + 0x90))(local_30);
  (**(code **)(*local_30 + 0x88))(local_30,local_40);
  (**(code **)(*local_40 + 0x90))(local_40);
  (**(code **)(*local_40 + 0x78))(local_40,local_88);
  FUN_0108bd30(param_1,local_40,0);
  (**(code **)(*local_30 + 0x90))(local_30);
  (**(code **)(*local_30 + 0x88))(local_30,local_40);
  FUN_00410f20(local_30);
  FUN_00410f20(local_38);
  FUN_00410f20(local_40);
  FUN_00414560(&local_118,9);
  FUN_00414560(&local_a8,0xd);
  FUN_00414560(&local_28,2);
  return;
}

