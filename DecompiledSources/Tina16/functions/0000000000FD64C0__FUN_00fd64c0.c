/* Ghidra address: 00fd64c0 */
/* Ghidra symbol: FUN_00fd64c0 */


void FUN_00fd64c0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x6e0) = 0;
  (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x128))
            (*(longlong **)(param_1 + 0x6b0),*(undefined1 *)(param_1 + 0x6e1));
  (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x128))
            (*(longlong **)(param_1 + 0x6b8),*(undefined1 *)(param_1 + 0x6e1));
  if (*(char *)(param_1 + 0x6e1) != '\0') {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),L"Interrupt_1");
  }
  FUN_0064cf60(param_1,0x49e);
  return;
}

