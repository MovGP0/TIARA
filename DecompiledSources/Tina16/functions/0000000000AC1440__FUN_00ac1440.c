/* Ghidra address: 00ac1440 */
/* Ghidra symbol: FUN_00ac1440 */


void FUN_00ac1440(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x560));
  FUN_00a9d1c0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

