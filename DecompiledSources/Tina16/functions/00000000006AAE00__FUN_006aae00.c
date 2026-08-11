/* Ghidra address: 006aae00 */
/* Ghidra symbol: FUN_006aae00 */


longlong * FUN_006aae00(longlong *param_1,char param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong *local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar2 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar2 = local_20;
  }
  local_20 = puVar2;
  FUN_006aa6e0(local_res8,0,param_3);
  lVar1 = local_res8[0x2e];
  *(longlong **)(lVar1 + 0xe8) = local_res8;
  *(undefined8 *)(lVar1 + 0xe0) = *(undefined8 *)(*local_res8 + 0x158);
  *(undefined1 *)(local_res8 + 0x30) = 0;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

