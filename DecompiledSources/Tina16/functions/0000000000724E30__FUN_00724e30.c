/* Ghidra address: 00724e30 */
/* Ghidra symbol: FUN_00724e30 */


void FUN_00724e30(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0xd8));
  FUN_00722450(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

