/* Ghidra address: 0197cc60 */
/* Ghidra symbol: FUN_0197cc60 */


longlong * FUN_0197cc60(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong *local_res8;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_0197ae10(local_res8,0,param_3);
  (**(code **)(*local_res8 + 0x108))(*local_res8,&local_28);
  FUN_00414ad0(local_res8 + 0x16,local_28);
  *(undefined1 *)((longlong)local_res8 + 0xd1) = 0x18;
  FUN_00414ad0(local_res8 + 0x14,L".fp3");
  FUN_00414480(&local_28);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

