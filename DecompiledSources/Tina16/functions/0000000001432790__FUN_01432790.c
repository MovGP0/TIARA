/* Ghidra address: 01432790 */
/* Ghidra symbol: FUN_01432790 */


longlong FUN_01432790(longlong param_1,char param_2,longlong *param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20 [2];
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  (**(code **)(*param_3 + 0x2d0))(param_3,param_4,local_20);
  FUN_00b08760(local_res8,0,local_20[0],param_4);
  *(undefined1 *)(local_res8 + 0x28) = 2;
  *(undefined1 *)(local_res8 + 0x38) = 1;
  *(longlong **)(local_res8 + 8) = param_3;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

