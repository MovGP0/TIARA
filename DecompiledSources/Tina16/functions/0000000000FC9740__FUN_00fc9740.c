/* Ghidra address: 00fc9740 */
/* Ghidra symbol: FUN_00fc9740 */


void FUN_00fc9740(longlong param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6d8));
  dVar2 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6e0));
  if (dVar2 < dVar1) {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x708),0);
  }
  else {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x708),L"duty cycle error");
  }
  return;
}

