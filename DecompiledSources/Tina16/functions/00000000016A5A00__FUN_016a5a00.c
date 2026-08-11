/* Ghidra address: 016a5a00 */
/* Ghidra symbol: FUN_016a5a00 */


longlong FUN_016a5a00(longlong param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_016a5800(local_res8,0,param_3);
  if (*(longlong *)(param_3 + 0x18) == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_016a5500(&PTR_FUN_016a0e58,1,*(longlong *)(param_3 + 0x18));
  }
  if (*(longlong *)(param_3 + 0x20) == 0) {
    local_28 = 0;
  }
  else {
    local_28 = FUN_016a5500(&PTR_FUN_016a0e58,1,*(longlong *)(param_3 + 0x20));
  }
  *(undefined8 *)(local_res8 + 0x18) = local_20;
  *(undefined8 *)(local_res8 + 0x20) = local_28;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

