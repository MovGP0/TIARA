/* Ghidra address: 00dd8b10 */
/* Ghidra symbol: FUN_00dd8b10 */


longlong FUN_00dd8b10(longlong param_1,char param_2)

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
  lVar2 = FUN_00dd8d40(&DAT_00dd7ab0,1,local_res8);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar2 + 0x10;
  }
  FUN_0041b840(local_res8 + 0x28,lVar2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

