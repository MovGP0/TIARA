/* Ghidra address: 01be54f0 */
/* Ghidra symbol: FUN_01be54f0 */


longlong FUN_01be54f0(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_01bd3d70(local_res8,0,param_3);
  FUN_0064c650(local_res8,6);
  *(undefined1 *)(local_res8 + 0x38c) = 1;
  FUN_01bd41a0(local_res8,2);
  FUN_0041ddd0(local_res8 + 0xf0,PTR_PTR_02002768);
  FUN_01bd41d0(local_res8,1);
  FUN_01bd4200(local_res8,3);
  *(uint *)(local_res8 + 0xa0) = *(uint *)(local_res8 + 0xa0) | 0x400;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

