/* Ghidra address: 007e7270 */
/* Ghidra symbol: FUN_007e7270 */


void FUN_007e7270(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0xd0) == *(longlong *)(param_2 + 0x80))) {
    FUN_007dddc0(*(undefined8 *)(param_1 + 0x80),0);
  }
  return;
}

