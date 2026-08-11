/* Ghidra address: 014494b0 */
/* Ghidra symbol: FUN_014494b0 */


void FUN_014494b0(double *param_1,undefined8 param_2,undefined8 param_3)

{
  double local_38;
  double dStack_30;
  
  local_38 = *param_1;
  dStack_30 = param_1[1];
  if (-708.0 <= local_38) {
    if (local_38 <= 708.0) {
      FUN_00c44870(&local_38,param_2);
    }
    else {
      FUN_00ef4260(0xd,param_3);
      FUN_01449400(param_2,0,0);
    }
  }
  else {
    FUN_01449400(param_2,0,0);
  }
  return;
}

