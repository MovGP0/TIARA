/* Ghidra address: 00a77910 */
/* Ghidra symbol: FUN_00a77910 */


void FUN_00a77910(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x578) = *param_2;
  *(undefined8 *)(param_1 + 0x580) = param_2[1];
  return;
}

