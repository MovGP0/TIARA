/* Ghidra address: 00607bc0 */
/* Ghidra symbol: FUN_00607bc0 */


void FUN_00607bc0(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  if (param_1[5] != 0) {
    FUN_00607750(param_1[5]);
    thunk_FUN_0416f828(param_1[5]);
    param_1[5] = 0;
  }
  (**(code **)*param_1)(param_1);
  if (param_1[0x13] != 0) {
    thunk_FUN_041d2921(param_1[0x13]);
  }
  uVar1 = param_1[6];
  param_1[6] = 0;
  FUN_00410f20(uVar1);
  FUN_00607b30(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

