/* Ghidra address: 01a9cf90 */
/* Ghidra symbol: FUN_01a9cf90 */


void FUN_01a9cf90(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x12d) == '\0') {
    uVar1 = thunk_FUN_041715dd(8);
    FUN_01a9a6f0(param_1,*(undefined8 *)(param_1 + 0x148),uVar1);
  }
  return;
}

