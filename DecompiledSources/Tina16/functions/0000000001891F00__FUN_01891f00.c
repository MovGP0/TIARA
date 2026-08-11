/* Ghidra address: 01891f00 */
/* Ghidra symbol: FUN_01891f00 */


void FUN_01891f00(undefined8 param_1,longlong param_2)

{
  FUN_006857d0(param_1,param_2);
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffffffc | 0x12;
  return;
}

