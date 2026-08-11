/* Ghidra address: 0079ba40 */
/* Ghidra symbol: FUN_0079ba40 */


void FUN_0079ba40(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_0079b9f0();
  return;
}

