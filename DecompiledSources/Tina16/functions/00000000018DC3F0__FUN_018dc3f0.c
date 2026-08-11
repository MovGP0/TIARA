/* Ghidra address: 018dc3f0 */
/* Ghidra symbol: FUN_018dc3f0 */


void FUN_018dc3f0(longlong param_1,int param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [40];
  undefined1 *local_10;
  
  local_10 = auStack_38;
  if (*(int *)(param_1 + 0x28) < param_2) {
    puVar1 = auStack_38;
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_018d9d50(param_1);
      puVar1 = local_10;
    }
    local_10 = puVar1;
    uVar2 = FUN_004095c0((longlong)(param_2 * 4));
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(int *)(param_1 + 0x28) = param_2;
  }
  return;
}

