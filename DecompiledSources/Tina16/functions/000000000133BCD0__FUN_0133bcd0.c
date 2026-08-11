/* Ghidra address: 0133bcd0 */
/* Ghidra symbol: FUN_0133bcd0 */


void FUN_0133bcd0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x710) = 0;
  *(undefined1 *)(param_1 + 0x711) = 1;
  if (*(longlong *)(param_1 + 0x700) != 0) {
    FUN_0082a890(*(longlong *)(param_1 + 0x700),1);
    FUN_0082a6c0(*(undefined8 *)(param_1 + 0x700),0);
    FUN_0082a890(*(undefined8 *)(param_1 + 0x700),0);
  }
  return;
}

