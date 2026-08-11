/* Ghidra address: 0072c2d0 */
/* Ghidra symbol: FUN_0072c2d0 */


void FUN_0072c2d0(undefined8 param_1,undefined8 param_2,short *param_3,short param_4)

{
  undefined8 local_10;
  
  local_10 = 0;
  if ((param_4 == 4) && (*param_3 == 0x43)) {
    thunk_FUN_03f3ed6d(0);
    FUN_0072c4f0(param_1,&local_10);
    FUN_0072c360(param_1,local_10);
  }
  FUN_00414480(&local_10);
  return;
}

