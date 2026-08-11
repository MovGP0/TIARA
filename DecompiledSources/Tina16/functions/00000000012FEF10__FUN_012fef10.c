/* Ghidra address: 012fef10 */
/* Ghidra symbol: FUN_012fef10 */


void FUN_012fef10(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0xaf8) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar2);
      FUN_012e5830(uVar1,0);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  uVar1 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
  iVar3 = FUN_006dd6f0(uVar1);
  uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
  FUN_012e5830(uVar1,1);
  return;
}

