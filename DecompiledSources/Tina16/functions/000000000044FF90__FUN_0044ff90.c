/* Ghidra address: 0044ff90 */
/* Ghidra symbol: FUN_0044ff90 */


void FUN_0044ff90(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_1a0 [50];
  
  puVar2 = local_1a0;
  for (lVar1 = 0x31; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_0044ff00();
  FUN_0044b7a0(local_1a0,DAT_0200c440);
  FUN_00417c40(&DAT_0200c450,local_1a0,&DAT_00437810);
  FUN_00417740(local_1a0,&DAT_00437810);
  return;
}

