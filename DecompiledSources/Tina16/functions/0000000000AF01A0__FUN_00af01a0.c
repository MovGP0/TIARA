/* Ghidra address: 00af01a0 */
/* Ghidra symbol: FUN_00af01a0 */


void FUN_00af01a0(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x750) + 0x148))
            (*(longlong **)(param_1 + 0x750),*(undefined1 *)(param_1 + 0x2c8));
  (**(code **)(**(longlong **)(param_1 + 0x758) + 0x148))
            (*(longlong **)(param_1 + 0x758),*(undefined1 *)(param_1 + 0x2c8));
  (**(code **)(**(longlong **)(param_1 + 0x738) + 0x148))
            (*(longlong **)(param_1 + 0x738),*(undefined1 *)(param_1 + 0x2c8));
  (**(code **)(**(longlong **)(param_1 + 0x740) + 0x148))
            (*(longlong **)(param_1 + 0x740),*(undefined1 *)(param_1 + 0x2c8));
  if (*(longlong *)(param_1 + 0x8b0) != 0) {
    FUN_00aa6130(*(longlong *)(param_1 + 0x8b0),*(undefined1 *)(param_1 + 0x2c8));
  }
  FUN_00a77ec0(param_1);
  return;
}

