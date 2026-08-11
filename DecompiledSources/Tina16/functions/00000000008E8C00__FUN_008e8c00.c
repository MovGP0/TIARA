/* Ghidra address: 008e8c00 */
/* Ghidra symbol: FUN_008e8c00 */


undefined8 *
FUN_008e8c00(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int param_4,int *param_5)

{
  if (param_4 < 1) {
    *param_5 = 0;
    FUN_004144d0(param_2);
  }
  else {
    FUN_00415d10(param_2,param_4 * 2,0);
    FUN_00409a70(param_3,*param_2,(longlong)(param_4 * 2));
    *param_5 = param_4;
  }
  return param_2;
}

