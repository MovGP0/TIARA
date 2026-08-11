/* Ghidra address: 00a778d0 */
/* Ghidra symbol: FUN_00a778d0 */


void FUN_00a778d0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x558) = *param_2;
  *(undefined8 *)(param_1 + 0x560) = param_2[1];
  return;
}

