/* Ghidra address: 00ae3970 */
/* Ghidra symbol: FUN_00ae3970 */


void FUN_00ae3970(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,char param_6)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  char local_78;
  int local_64;
  undefined1 *local_60;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  int local_30;
  char local_29;
  longlong local_28;
  undefined8 local_20;
  
  local_60 = auStack_a8;
  local_20 = 0;
  local_29 = '\x01';
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x48) + 0x10);
  local_64 = iVar2 + -1;
  local_30 = 0;
  puVar1 = auStack_a8;
  if (-1 < local_64) {
    do {
      local_60 = puVar1;
      local_64 = iVar2;
      local_48 = *(undefined8 *)(param_1 + 0x48);
      local_40 = FUN_004aeac0(local_48,local_30);
      if (*(char *)(local_40 + 8) == 'W') {
        FUN_00414480(&local_20);
        local_50 = *(undefined8 *)(local_40 + 0x28);
        FUN_0043e600(&local_20,local_50);
        iVar2 = FUN_00416db0(local_20,L"text/css");
        local_29 = iVar2 == 0;
        FUN_00414480(&local_20);
      }
      local_30 = local_30 + 1;
      local_64 = local_64 + -1;
      iVar2 = local_64;
      puVar1 = local_60;
    } while (local_64 != 0);
  }
  if (local_29 == '\0') {
    if ((*(char *)(param_1 + 0x45) == '\0') && (param_6 == '\0')) {
      FUN_00ad1170(param_1);
      do {
        FUN_00ad4730(param_1);
      } while (0x1f < *(byte *)(param_1 + 0x44) ||
               (1 << (*(byte *)(param_1 + 0x44) & 0x1f) & 0x400010U) == 0);
    }
  }
  else {
    local_28 = FUN_00a66a60(&PTR_FUN_00a627a8,1,*(undefined1 *)(param_1 + 0xe0));
    *(undefined8 *)(local_28 + 0x28) = *(undefined8 *)(param_1 + 0xd0);
    *(undefined8 *)(local_28 + 0x30) = *(undefined8 *)(param_1 + 0xd8);
    local_80 = param_5;
    local_78 = param_6;
    local_88 = param_4;
    FUN_00a67e60(local_28,*(undefined8 *)
                           (*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x20) + 0x280),param_2,
                 param_3);
    FUN_00410f20(local_28);
  }
  FUN_00414480(&local_20);
  return;
}

