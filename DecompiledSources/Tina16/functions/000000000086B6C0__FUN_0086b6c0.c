/* Ghidra address: 0086b6c0 */
/* Ghidra symbol: FUN_0086b6c0 */


void FUN_0086b6c0(undefined8 param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 ***pppuVar6;
  undefined1 auStack_1058 [4088];
  undefined8 auStack_60 [5];
  undefined8 **appuStack_38 [3];
  
  lVar1 = (longlong)param_3 + 1;
  uVar3 = lVar1 * -0x10 & 0xfff;
  while (lVar1 * -0x10 < (longlong)uVar3) {
    auStack_1058[uVar3] = (char)(uVar3 - 0x1000);
    uVar3 = uVar3 - 0x1000;
  }
  pppuVar6 = appuStack_38 + lVar1 * -2;
  for (lVar5 = ((longlong)param_3 + 1) * 2; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pppuVar6 = (undefined8 **)*param_2;
    param_2 = param_2 + 1;
    pppuVar6 = pppuVar6 + 1;
  }
  appuStack_38[1] = appuStack_38 + lVar1 * -2;
  auStack_60[lVar1 * -2] = 0x86b743;
  FUN_00419260(&DAT_020127c0,&DAT_00862bc0,1,(longlong)(param_3 + 1));
  iVar4 = 0;
  if (-1 < param_3) {
    param_3 = param_3 + 1;
    do {
      puVar2 = (undefined8 *)(DAT_020127c0 + (longlong)iVar4 * 0x10);
      *puVar2 = *appuStack_38[1];
      puVar2[1] = appuStack_38[1][1];
      iVar4 = iVar4 + 1;
      appuStack_38[1] = appuStack_38[1] + 2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

