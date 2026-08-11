/* Ghidra address: 005a1be0 */
/* Ghidra symbol: FUN_005a1be0 */


void FUN_005a1be0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auStack_38 [40];
  undefined1 *local_10;
  
  local_10 = auStack_38;
  puVar1 = auStack_38;
  if (((*(int *)(param_1 + 0x50) == 0) && (puVar1 = auStack_38, 0 < *(int *)(param_1 + 0x54))) &&
     (iVar2 = *(int *)(param_1 + 0x54) * 100, puVar1 = auStack_38,
     10 < iVar2 / *(int *)(param_1 + 0x10))) {
    FUN_005a1d40(param_1,(longlong)iVar2 % (longlong)*(int *)(param_1 + 0x10) & 0xffffffff);
    puVar1 = local_10;
  }
  local_10 = puVar1;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  FUN_005a1b40(param_1,param_2,param_3);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
  return;
}

