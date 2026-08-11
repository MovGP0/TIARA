/* Ghidra address: 00b250d0 */
/* Ghidra symbol: FUN_00b250d0 */


void FUN_00b250d0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00b22d50(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x28));
  *(int *)(param_1 + 0x38) = iVar1;
  if (iVar1 < 0) {
    FUN_00b24e70(param_1);
    uVar2 = FUN_00b24fa0(param_1);
    *(undefined4 *)(param_1 + 0x38) = uVar2;
  }
  return;
}

