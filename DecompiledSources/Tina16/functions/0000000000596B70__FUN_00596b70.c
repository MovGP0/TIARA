/* Ghidra address: 00596b70 */
/* Ghidra symbol: FUN_00596b70 */


int FUN_00596b70(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  lVar3 = **(longlong **)(param_1 + 0x50);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x50) + 8);
  iVar2 = 0;
  if (-1 < iVar4 + -1) {
    do {
      iVar1 = (**(code **)(*(longlong *)(param_1 + 0x50) + 0x28))
                        (*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x18),lVar3,param_2);
      if (iVar1 == 0) {
        return iVar2;
      }
      lVar3 = lVar3 + 8;
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return -1;
}

