/* Ghidra address: 0112a4e0 */
/* Ghidra symbol: FUN_0112a4e0 */


longlong FUN_0112a4e0(longlong param_1,char param_2,undefined2 param_3)

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
  FUN_00410e60(local_res8,0);
  *(undefined8 *)(local_res8 + 8) = DAT_01f240ac;
  *(undefined8 *)(local_res8 + 0x10) = DAT_01f240b4;
  *(undefined2 *)(local_res8 + 0xc) = param_3;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

