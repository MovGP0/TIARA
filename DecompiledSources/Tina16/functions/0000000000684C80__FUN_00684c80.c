/* Ghidra address: 00684c80 */
/* Ghidra symbol: FUN_00684c80 */


void FUN_00684c80(longlong param_1,int param_2,undefined8 *param_3,ushort param_4)

{
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_48 = 0;
  local_40 = 0;
  local_38 = *param_3;
  uStack_30 = param_3[1];
  FUN_0064b230(*(undefined8 *)(param_1 + 0x490));
  if (*(longlong *)(param_1 + 0x558) == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x490) + 0xa8))
              (*(longlong **)(param_1 + 0x490),&local_38);
    if (-1 < param_2) {
      if ((param_4 & 0x1000) == 0) {
        (**(code **)(**(longlong **)(param_1 + 0x4f0) + 0x18))
                  (*(longlong **)(param_1 + 0x4f0),&local_48,param_2);
        (**(code **)(**(longlong **)(param_1 + 0x490) + 0x120))
                  (*(longlong **)(param_1 + 0x490),(int)local_38 + 2,local_38._4_4_,local_48);
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x4f0) + 0x18))
                  (*(longlong **)(param_1 + 0x4f0),&local_40,param_2);
        (**(code **)(**(longlong **)(param_1 + 0x490) + 0x120))
                  (*(longlong **)(param_1 + 0x490),(int)local_38 + 1,local_38._4_4_ + 1,local_40);
      }
    }
  }
  else {
    (**(code **)(param_1 + 0x558))
              (*(undefined8 *)(param_1 + 0x560),param_1,param_2,&local_38,param_4);
  }
  FUN_00414560(&local_48,2);
  return;
}

