/* Ghidra address: 01cc5b10 */
/* Ghidra symbol: FUN_01cc5b10 */


longlong FUN_01cc5b10(longlong param_1,undefined4 param_2,double param_3,undefined8 *param_4,
                     undefined4 *param_5,undefined8 param_6)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  lVar1 = *(longlong *)(param_1 + 8);
  lVar4 = FUN_01d347d0(lVar1,param_2);
  uVar3 = *(undefined4 *)(lVar4 + 0x40);
  lVar5 = FUN_01d347d0(*(undefined8 *)(*(longlong *)(lVar1 + 0x440) + 8),uVar3);
  lVar6 = FUN_01d347d0(lVar1,param_2);
  lVar4 = 0;
  if (((*(int *)(lVar6 + 0x2c) != 0) && (**(double **)(lVar5 + 0x18) <= param_3)) &&
     (param_3 < *(double *)(lVar6 + 0x22) || param_3 == *(double *)(lVar6 + 0x22))) {
    uVar7 = FUN_01d347d0(*(undefined8 *)(*(longlong *)(lVar1 + 0x440) + 8),uVar3);
    iVar2 = FUN_01cc5810(param_1,uVar7,param_3,*(int *)(lVar6 + 0x2c) + -1);
    lVar4 = *(longlong *)(lVar5 + 0x18) + 8 + (longlong)iVar2 * 0x6c;
    uVar3 = FUN_01cc1840(lVar6);
    *param_5 = uVar3;
    FUN_00414ad0(param_6,*(undefined8 *)(lVar6 + 0x48));
    *param_4 = *(undefined8 *)(lVar6 + 0x38);
  }
  return lVar4;
}

