/* Ghidra address: 014e4b90 */
/* Ghidra symbol: FUN_014e4b90 */


void FUN_014e4b90(undefined8 param_1,byte *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  byte *pbVar3;
  byte local_138 [280];
  
  lVar2 = (ulonglong)*param_2 + 1;
  pbVar3 = local_138;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_2;
    param_2 = param_2 + 1;
    pbVar3 = pbVar3 + 1;
  }
  iVar1 = FUN_00414f50(local_138,&DAT_014e4c60,(ulonglong)local_138[0] + 1);
  if (iVar1 == 0) {
    FUN_01d0f0e0(*(undefined8 *)(param_4 + 0x428),param_3);
    *(undefined8 *)(param_4 + 0x420) = param_3;
    *(short *)(param_4 + 0x416) = *(short *)(param_4 + 0x416) + 1;
    *(double *)(param_4 + 0xbd) = (double)(int)*(short *)(param_4 + 0x416);
  }
  else {
    FUN_01d0f0e0(*(undefined8 *)(param_4 + 0x550),param_3);
    *(undefined8 *)(param_4 + 0x545) = param_3;
    *(short *)(param_4 + 0x54d) = *(short *)(param_4 + 0x54d) + 1;
    *(double *)(param_4 + 0xbd) = (double)(int)*(short *)(param_4 + 0x54d);
  }
  return;
}

