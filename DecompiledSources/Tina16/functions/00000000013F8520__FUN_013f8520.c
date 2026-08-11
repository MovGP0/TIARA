/* Ghidra address: 013f8520 */
/* Ghidra symbol: FUN_013f8520 */


void FUN_013f8520(longlong param_1)

{
  char cVar1;
  
  do {
    FUN_0040e200(param_1 + 0xb0,param_1 + 0x3a8);
    FUN_0040e480(param_1 + 0xb0);
    FUN_00409900();
    if (*(longlong *)(param_1 + 0x3a8) != 0) {
      return;
    }
    cVar1 = FUN_0040d1c0(param_1 + 0xb0);
    FUN_00409900();
  } while (cVar1 == '\0');
  return;
}

