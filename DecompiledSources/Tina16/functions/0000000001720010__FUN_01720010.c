/* Ghidra address: 01720010 */
/* Ghidra symbol: FUN_01720010 */


void FUN_01720010(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_0171ffc0();
  return;
}

