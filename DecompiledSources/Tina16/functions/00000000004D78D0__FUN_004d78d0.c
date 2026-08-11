/* Ghidra address: 004d78d0 */
/* Ghidra symbol: FUN_004d78d0 */


void FUN_004d78d0(longlong param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  longlong lVar1;
  undefined8 ***pppuVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 ***pppuVar7;
  undefined1 auStack_1048 [4088];
  undefined8 auStack_50 [5];
  undefined8 **appuStack_28 [2];
  
  lVar1 = (longlong)param_4 + 1;
  uVar4 = lVar1 * -0x10 & 0xfff;
  while (lVar1 * -0x10 < (longlong)uVar4) {
    auStack_1048[uVar4] = (char)(uVar4 - 0x1000);
    uVar4 = uVar4 - 0x1000;
  }
  pppuVar2 = appuStack_28 + lVar1 * -2;
  pppuVar7 = pppuVar2;
  for (lVar6 = ((longlong)param_4 + 1) * 2; lVar6 != 0; lVar6 = lVar6 + -1) {
    *pppuVar7 = (undefined8 **)*param_3;
    param_3 = param_3 + 1;
    pppuVar7 = pppuVar7 + 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  appuStack_28[1] = pppuVar2;
  auStack_50[lVar1 * -2] = 0x4d793d;
  uVar5 = FUN_004539c0(uVar3,param_2,pppuVar2);
  uVar3 = *(undefined8 *)PTR_PTR_02003ff8;
  auStack_50[lVar1 * -2] = 0x4d794f;
  FUN_00453060(uVar5,uVar3);
  return;
}

