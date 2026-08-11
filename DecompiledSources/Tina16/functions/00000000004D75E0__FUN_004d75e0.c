/* Ghidra address: 004d75e0 */
/* Ghidra symbol: FUN_004d75e0 */


void FUN_004d75e0(longlong param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  longlong lVar1;
  undefined8 ***pppuVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 ***pppuVar6;
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
  pppuVar6 = pppuVar2;
  for (lVar5 = ((longlong)param_4 + 1) * 2; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pppuVar6 = (undefined8 **)*param_3;
    param_3 = param_3 + 1;
    pppuVar6 = pppuVar6 + 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  appuStack_28[1] = pppuVar2;
  auStack_50[lVar1 * -2] = 0x4d764d;
  FUN_004539c0(uVar3,param_2,pppuVar2);
  return;
}

