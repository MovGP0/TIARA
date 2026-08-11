/* Ghidra address: 017f40f0 */
/* Ghidra symbol: FUN_017f40f0 */


void FUN_017f40f0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_2;
  uStack_30 = param_2[1];
  if (*(int *)(param_1 + 8) == *(int *)(param_1 + 0xc)) {
    FUN_017f4370(param_1);
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 8) * 0x10);
    *puVar1 = local_38;
    puVar1[1] = uStack_30;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  else {
    iVar2 = FUN_017f42a0(param_1,&local_38);
    FUN_00409a70(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 0x10,
                 *(longlong *)(param_1 + 0x18) + (longlong)(iVar2 + 1) * 0x10,
                 (longlong)((*(int *)(param_1 + 8) - iVar2) * 0x10));
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 0x10);
    *puVar1 = local_38;
    puVar1[1] = uStack_30;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return;
}

