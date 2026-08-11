/* Ghidra address: 01cc5a50 */
/* Ghidra symbol: FUN_01cc5a50 */


undefined1 FUN_01cc5a50(longlong param_1,undefined4 param_2,double param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  lVar2 = *(longlong *)(param_1 + 8);
  lVar5 = FUN_01d347d0(lVar2,param_2);
  uVar1 = *(undefined4 *)(lVar5 + 0x3c);
  lVar5 = FUN_01d347d0(*(undefined8 *)(*(longlong *)(lVar2 + 0x440) + 8),uVar1);
  lVar6 = FUN_01d347d0(lVar2,param_2);
  uVar3 = 4;
  if (((*(int *)(lVar6 + 0x2c) != 0) && (**(double **)(lVar5 + 0x18) <= param_3)) &&
     (param_3 < *(double *)(lVar6 + 0x22) || param_3 == *(double *)(lVar6 + 0x22))) {
    uVar7 = FUN_01d347d0(*(undefined8 *)(*(longlong *)(lVar2 + 0x440) + 8),uVar1);
    iVar4 = FUN_01cc5810(param_1,uVar7,param_3,*(int *)(lVar6 + 0x2c) + -1);
    uVar3 = *(undefined1 *)(*(longlong *)(lVar5 + 0x18) + 8 + (longlong)iVar4 * 9);
  }
  return uVar3;
}

