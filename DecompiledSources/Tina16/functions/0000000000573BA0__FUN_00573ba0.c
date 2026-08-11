/* Ghidra address: 00573ba0 */
/* Ghidra symbol: FUN_00573ba0 */


void FUN_00573ba0(longlong *param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (*param_1 == 0) {
    FUN_0040d200(param_2,0x18,0);
  }
  else {
    FUN_005382b0(param_1,param_2);
  }
  return;
}

