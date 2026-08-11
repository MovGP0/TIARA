/* Ghidra address: 014e7f80 */
/* Ghidra symbol: FUN_014e7f80 */


longlong FUN_014e7f80(longlong param_1,char param_2,undefined4 param_3,undefined4 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  *(undefined4 *)(local_res8 + 0x98) = param_3;
  *(undefined4 *)(local_res8 + 0x9c) = param_4;
  FUN_00414ad0(local_res8 + 0x50,param_5);
  FUN_00414ad0(local_res8 + 0x68,param_6);
  *(undefined8 *)(local_res8 + 0x90) = param_7;
  FUN_00416ba0(local_res8 + 8,*(undefined8 *)PTR_DAT_020049a0,&DAT_014e81bc);
  *(undefined4 *)(local_res8 + 0x48) = 0;
  *(undefined1 *)(local_res8 + 0x4c) = 0;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x10) = uVar1;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x18) = uVar1;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x20) = uVar1;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x38) = uVar1;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x28) = uVar1;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x30) = uVar1;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x40) = uVar1;
  uVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x88) = uVar1;
  FUN_00414560(&param_5,2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

