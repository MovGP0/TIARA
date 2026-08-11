/* Ghidra address: 004e1620 */
/* Ghidra symbol: FUN_004e1620 */


void FUN_004e1620(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x78) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x78) + -0x20))(*(undefined8 *)(param_2 + 0x78),1);
  }
  return;
}

