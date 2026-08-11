/* Ghidra address: 012f7530 */
/* Ghidra symbol: FUN_012f7530 */


void FUN_012f7530(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  iVar1 = FUN_006decb0();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar3 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x550),iVar4);
      if ((*(uint *)(*(longlong *)(lVar3 + 0x18) + 4) & 0x20) == 0x20) {
        FUN_004ae7e0(lVar2,lVar3);
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x700) + 0x2a8))(*(longlong **)(param_1 + 0x700),lVar2);
  if (lVar2 != 0) {
    FUN_00410f20(lVar2);
  }
  return;
}

