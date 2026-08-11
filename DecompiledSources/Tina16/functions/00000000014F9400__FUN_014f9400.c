/* Ghidra address: 014f9400 */
/* Ghidra symbol: FUN_014f9400 */


longlong FUN_014f9400(longlong param_1,char param_2,undefined1 param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_20 = *param_4;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00410e60(local_res8,0);
  *(undefined1 *)(local_res8 + 8) = param_3;
  *(undefined8 *)(local_res8 + 0xc) = local_20;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

