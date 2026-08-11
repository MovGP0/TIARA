/* Ghidra address: 018acdb0 */
/* Ghidra symbol: FUN_018acdb0 */


void FUN_018acdb0(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                 undefined1 param_5,undefined8 param_6)

{
  char cVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00414610(param_6);
  cVar1 = (**(code **)(*param_1 + 0x300))(param_1,param_2);
  if (cVar1 == '\0') {
    if (param_3 == 0) {
      if (*(longlong *)(param_2 + 0x1c0) == 0) {
        (**(code **)(*param_1 + 0x2e0))
                  (param_1,param_2,*(undefined8 *)(*(longlong *)(param_2 + 0x240) + 0x38),param_4,
                   param_5,param_6);
      }
      else {
        FUN_00441920(local_20,*(undefined8 *)(param_2 + 0x1c0));
        (**(code **)(*param_1 + 0x2e0))(param_1,param_2,local_20[0],param_4,param_5,param_6);
      }
    }
    else {
      (**(code **)(*param_1 + 0x2e0))(param_1,param_2,param_3,param_4,param_5,param_6);
    }
  }
  else {
    (**(code **)(*param_1 + 800))(param_1,param_2);
  }
  FUN_00414480(local_20);
  FUN_00414480(&param_6);
  return;
}

