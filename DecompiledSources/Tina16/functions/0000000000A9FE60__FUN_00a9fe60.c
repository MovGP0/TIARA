/* Ghidra address: 00a9fe60 */
/* Ghidra symbol: FUN_00a9fe60 */


void FUN_00a9fe60(longlong param_1,int param_2,int param_3)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  
  bVar1 = false;
  if (param_2 <= param_3 + -1) {
    iVar3 = ((param_3 + -1) - param_2) + 1;
    do {
      lVar2 = FUN_00ac3910(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x530),param_2);
      if (*(int *)(param_1 + 0x2c) < *(int *)(lVar2 + 0x70)) {
        FUN_004aec30(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x530),param_2,
                     *(undefined8 *)(param_1 + 0x20));
        bVar1 = true;
        break;
      }
      param_2 = param_2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (!bVar1) {
    FUN_004aec30(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x530),param_3,
                 *(undefined8 *)(param_1 + 0x20));
  }
  return;
}

