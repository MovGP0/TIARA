/* Ghidra address: 00ae1f40 */
/* Ghidra symbol: FUN_00ae1f40 */


void FUN_00ae1f40(longlong param_1,char param_2,undefined1 param_3,undefined4 param_4,
                 undefined2 param_5,undefined1 param_6,undefined8 param_7)

{
  longlong *plVar1;
  longlong lVar2;
  undefined *puVar3;
  ulonglong uVar4;
  undefined *puVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined2 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined1 *local_70;
  char local_63;
  short local_62;
  longlong local_60;
  longlong local_58;
  int local_48;
  char local_41;
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_70 = auStack_c8;
  FUN_00a9b900(*(undefined8 *)(param_1 + 0x68),param_1 + 0x60,*(undefined4 *)(param_1 + 0x7c));
  local_38 = *(longlong *)(param_1 + 0x48);
  if (local_38 == 0) {
    local_a8 = 0;
    FUN_00ac0980(*(undefined8 *)(param_1 + 0xe8),param_3,0,0);
  }
  else {
    local_20 = 0;
    local_40 = 0;
    iVar6 = *(int *)(local_38 + 0x10);
    local_48 = 0;
    if (-1 < iVar6 + -1) {
      do {
        lVar2 = FUN_00a72910(local_38,local_48);
        if (*(char *)(lVar2 + 8) == 'P') {
          local_41 = '\x01';
          local_40 = FUN_00a72910(local_38,local_48);
          goto code_r0x00ae2065;
        }
        local_48 = local_48 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    local_41 = '\0';
code_r0x00ae2065:
    if (local_41 != '\0') {
      local_20 = FUN_00a52400(&PTR_FUN_00a4ffc0,1);
      FUN_00a62c40(*(undefined8 *)(local_40 + 0x28),local_20);
    }
    local_a8 = 0;
    FUN_00ac0980(*(undefined8 *)(param_1 + 0xe8),param_3,local_20,local_38);
    FUN_00410f20(local_20);
  }
  local_58 = *(longlong *)(param_1 + 0xe8);
  local_a8 = FUN_004aeac0(local_58,*(int *)(local_58 + 0x10) + -1);
  local_a0 = CONCAT71(local_a0._1_7_,param_2);
  local_98 = param_6;
  local_90 = param_5;
  local_80 = *(undefined4 *)(param_1 + 0x84);
  local_88 = param_4;
  local_28 = FUN_00aa3ae0(&PTR_FUN_00a8a828,1,*(undefined8 *)(param_1 + 0x68),
                          *(undefined8 *)(param_1 + 0x48));
  FUN_00a9b890(*(undefined8 *)(param_1 + 0x68),local_28,*(undefined4 *)(param_1 + 0x7c));
  local_60 = *(longlong *)(param_1 + 0xe8);
  uVar4 = (ulonglong)(*(int *)(local_60 + 0x10) - 1);
  local_a8 = FUN_004aeac0(local_60,uVar4);
  puVar5 = (undefined *)CONCAT71((int7)(uVar4 >> 8),1);
  local_a0 = *(undefined8 *)(param_1 + 0x70);
  local_98 = 1;
  local_30 = (longlong *)FUN_00ab3440(&PTR_FUN_00a84e18,puVar5,*(undefined8 *)(local_28 + 0xa8),0);
  *(longlong **)(param_1 + 0x60) = local_30;
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(local_28 + 0xa8);
  while( true ) {
    local_62 = *(short *)(param_1 + 0x20);
    if ((((ushort)(local_62 - 9U) < 2) || ((ushort)(local_62 - 0xcU) < 2)) || (local_62 == 0x20)) {
      local_63 = '\x01';
    }
    else {
      local_63 = '\0';
    }
    if (local_63 == '\0') break;
    FUN_00ad1170(param_1);
  }
  FUN_00ad4730(param_1);
LAB_00ae22a9:
  while (puVar3 = (undefined *)(ulonglong)*(byte *)(param_1 + 0x44), puVar3 < (undefined *)0x6d) {
    if (puVar3 < (undefined *)0x28) {
      if (puVar3 == (undefined *)0x1) {
LAB_00ae2459:
        FUN_00ad4730(param_1);
      }
      else {
        if (((puVar3 != (undefined *)0x2) && ((undefined *)0x4 < puVar3 + -0x15)) &&
           ((undefined *)0x9 < puVar3 + -0x1c)) goto code_r0x00ae24cf;
LAB_00ae23f8:
        FUN_00adf790(param_1);
      }
    }
    else {
      if ((undefined *)0x66 < puVar3) {
        if (puVar3 + -0x67 < (undefined *)0x2) goto LAB_00ae246a;
        if (puVar3 + -0x67 == (undefined *)0x3) goto LAB_00ae2459;
        goto code_r0x00ae24cf;
      }
      if (puVar3 != (undefined *)0x66) {
        if ((puVar3 + -0x28 < (undefined *)0x3) || (puVar3 + -0x2c < (undefined *)0x39))
        goto LAB_00ae23f8;
        goto code_r0x00ae24cf;
      }
      if ((byte)(param_2 + 0x78U) < 0x10) {
        bVar7 = ((int)CONCAT62((int6)((ulonglong)puVar5 >> 0x10),1) << (param_2 + 0x78U & 0x1f) &
                0x1e80U) != 0;
      }
      else {
        bVar7 = false;
      }
      if (!bVar7) goto code_r0x00ae24cf;
      puVar5 = &DAT_00ae25be;
      FUN_00ae1450(param_1,&DAT_00ae25be);
    }
  }
  if (puVar3 < (undefined *)0xa1) {
    if (puVar3 == (undefined *)0xa0) {
      FUN_00ad77c0(param_1);
      goto LAB_00ae22a9;
    }
    if (puVar3 < (undefined *)0x83) {
      if ((undefined *)0x4 < puVar3 + -0x6d) {
        if (puVar3 + -0x77 < (undefined *)0x6) goto LAB_00ae23f8;
        goto code_r0x00ae24cf;
      }
    }
    else if ((undefined *)0x4 < puVar3 + -0x83) {
      if ((puVar3 != (undefined *)0x8f) && ((undefined *)0x3 < puVar3 + -0x91)) {
code_r0x00ae24cf:
        plVar1 = *(longlong **)(param_1 + 0x60);
        if ((plVar1 != (longlong *)0x0) &&
           ((plVar1 == local_30 && (*(int *)((longlong)plVar1 + 0x6c) == 0)))) {
          (**(code **)(*plVar1 + 0xc0))(plVar1,0xa0,*(undefined4 *)(param_1 + 0x7c));
        }
        FUN_00a9b900(*(undefined8 *)(param_1 + 0x68),param_1 + 0x60,*(undefined4 *)(param_1 + 0x7c))
        ;
        *(undefined8 *)(param_1 + 0x60) = 0;
        FUN_00a9ba60(*(undefined8 *)(param_1 + 0x68));
        FUN_00a9ccf0(local_28);
        FUN_00ac0ab0(*(undefined8 *)(param_1 + 0xe8),param_3);
        *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(local_28 + 0x28);
        return;
      }
      FUN_00ae25e0(param_1,puVar3,param_7);
      FUN_00a9ba60(*(undefined8 *)(local_28 + 0xa8));
      FUN_00ad4730(param_1);
      puVar5 = puVar3;
      goto LAB_00ae22a9;
    }
  }
  else if ((puVar3 != (undefined *)0xb3) && (puVar3 != (undefined *)0xb5)) {
    if ((puVar3 + -0xb9 < (undefined *)0x4) || (puVar3 + -0xbe < (undefined *)0x4))
    goto LAB_00ae23f8;
    goto code_r0x00ae24cf;
  }
LAB_00ae246a:
  FUN_00ad5100(param_1,puVar3,param_7);
  puVar5 = puVar3;
  goto LAB_00ae22a9;
}

