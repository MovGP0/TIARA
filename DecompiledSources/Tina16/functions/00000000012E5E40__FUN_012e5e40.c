/* Ghidra address: 012e5e40 */
/* Ghidra symbol: FUN_012e5e40 */


int FUN_012e5e40(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x10);
  if ((iVar4 != 0) && (iVar3 = 0, -1 < iVar4 + -1)) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),iVar3);
      iVar1 = FUN_012e52e0(uVar2);
      if (iVar1 == param_2) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return -1;
}

