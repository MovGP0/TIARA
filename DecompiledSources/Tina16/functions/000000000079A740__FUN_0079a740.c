/* Ghidra address: 0079a740 */
/* Ghidra symbol: FUN_0079a740 */


void FUN_0079a740(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_0079a6f0();
  return;
}

