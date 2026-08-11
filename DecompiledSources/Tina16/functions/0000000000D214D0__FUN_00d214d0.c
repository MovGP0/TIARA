/* Ghidra address: 00d214d0 */
/* Ghidra symbol: FUN_00d214d0 */


void FUN_00d214d0(longlong *param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  FUN_00409620(param_1 + 0xb,0);
  FUN_00409620(param_1 + 0xc,0);
  FUN_00409620(param_1 + 10,0);
  FUN_00409620(param_1 + 0xd,0);
  FUN_00cd57f0(param_1[6]);
  param_1[6] = 0;
  FUN_00cd6160(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

