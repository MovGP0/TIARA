/* Ghidra address: 015c6800 */
/* Ghidra symbol: FUN_015c6800 */


undefined1 FUN_015c6800(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 local_148 [5];
  uint local_11e;
  undefined8 local_b8 [2];
  int local_a4;
  int local_20;
  undefined1 local_19;
  
  puVar3 = local_148;
  for (lVar2 = 0x12; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = local_b8;
  for (lVar2 = 0x12; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_19 = 1;
  local_20 = 0;
  do {
    iVar1 = FUN_015c2df0(*(undefined8 *)(*(longlong *)(param_1 + 0x213d0) + 0x28));
    if (iVar1 <= local_20) {
code_r0x015c68e7:
      FUN_00417840(local_148,&DAT_015b9418,2);
      return local_19;
    }
    FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x213d0) + 0x28),local_b8,local_20);
    if (local_a4 != 0) {
      FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x213d0) + 0x28),local_148,local_20);
      local_19 = *(uint *)(*(longlong *)(param_1 + 0x213d0) + 0xa0) <= local_11e;
      goto code_r0x015c68e7;
    }
    local_20 = local_20 + 1;
  } while( true );
}

