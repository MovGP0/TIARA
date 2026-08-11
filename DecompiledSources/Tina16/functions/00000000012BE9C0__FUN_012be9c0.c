/* Ghidra address: 012be9c0 */
/* Ghidra symbol: FUN_012be9c0 */


undefined8 FUN_012be9c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),iVar2);
      if (*(longlong *)(lVar1 + 0x10) == param_2) {
        lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),iVar2);
        return *(undefined8 *)(lVar1 + 0x18);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

