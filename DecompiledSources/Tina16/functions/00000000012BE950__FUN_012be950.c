/* Ghidra address: 012be950 */
/* Ghidra symbol: FUN_012be950 */


undefined8 FUN_012be950(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),iVar3);
      if (*(longlong *)(lVar1 + 0x10) == param_2) {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),iVar3);
        return uVar2;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0;
}

