/* Ghidra address: 007f9d60 */
/* Ghidra symbol: FUN_007f9d60 */


void FUN_007f9d60(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    cVar1 = FUN_007f9fa0(param_1);
    if (cVar1 != '\0') {
      cVar1 = FUN_0064e970(*(undefined8 *)(param_1 + 8));
      if (cVar1 == '\0') {
        FUN_007fa6c0(param_1,0);
      }
      else {
        FUN_007fa6c0(param_1,*(undefined4 *)(param_1 + 0x18));
      }
    }
  }
  return;
}

