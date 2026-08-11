/* Ghidra address: 0171ee90 */
/* Ghidra symbol: FUN_0171ee90 */


void FUN_0171ee90(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_0171ee40();
  return;
}

