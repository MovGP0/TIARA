/* Ghidra address: 00f42280 */
/* Ghidra symbol: FUN_00f42280 */


void FUN_00f42280(undefined8 param_1,longlong param_2)

{
  FUN_00800dc0(param_1,param_2);
  *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffff7ff;
  return;
}

