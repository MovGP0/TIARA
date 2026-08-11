/* Ghidra address: 00564ce0 */
/* Ghidra symbol: FUN_00564ce0 */


void FUN_00564ce0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_00564c90();
  return;
}

