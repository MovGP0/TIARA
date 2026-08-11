/* Ghidra address: 017a5390 */
/* Ghidra symbol: FUN_017a5390 */


void FUN_017a5390(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  FUN_007d6450(*(undefined8 *)(param_1 + 0x780));
  iVar1 = FUN_006decb0(*(undefined8 *)(*(longlong *)(param_1 + 0x6f0) + 0x550));
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      uVar2 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x6f0) + 0x550),iVar1);
      lVar3 = FUN_006dd390(uVar2);
      if (lVar3 != 0) {
        uVar2 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x6f0) + 0x550),iVar1);
        FUN_006de140(uVar2);
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  *(undefined1 *)(param_1 + 0x7b0) = 1;
  return;
}

