/* Ghidra address: 01958e80 */
/* Ghidra symbol: FUN_01958e80 */


void FUN_01958e80(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18) = param_2;
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18) = param_2;
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x18) = param_2;
  *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x18) = param_2;
  return;
}

