/* Ghidra address: 018cf6e0 */
/* Ghidra symbol: FUN_018cf6e0 */


longlong FUN_018cf6e0(longlong param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
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
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x20) = uVar2;
  *(undefined8 *)(local_res8 + 8) = 0;
  *(undefined8 *)(local_res8 + 0x10) = 0;
  *(undefined8 *)(local_res8 + 0x18) = 0;
  *(undefined4 *)(local_res8 + 0x38) = 0;
  if (param_3 != 0) {
    *(int *)(local_res8 + 0x38) = *(int *)(local_res8 + 0x38) + 1;
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

