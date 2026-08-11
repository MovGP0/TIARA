/* Ghidra address: 0184b680 */
/* Ghidra symbol: FUN_0184b680 */


void FUN_0184b680(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0xb0));
  }
  FUN_01847380(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

