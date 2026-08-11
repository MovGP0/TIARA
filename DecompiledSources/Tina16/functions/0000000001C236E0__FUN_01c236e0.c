/* Ghidra address: 01c236e0 */
/* Ghidra symbol: FUN_01c236e0 */


void FUN_01c236e0(undefined8 param_1,longlong param_2)

{
  FUN_00654e40(param_1,param_2);
  *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffc;
  return;
}

