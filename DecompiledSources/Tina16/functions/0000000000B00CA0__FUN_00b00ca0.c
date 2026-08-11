/* Ghidra address: 00b00ca0 */
/* Ghidra symbol: FUN_00b00ca0 */


void FUN_00b00ca0(undefined8 param_1,longlong param_2)

{
  FUN_00800dc0(param_1,param_2);
  *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x40000;
  return;
}

