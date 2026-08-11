/* Ghidra address: 00a77a30 */
/* Ghidra symbol: FUN_00a77a30 */


void FUN_00a77a30(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x608) = *param_2;
  *(undefined8 *)(param_1 + 0x610) = param_2[1];
  return;
}

