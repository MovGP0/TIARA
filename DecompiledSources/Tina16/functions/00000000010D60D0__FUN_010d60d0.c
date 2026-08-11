/* Ghidra address: 010d60d0 */
/* Ghidra symbol: FUN_010d60d0 */


longlong FUN_010d60d0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined8 local_res20;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_res20 = param_4;
  FUN_00414610(param_4);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  *(undefined8 *)(local_res8 + 8) = param_3;
  *(undefined8 *)(local_res8 + 0x10) = param_6;
  FUN_00414ad0(local_res8 + 0x30,local_res20);
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x18) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x20) = uVar2;
  local_38 = 0;
  uVar2 = FUN_013b9a60(&DAT_013b8648,1,param_6,0);
  *(undefined8 *)(local_res8 + 0x40) = uVar2;
  uVar1 = FUN_010d62f0(local_res8);
  *(undefined1 *)(local_res8 + 0x4c) = uVar1;
  *(undefined8 *)(local_res8 + 0x50) = param_5;
  FUN_0040d200(local_res8 + 0xa0,0x18,0);
  *(undefined4 *)(local_res8 + 0x9c) = 0;
  *(undefined1 *)(local_res8 + 0xb8) = 0;
  FUN_010d6860(local_res8);
  FUN_00414480(&local_res20);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

