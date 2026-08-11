/* Ghidra address: 01bd9c90 */
/* Ghidra symbol: FUN_01bd9c90 */


longlong FUN_01bd9c90(longlong param_1,char param_2,undefined8 param_3,longlong param_4)

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
  *(undefined8 *)(local_res8 + 0x20) = param_3;
  *(longlong *)(local_res8 + 0x18) = param_4;
  if (local_res8 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = local_res8 + 0x28;
  }
  FUN_0041b840(param_4 + 0x60,lVar2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

