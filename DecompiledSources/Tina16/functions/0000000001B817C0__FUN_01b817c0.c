/* Ghidra address: 01b817c0 */
/* Ghidra symbol: FUN_01b817c0 */


longlong FUN_01b817c0(longlong param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  int iVar2;
  longlong local_res8;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  int local_1c;
  
  local_50 = auStack_78;
  local_res8 = param_1;
  puVar1 = auStack_78;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_50;
  }
  local_50 = puVar1;
  *(undefined8 *)(local_res8 + 8) = 0;
  FUN_00414ad0(local_res8 + 0x10,*(undefined8 *)(param_3 + 0x10));
  *(undefined4 *)(local_res8 + 0x20) = *(undefined4 *)(param_3 + 0x20);
  *(undefined4 *)(local_res8 + 0x24) = *(undefined4 *)(param_3 + 0x24);
  FUN_00414ad0(local_res8 + 0x18,*(undefined8 *)(param_3 + 0x18));
  local_28 = *(longlong *)(param_3 + 0x28);
  local_30 = local_28;
  if (local_28 != 0) {
    local_30 = *(longlong *)(local_28 + -8);
  }
  FUN_00419260(local_res8 + 0x28,&DAT_01b7f6f8,1,local_30);
  local_38 = *(longlong *)(param_3 + 0x28);
  local_40 = local_38;
  if (local_38 != 0) {
    local_40 = *(longlong *)(local_38 + -8);
  }
  iVar2 = (int)local_40;
  local_1c = 0;
  if (-1 < iVar2 + -1) {
    do {
      *(undefined1 *)(*(longlong *)(local_res8 + 0x28) + (longlong)local_1c) =
           *(undefined1 *)(*(longlong *)(param_3 + 0x28) + (longlong)local_1c);
      local_1c = local_1c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

