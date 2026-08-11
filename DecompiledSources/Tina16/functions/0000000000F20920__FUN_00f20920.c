/* Ghidra address: 00f20920 */
/* Ghidra symbol: FUN_00f20920 */


longlong FUN_00f20920(longlong param_1,char param_2,undefined8 param_3,undefined1 param_4,
                     undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  longlong local_res8;
  undefined8 local_res18;
  undefined1 local_res20;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  local_38 = param_5;
  local_30 = param_6;
  uVar1 = FUN_00f1fe30(&PTR_FUN_00f1e9c8,1,local_res18,local_res20);
  *(undefined8 *)(local_res8 + 8) = uVar1;
  FUN_00414480(&local_res18);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

