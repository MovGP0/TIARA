/* Ghidra address: 01bb00e0 */
/* Ghidra symbol: FUN_01bb00e0 */


longlong FUN_01bb00e0(longlong param_1,char param_2,longlong param_3,ushort param_4)

{
  undefined1 *puVar1;
  int iVar2;
  longlong local_res8;
  ushort local_res20 [4];
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  local_res20[0] = param_4;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  *(longlong *)(local_res8 + 0x28) = param_3;
  FUN_004194b0(local_res8 + 0x10,*(undefined8 *)(param_3 + 0x10),&DAT_00406578);
  *(undefined4 *)(local_res8 + 0x18) = *(undefined4 *)(param_3 + 0x18);
  if (local_res20[0] < 15000) {
    local_1c = 4;
  }
  else {
    local_1c = 1;
  }
  iVar2 = local_1c + 2;
  FUN_01baffe0(local_res8,iVar2);
  FUN_00409a70(local_res20,*(longlong *)(local_res8 + 0x10) + (longlong)*(int *)(local_res8 + 0x18),
               2);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + iVar2;
  *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(local_res8 + 0x18);
  *(int *)(param_3 + 0x20) = local_1c;
  *(undefined4 *)(local_res8 + 0x1c) = *(undefined4 *)(local_res8 + 0x18);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

