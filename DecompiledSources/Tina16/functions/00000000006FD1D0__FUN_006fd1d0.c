/* Ghidra address: 006fd1d0 */
/* Ghidra symbol: FUN_006fd1d0 */


void FUN_006fd1d0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_0065be20(param_1);
  if (((cVar1 != '\0') && (param_2 == *(longlong *)(param_1 + 0x4f8))) &&
     (*(char *)(param_2 + 0xe2) == '\0')) {
    FUN_006fd640(param_1);
  }
  return;
}

