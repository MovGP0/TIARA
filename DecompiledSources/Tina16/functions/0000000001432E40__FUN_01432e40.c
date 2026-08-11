/* Ghidra address: 01432e40 */
/* Ghidra symbol: FUN_01432e40 */


longlong FUN_01432e40(longlong param_1,char param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00b08760(local_res8,0,local_20,param_4);
  *(undefined1 *)(local_res8 + 0x28) = 2;
  *(undefined1 *)(local_res8 + 0x38) = 1;
  *(undefined8 *)(local_res8 + 8) = param_3;
  FUN_00414480(local_res8 + 0x78);
  *(undefined8 *)(local_res8 + 0x70) = param_3;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

