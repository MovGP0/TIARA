/* Ghidra address: 01a33340 */
/* Ghidra symbol: FUN_01a33340 */


longlong FUN_01a33340(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  FUN_00414610(param_5);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  FUN_00410e60(local_res8,0);
  *(undefined8 *)(local_res8 + 0x10) = param_3;
  *(undefined8 *)(local_res8 + 0x18) = param_4;
  FUN_00414ad0(local_res8 + 0x68,param_5);
  uVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x20) = uVar1;
  uVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x28) = uVar1;
  uVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x30) = uVar1;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x38) = uVar1;
  *(undefined8 *)(local_res8 + 8) = 0;
  *(undefined4 *)(local_res8 + 0xb8) = 0xffffffff;
  *(undefined4 *)(local_res8 + 0x48) = 0;
  *(undefined1 *)(local_res8 + 0xa0) = 0;
  *(undefined8 *)(local_res8 + 0xa8) = 0;
  *(undefined4 *)(local_res8 + 0xb0) = 0;
  *(undefined4 *)(local_res8 + 0xb4) = 0;
  FUN_00414480(local_res8 + 0x60);
  *(undefined8 *)(local_res8 + 0x78) = 0;
  *(undefined8 *)(local_res8 + 0x90) = 0;
  *(undefined1 *)(local_res8 + 0xa1) = param_6;
  FUN_00414480(local_res8 + 200);
  *(undefined1 *)(local_res8 + 0xa2) = 0;
  FUN_00414480(local_res8 + 0x70);
  FUN_00414480(&param_5);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

