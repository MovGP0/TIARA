/* Ghidra address: 0113c550 */
/* Ghidra symbol: FUN_0113c550 */


void FUN_0113c550(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x998);
  if (*(char *)(lVar1 + 0x328) == '\x01') {
    FUN_0064de00(lVar1,&DAT_0113c598);
  }
  else {
    FUN_0064de00(lVar1,&LAB_0113c5ac);
  }
  return;
}

