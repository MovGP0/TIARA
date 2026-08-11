/* Ghidra address: 00611d40 */
/* Ghidra symbol: FUN_00611d40 */


void FUN_00611d40(undefined8 param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  if (param_3 == (undefined4 *)0x0) {
    thunk_FUN_041b2403(param_1,0x100e,(longlong)param_2,0);
  }
  else {
    *param_3 = param_4;
    thunk_FUN_041b2403(param_1,0x100e,(longlong)param_2,param_3);
  }
  return;
}

