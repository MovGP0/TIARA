/* Ghidra address: 015c8260 */
/* Ghidra symbol: FUN_015c8260 */


void FUN_015c8260(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 local_18;
  undefined4 local_10;
  
  uVar2 = FUN_004b6da0(*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 8));
  *(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x40) = uVar2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x1b0) + 0x4c) = 0x6064b50;
  *(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x50) = 0x2c;
  *(undefined2 *)(*(longlong *)(param_1 + 0x1b0) + 0x58) = 0x2d;
  *(undefined2 *)(*(longlong *)(param_1 + 0x1b0) + 0x5a) = 0x2d;
  local_10 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x18) + 0x98) +
                     0xc);
  if (local_10 < 1) {
    local_10 = 0;
  }
  *(int *)(*(longlong *)(param_1 + 0x1b0) + 0x5c) = local_10;
  local_18 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x18) + 0x98) +
                     0xc);
  if (local_18 < 1) {
    local_18 = 0;
  }
  *(int *)(*(longlong *)(param_1 + 0x1b0) + 0x60) = local_18;
  iVar1 = FUN_015c2df0(*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x28));
  *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 100) = (longlong)iVar1;
  iVar1 = FUN_015c2df0(*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x28));
  *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x6c) = (longlong)iVar1;
  lVar3 = FUN_004b6da0(*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 8));
  *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x74) = lVar3 - param_2;
  *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x7c) = param_2;
  FUN_004b89e0(*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 8),
               *(longlong *)(param_1 + 0x1b0) + 0x4c,0x38);
  return;
}

