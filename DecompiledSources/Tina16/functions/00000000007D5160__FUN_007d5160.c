/* Ghidra address: 007d5160 */
/* Ghidra symbol: FUN_007d5160 */


longlong * FUN_007d5160(longlong *param_1,char param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
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
  FUN_004d22d0(local_res8,0,0);
  *(undefined4 *)((longlong)local_res8 + 0x94) = param_3;
  *(undefined4 *)(local_res8 + 0x12) = param_4;
  (**(code **)(*local_res8 + 0xa8))(local_res8);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

