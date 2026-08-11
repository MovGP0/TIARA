/* Ghidra address: 006a0140 */
/* Ghidra symbol: FUN_006a0140 */


void FUN_006a0140(undefined8 param_1,longlong param_2)

{
  FUN_00800dc0(param_1,param_2);
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x80000000;
  return;
}

