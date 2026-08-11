/* Ghidra address: 012c59b0 */
/* Ghidra symbol: FUN_012c59b0 */


void FUN_012c59b0(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  
  uVar3 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  iVar1 = FUN_006decb0();
  iVar6 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar4 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x748) + 0x550),iVar6);
      if ((*(uint *)(*(longlong *)(lVar4 + 0x18) + 0x62c) & 0x20) == 0x20) {
        FUN_004ae7e0(uVar3,lVar4);
      }
      iVar6 = iVar6 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = FUN_006e5350();
  iVar6 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar5 = FUN_006e5360(*(undefined8 *)(param_1 + 0x748),iVar6);
      iVar2 = FUN_004aeba0(uVar3,uVar5);
      if (-1 < iVar2) {
        FUN_004aee30(uVar3,uVar5);
      }
      iVar6 = iVar6 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x748) + 0x2c0))(*(longlong **)(param_1 + 0x748),0);
  (**(code **)(**(longlong **)(param_1 + 0x748) + 0x2a8))(*(longlong **)(param_1 + 0x748),uVar3);
  FUN_00410f20(uVar3);
  return;
}

