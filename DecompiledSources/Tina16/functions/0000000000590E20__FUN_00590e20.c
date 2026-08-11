/* Ghidra address: 00590e20 */
/* Ghidra symbol: FUN_00590e20 */


void FUN_00590e20(undefined8 param_1,longlong *param_2,longlong param_3,byte *param_4)

{
  code *pcVar1;
  longlong lVar2;
  byte *pbVar3;
  byte local_118 [256];
  
  lVar2 = (ulonglong)*param_4 + 1;
  pbVar3 = local_118;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_4;
    param_4 = param_4 + 1;
    pbVar3 = pbVar3 + 1;
  }
  pcVar1 = *(code **)(param_3 + 0x10);
  if (((ulonglong)pcVar1 & 0xff00000000000000) == 0xff00000000000000) {
    FUN_00414ff0((longlong)param_2 + ((ulonglong)pcVar1 & 0xffffffffffffff),local_118);
  }
  else {
    if (((ulonglong)pcVar1 & 0xff00000000000000) == 0xfe00000000000000) {
      pcVar1 = *(code **)(*param_2 + ((ulonglong)pcVar1 & 0xffff));
    }
    if (*(int *)(param_3 + 0x20) == -0x80000000) {
      (*pcVar1)(param_2,local_118);
    }
    else {
      (*pcVar1)(param_2,*(int *)(param_3 + 0x20),local_118);
    }
  }
  return;
}

