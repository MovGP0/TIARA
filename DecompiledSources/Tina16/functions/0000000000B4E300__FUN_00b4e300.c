/* Ghidra address: 00b4e300 */
/* Ghidra symbol: FUN_00b4e300 */


void FUN_00b4e300(longlong param_1,longlong param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18),param_2);
  *(undefined1 *)(param_2 + 8) = 1;
  return;
}

