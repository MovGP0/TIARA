/* Ghidra address: 0195d1c0 */
/* Ghidra symbol: FUN_0195d1c0 */


longlong FUN_0195d1c0(longlong param_1,char param_2,undefined8 param_3,undefined2 param_4)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 local_res20;
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
  FUN_0194f560(local_res8,0,param_3,param_4);
  local_res20 = (undefined1)param_4;
  *(undefined1 *)(local_res8 + 0x2ac) = local_res20;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

