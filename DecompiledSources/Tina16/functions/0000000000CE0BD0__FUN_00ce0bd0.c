/* Ghidra address: 00ce0bd0 */
/* Ghidra symbol: FUN_00ce0bd0 */


longlong FUN_00ce0bd0(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
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
  FUN_00410e60(local_res8,0);
  *(undefined8 *)(local_res8 + 8) = param_3;
  lVar2 = FUN_00cd8b80(&PTR_FUN_00cd7e78,1,3);
  *(longlong *)(local_res8 + 0x18) = lVar2;
  *(undefined4 *)(lVar2 + 0x84) = 0x7fffffff;
  lVar2 = FUN_00cd8b80(&PTR_FUN_00cd7e78,1,3);
  *(longlong *)(local_res8 + 0x80) = lVar2;
  *(undefined4 *)(lVar2 + 0x84) = 0x7fffffff;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

