/* Ghidra address: 00ae1450 */
/* Ghidra symbol: FUN_00ae1450 */


void FUN_00ae1450(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined1 *local_70;
  char local_5b;
  short local_5a;
  longlong local_58;
  longlong local_50;
  int local_40;
  char local_39;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_70 = auStack_b8;
  if ((*(byte *)(param_2 + 0xc) & 0x40) == 0) {
    FUN_00a9b900(*(undefined8 *)(param_1 + 0x68),param_1 + 0x60,*(undefined4 *)(param_1 + 0x7c));
    *(undefined8 *)(param_1 + 0x60) = 0;
    local_30 = *(longlong *)(param_1 + 0x48);
    if (local_30 == 0) {
      local_98 = 0;
      FUN_00ac0980(*(undefined8 *)(param_1 + 0xe8),0x66,0,0);
    }
    else {
      local_20 = 0;
      local_38 = 0;
      iVar5 = *(int *)(local_30 + 0x10);
      local_40 = 0;
      if (-1 < iVar5 + -1) {
        do {
          lVar2 = FUN_00a72910(local_30,local_40);
          if (*(char *)(lVar2 + 8) == 'P') {
            local_39 = '\x01';
            local_38 = FUN_00a72910(local_30,local_40);
            goto code_r0x00ae154c;
          }
          local_40 = local_40 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      local_39 = '\0';
code_r0x00ae154c:
      if (local_39 != '\0') {
        local_20 = FUN_00a52400(&PTR_FUN_00a4ffc0,1);
        FUN_00a62c40(*(undefined8 *)(local_38 + 0x28),local_20);
      }
      local_98 = 0;
      FUN_00ac0980(*(undefined8 *)(param_1 + 0xe8),0x66,local_20,local_30);
      FUN_00410f20(local_20);
    }
    local_50 = *(longlong *)(param_1 + 0xe8);
    local_98 = FUN_004aeac0(local_50,*(int *)(local_50 + 0x10) + -1);
    local_28 = FUN_00a9c430(&PTR_FUN_00a865e0,1,*(undefined8 *)(param_1 + 0x68),
                            *(undefined8 *)(param_1 + 0x48));
    FUN_00a9b890(*(undefined8 *)(param_1 + 0x68),local_28,*(undefined4 *)(param_1 + 0x7c));
    uVar3 = *(undefined8 *)(local_28 + 0xa8);
    *(undefined8 *)(param_1 + 0x68) = uVar3;
    local_58 = *(longlong *)(param_1 + 0xe8);
    local_98 = FUN_004aeac0(local_58,*(int *)(local_58 + 0x10) + -1);
    local_90 = *(undefined8 *)(param_1 + 0x70);
    local_88 = 1;
    uVar3 = FUN_00ab3440(&PTR_FUN_00a84e18,1,uVar3,*(undefined8 *)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x60) = uVar3;
    while( true ) {
      local_5a = *(short *)(param_1 + 0x20);
      if ((((ushort)(local_5a - 9U) < 2) || ((ushort)(local_5a - 0xcU) < 2)) || (local_5a == 0x20))
      {
        local_5b = '\x01';
      }
      else {
        local_5b = '\0';
      }
      if (local_5b == '\0') break;
      FUN_00ad1170(param_1);
    }
    FUN_00ad4730(param_1);
    while( true ) {
      bVar1 = *(byte *)(param_1 + 0x44);
      if (bVar1 < 200) {
        uVar4 = (ulonglong)bVar1 + (param_2 & 7) * 8;
        bVar6 = (*(byte *)((param_2 - (param_2 & 7)) + ((longlong)uVar4 >> 3)) >> (uVar4 & 7) & 1)
                != 0;
      }
      else {
        bVar6 = false;
      }
      if (bVar6) break;
      if (bVar1 < 200) {
        bVar6 = (*(byte *)(((longlong)((ulonglong)bVar1 + 0x20) >> 3) + 0xae18a8) >>
                 ((ulonglong)bVar1 + 0x20 & 7) & 1) != 0;
      }
      else {
        bVar6 = false;
      }
      if (!bVar6) break;
      if (bVar1 == 1) {
        FUN_00ad4730(param_1);
      }
      else {
        FUN_00adf790(param_1);
      }
    }
    if (*(char *)(param_1 + 0x44) == -0x60) {
      *(undefined4 *)(local_28 + 0x480) = 0;
    }
    FUN_00a9b900(*(undefined8 *)(param_1 + 0x68),param_1 + 0x60,*(undefined4 *)(param_1 + 0x7c));
    *(undefined8 *)(param_1 + 0x60) = 0;
    if (*(char *)(param_1 + 0x81) != '\0') {
      FUN_00ad5060(param_1);
    }
    FUN_00ac0ab0(*(undefined8 *)(param_1 + 0xe8),0x66);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(local_28 + 0x28);
    if (*(char *)(param_1 + 0x44) == 'j') {
      FUN_00ad4730(param_1);
    }
  }
  return;
}

