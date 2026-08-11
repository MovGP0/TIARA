/* Ghidra address: 0041a3d0 */
/* Ghidra symbol: FUN_0041a3d0 */


undefined8 FUN_0041a3d0(undefined8 param_1,short *param_2,short *param_3,int param_4)

{
  while( true ) {
    if (param_4 < 1) {
      return 0;
    }
    if (*param_2 != *param_3) break;
    param_2 = param_2 + 1;
    param_3 = param_3 + 1;
    param_4 = param_4 + -1;
  }
  return 1;
}

