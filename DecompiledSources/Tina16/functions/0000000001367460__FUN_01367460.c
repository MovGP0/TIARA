/* Ghidra address: 01367460 */
/* Ghidra symbol: FUN_01367460 */


longlong FUN_01367460(longlong param_1,char param_2,undefined8 param_3,undefined4 param_4,
                     undefined4 param_5)

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
  FUN_01364e80(local_res8,0,param_3);
  *(undefined4 *)(local_res8 + 0x18) = param_4;
  *(undefined4 *)(local_res8 + 0x1c) = param_5;
  *(undefined4 *)(local_res8 + 0x20) = *(undefined4 *)(local_res8 + 0x18);
  *(undefined4 *)(local_res8 + 0x24) = *(undefined4 *)(local_res8 + 0x1c);
  FUN_01367550(local_res8);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

