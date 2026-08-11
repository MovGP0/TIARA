/* Ghidra address: 00ccd140 */
/* Ghidra symbol: FUN_00ccd140 */


void FUN_00ccd140(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_2 + 0x58) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x48));
  return;
}

