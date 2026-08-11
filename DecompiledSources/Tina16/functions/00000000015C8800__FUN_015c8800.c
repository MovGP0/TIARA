/* Ghidra address: 015c8800 */
/* Ghidra symbol: FUN_015c8800 */


void FUN_015c8800(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 local_208 [8];
  longlong local_1c2;
  undefined8 local_178 [4];
  short local_156;
  undefined8 local_e8 [5];
  int local_be;
  longlong local_50;
  longlong local_48;
  int local_38;
  undefined2 local_34;
  short local_32;
  
  puVar4 = local_208;
  for (lVar3 = 0x12; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = local_178;
  for (lVar3 = 0x12; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = local_e8;
  for (lVar3 = 0x12; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  iVar1 = FUN_015c8500(param_1,param_2);
  if (0 < iVar1) {
    local_34 = 1;
    local_32 = FUN_015c8500(param_1,param_2);
    local_32 = local_32 + -4;
    FUN_015d9e90(*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x18),&local_34,4,
                 *(longlong *)(param_1 + 0x1b0) + 8,
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x18) + 0x98),
                 0xffffffff,*(undefined8 *)(param_1 + 0x178));
    lVar3 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x28),param_2);
    if (*(int *)(lVar3 + 0x18) == -1) {
      lVar3 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x28),param_2);
      FUN_015d9e90(*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x18),lVar3 + 0x50,8,
                   *(longlong *)(param_1 + 0x1b0) + 8,
                   *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x18) + 0x98),
                   0xffffffff,*(undefined8 *)(param_1 + 0x178));
    }
    lVar3 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x28),param_2);
    if (*(int *)(lVar3 + 0x14) == -1) {
      lVar3 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x28),param_2);
      FUN_015d9e90(*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x18),lVar3 + 0x58,8,
                   *(longlong *)(param_1 + 0x1b0) + 8,
                   *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x18) + 0x98),
                   0xffffffff,*(undefined8 *)(param_1 + 0x178));
    }
    FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x28),local_e8,param_2);
    if (local_be == -1) {
      lVar3 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x28),param_2);
      FUN_015d9e90(*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x18),lVar3 + 0x60,8,
                   *(longlong *)(param_1 + 0x1b0) + 8,
                   *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x18) + 0x98),
                   0xffffffff,*(undefined8 *)(param_1 + 0x178));
    }
    FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x28),local_178,param_2);
    if (local_156 == -1) {
      lVar3 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x28),param_2);
      FUN_015d9e90(*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x18),lVar3 + 0x68,4,
                   *(longlong *)(param_1 + 0x1b0) + 8,
                   *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x18) + 0x98),
                   0xffffffff,*(undefined8 *)(param_1 + 0x178));
    }
  }
  lVar3 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x28),param_2);
  local_48 = *(longlong *)(lVar3 + 0x46);
  local_50 = local_48;
  if (local_48 != 0) {
    local_50 = *(longlong *)(local_48 + -8);
  }
  local_38 = 0;
  iVar1 = (int)local_50;
  if (-1 < (int)local_50 + -1) {
    do {
      FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x28),local_208,param_2);
      if (*(short *)(local_1c2 + (longlong)local_38 * 0xc) != 1) {
        lVar3 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x28),param_2);
        FUN_015d9e90(*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x18),
                     *(longlong *)(lVar3 + 0x46) + (longlong)local_38 * 0xc,4,
                     *(longlong *)(param_1 + 0x1b0) + 8,
                     *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x18) + 0x98),
                     0xffffffff,*(undefined8 *)(param_1 + 0x178));
        lVar3 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x28),param_2);
        if (*(longlong *)(*(longlong *)(lVar3 + 0x46) + 4 + (longlong)local_38 * 0xc) != 0) {
          lVar3 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x28),param_2);
          lVar2 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x28),param_2);
          FUN_015d9e90(*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x18),
                       *(undefined8 *)(*(longlong *)(lVar3 + 0x46) + 4 + (longlong)local_38 * 0xc),
                       *(undefined2 *)(*(longlong *)(lVar2 + 0x46) + 2 + (longlong)local_38 * 0xc),
                       *(longlong *)(param_1 + 0x1b0) + 8,
                       *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x18) + 0x98),
                       0xffffffff,*(undefined8 *)(param_1 + 0x178));
        }
      }
      local_38 = local_38 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00417840(local_208,&DAT_015b9418,3);
  return;
}

