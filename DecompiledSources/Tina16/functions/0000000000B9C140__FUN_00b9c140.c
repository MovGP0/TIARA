/* Ghidra address: 00b9c140 */
/* Ghidra symbol: FUN_00b9c140 */


void FUN_00b9c140(longlong param_1)

{
  int iVar1;
  
  if (1 < *(int *)(param_1 + 0x10)) {
    iVar1 = *(int *)(param_1 + 0x10) + -1;
    if (*(int *)(param_1 + 0x14) == iVar1) {
      FUN_00b9c360(param_1,*(undefined8 *)(param_1 + 8),0xffffffff);
    }
    else {
      FUN_00b9c360(param_1,*(undefined8 *)(param_1 + 8),iVar1);
    }
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  return;
}

