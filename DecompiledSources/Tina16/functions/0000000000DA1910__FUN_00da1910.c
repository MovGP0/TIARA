/* Ghidra address: 00da1910 */
/* Ghidra symbol: FUN_00da1910 */


void FUN_00da1910(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_00da18c0();
  return;
}

