/* Ghidra address: 00743830 */
/* Ghidra symbol: FUN_00743830 */


void FUN_00743830(longlong *param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x93) = param_2;
  (**(code **)(*param_1 + 0x180))(param_1);
  return;
}

