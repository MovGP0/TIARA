/* Ghidra address: 012beff0 */
/* Ghidra symbol: FUN_012beff0 */


void FUN_012beff0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar1 = FUN_01d31a40(param_2);
  if (iVar1 == 0) {
    FUN_01d31740(param_2,*(undefined4 *)(param_1 + 0x10));
    iVar1 = *(int *)(param_1 + 0x10);
    iVar3 = 0;
    if (-1 < iVar1 + -1) {
      do {
        uVar2 = FUN_004aeac0(param_1,iVar3);
        FUN_012be5d0(uVar2,param_2,*(undefined8 *)(param_1 + 0x18));
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}

