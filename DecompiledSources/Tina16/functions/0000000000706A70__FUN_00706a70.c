/* Ghidra address: 00706a70 */
/* Ghidra symbol: FUN_00706a70 */


void FUN_00706a70(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x520) = *param_2;
  *(undefined8 *)(param_1 + 0x528) = param_2[1];
  return;
}

