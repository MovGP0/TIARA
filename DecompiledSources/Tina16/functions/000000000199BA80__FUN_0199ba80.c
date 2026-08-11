/* Ghidra address: 0199ba80 */
/* Ghidra symbol: FUN_0199ba80 */


undefined8 FUN_0199ba80(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x3c0) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x3c0),iVar2);
      if (*(int *)(lVar1 + 0x14) == param_2) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

