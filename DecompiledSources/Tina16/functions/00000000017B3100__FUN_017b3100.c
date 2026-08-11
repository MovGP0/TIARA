/* Ghidra address: 017b3100 */
/* Ghidra symbol: FUN_017b3100 */


longlong FUN_017b3100(longlong param_1,char param_2,undefined4 param_3,undefined4 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                     undefined1 param_9,undefined4 param_10)

{
  undefined8 uVar1;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  FUN_00414610(param_5);
  FUN_00414610(param_6);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  FUN_017b58f0(local_res8,0);
  FUN_00416910(local_res8 + 0x40,param_5,0xff);
  FUN_00416910(local_res8 + 0x140,param_6,0xff);
  *(undefined8 *)(local_res8 + 0x240) = param_7;
  *(undefined1 *)(local_res8 + 0x248) = param_8;
  *(undefined1 *)(local_res8 + 0x249) = param_9;
  *(undefined4 *)(local_res8 + 0x24c) = param_10;
  uVar1 = FUN_00498310(10,10);
  *(undefined8 *)(local_res8 + 0x250) = uVar1;
  *(undefined4 *)(local_res8 + 0x18) = param_3;
  *(undefined4 *)(local_res8 + 0x1c) = param_4;
  FUN_00414560(&param_5,2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

