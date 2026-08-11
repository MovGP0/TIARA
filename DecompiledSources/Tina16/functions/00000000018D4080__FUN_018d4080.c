/* Ghidra address: 018d4080 */
/* Ghidra symbol: FUN_018d4080 */


void FUN_018d4080(longlong param_1,int param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [40];
  undefined1 *local_10;
  
  local_10 = auStack_38;
  if (*(int *)(param_1 + 0x40) < param_2) {
    puVar1 = auStack_38;
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_018d6c40(param_1);
      puVar1 = local_10;
    }
    local_10 = puVar1;
    uVar2 = FUN_004095c0((longlong)(param_2 * 4));
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    *(int *)(param_1 + 0x40) = param_2;
  }
  return;
}

