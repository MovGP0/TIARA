/* Ghidra address: 00c217e0 */
/* Ghidra symbol: FUN_00c217e0 */


longlong FUN_00c217e0(longlong param_1,char param_2,int param_3,int param_4,int *param_5,
                     longlong param_6)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  *(undefined4 *)(local_res8 + 0xc) = 0;
  *(undefined4 *)(local_res8 + 0x10) = 0;
  *(undefined4 *)(local_res8 + 0x14) = 0;
  *(undefined4 *)(local_res8 + 0x18) = 0;
  local_1c = 0;
  do {
    *(undefined8 *)(local_res8 + 0x28 + (longlong)local_1c * 8) = 0;
    local_1c = local_1c + 1;
  } while (local_1c != 8);
  *(bool *)(local_res8 + 8) = param_3 == param_4;
  if (param_3 == param_4) {
    *(undefined8 *)(local_res8 + 0x20) = 0;
    *param_5 = *param_5 + 1;
  }
  else {
    *(undefined8 *)(local_res8 + 0x20) = *(undefined8 *)(param_6 + (longlong)param_3 * 8);
    *(longlong *)(param_6 + (longlong)param_3 * 8) = local_res8;
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

