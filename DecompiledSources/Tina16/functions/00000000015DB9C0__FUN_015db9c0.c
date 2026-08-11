/* Ghidra address: 015db9c0 */
/* Ghidra symbol: FUN_015db9c0 */


void FUN_015db9c0(longlong param_1,undefined8 param_2,undefined1 param_3,int param_4,
                 undefined4 param_5,undefined8 param_6,undefined1 *param_7)

{
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  short local_1a;
  
  local_30[0] = 0;
  local_38 = 0;
  *param_7 = 1;
  if (*(longlong *)(param_1 + 0x1a0) == 0) {
    if (param_4 == 0x2d) {
      *param_7 = 2;
    }
    else {
      if (param_4 == 0x3d) {
        local_1a = FUN_0072d440(param_6,3,0x50,0);
      }
      else {
        FUN_0041ddd0(&local_38,PTR_PTR_02004280);
        local_48 = param_6;
        local_40 = 0x11;
        FUN_00442f70(local_30,local_38,&local_48,0);
        local_1a = FUN_0072d440(local_30[0],3,0x70,0);
      }
      if (local_1a == 4) {
        *param_7 = 0;
      }
      else if (local_1a == 5) {
        *param_7 = 1;
      }
      else {
        *param_7 = 2;
      }
    }
  }
  else {
    (**(code **)(param_1 + 0x1a0))
              (*(undefined8 *)(param_1 + 0x1a8),param_1,param_2,param_3,param_4,param_5,param_6,
               param_7);
  }
  FUN_00414560(&local_38,2);
  return;
}

