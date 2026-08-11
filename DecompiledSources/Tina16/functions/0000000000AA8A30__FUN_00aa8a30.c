/* Ghidra address: 00aa8a30 */
/* Ghidra symbol: FUN_00aa8a30 */


void FUN_00aa8a30(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x70) = *param_2;
  *(undefined8 *)(param_1 + 0x78) = param_2[1];
  return;
}

