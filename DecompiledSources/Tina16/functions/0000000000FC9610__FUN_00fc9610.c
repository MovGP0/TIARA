/* Ghidra address: 00fc9610 */
/* Ghidra symbol: FUN_00fc9610 */


void FUN_00fc9610(longlong param_1)

{
  double dVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  undefined8 uVar5;
  
  dVar1 = *(double *)(param_1 + 0xbe0);
  iVar2 = *(int *)(param_1 + 0x728);
  iVar3 = *(int *)(param_1 + 0x724);
  dVar4 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6d8));
  uVar5 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6e0));
  *(undefined8 *)(param_1 + 0x730) = uVar5;
  if (*(double *)(param_1 + 0x730) < dVar4) {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x708),0);
  }
  else {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x708),L"duty cycle error");
  }
  if (dVar4 <= (double)iVar2 * (1.0 / dVar1) * (double)iVar3) {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x700),0);
  }
  else {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x700),L"PERIOD ERROR");
  }
  return;
}

