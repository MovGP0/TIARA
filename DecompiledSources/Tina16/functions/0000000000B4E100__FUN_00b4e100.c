/* Ghidra address: 00b4e100 */
/* Ghidra symbol: FUN_00b4e100 */


longlong * FUN_00b4e100(longlong *param_1,char param_2,longlong param_3)

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
  local_res8[1] = param_3;
  local_res8[5] = *(longlong *)(param_3 + 0x58);
  *(undefined1 *)(local_res8 + 4) = 0;
  local_28 = local_res8;
  local_30 = *(undefined8 *)(*local_res8 + 8);
  lVar2 = FUN_00b1aac0(&PTR_FUN_00b19d20,1,0x1ffff,&local_30);
  local_res8[3] = lVar2;
  local_res8[2] = 0;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

