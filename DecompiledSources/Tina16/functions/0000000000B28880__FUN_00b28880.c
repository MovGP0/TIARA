/* Ghidra address: 00b28880 */
/* Ghidra symbol: FUN_00b28880 */


int FUN_00b28880(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar3);
      iVar1 = FUN_00416420(*(undefined8 *)(lVar2 + 8),param_2);
      if (iVar1 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return -1;
}

