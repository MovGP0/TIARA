/* Ghidra address: 01c8a290 */
/* Ghidra symbol: FUN_01c8a290 */


int FUN_01c8a290(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = -1;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x2780) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      if (((param_3 == 0) ||
          (lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x2780),iVar3),
          *(longlong *)(lVar1 + 0x10) == param_3)) &&
         (lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x2780),iVar3),
         *(longlong *)(lVar1 + 0x28) == param_2)) {
        iVar2 = iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return iVar2;
}

