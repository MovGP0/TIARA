/* Ghidra address: 00a5c900 */
/* Ghidra symbol: FUN_00a5c900 */


longlong FUN_00a5c900(longlong param_1,char param_2)

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
  FUN_004b67b0(local_res8,1);
  *(undefined1 *)(local_res8 + 0x49) = 1;
  *(undefined4 *)(local_res8 + 0x78) = 10;
  *(undefined1 *)(local_res8 + 0x90) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

