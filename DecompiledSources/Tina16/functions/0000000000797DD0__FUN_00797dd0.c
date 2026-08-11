/* Ghidra address: 00797dd0 */
/* Ghidra symbol: FUN_00797dd0 */


void FUN_00797dd0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_00797d80();
  return;
}

