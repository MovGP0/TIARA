/* Ghidra address: 004b6b70 */
/* Ghidra symbol: FUN_004b6b70 */


longlong FUN_004b6b70(longlong param_1,char param_2,undefined2 param_3,undefined2 param_4,
                     undefined1 param_5)

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
  FUN_004b6930(local_res8,0);
  *(undefined2 *)(local_res8 + 0x2e) = param_3;
  *(undefined2 *)(local_res8 + 0x2c) = param_4;
  *(undefined1 *)(local_res8 + 0x32) = param_5;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

