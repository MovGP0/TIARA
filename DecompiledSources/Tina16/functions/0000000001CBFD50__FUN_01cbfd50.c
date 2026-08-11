/* Ghidra address: 01cbfd50 */
/* Ghidra symbol: FUN_01cbfd50 */


longlong FUN_01cbfd50(longlong param_1,char param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong local_res8;
  longlong local_res18 [2];
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  FUN_01d34560(local_res8,0,100,0x32);
  if (local_res18[0] == 0) {
    FUN_00416ba0(&local_28,*(undefined8 *)PTR_DAT_020030c8,&DAT_01cbff1c);
    FUN_00442620(local_res8 + 0x20,local_28);
  }
  else {
    FUN_0044f850(&local_30,local_res18[0]);
    FUN_00442620(local_res8 + 0x20,local_30);
  }
  thunk_FUN_041b7910(local_res8 + 0x20,&LAB_01cbff20,0,local_res8 + 0x22a);
  FUN_00416830(&local_38,local_res8 + 0x22a,0x105);
  uVar1 = FUN_004b9860(&PTR_FUN_0047c498,1,local_38,0xff00);
  *(undefined8 *)(local_res8 + 0x438) = uVar1;
  FUN_00414560(&local_38,3);
  FUN_00414480(local_res18);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

