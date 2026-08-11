/* Ghidra address: 00be23d0 */
/* Ghidra symbol: FUN_00be23d0 */


void FUN_00be23d0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_00be2380();
  return;
}

