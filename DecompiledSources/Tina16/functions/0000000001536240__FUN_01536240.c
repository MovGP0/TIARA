/* Ghidra address: 01536240 */
/* Ghidra symbol: FUN_01536240 */


undefined2 FUN_01536240(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined2 local_95a;
  undefined8 local_950 [121];
  byte local_582;
  undefined2 local_581;
  undefined2 local_57f;
  undefined2 local_57d;
  
  puVar2 = local_950;
  for (lVar1 = 0x127; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_004179d0(local_950,&DAT_01d0d0b8);
  local_95a = 0;
  if (3 < local_582) {
    if (local_582 == 4) {
      local_95a = local_57d;
      goto code_r0x015362c4;
    }
    if (local_582 == 5) {
      local_95a = local_57f;
      goto code_r0x015362c4;
    }
    if (local_582 != 6) goto code_r0x015362c4;
  }
  local_95a = local_581;
code_r0x015362c4:
  FUN_00417740(local_950,&DAT_01d0d0b8);
  return local_95a;
}

