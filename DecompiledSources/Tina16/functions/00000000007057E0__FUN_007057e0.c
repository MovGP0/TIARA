/* Ghidra address: 007057e0 */
/* Ghidra symbol: FUN_007057e0 */


void FUN_007057e0(longlong param_1)

{
  char cVar1;
  
  FUN_006852e0(param_1);
  if ((*(ushort *)(param_1 + 0x34) & 0x11) == 0) {
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      FUN_00655b90(param_1);
    }
  }
  return;
}

