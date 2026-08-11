/* Ghidra address: 01cc1d20 */
/* Ghidra symbol: FUN_01cc1d20 */


longlong FUN_01cc1d20(longlong param_1,char param_2,char param_3,char param_4,longlong param_5)

{
  undefined8 uVar1;
  longlong local_res8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  FUN_00414610(param_5);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  FUN_01d34560(local_res8,0,5000,1000);
  *(char *)(local_res8 + 0x434) = param_3;
  if (param_3 == '\n') {
    uVar1 = FUN_01cb1d80(&PTR_FUN_01cb1170,1);
    *(undefined8 *)(local_res8 + 0x440) = uVar1;
  }
  else if (param_4 == '\0') {
    if (param_5 == 0) {
      FUN_00416ba0(&local_28,*(undefined8 *)PTR_DAT_020030c8,&DAT_01cc1f6c);
      FUN_00442620(local_res8 + 0x20,local_28);
    }
    else {
      FUN_0044f850(&local_30,param_5);
      FUN_00442620(local_res8 + 0x20,local_30);
    }
    thunk_FUN_041b7910(local_res8 + 0x20,&LAB_01cc1f70,0,local_res8 + 0x22a);
    FUN_00416830(&local_38,local_res8 + 0x22a,0x105);
    uVar1 = FUN_004b9860(&PTR_FUN_0047c498,1,local_38,0xff00);
    *(undefined8 *)(local_res8 + 0x438) = uVar1;
  }
  else {
    uVar1 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
    *(undefined8 *)(local_res8 + 0x438) = uVar1;
  }
  FUN_00414560(&local_38,3);
  FUN_00414480(&param_5);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

