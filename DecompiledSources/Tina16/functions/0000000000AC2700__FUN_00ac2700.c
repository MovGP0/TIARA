/* Ghidra address: 00ac2700 */
/* Ghidra symbol: FUN_00ac2700 */


longlong FUN_00ac2700(longlong param_1,char param_2,undefined8 param_3,longlong param_4)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00ac4d70(local_res8,0,param_3,param_4);
  *(undefined4 *)(local_res8 + 0xf4) = *(undefined4 *)(param_4 + 0xf4);
  FUN_00414ad0(local_res8 + 200,*(undefined8 *)(param_4 + 200));
  *(undefined4 *)(local_res8 + 0xd0) = *(undefined4 *)(param_4 + 0xd0);
  *(undefined4 *)(local_res8 + 0xd4) = *(undefined4 *)(param_4 + 0xd4);
  *(undefined1 *)(local_res8 + 0xd8) = *(undefined1 *)(param_4 + 0xd8);
  *(undefined1 *)(local_res8 + 0xf0) = *(undefined1 *)(param_4 + 0xf0);
  *(undefined4 *)(local_res8 + 0xe0) = *(undefined4 *)(param_4 + 0xe0);
  *(undefined4 *)(local_res8 + 0xdc) = *(undefined4 *)(param_4 + 0xdc);
  FUN_00414ad0(local_res8 + 0xe8,*(undefined8 *)(param_4 + 0xe8));
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

