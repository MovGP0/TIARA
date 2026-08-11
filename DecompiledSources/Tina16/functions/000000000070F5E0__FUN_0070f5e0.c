/* Ghidra address: 0070f5e0 */
/* Ghidra symbol: FUN_0070f5e0 */


longlong * FUN_0070f5e0(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *local_res8;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00692420(local_res8,0,param_3);
  *(undefined1 *)((longlong)local_res8 + 0x23) = 0;
  *(undefined1 *)((longlong)local_res8 + 0x24) = 0;
  *(undefined1 *)(local_res8 + 0x13) = 0;
  *(undefined4 *)(local_res8 + 0x17) = 0xffffffff;
  local_res8[0x14] = 0;
  local_28 = local_res8;
  local_30 = *(undefined8 *)(*local_res8 + 0xa0);
  lVar2 = FUN_004d6210(&local_30);
  local_res8[0x15] = lVar2;
  local_res8[0x16] = 0;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

