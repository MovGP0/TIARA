/* Ghidra address: 01a9cf50 */
/* Ghidra symbol: FUN_01a9cf50 */


void FUN_01a9cf50(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x12d) == '\0') {
    uVar1 = thunk_FUN_041715dd(5);
    FUN_01a9a6f0(param_1,*(undefined8 *)(param_1 + 0x148),uVar1);
  }
  return;
}

