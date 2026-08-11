/* Ghidra address: 01407930 */
/* Ghidra symbol: FUN_01407930 */


void FUN_01407930(longlong param_1)

{
  char cVar1;
  
  do {
    FUN_0040e200(param_1 + 0xc0,param_1 + 0x3b8);
    FUN_0040e480(param_1 + 0xc0);
    FUN_00409900();
    if (*(longlong *)(param_1 + 0x3b8) != 0) {
      return;
    }
    cVar1 = FUN_0040d1c0(param_1 + 0xc0);
    FUN_00409900();
  } while (cVar1 == '\0');
  return;
}

