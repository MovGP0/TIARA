/* Ghidra address: 01402640 */
/* Ghidra symbol: FUN_01402640 */


void FUN_01402640(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x790);
  if (1 < *(int *)(param_1 + 0x894)) {
    iVar2 = *(int *)(param_1 + 0x894) + -2;
    if (*(int *)(param_1 + 0x8a4) <= iVar2) {
      FUN_00848a70(uVar1,iVar2);
    }
    FUN_0084e3e0(uVar1,0,*(int *)(param_1 + 0x894) + -1,0);
    FUN_0084e3e0(uVar1,1,*(int *)(param_1 + 0x894) + -1,0);
    FUN_0084e3e0(uVar1,0,*(int *)(param_1 + 0x894) + -2,0);
    FUN_0084e3e0(uVar1,1,*(int *)(param_1 + 0x894) + -2,0);
    FUN_00b0adf0(uVar1);
    FUN_00b0adf0(uVar1);
    *(int *)(param_1 + 0x894) = *(int *)(param_1 + 0x894) + -2;
  }
  return;
}

