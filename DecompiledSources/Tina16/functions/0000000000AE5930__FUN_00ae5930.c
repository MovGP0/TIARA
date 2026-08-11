/* Ghidra address: 00ae5930 */
/* Ghidra symbol: FUN_00ae5930 */


void FUN_00ae5930(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_108 [40];
  undefined1 *local_e0;
  longlong local_d0;
  int local_c0;
  char local_b9;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  int local_9c;
  undefined4 local_98;
  int local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 *local_38;
  
  local_e0 = auStack_108;
  local_50 = *param_3;
  uStack_48 = param_3[1];
  local_60 = *param_4;
  uStack_58 = param_4[1];
  local_70 = *param_5;
  uStack_68 = param_5[1];
  local_80 = *param_6;
  uStack_78 = param_6[1];
  local_90 = *param_7;
  uStack_88 = param_7[1];
  puVar1 = auStack_108;
  if (*(char *)(param_1 + 0xf1) != '\0') {
    FUN_00ad1730(param_1);
    puVar1 = local_e0;
  }
  local_e0 = puVar1;
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x88) = local_50;
  *(undefined8 *)(param_1 + 0x90) = uStack_48;
  FUN_00ae56f0(param_1,param_2,param_1 + 0x88);
  local_98 = *(undefined4 *)(*(longlong *)(param_1 + 0xe8) + 0x28);
  local_b0 = *(longlong *)(param_1 + 0x30);
  local_9c = *(int *)(*(longlong *)(local_b0 + 0x28) + 8) - *(int *)(local_b0 + 8);
  *(undefined1 *)(param_1 + 0x83) = 1;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  local_94 = 0;
  FUN_00ad1170(param_1);
  FUN_00ad4730(param_1);
  local_a8 = 0;
  while (*(char *)(param_1 + 0x44) != '\x04') {
    if (*(char *)(param_1 + 0x44) == 'c') {
      local_b8 = *(longlong *)(param_1 + 0x48);
      iVar3 = *(int *)(local_b8 + 0x10);
      local_c0 = 0;
      if (-1 < iVar3 + -1) {
        do {
          lVar2 = FUN_00a72910(local_b8,local_c0);
          if (*(char *)(lVar2 + 8) == ' ') {
            local_b9 = '\x01';
            local_a8 = FUN_00a72910(local_b8,local_c0);
            goto code_r0x00ae5b40;
          }
          local_c0 = local_c0 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_b9 = '\0';
code_r0x00ae5b40:
      if ((local_b9 != '\0') && (local_94 = local_94 + 1, 400 < local_94)) break;
    }
    FUN_00ad4730(param_1);
  }
  *(bool *)(param_2 + 0x2c9) = 400 < local_94;
  *(undefined4 *)(*(longlong *)(param_1 + 0xe8) + 0x28) = local_98;
  local_d0 = *(longlong *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(local_d0 + 0x28) + 8) =
       *(longlong *)(local_d0 + 8) + (longlong)local_9c;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x81) = 0;
  *(undefined4 *)(param_1 + 0x50) = 3;
  FUN_00414480(param_1 + 0x10);
  FUN_00414480(param_1 + 0x18);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x20);
  *(undefined1 *)(lVar2 + 0x30a) = 0;
  *(undefined8 *)(lVar2 + 0x310) = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  FUN_00ad47e0(param_1,0);
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x83) = 0;
  *(undefined1 *)(param_1 + 0x83) = 0;
  *(undefined8 *)(param_1 + 0xa0) = local_60;
  *(undefined8 *)(param_1 + 0xa8) = uStack_58;
  *(undefined8 *)(param_1 + 0xb0) = local_70;
  *(undefined8 *)(param_1 + 0xb8) = uStack_68;
  *(undefined8 *)(param_1 + 0xc0) = local_80;
  *(undefined8 *)(param_1 + 200) = uStack_78;
  *(undefined8 *)(param_1 + 0xd0) = local_90;
  *(undefined8 *)(param_1 + 0xd8) = uStack_88;
  FUN_00ad1170(param_1);
  FUN_00ae4310(param_1,&DAT_00ae5efd);
  local_38 = (undefined8 *)(param_1 + 0x48);
  local_40 = *local_38;
  *local_38 = 0;
  FUN_00410f20(local_40);
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_00a9b900(*(undefined8 *)(param_1 + 0x68),param_1 + 0x60,*(undefined4 *)(param_1 + 0x7c));
  }
  (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))(*(longlong **)(param_1 + 0xe8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x70));
  *(undefined8 *)(param_1 + 0xe8) = 0;
  return;
}

