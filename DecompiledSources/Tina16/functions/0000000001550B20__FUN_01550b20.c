/* Ghidra address: 01550b20 */
/* Ghidra symbol: FUN_01550b20 */


undefined8 FUN_01550b20(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x750) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_01571ee0(*(undefined8 *)(param_1 + 0x750),iVar2);
      if (*(int *)(lVar1 + 0x34) == param_2) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

