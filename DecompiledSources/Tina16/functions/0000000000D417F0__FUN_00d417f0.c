/* Ghidra address: 00d417f0 */
/* Ghidra symbol: FUN_00d417f0 */


longlong FUN_00d417f0(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
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
  FUN_00789eb0(local_res8,0,param_3);
  *(undefined1 *)(local_res8 + 0x41) = 1;
  FUN_00788d90(local_res8,7);
  uVar3 = FUN_00781840();
  uVar2 = FUN_00779380(uVar3,0x1d);
  FUN_00788cc0(local_res8,uVar2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

