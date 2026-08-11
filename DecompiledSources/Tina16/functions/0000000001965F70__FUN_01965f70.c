/* Ghidra address: 01965f70 */
/* Ghidra symbol: FUN_01965f70 */


void FUN_01965f70(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  uVar4 = *(undefined8 *)(param_1 + 0xb0);
  if (*(double *)(param_1 + 0xa8) <= 0.0 && *(double *)(param_1 + 0xa8) != 0.0) {
    *(double *)(param_1 + 0x98) = *(double *)(param_1 + 0x98) + *(double *)(param_1 + 0xa8);
    *(ulonglong *)(param_1 + 0xa8) = *(ulonglong *)(param_1 + 0xa8) ^ 0x8000000000000000;
  }
  if (*(double *)(param_1 + 0xb0) <= 0.0 && *(double *)(param_1 + 0xb0) != 0.0) {
    *(double *)(param_1 + 0xa0) = *(double *)(param_1 + 0xa0) + *(double *)(param_1 + 0xb0);
    *(ulonglong *)(param_1 + 0xb0) = *(ulonglong *)(param_1 + 0xb0) ^ 0x8000000000000000;
  }
  FUN_0195bbd0(param_1);
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  *(undefined8 *)(param_1 + 0xa0) = uVar2;
  *(undefined8 *)(param_1 + 0xa8) = uVar3;
  *(undefined8 *)(param_1 + 0xb0) = uVar4;
  return;
}

