/* Ghidra address: 01967910 */
/* Ghidra symbol: FUN_01967910 */


longlong FUN_01967910(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
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
  FUN_01953f80(local_res8,0,param_3);
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x208) = uVar2;
  uVar2 = FUN_01956770(&PTR_FUN_01920040,1);
  *(undefined8 *)(local_res8 + 0x1d0) = uVar2;
  *(undefined8 *)(local_res8 + 0x1e0) = 0;
  uVar2 = FUN_00410e60(&PTR_FUN_0191fb30,1);
  *(undefined8 *)(local_res8 + 0x1e8) = uVar2;
  *(undefined8 *)(local_res8 + 0x1f8) = 0;
  *(byte *)(local_res8 + 0xd0) = *(byte *)(local_res8 + 0xd0) | 0x20;
  uVar2 = FUN_01958b10(&PTR_FUN_01921868,1);
  *(undefined8 *)(local_res8 + 0x1f0) = uVar2;
  *(undefined1 *)(local_res8 + 0x200) = 1;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

