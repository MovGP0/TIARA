/* Ghidra address: 00f40b20 */
/* Ghidra symbol: FUN_00f40b20 */


void FUN_00f40b20(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x340) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0x340));
  }
  FUN_008296a0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

