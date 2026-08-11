/* Ghidra address: 01b0fbb0 */
/* Ghidra symbol: FUN_01b0fbb0 */


longlong FUN_01b0fbb0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_01b0f8a0(local_res8,0,param_3,param_4);
  uVar2 = FUN_01b17270(&PTR_FUN_01b03818,1);
  *(undefined8 *)(local_res8 + 0x58) = uVar2;
  uVar2 = FUN_01680a00(&PTR_FUN_0166efa0,1);
  *(undefined8 *)(local_res8 + 0x60) = uVar2;
  uVar2 = FUN_01680a00(&PTR_FUN_0166efa0,1);
  *(undefined8 *)(local_res8 + 0x68) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

