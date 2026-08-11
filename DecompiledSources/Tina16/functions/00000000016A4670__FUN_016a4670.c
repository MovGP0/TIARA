/* Ghidra address: 016a4670 */
/* Ghidra symbol: FUN_016a4670 */


longlong FUN_016a4670(longlong param_1,char param_2,longlong param_3)

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
  FUN_016a4560(local_res8,0,*(undefined8 *)(param_3 + 8),*(undefined4 *)(param_3 + 0x18));
  *(undefined4 *)(local_res8 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
  if (*(longlong *)(param_3 + 0x10) != 0) {
    uVar2 = FUN_00b95c80(*(longlong *)(param_3 + 0x10));
    *(undefined8 *)(local_res8 + 0x10) = uVar2;
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

