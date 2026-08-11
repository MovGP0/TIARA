/* Ghidra address: 00ce1e40 */
/* Ghidra symbol: FUN_00ce1e40 */


void FUN_00ce1e40(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  *(bool *)(param_1 + 0xb0) = -1 < *(longlong *)(param_1 + 0x48);
  return;
}

