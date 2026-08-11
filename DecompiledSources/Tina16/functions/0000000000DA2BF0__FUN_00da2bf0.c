/* Ghidra address: 00da2bf0 */
/* Ghidra symbol: FUN_00da2bf0 */


void FUN_00da2bf0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_00da2ba0();
  return;
}

