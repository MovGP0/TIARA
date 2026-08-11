/* Ghidra address: 00570d00 */
/* Ghidra symbol: FUN_00570d00 */


void FUN_00570d00(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_00570cb0();
  return;
}

