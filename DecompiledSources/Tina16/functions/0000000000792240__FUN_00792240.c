/* Ghidra address: 00792240 */
/* Ghidra symbol: FUN_00792240 */


void FUN_00792240(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_007923d0(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x48));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x50));
  FUN_00791480(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

