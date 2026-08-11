/* Ghidra address: 01803b80 */
/* Ghidra symbol: FUN_01803b80 */


int FUN_01803b80(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  iVar1 = FUN_01803a10();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar3 = FUN_018039f0(param_1,iVar4);
      iVar2 = FUN_0043e6d0(*(undefined8 *)(lVar3 + 0x20),param_2);
      if (iVar2 == 0) {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return -1;
}

