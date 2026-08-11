/* Ghidra address: 01b81ef0 */
/* Ghidra symbol: FUN_01b81ef0 */


longlong FUN_01b81ef0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5)

{
  undefined8 uVar1;
  longlong local_res8;
  undefined8 local_res20;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_30 = 0;
  local_38 = 0;
  local_28 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414610(param_5);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  FUN_01a24930(&local_28);
  FUN_00414ad0(local_res8 + 0x360,local_28);
  FUN_00414ad0(local_res8 + 0x380,local_res20);
  *(undefined8 *)(local_res8 + 0x10) = param_3;
  *(undefined8 *)(local_res8 + 0x18) = param_3;
  FUN_00441920(&local_38,*(undefined8 *)(local_res8 + 0x380));
  FUN_01b806a0(&local_30,local_38);
  FUN_00414ad0(local_res8 + 0x390,local_30);
  *(undefined1 *)(local_res8 + 0x3c0) = 0;
  *(undefined8 *)(local_res8 + 8) = 0;
  *(undefined4 *)(local_res8 + 0x34c) = 0;
  *(undefined4 *)(local_res8 + 0x350) = 0;
  *(undefined4 *)(local_res8 + 0x354) = 0;
  *(undefined4 *)(local_res8 + 0x358) = 0;
  *(undefined1 *)(local_res8 + 0x3c2) = 0;
  *(undefined4 *)(local_res8 + 0x340) = 0;
  *(undefined4 *)(local_res8 + 0x344) = 0;
  uVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x3a0) = uVar1;
  uVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x3b8) = uVar1;
  uVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x3a8) = uVar1;
  uVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x3b0) = uVar1;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x3c8) = uVar1;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x3d0) = uVar1;
  *(undefined1 *)(local_res8 + 0x3c3) = 1;
  *(undefined1 *)(local_res8 + 0x3c4) = 0;
  uVar1 = FUN_01b8d0f0(&PTR_FUN_01b7e390,1);
  *(undefined8 *)(local_res8 + 0x3e0) = uVar1;
  *(undefined1 *)(local_res8 + 0x3c1) = 0;
  FUN_00414ad0(local_res8 + 0x398,param_5);
  FUN_00414560(&local_38,3);
  FUN_00414560(&local_res20,2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

