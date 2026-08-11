/* Ghidra address: 00f34b00 */
/* Ghidra symbol: FUN_00f34b00 */


void FUN_00f34b00(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_1a0 [50];
  
  puVar2 = local_1a0;
  for (lVar1 = 0x31; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_0202eb5c = DAT_0202eb5c + -1;
  if (DAT_0202eb5c == -1) {
    FUN_0044be60(local_1a0);
    FUN_00417c40(&DAT_0202eb60,local_1a0,&DAT_00437810);
  }
  FUN_00417740(local_1a0,&DAT_00437810);
  return;
}

