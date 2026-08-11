/* Ghidra address: 0181a5c0 */
/* Ghidra symbol: FUN_0181a5c0 */


longlong * FUN_0181a5c0(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  longlong *local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_007fc180(local_res8,0,param_3);
  *(undefined4 *)(local_res8 + 0xd6) = 0;
  *(undefined1 *)((longlong)local_res8 + 0x6bc) = 1;
  uVar2 = (**(code **)(*local_res8 + 0x328))(local_res8);
  *(undefined1 *)(local_res8 + 0xd9) = uVar2;
  *(undefined1 *)((longlong)local_res8 + 0x6cd) = 1;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

