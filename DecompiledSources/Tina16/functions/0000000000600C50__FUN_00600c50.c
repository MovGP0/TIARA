/* Ghidra address: 00600c50 */
/* Ghidra symbol: FUN_00600c50 */


int FUN_00600c50(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int local_2c [3];
  
  local_2c[0] = 0;
  if (param_1 != 0) {
    iVar1 = thunk_FUN_03d2c01a(param_1,4,local_2c);
    if ((iVar1 != 0) && (local_2c[0] != 0)) {
      if (param_3 + 1 < local_2c[0]) {
        local_2c[0] = param_3 + 1;
      }
      thunk_FUN_041a3f2d(param_1,0,local_2c[0],param_2);
      FUN_006008d0(param_2,local_2c[0]);
    }
  }
  return local_2c[0];
}

