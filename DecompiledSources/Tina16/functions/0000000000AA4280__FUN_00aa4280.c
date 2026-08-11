/* Ghidra address: 00aa4280 */
/* Ghidra symbol: FUN_00aa4280 */


void FUN_00aa4280(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x570));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x578));
  FUN_00a9d1c0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

