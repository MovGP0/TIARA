/* Ghidra address: 0041dee0 */
/* Ghidra symbol: FUN_0041dee0 */


void FUN_0041dee0(void)

{
  uint uVar1;
  
  uVar1 = thunk_FUN_04131dd8();
  if ((((uVar1 & 0xff) == 5) && ((uVar1 & 0xff00) != 0)) || (5 < (uVar1 & 0xff))) {
    DAT_02006a30 = 0x7f;
  }
  else {
    DAT_02006a30 = 0x409;
  }
  return;
}

