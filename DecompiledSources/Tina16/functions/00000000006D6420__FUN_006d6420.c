/* Ghidra address: 006d6420 */
/* Ghidra symbol: FUN_006d6420 */


longlong FUN_006d6420(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_00652880(local_res8,0,param_3);
  FUN_0064c650(local_res8,5);
  *(uint *)(local_res8 + 0xa0) = *(uint *)(local_res8 + 0xa0) | 0xc0401;
  FUN_0064dbe0(local_res8,0);
  *(undefined1 *)(local_res8 + 0x4a0) = 1;
  *(undefined1 *)(local_res8 + 0x4a2) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

