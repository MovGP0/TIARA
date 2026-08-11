/* Ghidra address: 01433900 */
/* Ghidra symbol: FUN_01433900 */


longlong FUN_01433900(longlong param_1,char param_2,longlong *param_3,int param_4)

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
  *(undefined8 *)(local_res8 + 0x70) = 0;
  if (param_4 < 0) {
    local_20[0] = 0;
  }
  else {
    (**(code **)(*param_3 + 0x2d0))(param_3,param_4,local_20);
  }
  FUN_00b08760(local_res8,0,local_20[0],param_4);
  *(undefined1 *)(local_res8 + 0x28) = 2;
  *(undefined1 *)(local_res8 + 0x38) = 1;
  *(longlong **)(local_res8 + 8) = param_3;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

