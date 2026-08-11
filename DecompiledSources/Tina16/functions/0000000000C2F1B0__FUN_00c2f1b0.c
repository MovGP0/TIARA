/* Ghidra address: 00c2f1b0 */
/* Ghidra symbol: FUN_00c2f1b0 */


longlong FUN_00c2f1b0(longlong param_1,char param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00c2de60(local_res8,0,param_3);
  *(undefined8 *)(local_res8 + 0x18) = *param_4;
  *(undefined2 *)(local_res8 + 0x20) = *(undefined2 *)(param_4 + 1);
  *(undefined1 *)(local_res8 + 0x22) = *(undefined1 *)((longlong)param_4 + 10);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

