/* Ghidra address: 00bf1aa0 */
/* Ghidra symbol: FUN_00bf1aa0 */


void FUN_00bf1aa0(longlong param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  ulonglong uVar4;
  
  cVar1 = FUN_0064e170(param_1);
  if ((cVar1 == '\0') && (cVar1 = FUN_0064eb50(param_1), cVar1 == '\0')) {
    FUN_00742eb0(*(undefined8 *)(param_1 + 0x670),0);
    return;
  }
  FUN_00498370(&local_38,*(undefined4 *)(param_1 + 0x910),0,
               *(int *)(param_1 + 0x4d0) * *(int *)(param_1 + 0x4d4),
               *(int *)(param_1 + 0x508) * *(int *)(param_1 + 0x52c));
  if (*(char *)(param_1 + 0x5c0) == '\0') {
    FUN_00423b10(&local_38,0xfffffffe,0xfffffffe);
  }
  if (param_2 < local_38) {
    *(int *)(param_1 + 0x678) = (param_2 - local_38) / *(int *)(param_1 + 0x4d4) + -1;
  }
  else if (param_2 < local_30) {
    *(undefined4 *)(param_1 + 0x678) = 0;
  }
  else {
    *(int *)(param_1 + 0x678) = (param_2 - local_30) / *(int *)(param_1 + 0x4d4) + 1;
  }
  if (param_3 < local_34) {
    uVar2 = (param_3 - local_34) / *(int *)(param_1 + 0x52c) - 1;
    uVar4 = (ulonglong)uVar2;
    *(uint *)(param_1 + 0x67c) = uVar2;
  }
  else {
    uVar4 = (ulonglong)local_2c;
    if (param_3 < (int)local_2c) {
      *(undefined4 *)(param_1 + 0x67c) = 0;
    }
    else {
      uVar2 = (int)(param_3 - local_2c) / *(int *)(param_1 + 0x52c) + 1;
      uVar4 = (ulonglong)uVar2;
      *(uint *)(param_1 + 0x67c) = uVar2;
    }
  }
  if ((*(int *)(param_1 + 0x678) == 0) && (*(int *)(param_1 + 0x67c) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined4)CONCAT71((int7)(uVar4 >> 8),1);
  }
  FUN_00742eb0(*(undefined8 *)(param_1 + 0x670),uVar3);
  return;
}

