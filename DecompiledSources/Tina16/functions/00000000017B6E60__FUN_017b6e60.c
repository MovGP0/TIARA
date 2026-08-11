/* Ghidra address: 017b6e60 */
/* Ghidra symbol: FUN_017b6e60 */


void FUN_017b6e60(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x18) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  return;
}

