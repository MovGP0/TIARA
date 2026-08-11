/* Ghidra address: 0188caa0 */
/* Ghidra symbol: FUN_0188caa0 */


ulonglong FUN_0188caa0(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(longlong *)(param_1 + 0xd0) == 0) {
    FUN_0188c5e0(param_1);
  }
  uVar1 = thunk_FUN_03e5bd07(*(undefined8 *)(param_1 + 0xd0),0x58);
  uVar2 = thunk_FUN_03e5bd07(*(undefined8 *)(param_1 + 0xd0),0x5a);
  uVar4 = FUN_00498310(uVar1,uVar2);
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  if ((*(int *)(param_1 + 0x40) == 0) || (*(int *)(param_1 + 0x44) == 0)) {
    uVar6 = 0;
    FUN_0180dc80(L"Printer selected is not valid");
  }
  else {
    iVar3 = thunk_FUN_03e5bd07(*(undefined8 *)(param_1 + 0xd0),0x6f);
    lVar5 = FUN_0040c770(((double)iVar3 / (double)*(int *)(param_1 + 0x44)) * 25.4);
    *(double *)(param_1 + 0x78) = (double)lVar5;
    iVar3 = thunk_FUN_03e5bd07(*(undefined8 *)(param_1 + 0xd0),0x6e);
    lVar5 = FUN_0040c770(((double)iVar3 / (double)*(int *)(param_1 + 0x40)) * 25.4);
    *(double *)(param_1 + 0x80) = (double)lVar5;
    iVar3 = thunk_FUN_03e5bd07(*(undefined8 *)(param_1 + 0xd0),0x70);
    lVar5 = FUN_0040c770(((double)iVar3 / (double)*(int *)(param_1 + 0x40)) * 25.4);
    *(double *)(param_1 + 0x88) = (double)lVar5;
    iVar3 = thunk_FUN_03e5bd07(*(undefined8 *)(param_1 + 0xd0),0x71);
    lVar5 = FUN_0040c770(((double)iVar3 / (double)*(int *)(param_1 + 0x44)) * 25.4);
    *(double *)(param_1 + 0x90) = (double)lVar5;
    iVar3 = thunk_FUN_03e5bd07(*(undefined8 *)(param_1 + 0xd0),8);
    lVar5 = FUN_0040c770(((double)iVar3 / (double)*(int *)(param_1 + 0x40)) * 25.4);
    *(double *)(param_1 + 0x98) =
         (*(double *)(param_1 + 0x80) - (double)lVar5) - *(double *)(param_1 + 0x88);
    iVar3 = thunk_FUN_03e5bd07(*(undefined8 *)(param_1 + 0xd0),10);
    lVar5 = FUN_0040c770(((double)iVar3 / (double)*(int *)(param_1 + 0x44)) * 25.4);
    *(double *)(param_1 + 0xa0) =
         (*(double *)(param_1 + 0x78) - (double)lVar5) - *(double *)(param_1 + 0x90);
  }
  return uVar6 & 0xffffffff;
}

