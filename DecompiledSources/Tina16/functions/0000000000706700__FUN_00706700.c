/* Ghidra address: 00706700 */
/* Ghidra symbol: FUN_00706700 */


int FUN_00706700(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_006a35d0(*(undefined8 *)(param_1 + 0x40),iVar3);
      iVar1 = FUN_0043e6d0(*(undefined8 *)(lVar2 + 0x20),param_2);
      if (iVar1 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return -1;
}

