/* Ghidra address: 00f30a60 */
/* Ghidra symbol: FUN_00f30a60 */


longlong FUN_00f30a60(longlong param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined4 local_2c;
  longlong local_28;
  longlong local_20;
  
  local_50 = auStack_78;
  local_res8 = param_1;
  puVar1 = auStack_78;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_50;
  }
  local_50 = puVar1;
  FUN_00f309b0(local_res8,0);
  if (param_3 != 0) {
    local_20 = *(longlong *)(local_res8 + 0x10);
    local_28 = param_3;
    local_2c = FUN_00597e50(local_20 + 8,&local_28);
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

