/* Ghidra address: 0097f900 */
/* Ghidra symbol: FUN_0097f900 */


longlong FUN_0097f900(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_0097cfa0(local_res8,0,param_3);
  uVar2 = FUN_00410e60(&PTR_FUN_008f5158,1);
  *(undefined8 *)(local_res8 + 0x90) = uVar2;
  uVar2 = FUN_0096ea60(&PTR_FUN_00919760,1,local_res8);
  *(undefined8 *)(local_res8 + 0x98) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

