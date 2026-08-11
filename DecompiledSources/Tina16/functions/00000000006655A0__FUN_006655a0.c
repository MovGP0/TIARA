/* Ghidra address: 006655a0 */
/* Ghidra symbol: FUN_006655a0 */


longlong FUN_006655a0(longlong param_1,char param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar2 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_20;
  }
  local_20 = puVar2;
  FUN_00652880(local_res8,0,param_3);
  lVar1 = *(longlong *)(local_res8 + 0x130);
  *(undefined1 *)(lVar1 + 0x20) = 0x12;
  *(undefined1 *)(lVar1 + 0x21) = 0x1f;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

