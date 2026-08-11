/* Ghidra address: 005b5130 */
/* Ghidra symbol: FUN_005b5130 */


void FUN_005b5130(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_005b50e0();
  return;
}

