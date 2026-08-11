/* Ghidra address: 016bc770 */
/* Ghidra symbol: FUN_016bc770 */


undefined8 * FUN_016bc770(undefined8 *param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *local_res8;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  undefined4 local_3c;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  uint local_1c;
  
  local_60 = auStack_88;
  local_res8 = param_1;
  puVar1 = auStack_88;
  if (param_2 != '\0') {
    local_res8 = (undefined8 *)FUN_004119e0(param_1,param_2);
    puVar1 = local_60;
  }
  local_60 = puVar1;
  (**(code **)*local_res8)(local_res8,0,*(undefined8 *)(param_3 + 8));
  if (*(longlong *)(param_3 + 0x10) != 0) {
    uVar2 = FUN_00b95c80(*(longlong *)(param_3 + 0x10));
    local_res8[2] = uVar2;
  }
  if (*(longlong *)(param_3 + 0x18) != 0) {
    uVar2 = FUN_00b95c80(*(longlong *)(param_3 + 0x18));
    local_res8[3] = uVar2;
  }
  if (*(longlong *)(param_3 + 0x20) != 0) {
    uVar2 = FUN_00b95c80(*(longlong *)(param_3 + 0x20));
    local_res8[4] = uVar2;
  }
  if (*(longlong *)(param_3 + 0x30) != 0) {
    uVar2 = FUN_016a47d0(&PTR_FUN_016a0250,1,*(longlong *)(param_3 + 0x30));
    local_res8[6] = uVar2;
  }
  if (*(longlong *)(param_3 + 0x40) != 0) {
    uVar2 = FUN_016a5f50(&PTR_FUN_016a1b98,1,*(longlong *)(param_3 + 0x40));
    local_res8[8] = uVar2;
  }
  if (local_res8[7] != 0) {
    uVar2 = FUN_016a47d0(&PTR_FUN_016a0250,1,*(undefined8 *)(param_3 + 0x38));
    local_res8[7] = uVar2;
  }
  uVar2 = FUN_016d0640(&PTR_FUN_016b7de8,1);
  local_res8[10] = uVar2;
  iVar3 = *(int *)(*(longlong *)(param_3 + 0x50) + 0x10);
  local_1c = 0;
  if (-1 < iVar3 + -1) {
    do {
      local_28 = *(longlong *)(param_3 + 0x50);
      if (*(uint *)(local_28 + 0x10) <= local_1c) {
        FUN_00594f90();
      }
      local_30 = local_res8[10];
      local_38 = *(undefined8 *)(*(longlong *)(local_28 + 8) + (longlong)(int)local_1c * 8);
      local_3c = FUN_00597e50(local_30 + 8,&local_38);
      local_1c = local_1c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (param_2 != '\0') {
    local_res8 = (undefined8 *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

