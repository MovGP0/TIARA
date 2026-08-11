/* Ghidra address: 005968a0 */
/* Ghidra symbol: FUN_005968a0 */


int FUN_005968a0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  lVar3 = **(longlong **)(param_1 + 0x30);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x30) + 8);
  iVar2 = 0;
  if (-1 < iVar4 + -1) {
    do {
      iVar1 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x28))
                        (*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x18),lVar3,param_2);
      if (iVar1 == 0) {
        return iVar2;
      }
      lVar3 = lVar3 + 4;
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return -1;
}

