/* Ghidra address: 00616ea0 */
/* Ghidra symbol: FUN_00616ea0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00616ea0(void)

{
  int iVar1;
  
  if (DAT_02012070 == 0) {
    iVar1 = thunk_FUN_041b750c(&DAT_02012070);
    if (iVar1 == 0) {
      DAT_02012078 = 0;
      DAT_02012070 = 10000000;
      _DAT_02012080 = 1.0;
    }
    else {
      DAT_02012078 = 1;
      _DAT_02012080 = 10000000.0 / (double)DAT_02012070;
    }
  }
  return;
}

