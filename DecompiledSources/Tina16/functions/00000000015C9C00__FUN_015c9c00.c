/* Ghidra address: 015c9c00 */
/* Ghidra symbol: FUN_015c9c00 */


undefined1 FUN_015c9c00(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 local_b8 [5];
  int local_8e;
  undefined1 local_19;
  
  puVar3 = local_b8;
  for (lVar2 = 0x12; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_19 = 0;
  iVar1 = FUN_015c2df0(*(undefined8 *)(param_1 + 0x28));
  if (0 < iVar1) {
    FUN_015c29e0(*(undefined8 *)(param_1 + 0x28),local_b8,0);
    if (local_8e != 0) {
      local_19 = 1;
    }
  }
  FUN_00417740(local_b8,&DAT_015b9418);
  return local_19;
}

