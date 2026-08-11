/* Ghidra address: 00adc130 */
/* Ghidra symbol: FUN_00adc130 */


void FUN_00adc130(longlong param_1)

{
  undefined1 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined1 *local_100;
  longlong local_f8;
  int local_f0;
  int local_e8;
  char local_e1;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  int local_b8;
  char local_b1;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  int local_90;
  char local_89;
  longlong local_88;
  int local_78;
  char local_71;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_50;
  longlong local_48;
  int local_3c;
  short *local_38;
  undefined8 local_30;
  char local_21;
  undefined8 local_20;
  
  local_100 = auStack_148;
  local_30 = 0;
  local_38 = (short *)0x0;
  puVar1 = auStack_148;
  if (*(char *)(*(longlong *)(param_1 + 0x2a0) + 0x81) != '\0') {
    FUN_00ad5060(*(undefined8 *)(param_1 + 0x2a0));
    puVar1 = local_100;
  }
  local_100 = puVar1;
  local_21 = '\0';
  FUN_00414480(&local_30);
  local_48 = 0;
  iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0x48) + 0x10);
  local_3c = 0;
  if (-1 < iVar5 + -1) {
    do {
      local_68 = *(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x48);
      local_60 = FUN_004aeac0(local_68,local_3c);
      if (*(char *)(local_60 + 8) == ' ') {
        local_21 = '\x01';
        *(undefined1 *)(*(longlong *)(param_1 + 0x2a0) + 0x81) = 1;
        local_70 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0x48);
        iVar5 = *(int *)(local_70 + 0x10);
        local_78 = 0;
        if (-1 < iVar5 + -1) goto LAB_00adc271;
        goto code_r0x00adc2ba;
      }
      local_3c = local_3c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  goto code_r0x00adc457;
  while( true ) {
    local_78 = local_78 + 1;
    iVar5 = iVar5 + -1;
    if (iVar5 == 0) break;
LAB_00adc271:
    lVar3 = FUN_00a72910(local_70,local_78);
    if (*(char *)(lVar3 + 8) == 'R') {
      local_71 = '\x01';
      local_48 = FUN_00a72910(local_70,local_78);
      goto code_r0x00adc2c2;
    }
  }
code_r0x00adc2ba:
  local_71 = '\0';
code_r0x00adc2c2:
  if (local_71 == '\0') {
    local_128 = CONCAT44(local_128._4_4_,
                         *(undefined4 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8) + 0x28));
    FUN_00a72d90(*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x70),
                 *(undefined8 *)(local_60 + 0x28),0,
                 *(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x48));
  }
  else {
    local_128 = CONCAT44(local_128._4_4_,
                         *(undefined4 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8) + 0x28));
    FUN_00a72d90(*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x70),
                 *(undefined8 *)(local_60 + 0x28),*(undefined8 *)(local_48 + 0x28),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x48));
  }
  local_88 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0x48);
  iVar5 = *(int *)(local_88 + 0x10);
  local_90 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar3 = FUN_00a72910(local_88,local_90);
      if (*(char *)(lVar3 + 8) == 'Q') {
        local_89 = '\x01';
        local_48 = FUN_00a72910(local_88,local_90);
        goto code_r0x00adc407;
      }
      local_90 = local_90 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_89 = '\0';
code_r0x00adc407:
  if (local_89 != '\0') {
    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0x70) + 0x30) =
         *(undefined4 *)(local_48 + 0x18);
  }
  FUN_00414b50(&local_30,L"link");
code_r0x00adc457:
  local_a0 = *(longlong *)(param_1 + 0x2a0);
  local_a8 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0x48);
  if (local_a8 == 0) {
    local_128 = local_30;
    FUN_00ac0980(*(undefined8 *)(local_a0 + 0xe8),99,0,0);
  }
  else {
    local_20 = 0;
    local_b0 = 0;
    iVar5 = *(int *)(local_a8 + 0x10);
    local_b8 = 0;
    if (-1 < iVar5 + -1) {
      do {
        lVar3 = FUN_00a72910(local_a8,local_b8);
        if (*(char *)(lVar3 + 8) == 'P') {
          local_b1 = '\x01';
          local_b0 = FUN_00a72910(local_a8,local_b8);
          goto code_r0x00adc51c;
        }
        local_b8 = local_b8 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    local_b1 = '\0';
code_r0x00adc51c:
    if (local_b1 != '\0') {
      local_20 = FUN_00a52400(&PTR_FUN_00a4ffc0,1);
      FUN_00a62c40(*(undefined8 *)(local_b0 + 0x28),local_20);
    }
    local_128 = local_30;
    FUN_00ac0980(*(undefined8 *)(local_a0 + 0xe8),99,local_20,local_a8);
    FUN_00410f20(local_20);
  }
  local_c8 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8);
  local_50 = FUN_004aeac0(local_c8,*(int *)(local_c8 + 0x10) + -1);
  FUN_00a557b0(local_50);
  cVar2 = FUN_00a554f0(local_50);
  if (cVar2 != '\0') {
    FUN_00aa8ac0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8) + 0x20),
                 *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8) + 0x28),
                 local_50,1);
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0x60) == 0) {
    local_d0 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8);
    local_128 = FUN_004aeac0(local_d0,*(int *)(local_d0 + 0x10) + -1);
    local_120 = *(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x70);
    local_118 = 1;
    uVar4 = FUN_00ab3440(&PTR_FUN_00a84e18,1,*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x68),
                         0);
    *(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x60) = uVar4;
  }
  else {
    local_d8 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8);
    uVar4 = FUN_004aeac0(local_d8,*(int *)(local_d8 + 0x10) + -1);
    FUN_00ab50e0(*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x60),uVar4);
  }
  local_e0 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0x48);
  iVar5 = *(int *)(local_e0 + 0x10);
  local_e8 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar3 = FUN_00a72910(local_e0,local_e8);
      if (*(char *)(lVar3 + 8) == '3') {
        local_e1 = '\x01';
        local_48 = FUN_00a72910(local_e0,local_e8);
        goto code_r0x00adc79d;
      }
      local_e8 = local_e8 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_e1 = '\0';
code_r0x00adc79d:
  if (local_e1 != '\0') {
    FUN_0043e130(&local_38,*(undefined8 *)(local_48 + 0x28));
    local_f0 = 0;
    if (local_38 != (short *)0x0) {
      local_f0 = *(int *)(local_38 + -2);
    }
    if ((0 < local_f0) && (*local_38 == 0x23)) {
      FUN_00416e20(&local_38,1,1);
    }
    FUN_00aa5b10(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8) + 0x20),
                 local_38,*(undefined4 *)
                           (*(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8) + 0x28));
    *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0x60) + 0x110) = 1;
  }
  if (local_21 != '\0') {
    local_f8 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8);
    local_120 = FUN_004aeac0(local_f8,*(int *)(local_f8 + 0x10) + -1);
    local_128 = *(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x48);
    FUN_00ab5240(*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x60),1,
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8) + 0x20),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x70));
  }
  if (*(char *)(*(longlong *)(param_1 + 0x2a0) + 0x45) != '\0') {
    FUN_00ad5060(*(undefined8 *)(param_1 + 0x2a0));
  }
  FUN_00414560(&local_38,2);
  return;
}

