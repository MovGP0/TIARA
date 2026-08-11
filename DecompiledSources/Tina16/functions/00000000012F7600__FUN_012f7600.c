/* Ghidra address: 012f7600 */
/* Ghidra symbol: FUN_012f7600 */


void FUN_012f7600(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  
  lVar3 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  iVar1 = FUN_006decb0();
  iVar6 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar4 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x550),iVar6);
      if ((*(uint *)(*(longlong *)(lVar4 + 0x18) + 4) & 0x20) == 0x20) {
        FUN_004ae7e0(lVar3,lVar4);
      }
      iVar6 = iVar6 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = FUN_006e5350();
  iVar6 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar5 = FUN_006e5360(*(undefined8 *)(param_1 + 0x700),iVar6);
      iVar2 = FUN_004aeba0(lVar3,uVar5);
      if (-1 < iVar2) {
        FUN_004aee30(lVar3,uVar5);
      }
      iVar6 = iVar6 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x700) + 0x2c0))(*(longlong **)(param_1 + 0x700),1);
  (**(code **)(**(longlong **)(param_1 + 0x700) + 0x2a8))(*(longlong **)(param_1 + 0x700),lVar3);
  if (lVar3 != 0) {
    FUN_00410f20(lVar3);
  }
  return;
}

