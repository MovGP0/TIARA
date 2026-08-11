/* Ghidra address: 018cf2f0 */
/* Ghidra symbol: FUN_018cf2f0 */


void FUN_018cf2f0(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0xe8) == param_2) {
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined1 *)(param_1 + 0xf1) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x98) + 0x48))(*(longlong **)(param_1 + 0x98));
    *(undefined1 *)(param_1 + 0xf2) = 0;
  }
  return;
}

