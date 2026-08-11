/* Ghidra address: 00ae18d0 */
/* Ghidra symbol: FUN_00ae18d0 */


void FUN_00ae18d0(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined1 *local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  char local_79;
  longlong local_78;
  int local_68;
  char local_61;
  longlong local_60;
  int local_50;
  char local_49;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  char local_2c;
  undefined1 local_2b;
  char local_2a;
  char local_29;
  undefined8 local_28;
  undefined8 local_20;
  
  local_c0 = auStack_108;
  if ((*(byte *)(param_2 + 3) & 0x10) == 0) {
    local_28 = 0;
    local_38 = 0;
    local_40 = *(longlong *)(param_1 + 0x48);
    if (local_40 == 0) {
      local_e8 = 0;
      FUN_00ac0980(*(undefined8 *)(param_1 + 0xe8),0x1c,0,0);
    }
    else {
      local_20 = 0;
      local_48 = 0;
      iVar5 = *(int *)(local_40 + 0x10);
      local_50 = 0;
      local_c0 = auStack_108;
      puVar1 = auStack_108;
      if (-1 < iVar5 + -1) {
        do {
          local_c0 = puVar1;
          lVar2 = FUN_00a72910(local_40,local_50);
          if (*(char *)(lVar2 + 8) == 'P') {
            local_49 = '\x01';
            local_48 = FUN_00a72910(local_40,local_50);
            goto code_r0x00ae19c2;
          }
          local_50 = local_50 + 1;
          iVar5 = iVar5 + -1;
          puVar1 = local_c0;
        } while (iVar5 != 0);
      }
      local_49 = '\0';
code_r0x00ae19c2:
      if (local_49 != '\0') {
        local_20 = FUN_00a52400(&PTR_FUN_00a4ffc0,1);
        FUN_00a62c40(*(undefined8 *)(local_48 + 0x28),local_20);
      }
      local_e8 = 0;
      FUN_00ac0980(*(undefined8 *)(param_1 + 0xe8),0x1c,local_20,local_40);
      FUN_00410f20(local_20);
    }
    local_60 = *(longlong *)(param_1 + 0x48);
    iVar5 = *(int *)(local_60 + 0x10);
    local_68 = 0;
    if (-1 < iVar5 + -1) {
      do {
        lVar2 = FUN_00a72910(local_60,local_68);
        if (*(char *)(lVar2 + 8) == '\x12') {
          local_61 = '\x01';
          local_28 = FUN_00a72910(local_60,local_68);
          goto code_r0x00ae1adc;
        }
        local_68 = local_68 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    local_61 = '\0';
code_r0x00ae1adc:
    if (local_61 == '\0') {
      local_78 = *(longlong *)(param_1 + 0xe8);
      lVar2 = FUN_004aeac0(local_78,*(int *)(local_78 + 0x10) + -1);
      local_79 = FUN_0046c390(lVar2 + 0x588);
    }
    else {
      local_79 = '\x01';
    }
    local_2c = local_79;
    if (local_79 != '\0') {
      local_88 = *(longlong *)(param_1 + 0xe8);
      local_e8 = FUN_004aeac0(local_88,*(int *)(local_88 + 0x10) + -1);
      local_38 = FUN_00ac2f70(&PTR_FUN_00a91fd0,1,*(undefined8 *)(param_1 + 0x68),
                              *(undefined8 *)(param_1 + 0x48));
    }
    local_90 = *(longlong *)(param_1 + 0xe8);
    uVar3 = FUN_004aeac0(local_90,*(int *)(local_90 + 0x10) + -1);
    FUN_00a54fc0(uVar3,&local_29,&local_2a,&local_2b);
    FUN_00ac0ab0(*(undefined8 *)(param_1 + 0xe8),0x1c);
    if (local_2c == '\0') {
      if (*(longlong *)(param_1 + 0x60) == 0) {
        local_a8 = *(longlong *)(param_1 + 0xe8);
        local_e8 = FUN_004aeac0(local_a8,*(int *)(local_a8 + 0x10) + -1);
        local_e0 = *(undefined8 *)(param_1 + 0x70);
        local_d8 = 0;
        uVar3 = FUN_00ab3440(&PTR_FUN_00a84e18,1,*(undefined8 *)(param_1 + 0x68),
                             *(undefined8 *)(param_1 + 0x48));
        *(undefined8 *)(param_1 + 0x60) = uVar3;
      }
      (**(code **)(**(longlong **)(param_1 + 0x60) + 0xc0))
                (*(longlong **)(param_1 + 0x60),8,*(undefined4 *)(param_1 + 0x7c));
      FUN_00a9b900(*(undefined8 *)(param_1 + 0x68),param_1 + 0x60,*(undefined4 *)(param_1 + 0x7c));
      if (local_29 != '\0' || local_2a != '\0') {
        local_b0 = *(longlong *)(param_1 + 0xe8);
        uVar3 = *(undefined8 *)(param_1 + 0x68);
        local_e8 = FUN_004aeac0(local_b0,*(int *)(local_b0 + 0x10) + -1);
        uVar4 = FUN_00abfbc0(&PTR_FUN_00a921a8,1,uVar3,0);
        FUN_00a9b890(uVar3,uVar4,*(undefined4 *)(param_1 + 0x7c));
      }
      local_b8 = *(longlong *)(param_1 + 0xe8);
      local_e8 = FUN_004aeac0(local_b8,*(int *)(local_b8 + 0x10) + -1);
      local_e0 = *(undefined8 *)(param_1 + 0x70);
      local_d8 = 0;
      uVar3 = FUN_00ab3440(&PTR_FUN_00a84e18,1,*(undefined8 *)(param_1 + 0x68),
                           *(undefined8 *)(param_1 + 0x48));
      *(undefined8 *)(param_1 + 0x60) = uVar3;
    }
    else {
      if (*(longlong *)(param_1 + 0x60) != 0) {
        FUN_00a9b900(*(undefined8 *)(param_1 + 0x68),param_1 + 0x60,*(undefined4 *)(param_1 + 0x7c))
        ;
        *(undefined8 *)(param_1 + 0x60) = 0;
      }
      FUN_00a9b890(*(undefined8 *)(param_1 + 0x68),local_38,*(undefined4 *)(param_1 + 0x7c));
      if (local_29 != '\0' || local_2a != '\0') {
        local_98 = *(longlong *)(param_1 + 0xe8);
        uVar3 = *(undefined8 *)(param_1 + 0x68);
        local_e8 = FUN_004aeac0(local_98,*(int *)(local_98 + 0x10) + -1);
        uVar4 = FUN_00abfbc0(&PTR_FUN_00a921a8,1,uVar3,0);
        FUN_00a9b890(uVar3,uVar4,*(undefined4 *)(param_1 + 0x7c));
        local_a0 = *(longlong *)(param_1 + 0xe8);
        local_e8 = FUN_004aeac0(local_a0,*(int *)(local_a0 + 0x10) + -1);
        local_e0 = *(undefined8 *)(param_1 + 0x70);
        local_d8 = 0;
        uVar3 = FUN_00ab3440(&PTR_FUN_00a84e18,1,*(undefined8 *)(param_1 + 0x68),
                             *(undefined8 *)(param_1 + 0x48));
        *(undefined8 *)(param_1 + 0x60) = uVar3;
      }
    }
    FUN_00ad4730(param_1);
  }
  return;
}

