/* Ghidra address: 006807a0 */
/* Ghidra symbol: FUN_006807a0 */


void FUN_006807a0(longlong param_1,short param_2)

{
  char cVar1;
  
  if (*(short *)(param_1 + 0x49a) != param_2) {
    *(short *)(param_1 + 0x49a) = param_2;
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      FUN_00655b90(param_1);
    }
  }
  return;
}

