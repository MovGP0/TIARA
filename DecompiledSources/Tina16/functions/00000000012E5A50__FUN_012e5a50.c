/* Ghidra address: 012e5a50 */
/* Ghidra symbol: FUN_012e5a50 */


int FUN_012e5a50(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x10);
  if ((iVar5 != 0) && (iVar3 = 0, -1 < iVar5 + -1)) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),iVar3);
      iVar1 = FUN_012e52e0(uVar2);
      if (iVar1 == param_2) {
        iVar4 = iVar4 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return iVar4;
}

