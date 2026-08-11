/* Ghidra address: 013ab340 */
/* Ghidra symbol: FUN_013ab340 */


void FUN_013ab340(longlong param_1)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  
  iVar2 = FUN_006decb0();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar3 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x6b8) + 0x550),iVar5);
      lVar4 = FUN_006dd390(uVar3);
      if (lVar4 != 0) {
        lVar4 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x6b8) + 0x550),iVar5);
        sVar1 = (**(code **)(**(longlong **)(lVar4 + 0x18) + 0xf8))(*(longlong **)(lVar4 + 0x18));
        if (sVar1 == 0x39) {
          uVar3 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x6b8) + 0x550),iVar5);
          FUN_013ac4d0(param_1,uVar3);
        }
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined1 *)(param_1 + 0x6d0) = 0;
  return;
}

