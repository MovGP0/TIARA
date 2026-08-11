/* Ghidra address: 013b2ec0 */
/* Ghidra symbol: FUN_013b2ec0 */


void FUN_013b2ec0(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 local_2a8 [82];
  
  puVar1 = (undefined8 *)FUN_00b94e60();
  puVar3 = local_2a8;
  for (lVar2 = 0x52; puVar1 = puVar1 + 1, lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *puVar1;
    puVar3 = puVar3 + 1;
  }
  FUN_013b26e0(0,&PTR_FUN_013b25b8,local_2a8);
  return;
}

