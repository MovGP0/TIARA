/* Ghidra address: 013b9a60 */
/* Ghidra symbol: FUN_013b9a60 */


longlong FUN_013b9a60(longlong param_1,char param_2,undefined8 param_3,undefined1 param_4,
                     undefined8 param_5)

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
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 200) = uVar1;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0xd0) = uVar1;
  uVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x58) = uVar1;
  *(undefined8 *)(local_res8 + 0x68) = param_3;
  *(undefined4 *)(local_res8 + 0x118) = 0;
  *(undefined1 *)(local_res8 + 0x50) = 1;
  *(undefined4 *)(local_res8 + 0x40) = 0;
  *(undefined4 *)(local_res8 + 0x10) = 0;
  *(undefined1 *)(local_res8 + 0x124) = 0;
  *(undefined1 *)(local_res8 + 0x126) = param_4;
  *(undefined8 *)(local_res8 + 0x70) = 0;
  *(undefined1 *)(local_res8 + 0x125) = 1;
  *(undefined8 *)(local_res8 + 0xb0) = 0;
  *(undefined1 *)(local_res8 + 0xb8) = 0;
  *(undefined8 *)(local_res8 + 0x18) = 0;
  *(undefined8 *)(local_res8 + 0x78) = 0;
  *(undefined4 *)(local_res8 + 0x48) = 0;
  *(undefined8 *)(local_res8 + 0x80) = 0;
  *(undefined4 *)(local_res8 + 0x4c) = 0;
  *(undefined4 *)(local_res8 + 0x120) = 0;
  FUN_00414ad0(local_res8 + 0x28,param_5);
  FUN_013bc8f0(local_res8);
  *(undefined8 *)(local_res8 + 0xc0) = 0;
  *(undefined8 *)(local_res8 + 0x98) = 0;
  *(undefined8 *)(local_res8 + 0xa0) = 0;
  *(undefined8 *)(local_res8 + 0xa8) = 0;
  *(undefined8 *)(local_res8 + 0x60) = 0;
  *(undefined4 *)(local_res8 + 0x11c) = 0;
  *(undefined4 *)(local_res8 + 0x44) = 0;
  *(undefined8 *)(local_res8 + 0x38) = 0;
  *(undefined8 *)(local_res8 + 0x30) = 0;
  FUN_00414480(&param_5);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

