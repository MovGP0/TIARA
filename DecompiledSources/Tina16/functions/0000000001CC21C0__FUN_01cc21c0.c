/* Ghidra address: 01cc21c0 */
/* Ghidra symbol: FUN_01cc21c0 */


longlong FUN_01cc21c0(longlong param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined1 local_20 [4];
  undefined4 local_1c;
  
  local_30 = auStack_68;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_01d34620(local_res8,0,param_3);
  if (*(char *)(local_res8 + 0x434) == '\n') {
    uVar2 = FUN_01cb1f70(&PTR_FUN_01cb1170,1,param_3);
    *(undefined8 *)(local_res8 + 0x440) = uVar2;
  }
  else {
    if (*(longlong *)(param_3 + 0x68) == 0) {
      FUN_00416ba0(&local_38,*(undefined8 *)PTR_DAT_020030c8,&DAT_01cc23dc);
      FUN_00442620(local_res8 + 0x20,local_38);
    }
    else {
      FUN_0044f850(&local_40,*(undefined8 *)(param_3 + 0x68));
      FUN_00442620(local_res8 + 0x20,local_40);
    }
    thunk_FUN_041b7910(local_res8 + 0x20,&LAB_01cc23e0,0,local_res8 + 0x22a);
    FUN_00416830(&local_48,local_res8 + 0x22a,0x105);
    uVar2 = FUN_004b9860(&PTR_FUN_0047c498,1,local_48,0xff00);
    *(undefined8 *)(local_res8 + 0x438) = uVar2;
    FUN_01d30e90(param_3,local_20);
    FUN_01d32710(param_3,*(undefined8 *)(local_res8 + 0x438),local_1c);
  }
  FUN_00414560(&local_48,3);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

