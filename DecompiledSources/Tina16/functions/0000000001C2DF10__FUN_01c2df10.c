/* Ghidra address: 01c2df10 */
/* Ghidra symbol: FUN_01c2df10 */


void FUN_01c2df10(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = 0xffffffff;
  do {
    uVar2 = uVar2 + 1;
  } while (param_2 != *(byte *)(param_1 + 0x18 + (longlong)(int)uVar2));
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar3 * 8);
      if (*(ushort *)(lVar1 + 0x4a) == uVar2) {
        *(undefined1 *)(lVar1 + 0x4e) = 1;
      }
      else {
        *(undefined1 *)(lVar1 + 0x4e) = 0;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

