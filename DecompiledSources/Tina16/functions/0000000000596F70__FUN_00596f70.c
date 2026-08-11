/* Ghidra address: 00596f70 */
/* Ghidra symbol: FUN_00596f70 */


int FUN_00596f70(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x30) + 8);
  lVar3 = **(longlong **)(param_1 + 0x30) + -8 + (longlong)iVar2 * 8;
  iVar2 = iVar2 + -1;
  if (-1 < iVar2) {
    do {
      iVar1 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x28))
                        (*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x18),lVar3,param_2);
      if (iVar1 == 0) {
        return iVar2;
      }
      lVar3 = lVar3 + -8;
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  return -1;
}

