/* Ghidra address: 012c58e0 */
/* Ghidra symbol: FUN_012c58e0 */


void FUN_012c58e0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  iVar1 = FUN_006decb0();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar3 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x748) + 0x550),iVar4);
      if ((*(uint *)(*(longlong *)(lVar3 + 0x18) + 0x62c) & 0x20) == 0x20) {
        FUN_004ae7e0(uVar2,lVar3);
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x748) + 0x2a8))(*(longlong **)(param_1 + 0x748),uVar2);
  FUN_00410f20(uVar2);
  return;
}

