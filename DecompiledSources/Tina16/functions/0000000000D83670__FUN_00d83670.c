/* Ghidra address: 00d83670 */
/* Ghidra symbol: FUN_00d83670 */


longlong FUN_00d83670(longlong param_1,char param_2)

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
  FUN_00d7f0a0(local_res8,0);
  *(longlong *)(*(longlong *)(local_res8 + 0x38) + 8) = local_res8;
  uVar2 = FUN_00d72f40(&PTR_FUN_00d5ca10,1,0);
  *(undefined8 *)(local_res8 + 0x50) = uVar2;
  uVar2 = FUN_00d72f40(&PTR_FUN_00d5ca10,1,0);
  *(undefined8 *)(local_res8 + 0x48) = uVar2;
  FUN_00419260(local_res8 + 0x58,&DAT_00d6dd08,1,0x32);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

