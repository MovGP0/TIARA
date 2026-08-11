/* Ghidra address: 00ccd370 */
/* Ghidra symbol: FUN_00ccd370 */


void FUN_00ccd370(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_2 + 0x58) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x48));
  return;
}

