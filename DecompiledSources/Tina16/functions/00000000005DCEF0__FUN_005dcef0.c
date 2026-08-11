/* Ghidra address: 005dcef0 */
/* Ghidra symbol: FUN_005dcef0 */


void FUN_005dcef0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_005dc1d0(*(undefined8 *)(param_1 + 0x18));
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  return;
}

