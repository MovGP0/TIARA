/* Ghidra address: 00ac0ba0 */
/* Ghidra symbol: FUN_00ac0ba0 */


longlong FUN_00ac0ba0(longlong param_1,char param_2,longlong param_3)

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
  FUN_00a5c900(local_res8,0);
  *(longlong *)(local_res8 + 0x98) = param_3;
  *(undefined1 *)(local_res8 + 0x90) = *(undefined1 *)(param_3 + 0x60);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

