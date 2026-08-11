/* Ghidra address: 00714b70 */
/* Ghidra symbol: FUN_00714b70 */


void FUN_00714b70(void)

{
  longlong lVar1;
  
  if (DAT_020124c8 == 0) {
    lVar1 = FUN_00714d80(&DAT_007126b8,1);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = lVar1 + 0x48;
    }
    FUN_0041b840(&DAT_020124c8,lVar1);
  }
  return;
}

