/* Ghidra address: 01589630 */
/* Ghidra symbol: FUN_01589630 */


void FUN_01589630(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_015895e0();
  return;
}

