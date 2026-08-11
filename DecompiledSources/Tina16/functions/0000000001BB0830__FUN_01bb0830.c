/* Ghidra address: 01bb0830 */
/* Ghidra symbol: FUN_01bb0830 */


longlong FUN_01bb0830(longlong param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  int iVar2;
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
  *(longlong *)(local_res8 + 0x28) = param_3;
  FUN_004194b0(local_res8 + 0x10,*(undefined8 *)(param_3 + 0x10),&DAT_00406578);
  *(undefined4 *)(local_res8 + 0x1c) = 0xffffffff;
  FUN_00409a70(*(longlong *)(local_res8 + 0x10) + (longlong)*(int *)(param_3 + 0x18),
               local_res8 + 0x20,4);
  iVar2 = *(int *)(param_3 + 0x18) + 4;
  *(int *)(local_res8 + 0x18) = iVar2;
  *(int *)(param_3 + 0x24) = iVar2 + *(int *)(local_res8 + 0x20);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

