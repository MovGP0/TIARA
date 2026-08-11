/* Ghidra address: 0074a360 */
/* Ghidra symbol: FUN_0074a360 */


void FUN_0074a360(undefined8 param_1,longlong param_2)

{
  FUN_00654e40(param_1,param_2);
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x2000000;
  *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffc;
  return;
}

