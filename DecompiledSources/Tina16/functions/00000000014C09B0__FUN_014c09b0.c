/* Ghidra address: 014c09b0 */
/* Ghidra symbol: FUN_014c09b0 */


undefined8 FUN_014c09b0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong *local_res10;
  undefined8 local_res18 [2];
  longlong *local_40;
  longlong local_38;
  undefined8 local_30;
  longlong *local_28;
  longlong *local_20 [2];
  
  local_40 = (longlong *)0x0;
  local_38 = 0;
  local_30 = 0;
  local_20[0] = (longlong *)0x0;
  local_28 = (longlong *)0x0;
  local_res10 = param_2;
  local_res18[0] = param_3;
  FUN_0041b910(param_2);
  FUN_00414610(local_res18[0]);
  FUN_00414480(param_1);
  (**(code **)(*local_res10 + 0xe8))(local_res10,local_20,local_res18[0]);
  (**(code **)(*local_20[0] + 0x68))(local_20[0]);
  (**(code **)(*local_20[0] + 0x70))(local_20[0],&local_30);
  FUN_0041b890(&local_28,local_30,&DAT_014c0b40);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x28))(local_28,&local_38);
    if (local_38 != 0) {
      (**(code **)(*local_28 + 0x28))(local_28,&local_40);
      (**(code **)(*local_40 + 0x50))(local_40,param_1);
    }
  }
  FUN_00417840(&local_40,&DAT_00b9f8e0,3);
  FUN_0041b800(&local_28);
  FUN_0041b800(local_20);
  FUN_0041b800(&local_res10);
  FUN_00414480(local_res18);
  return param_1;
}

