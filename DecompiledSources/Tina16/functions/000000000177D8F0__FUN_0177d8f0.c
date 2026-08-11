/* Ghidra address: 0177d8f0 */
/* Ghidra symbol: FUN_0177d8f0 */


void FUN_0177d8f0(longlong param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x411) == '\0') {
    *(undefined1 *)(param_1 + 0x413) = *(undefined1 *)(param_1 + 0x412);
  }
  else {
    iVar1 = thunk_FUN_04041a06(*(undefined8 *)(param_1 + 0x298),0x410);
    *(bool *)(param_1 + 0x413) = iVar1 == 1;
  }
  return;
}

