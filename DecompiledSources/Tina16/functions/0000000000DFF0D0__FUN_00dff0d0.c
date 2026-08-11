/* Ghidra address: 00dff0d0 */
/* Ghidra symbol: FUN_00dff0d0 */


void FUN_00dff0d0(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_128 [35];
  
  FUN_00dfef00(local_128);
  puVar2 = local_128;
  puVar3 = &DAT_0202de8c;
  for (lVar1 = 0x22; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

