/* Ghidra address: 00f1ff80 */
/* Ghidra symbol: FUN_00f1ff80 */


longlong FUN_00f1ff80(longlong param_1,char param_2,undefined8 param_3,undefined1 param_4,
                     undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  longlong local_res8;
  undefined8 local_res18;
  undefined1 local_res20;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  FUN_00414ad0(local_res8 + 8,local_res18);
  *(undefined1 *)(local_res8 + 0x10) = 1;
  *(undefined1 *)(local_res8 + 0x11) = local_res20;
  *(undefined1 *)(local_res8 + 0x13) = param_5;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x18) = uVar1;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x20) = uVar1;
  (**(code **)(**(longlong **)(local_res8 + 0x18) + 0x88))
            (*(longlong **)(local_res8 + 0x18),param_6);
  (**(code **)(**(longlong **)(local_res8 + 0x20) + 0x88))
            (*(longlong **)(local_res8 + 0x20),param_7);
  FUN_00414480(&local_res18);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

