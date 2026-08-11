/* Ghidra address: 015116c0 */
/* Ghidra symbol: FUN_015116c0 */


void FUN_015116c0(longlong param_1)

{
  char cVar1;
  
  do {
    FUN_0040e200(param_1 + 0x150,param_1 + 0x448);
    FUN_0040e480(param_1 + 0x150);
    FUN_00409900();
    if (*(longlong *)(param_1 + 0x448) != 0) {
      return;
    }
    cVar1 = FUN_0040d1c0(param_1 + 0x150);
    FUN_00409900();
  } while (cVar1 == '\0');
  return;
}

