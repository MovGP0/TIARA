/* Ghidra address: 00a46f90 */
/* Ghidra symbol: FUN_00a46f90 */


void FUN_00a46f90(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (0 < iVar1) {
    if (iVar1 < 0xff00) {
      FUN_004095f0(*(undefined8 *)(param_1 + 0x18),(longlong)iVar1);
    }
    else {
      thunk_FUN_04172795(*(undefined8 *)(param_1 + 0x28));
      thunk_FUN_03d5bf3d(*(undefined8 *)(param_1 + 0x28));
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (0 < *(int *)(param_1 + 0x10)) {
    FUN_004095f0(*(undefined8 *)(param_1 + 8),(longlong)*(int *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}

