/* Ghidra address: 016a67c0 */
/* Ghidra symbol: FUN_016a67c0 */


longlong FUN_016a67c0(longlong param_1,char param_2,undefined8 param_3,longlong param_4,
                     undefined8 param_5,undefined8 param_6,longlong param_7,undefined8 param_8,
                     undefined8 param_9,char param_10,undefined8 param_11)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined8 local_res18;
  longlong local_res20;
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
  *(undefined8 *)(local_res8 + 0x58) = param_9;
  if ((local_res20 == 0) && (param_7 == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)(local_res8 + 0x3a) = uVar1;
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *(longlong **)(local_res8 + 0x48) = plVar2;
  FUN_00416880(&local_28,local_res18);
  (**(code **)(*plVar2 + 0x78))(plVar2,local_28);
  *(longlong *)(local_res8 + 8) = local_res20;
  *(undefined8 *)(local_res8 + 0x18) = param_6;
  *(longlong *)(local_res8 + 0x20) = param_7;
  *(undefined8 *)(local_res8 + 0x10) = param_5;
  *(undefined1 *)(local_res8 + 0x38) = 1;
  if (param_10 == '\0') {
    *(undefined8 *)(local_res8 + 0x28) = param_8;
    *(undefined8 *)(local_res8 + 0x30) = 0;
  }
  else {
    *(undefined8 *)(local_res8 + 0x28) = 0;
    *(undefined8 *)(local_res8 + 0x30) = param_8;
  }
  local_38 = local_res8;
  local_30 = *(undefined8 *)(local_res8 + 0x20);
  uVar3 = FUN_016982a0(&DAT_01697d58,1,0,0);
  *(undefined8 *)(local_res8 + 0x50) = uVar3;
  FUN_01698480(uVar3,*(undefined8 *)(local_res8 + 0x48));
  *(undefined8 *)(local_res8 + 0x68) = param_11;
  FUN_00414480(&local_28);
  FUN_004144d0(&local_res18);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

