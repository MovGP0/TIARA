/* Ghidra address: 017e8080 */
/* Ghidra symbol: FUN_017e8080 */


void FUN_017e8080(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x340) = param_2;
  *(undefined8 *)(param_1 + 0x348) = param_3;
  *(undefined1 *)(param_1 + 0x350) = 1;
  return;
}

