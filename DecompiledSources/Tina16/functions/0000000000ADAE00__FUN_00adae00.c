/* Ghidra address: 00adae00 */
/* Ghidra symbol: FUN_00adae00 */


void FUN_00adae00(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  char *local_f0;
  undefined1 local_e8;
  undefined1 *local_d0;
  undefined8 local_c0;
  int local_b4;
  char local_ad;
  int local_a8;
  char local_a4;
  char local_a3;
  short local_a2;
  longlong local_a0;
  longlong local_98;
  int local_88;
  char local_81;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined1 local_59;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  char local_31;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_d0 = auStack_118;
  local_50 = 0;
  lVar3 = *(longlong *)(param_1 + 0x98);
  cVar1 = FUN_004113d0(lVar3,&DAT_00aea600);
  if (cVar1 == '\0') {
    FUN_00adadd0(auStack_118);
  }
  else if (*(longlong *)(lVar3 + 0x648) == 0) {
    FUN_00adadd0(auStack_118);
  }
  else {
    local_59 = *(undefined1 *)(param_1 + 0x44);
    local_30 = FUN_00a72740(*(undefined8 *)(param_1 + 0x48));
    if (*(longlong *)(param_1 + 0x60) == 0) {
      local_70 = *(longlong *)(param_1 + 0xe8);
      local_f8 = (longlong *)FUN_004aeac0(local_70,*(int *)(local_70 + 0x10) + -1);
      local_f0 = *(char **)(param_1 + 0x70);
      local_e8 = 1;
      uVar2 = FUN_00ab3440(&PTR_FUN_00a84e18,1,*(undefined8 *)(param_1 + 0x68),0);
      *(undefined8 *)(param_1 + 0x60) = uVar2;
    }
    local_78 = *(longlong *)(param_1 + 0x48);
    if (local_78 == 0) {
      local_f8 = (longlong *)0x0;
      FUN_00ac0980(*(undefined8 *)(param_1 + 0xe8),local_59,0,0);
    }
    else {
      local_20 = 0;
      local_80 = 0;
      iVar4 = *(int *)(local_78 + 0x10);
      local_88 = 0;
      if (-1 < iVar4 + -1) {
        do {
          lVar3 = FUN_00a72910(local_78,local_88);
          if (*(char *)(lVar3 + 8) == 'P') {
            local_81 = '\x01';
            local_80 = FUN_00a72910(local_78,local_88);
            goto code_r0x00adafbb;
          }
          local_88 = local_88 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      local_81 = '\0';
code_r0x00adafbb:
      if (local_81 != '\0') {
        local_20 = FUN_00a52400(&PTR_FUN_00a4ffc0,1);
        FUN_00a62c40(*(undefined8 *)(local_80 + 0x28),local_20);
      }
      local_f8 = (longlong *)0x0;
      FUN_00ac0980(*(undefined8 *)(param_1 + 0xe8),local_59,local_20,local_78);
      FUN_00410f20(local_20);
    }
    local_98 = *(longlong *)(param_1 + 0xe8);
    local_40 = FUN_004aeac0(local_98,*(int *)(local_98 + 0x10) + -1);
    local_48 = FUN_00ab5600(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x48),
                            *(undefined8 *)(param_1 + 0x68),local_40);
    local_a0 = *(longlong *)(param_1 + 0xe8);
    uVar2 = FUN_004aeac0(local_a0,*(int *)(local_a0 + 0x10) + -1);
    FUN_00ac28e0(local_48,uVar2);
    local_31 = '\0';
    local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    local_58 = 0;
    FUN_004b67b0(local_28,0);
    do {
      FUN_00adad70(auStack_118);
      while( true ) {
        local_a2 = *(short *)(param_1 + 0x20);
        if ((((ushort)(local_a2 - 9U) < 2) || ((ushort)(local_a2 - 0xcU) < 2)) || (local_a2 == 0x20)
           ) {
          local_a3 = '\x01';
        }
        else {
          local_a3 = '\0';
        }
        if (local_a3 == '\0') break;
        FUN_00ad1170(param_1);
      }
      FUN_00ad4730(param_1);
      if (*(char *)(param_1 + 0x44) == '+') {
        local_68 = *(longlong *)(param_1 + 0x48);
        iVar4 = *(int *)(local_68 + 0x10);
        local_a8 = 0;
        if (-1 < iVar4 + -1) {
          do {
            lVar3 = FUN_00a72910(local_68,local_a8);
            if (*(char *)(lVar3 + 8) == '3') {
              local_a4 = '\x01';
              local_58 = FUN_00a72910(local_68,local_a8);
              goto code_r0x00adb214;
            }
            local_a8 = local_a8 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        local_a4 = '\0';
code_r0x00adb214:
        if (local_a4 != '\0') {
          FUN_00414b50(&local_50,*(undefined8 *)(local_58 + 0x28));
          iVar4 = *(int *)(local_68 + 0x10);
          local_b4 = 0;
          if (-1 < iVar4 + -1) {
            do {
              lVar3 = FUN_00a72910(local_68,local_b4);
              if (*(char *)(lVar3 + 8) == 'Z') {
                local_ad = '\x01';
                local_58 = FUN_00a72910(local_68,local_b4);
                goto code_r0x00adb293;
              }
              local_b4 = local_b4 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          local_ad = '\0';
code_r0x00adb293:
          if (local_ad != '\0') {
            local_f8 = *(longlong **)(local_58 + 0x28);
            FUN_00416cd0(&local_50,3,local_50,&DAT_00adb528);
          }
          (**(code **)(*local_28 + 0x78))(local_28,local_50);
        }
      }
    } while (*(char *)(param_1 + 0x44) == '+');
    lVar3 = *(longlong *)(param_1 + 0x98);
    local_f8 = local_28;
    local_f0 = &local_31;
    (**(code **)(lVar3 + 0x648))
              (*(undefined8 *)(lVar3 + 0x650),lVar3,*(undefined8 *)(local_48 + 0x1a0),local_30);
    FUN_00410f20(local_28);
    FUN_00410f20(local_30);
    if (local_31 == '\0') {
      local_c0 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x20) + 0x238);
      FUN_004aee50(local_c0,local_48,0);
      FUN_00ac0ab0(*(undefined8 *)(param_1 + 0xe8),local_59);
      FUN_00410f20(local_48);
    }
    else {
      cVar1 = FUN_00a554f0(local_40);
      if (cVar1 != '\0') {
        FUN_00aa8ac0(*(undefined8 *)(*(longlong *)(param_1 + 0xe8) + 0x20),
                     *(undefined4 *)(*(longlong *)(param_1 + 0xe8) + 0x28),local_40,1);
      }
      FUN_00ab5640(*(undefined8 *)(param_1 + 0x60),local_48,*(undefined4 *)(param_1 + 0x7c));
      FUN_00ac0ab0(*(undefined8 *)(param_1 + 0xe8),local_59);
      while (0x3f < *(byte *)(param_1 + 0x44) ||
             (1L << (*(byte *)(param_1 + 0x44) & 0x3f) & 0x40000000010U) == 0) {
        FUN_00adadd0(auStack_118);
      }
    }
  }
  FUN_00414480(&local_50);
  return;
}

