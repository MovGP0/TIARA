/* Ghidra address: 015cdaa0 */
/* Ghidra symbol: FUN_015cdaa0 */


int FUN_015cdaa0(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 local_1d8 [13];
  char local_16c;
  undefined8 local_148 [5];
  undefined8 local_11a;
  undefined8 local_b8 [5];
  undefined8 local_8a;
  int local_24;
  int local_20;
  int local_1c;
  
  puVar4 = local_1d8;
  for (lVar3 = 0x12; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = local_b8;
  for (lVar3 = 0x12; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = local_148;
  for (lVar3 = 0x12; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  iVar1 = FUN_015c2df0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xee0) + 0x238) + 0x20)
                      );
  iVar2 = FUN_015c2df0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xee0) + 0x238) + 0x28)
                      );
  if (iVar1 < iVar2) {
    local_24 = FUN_015c2df0(*(undefined8 *)
                             (*(longlong *)(*(longlong *)(param_1 + 0xee0) + 0x238) + 0x20));
  }
  else {
    local_24 = FUN_015c2df0(*(undefined8 *)
                             (*(longlong *)(*(longlong *)(param_1 + 0xee0) + 0x238) + 0x28));
  }
  local_1c = local_24;
  local_20 = 0;
  iVar1 = local_24;
  if (-1 < local_24 + -1) {
    do {
      FUN_015c29e0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xee0) + 0x238) + 0x20),
                   local_b8,local_20);
      FUN_015c29e0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xee0) + 0x238) + 0x28),
                   local_148,local_20);
      iVar2 = FUN_00416db0(local_8a,local_11a);
      if ((iVar2 != 0) ||
         (FUN_015c29e0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xee0) + 0x238) + 0x28)
                       ,local_1d8,local_20), local_16c != '\0')) {
        local_1c = local_20;
        break;
      }
      local_20 = local_20 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00417840(local_1d8,&DAT_015b9418,3);
  return local_1c;
}

