/* Ghidra address: 017ff600 */
/* Ghidra symbol: FUN_017ff600 */


void FUN_017ff600(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_2;
  return;
}

