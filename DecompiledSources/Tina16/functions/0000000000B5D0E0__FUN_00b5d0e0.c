/* Ghidra address: 00b5d0e0 */
/* Ghidra symbol: FUN_00b5d0e0 */


void FUN_00b5d0e0(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 local_28;
  ushort *local_20 [2];
  
  local_28 = 0;
  if (*(char *)(param_1 + 0x47) == '\0') {
    FUN_00b24ea0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20));
    *(undefined1 *)(param_1 + 0x47) = 1;
  }
  local_20[0] = (ushort *)FUN_00b24e70(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20));
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x78) + 8);
  uVar2 = (**(code **)*puVar1)(puVar1);
  FUN_00b257a0(puVar1,&local_28,uVar2);
  FUN_00b24b50(local_28,local_20);
  if (3 < *local_20[0]) {
    *local_20[0] = *local_20[0] - 1;
  }
  iVar3 = FUN_00b1f9f0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10),local_20[0][1]);
  if (iVar3 == -1) {
    local_20[0][1] = 0;
  }
  else {
    local_20[0][1] = (ushort)iVar3;
  }
  FUN_00b25040(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20));
  *(undefined1 *)(param_1 + 0x44) = 1;
  FUN_004144d0(&local_28);
  return;
}

