/* Ghidra address: 00a08380 */
/* Ghidra symbol: FUN_00a08380 */


longlong FUN_00a08380(longlong param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_28;
  longlong local_20;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00410e60(local_res8,0);
  local_20 = local_res8 + 0x1d;
  local_28 = local_res8 + 8;
  FUN_00409a70(param_3 + 8,local_res8 + 8,(longlong)((int)local_20 - (int)local_28));
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

