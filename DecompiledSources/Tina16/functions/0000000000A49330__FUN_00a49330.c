/* Ghidra address: 00a49330 */
/* Ghidra symbol: FUN_00a49330 */


void FUN_00a49330(void)

{
  longlong lVar1;
  
  lVar1 = FUN_00a2a190();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 8) = 0;
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
  }
  return;
}

