/* Ghidra address: 015c69e0 */
/* Ghidra symbol: FUN_015c69e0 */


void FUN_015c69e0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 local_1d8 [2];
  uint local_1c4;
  undefined8 local_148 [11];
  longlong local_f0;
  undefined8 local_b8 [2];
  int local_a4;
  int local_24;
  longlong local_20;
  
  puVar4 = local_1d8;
  for (lVar3 = 0x12; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = local_148;
  for (lVar3 = 0x12; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = local_b8;
  for (lVar3 = 0x12; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_20 = 0;
  iVar1 = FUN_015c2df0();
  local_24 = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x213d0) + 0x28),local_b8,local_24);
      if (local_a4 == -1) {
        FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x213d0) + 0x28),local_148,local_24);
        local_20 = local_20 + local_f0;
      }
      else {
        FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x213d0) + 0x28),local_1d8,local_24);
        local_20 = local_20 + (ulonglong)local_1c4;
      }
      local_24 = local_24 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 0x213d0) + 8);
  lVar3 = (**(code **)*puVar4)(puVar4);
  if (lVar3 < local_20) {
    uVar2 = FUN_015b59b0(&PTR_FUN_015b5818,1,0x39,0);
    FUN_004134c0(uVar2);
  }
  FUN_00417840(local_1d8,&DAT_015b9418,3);
  return;
}

