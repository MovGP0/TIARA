/* Ghidra address: 017cc8f0 */
/* Ghidra symbol: FUN_017cc8f0 */


void FUN_017cc8f0(longlong *param_1)

{
  char cVar1;
  
  if (*param_1 != 0) {
    cVar1 = FUN_01cc6060(*param_1);
    if (cVar1 != '\0') {
      *param_1 = 0;
    }
  }
  return;
}

