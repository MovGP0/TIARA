/* Ghidra address: 01ba2650 */
/* Ghidra symbol: FUN_01ba2650 */


void FUN_01ba2650(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x968) != 0) {
    _FreeDebugReaderSession(*(undefined8 *)(param_1 + 0x970),*(longlong *)(param_1 + 0x968));
  }
  return;
}

