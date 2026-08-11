/* Ghidra address: 01b4c3a0 */
/* Ghidra symbol: FUN_01b4c3a0 */


longlong FUN_01b4c3a0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong local_res8;
  undefined8 local_res20;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res20 = param_4;
  FUN_00414610(param_4);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  *(undefined8 *)(local_res8 + 0x18) = param_3;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x14b8) = uVar1;
  FUN_00414ad0(local_res8 + 0x20,local_res20);
  *(undefined1 *)(local_res8 + 0x147d) = 0;
  *(undefined8 *)(local_res8 + 0x1480) = 0;
  *(undefined4 *)(local_res8 + 0x1490) = 0;
  *(undefined4 *)(local_res8 + 0x149c) = 0;
  *(undefined4 *)(local_res8 + 0x1494) = 0;
  *(undefined4 *)(local_res8 + 0x1498) = 0;
  *(undefined4 *)(local_res8 + 0x14a0) = 0;
  *(undefined8 *)(local_res8 + 8) = 0;
  *(undefined1 *)(local_res8 + 0x147c) = 0;
  FUN_00414480(&local_res20);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

