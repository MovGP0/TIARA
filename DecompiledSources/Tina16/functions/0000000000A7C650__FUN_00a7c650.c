/* Ghidra address: 00a7c650 */
/* Ghidra symbol: FUN_00a7c650 */


void FUN_00a7c650(longlong param_1)

{
  int iVar1;
  
  FUN_00414ad0();
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + -4);
  }
  if (iVar1 == 0) {
    FUN_00414ad0(param_1 + 0x10,*(undefined8 *)(param_1 + 8));
  }
  return;
}

