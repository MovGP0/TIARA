/* Ghidra address: 014e4200 */
/* Ghidra symbol: FUN_014e4200 */


void FUN_014e4200(byte *param_1,double param_2,double param_3,double param_4,undefined2 param_5,
                 longlong param_6,byte *param_7)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  byte *pbVar5;
  byte local_258 [256];
  byte local_158 [312];
  
  lVar4 = (ulonglong)*param_1 + 1;
  pbVar5 = local_158;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pbVar5 = *param_1;
    param_1 = param_1 + 1;
    pbVar5 = pbVar5 + 1;
  }
  lVar4 = (ulonglong)*param_7 + 1;
  pbVar5 = local_258;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pbVar5 = *param_7;
    param_7 = param_7 + 1;
    pbVar5 = pbVar5 + 1;
  }
  *(double *)(param_6 + 0x262) = param_2;
  *(double *)(param_6 + 0x26a) = param_3;
  iVar2 = FUN_00414f50(local_158,&DAT_014e4350,(ulonglong)local_158[0] + 1);
  if (iVar2 == 0) {
    uVar3 = FUN_0040c840((param_3 - param_2) / param_4);
    uVar1 = FUN_00b905f0(uVar3,0x7fff);
    *(undefined2 *)(param_6 + 0x260) = uVar1;
    *(undefined1 *)(param_6 + 0x296) = 0;
    iVar2 = FUN_00414f50(local_258,&DAT_014e4354,(ulonglong)local_258[0] + 1);
    if (iVar2 == 0) {
      *(undefined8 *)(param_6 + 0x29a) = *(undefined8 *)(param_6 + 0x262);
      *(undefined8 *)(param_6 + 0x2a2) = *(undefined8 *)(param_6 + 0x26a);
      *(undefined2 *)(param_6 + 0x298) = *(undefined2 *)(param_6 + 0x260);
    }
  }
  else {
    *(undefined2 *)(param_6 + 0x260) = param_5;
    *(undefined1 *)(param_6 + 0x296) = 1;
  }
  return;
}

