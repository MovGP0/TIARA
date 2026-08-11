/* Ghidra address: 015daf00 */
/* Ghidra symbol: FUN_015daf00 */


void FUN_015daf00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 *param_6)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (*(longlong *)(param_1 + 0x130) == 0) {
    *param_6 = 0;
  }
  else {
    FUN_015bf370(local_20,param_2,&DAT_015db004,&DAT_015db014,1);
    (**(code **)(param_1 + 0x130))
              (*(undefined8 *)(param_1 + 0x138),param_1,local_20[0],param_3,param_4,param_5,param_6)
    ;
  }
  FUN_00414480(local_20);
  return;
}

