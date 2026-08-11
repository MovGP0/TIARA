/* Ghidra address: 0105f390 */
/* Ghidra symbol: FUN_0105f390 */


char FUN_0105f390(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_158 [32];
  undefined8 local_138;
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
  undefined1 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  int local_a4;
  longlong local_a0;
  int local_98;
  int local_94;
  longlong local_90;
  int local_84;
  longlong local_80;
  int local_78;
  int local_74;
  longlong local_70;
  undefined8 local_68;
  char local_5a;
  char local_59;
  undefined4 local_58;
  int local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  char local_21;
  
  local_b0 = auStack_158;
  local_118 = 0;
  local_120 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_21 = '\0';
  FUN_00414b50(&local_40,L"avr-gcc.exe");
  local_54 = 0;
  FUN_00414b50(&local_50,L"arduino");
  if (param_2 != 0) {
    FUN_00414b50(&local_40,*(undefined8 *)(param_2 + 0x60));
    local_54 = *(int *)(param_2 + 0x68);
  }
  local_59 = '\0';
  if (local_54 == 0) {
    FUN_00416ba0(&local_b8,*(undefined8 *)(param_1 + 0x20),L"\\*.*");
    uVar2 = FUN_01603790(local_b8,0x20);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    local_59 = FUN_01b22620(uVar2,local_40,&local_58,0);
  }
  if (local_54 == 4) {
    FUN_00414b50(&local_40,L"riscv32-esp-elf-gcc.exe");
    FUN_00414b50(&local_50,L"esp32");
  }
  else if (local_54 == 5) {
    FUN_00414b50(&local_40,L"xtensa-esp32s3-elf-gcc.exe");
    FUN_00414b50(&local_50,L"esp32");
  }
  if (local_54 == 3) {
    FUN_00414b50(&local_50,L"sandeepmistry");
  }
  local_5a = FUN_0105ede0(param_1 + 0x88,param_1 + 0x28);
  if (local_5a == '\0') {
    iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x88),&DAT_0105fd58);
    if (iVar1 == 0) goto LAB_0105f5f7;
LAB_0105fb31:
    FUN_0105fba0(0,local_b0);
  }
  else {
LAB_0105f5f7:
    if (local_59 == '\0') {
      FUN_00416ba0(&local_c8,*(undefined8 *)(param_1 + 0x28),L"\\packages\\%s\\tools");
      local_d8 = local_50;
      local_d0 = 0x11;
      FUN_00442f70(&local_48,local_c8,&local_d8,0);
      FUN_00416ba0(&local_e0,local_48,L"\\*.*");
      uVar2 = FUN_01603790(local_e0,0x20);
      *(undefined8 *)(param_1 + 0x10) = uVar2;
      local_59 = FUN_01b22620(uVar2,local_40,&local_58,0);
      if (local_59 == '\0') goto LAB_0105fb31;
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
                (*(longlong **)(param_1 + 0x10),&local_e8,local_58);
      FUN_00441640(&local_30,local_e8);
      local_a0 = *(longlong *)(param_1 + 0x28);
      local_94 = 0;
      if (local_a0 != 0) {
        local_94 = *(int *)(local_a0 + -4);
      }
      local_98 = 0;
      if (local_30 != 0) {
        local_98 = *(int *)(local_30 + -4);
      }
      local_a4 = 0;
      if (local_a0 != 0) {
        local_a4 = *(int *)(local_a0 + -4);
      }
      local_90 = local_a0;
      FUN_00416dc0(param_1 + 0x30,local_30,local_94 + 1,(local_98 - local_a4) + 1);
      FUN_00414ad0(param_1 + 0x18,*(undefined8 *)(param_1 + 0x28));
      FUN_00410f20(*(undefined8 *)(param_1 + 0x10));
      FUN_01059df0(&local_f8,local_54);
      local_138 = local_f8;
      FUN_00416cd0(&local_f0,3,*(undefined8 *)(param_1 + 0x28),L"\\packages\\%s\\hardware\\");
      local_d8 = local_50;
      local_d0 = 0x11;
      FUN_00442f70(&local_48,local_f0,&local_d8,0);
      FUN_00416ba0(&local_100,local_48,L"\\*.*");
      uVar2 = FUN_01603790(local_100,0x20);
      *(undefined8 *)(param_1 + 0x10) = uVar2;
      if (local_54 == 1) {
        FUN_00416ba0(&local_48,*(undefined8 *)(param_1 + 0x28),L"\\packages\\arduino\\tools\\CMSIS")
        ;
        FUN_00416ba0(&local_108,local_48,L"\\*.*");
        local_68 = FUN_01603790(local_108,0x20);
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x88))
                  (*(longlong **)(param_1 + 0x10),local_68);
        FUN_00410f20(local_68);
        FUN_00416ba0(&local_48,*(undefined8 *)(param_1 + 0x28),
                     L"\\packages\\arduino\\tools\\CMSIS-Atmel");
        FUN_00416ba0(&local_110,local_48,L"\\*.*");
        local_68 = FUN_01603790(local_110,0x20);
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x88))
                  (*(longlong **)(param_1 + 0x10),local_68);
        FUN_00410f20(local_68);
      }
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
                (*(longlong **)(param_1 + 0x10),&local_c0,local_58);
      FUN_00441640(&local_30,local_c0);
      local_80 = *(longlong *)(param_1 + 0x18);
      local_74 = 0;
      if (local_80 != 0) {
        local_74 = *(int *)(local_80 + -4);
      }
      local_78 = 0;
      if (local_30 != 0) {
        local_78 = *(int *)(local_30 + -4);
      }
      local_84 = 0;
      if (local_80 != 0) {
        local_84 = *(int *)(local_80 + -4);
      }
      local_70 = local_80;
      FUN_00416dc0(param_1 + 0x30,local_30,local_74 + 1,(local_78 - local_84) + 1);
    }
    local_59 = FUN_01b22620(*(undefined8 *)(param_1 + 0x10),L"hooks.c",&local_58,0);
    if (local_59 != '\0') {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))(*(longlong **)(param_1 + 0x10));
      if (0 < iVar1) {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
                  (*(longlong **)(param_1 + 0x10),&local_120,local_58);
        FUN_00441640(&local_118,local_120);
        FUN_00414ad0(param_1 + 0x38,local_118);
      }
    }
    FUN_0105ee90(param_1,local_54);
    local_21 = local_59;
    if ((param_3 != '\0') && (*(longlong *)(param_1 + 0x10) != 0)) {
      FUN_00410f20(*(undefined8 *)(param_1 + 0x10));
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
  }
  FUN_00414560(&local_120,9);
  FUN_00414560(&local_c8,3);
  FUN_00414560(&local_50,5);
  return local_21;
}

