/* Ghidra address: 015c8670 */
/* Ghidra symbol: FUN_015c8670 */


int FUN_015c8670(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 local_c8 [8];
  longlong local_82;
  longlong local_38;
  longlong local_30;
  int local_20;
  int local_1c;
  
  puVar3 = local_c8;
  for (lVar1 = 0x12; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_1c = FUN_015c8500(param_1,param_2);
  lVar1 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x28),param_2);
  local_30 = *(longlong *)(lVar1 + 0x46);
  local_38 = local_30;
  if (local_30 != 0) {
    local_38 = *(longlong *)(local_30 + -8);
  }
  local_20 = 0;
  iVar2 = (int)local_38;
  if (-1 < (int)local_38 + -1) {
    do {
      FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x28),local_c8,param_2);
      if (*(short *)(local_82 + (longlong)local_20 * 0xc) != 1) {
        lVar1 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x28),param_2);
        local_1c = local_1c +
                   (uint)*(ushort *)(*(longlong *)(lVar1 + 0x46) + 2 + (longlong)local_20 * 0xc) + 4
        ;
      }
      local_20 = local_20 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00417740(local_c8,&DAT_015b9418);
  return local_1c;
}

