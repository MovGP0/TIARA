/* Ghidra address: 0189a910 */
/* Ghidra symbol: FUN_0189a910 */


longlong * FUN_0189a910(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
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
  FUN_01899240(local_res8,0,param_3);
  lVar2 = local_res8[0x99];
  *(longlong **)(lVar2 + 0x4e0) = local_res8;
  *(undefined8 *)(lVar2 + 0x4d8) = *(undefined8 *)(*local_res8 + 0x288);
  lVar2 = FUN_018983e0(&PTR_FUN_01895500,1,local_res8);
  local_res8[0x9d] = lVar2;
  *(longlong **)(lVar2 + 0x720) = local_res8;
  *(undefined8 *)(lVar2 + 0x718) = *(undefined8 *)(*local_res8 + 0x270);
  FUN_0065bb50(lVar2,0);
  FUN_006e2080(local_res8[0x9d],0);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

