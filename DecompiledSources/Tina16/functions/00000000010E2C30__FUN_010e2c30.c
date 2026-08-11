/* Ghidra address: 010e2c30 */
/* Ghidra symbol: FUN_010e2c30 */


void FUN_010e2c30(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x860) == '\0') {
    FUN_010e1a10();
  }
  if (*(longlong *)(param_1 + 0x828) != 0) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x828) + 0x10);
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x828),iVar2);
        FUN_00410f20(uVar1);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_00410f20(*(undefined8 *)(param_1 + 0x828));
  }
  return;
}

