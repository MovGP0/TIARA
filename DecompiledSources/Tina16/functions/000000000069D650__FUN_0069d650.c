/* Ghidra address: 0069d650 */
/* Ghidra symbol: FUN_0069d650 */


void FUN_0069d650(longlong param_1)

{
  FUN_0069d4b0(param_1,1);
  thunk_FUN_0418a669(*(undefined8 *)(param_1 + 0x40));
  if (*(char *)(param_1 + 0x39) == '\0') {
    thunk_FUN_04178f5e(*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

