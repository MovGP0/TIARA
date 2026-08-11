/* Ghidra address: 0175f470 */
/* Ghidra symbol: FUN_0175f470 */


longlong FUN_0175f470(longlong param_1,char param_2,undefined8 param_3)

{
  char cVar1;
  longlong local_res8;
  undefined8 local_res18 [2];
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_30 = 0;
  local_28 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  FUN_00bac3d0(&local_28);
  FUN_0041b840(local_res8 + 8,local_28);
  cVar1 = FUN_00440a20(local_res18[0],1);
  if (cVar1 == '\0') {
    FUN_0041b800(local_res8 + 0x10);
  }
  else {
    (**(code **)(**(longlong **)(local_res8 + 8) + 0x170))
              (*(longlong **)(local_res8 + 8),local_res18[0]);
    (**(code **)(**(longlong **)(local_res8 + 8) + 0x100))(*(longlong **)(local_res8 + 8),&local_30)
    ;
    FUN_0041b840(local_res8 + 0x10,local_30);
  }
  FUN_0041b800(&local_30);
  FUN_0041b800(&local_28);
  FUN_00414480(local_res18);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

