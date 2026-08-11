/* Ghidra address: 00cc5c90 */
/* Ghidra symbol: FUN_00cc5c90 */


undefined8 FUN_00cc5c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res20;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  longlong local_10;
  
  local_20 = auStack_58;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_res20 = param_4;
  FUN_0041b910(param_4);
  local_10 = FUN_00cc4a90(&LAB_00cc4158,1,param_3);
  FUN_00cc5a10(param_1,&local_28,*(undefined8 *)(local_10 + 0x28),local_res20);
  FUN_00414ad0(local_10 + 0x28,local_28);
  FUN_00cc5a10(param_1,&local_30,*(undefined8 *)(local_10 + 8),local_res20);
  FUN_00414ad0(local_10 + 8,local_30);
  FUN_00cc57c0(param_1,&local_38,*(undefined8 *)(local_10 + 0x50),local_res20);
  FUN_00414ad0(local_10 + 0x50,local_38);
  FUN_00cc5380(local_10,param_2);
  FUN_00410f20(local_10);
  FUN_00414560(&local_38,3);
  FUN_0041b800(&local_res20);
  return param_2;
}

