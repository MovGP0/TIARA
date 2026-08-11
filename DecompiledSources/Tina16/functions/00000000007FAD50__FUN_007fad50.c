/* Ghidra address: 007fad50 */
/* Ghidra symbol: FUN_007fad50 */


void FUN_007fad50(undefined8 param_1,longlong param_2)

{
  FUN_00654e40(param_1,param_2);
  *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffc;
  return;
}

