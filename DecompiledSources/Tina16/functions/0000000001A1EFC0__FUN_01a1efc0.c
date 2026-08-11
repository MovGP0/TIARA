/* Ghidra address: 01a1efc0 */
/* Ghidra symbol: FUN_01a1efc0 */


longlong FUN_01a1efc0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong local_res8;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_28 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_3);
  FUN_00414610(local_res20);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  FUN_0041b840(local_res8 + 8,local_res18);
  FUN_00414ad0(local_res8 + 0x78,local_res20);
  if (*(longlong *)(local_res8 + 8) != 0) {
    (**(code **)(**(longlong **)(local_res8 + 8) + 0x100))(*(longlong **)(local_res8 + 8),&local_28)
    ;
    FUN_0041b840(local_res8 + 0x10,local_28);
  }
  uVar1 = FUN_00453cc0(&DAT_00438748,1);
  *(undefined8 *)(local_res8 + 0x18) = uVar1;
  uVar1 = FUN_004d7390(&PTR_FUN_00495ae0,1,uVar1);
  *(undefined8 *)(local_res8 + 0x20) = uVar1;
  uVar1 = FUN_00853840(&PTR_FUN_008521f8,1,0);
  *(undefined8 *)(local_res8 + 0xa00) = uVar1;
  FUN_0041b800(&local_28);
  FUN_0041b800(&local_res18);
  FUN_00414480(&local_res20);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

