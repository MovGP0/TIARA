/* Ghidra address: 01139080 */
/* Ghidra symbol: FUN_01139080 */


void FUN_01139080(longlong param_1,undefined8 param_2,undefined2 param_3)

{
  *(undefined8 *)(param_1 + 0xa80) = param_2;
  *(undefined2 *)(param_1 + 0xa88) = param_3;
  *(undefined1 *)(param_1 + 0xa8a) = 1;
  return;
}

