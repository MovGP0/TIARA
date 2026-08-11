/* Ghidra address: 014e44c0 */
/* Ghidra symbol: FUN_014e44c0 */


void FUN_014e44c0(byte *param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4,
                 longlong param_5)

{
  int iVar1;
  longlong lVar2;
  byte *pbVar3;
  byte local_148 [296];
  
  lVar2 = (ulonglong)*param_1 + 1;
  pbVar3 = local_148;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_1;
    param_1 = param_1 + 1;
    pbVar3 = pbVar3 + 1;
  }
  iVar1 = FUN_00414f50(local_148,&DAT_014e45cc,(ulonglong)local_148[0] + 1);
  if (iVar1 == 0) {
    *(undefined2 *)(param_5 + 0x38b) = param_2;
    *(undefined1 *)(param_5 + 0x39d) = 1;
  }
  else {
    *(undefined2 *)(param_5 + 0x38b) = param_2;
    *(undefined1 *)(param_5 + 0x39d) = 0;
  }
  *(undefined8 *)(param_5 + 0x38d) = param_3;
  *(undefined8 *)(param_5 + 0x395) = param_4;
  *(undefined2 *)(param_5 + 0x3a0) = *(undefined2 *)(param_5 + 0x38b);
  *(undefined8 *)(param_5 + 0x3a2) = *(undefined8 *)(param_5 + 0x38d);
  *(undefined8 *)(param_5 + 0x3aa) = *(undefined8 *)(param_5 + 0x395);
  *(undefined2 *)(param_5 + 0x8e8) = *(undefined2 *)(param_5 + 0x38b);
  *(undefined8 *)(param_5 + 0x8c0) = *(undefined8 *)(param_5 + 0x38d);
  *(undefined8 *)(param_5 + 0x8c8) = *(undefined8 *)(param_5 + 0x395);
  *(undefined1 *)(param_5 + 0x8ee) = *(undefined1 *)(param_5 + 0x39d);
  return;
}

