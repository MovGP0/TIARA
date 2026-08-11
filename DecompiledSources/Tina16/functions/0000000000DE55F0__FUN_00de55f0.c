/* Ghidra address: 00de55f0 */
/* Ghidra symbol: FUN_00de55f0 */


longlong FUN_00de55f0(longlong param_1,char param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  longlong local_res8;
  undefined8 local_res18;
  undefined1 local_res20;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  FUN_00de4f80(local_res8,0,local_res18,local_res20);
  uVar1 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  *(undefined8 *)(local_res8 + 0x18) = uVar1;
  FUN_00414480(&local_res18);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

