/* Ghidra address: 01b17130 */
/* Ghidra symbol: FUN_01b17130 */


void FUN_01b17130(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_01b170e0();
  return;
}

