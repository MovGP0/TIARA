/* Ghidra address: 00bafc30 */
/* Ghidra symbol: FUN_00bafc30 */


void FUN_00bafc30(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_res10 [3];
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong *local_20 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = (longlong *)0x0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0x50;
  }
  FUN_00b9d000(local_20,param_1,local_res10[0]);
  iVar1 = (**(code **)(*local_20[0] + 0x18))(local_20[0]);
  if (iVar1 < 1) {
    FUN_0041b800(param_3);
  }
  else {
    while (iVar1 = (**(code **)(*local_20[0] + 0x18))(local_20[0]), 2 < iVar1) {
      iVar1 = (**(code **)(*local_20[0] + 0x18))(local_20[0]);
      (**(code **)(*local_20[0] + 0x20))(local_20[0],local_30,iVar1 + -1);
      (**(code **)(*local_20[0] + 0x48))(local_20[0],local_30[0]);
    }
    (**(code **)(*local_20[0] + 0x20))(local_20[0],&local_38,0);
    FUN_0041b840(param_3,local_38);
  }
  FUN_00417840(&local_38,&DAT_00b9f8e0,2);
  FUN_0041b800(local_20);
  FUN_00414480(local_res10);
  return;
}

