/* Ghidra address: 016a6a40 */
/* Ghidra symbol: FUN_016a6a40 */


longlong FUN_016a6a40(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_28 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414630(param_3);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  *(undefined8 *)(local_res8 + 0x60) = param_6;
  *(undefined1 *)(local_res8 + 0x3a) = 1;
  *(undefined1 *)(local_res8 + 0x3b) = 0;
  plVar1 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *(longlong **)(local_res8 + 0x48) = plVar1;
  FUN_00416880(&local_28,local_res18);
  (**(code **)(*plVar1 + 0x78))(plVar1,local_28);
  *(undefined8 *)(local_res8 + 8) = local_res20;
  *(undefined8 *)(local_res8 + 0x10) = param_5;
  local_38 = local_res8;
  local_30 = *(undefined8 *)(local_res8 + 0x20);
  uVar2 = FUN_016982a0(&DAT_01697d58,1,0,1);
  *(undefined8 *)(local_res8 + 0x50) = uVar2;
  FUN_01698480(uVar2,*(undefined8 *)(local_res8 + 0x48));
  *(undefined8 *)(local_res8 + 0x68) = param_7;
  FUN_00414480(&local_28);
  FUN_004144d0(&local_res18);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

