/* Ghidra address: 0069f9a0 */
/* Ghidra symbol: FUN_0069f9a0 */


longlong FUN_0069f9a0(longlong param_1,char param_2,undefined8 param_3)

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
  *(uint *)(local_res8 + 0xa0) = *(uint *)(local_res8 + 0xa0) | 0x80000;
  *(undefined1 *)(local_res8 + 0x490) = 0xf;
  *(undefined1 *)(local_res8 + 0x491) = 1;
  *(undefined1 *)(local_res8 + 0x492) = 2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

