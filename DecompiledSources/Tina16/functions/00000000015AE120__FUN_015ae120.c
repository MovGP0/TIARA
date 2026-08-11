/* Ghidra address: 015ae120 */
/* Ghidra symbol: FUN_015ae120 */


void FUN_015ae120(longlong *param_1,byte param_2)

{
  FUN_00411a80(param_1,param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  FUN_00409620(param_1 + 0xb,0);
  FUN_00409620(param_1 + 0xc,0);
  FUN_00409620(param_1 + 10,0);
  FUN_00409620(param_1 + 0xd,0);
  FUN_00409620(param_1 + 0xf,0);
  FUN_00409620(param_1 + 0x10,0);
  FUN_015a9480(param_1[6]);
  param_1[6] = 0;
  FUN_015a9e30(param_1,param_2 & 0xfc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

