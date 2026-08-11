/* Ghidra address: 01cc62e0 */
/* Ghidra symbol: FUN_01cc62e0 */


int FUN_01cc62e0(longlong param_1,double param_2,double param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  lVar1 = *(longlong *)(param_1 + 8);
  lVar3 = FUN_01d347d0(lVar1,0);
  iVar2 = FUN_01cc6730(param_1,param_2 - param_3,0,*(int *)(lVar3 + 0x2c) + -1,
                       (*(int *)(lVar3 + 0x150) + 1) * 8);
  iVar2 = *(int *)(lVar3 + 0x2c) - iVar2;
  iVar6 = iVar2 * (*(int *)(lVar3 + 0x150) + 1) * 8;
  uVar4 = FUN_004095c0(iVar6);
  (**(code **)(**(longlong **)(lVar1 + 0x438) + 0x18))(*(longlong **)(lVar1 + 0x438),uVar4,iVar6);
  FUN_004b6dc0(*(undefined8 *)(lVar1 + 0x438),0);
  (**(code **)(**(longlong **)(lVar1 + 0x438) + 0x20))(*(longlong **)(lVar1 + 0x438),uVar4,iVar6);
  FUN_004b6e40(*(undefined8 *)(lVar1 + 0x438),iVar6);
  FUN_004095f0(uVar4,iVar6);
  iVar6 = *(int *)(lVar1 + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar3 = FUN_01d347d0(lVar1,iVar5);
      *(int *)(lVar3 + 0x2c) = iVar2;
      *(undefined8 *)(lVar3 + 0x160) = 0;
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return iVar2;
}

