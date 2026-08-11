/* Ghidra address: 00726560 */
/* Ghidra symbol: FUN_00726560 */


void FUN_00726560(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x108) != 0) {
    thunk_FUN_041b2403(*(longlong *)(param_1 + 0x108),0x10,0,0);
  }
  FUN_00722450(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

