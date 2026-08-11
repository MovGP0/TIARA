/* Ghidra address: 00a1c560 */
/* Ghidra symbol: FUN_00a1c560 */


void FUN_00a1c560(undefined8 param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 1;
  if (0 < (int)param_2) {
    uVar1 = param_2;
  }
  uVar2 = 100;
  if ((int)uVar1 < 0x65) {
    uVar2 = (ulonglong)uVar1;
  }
  if ((int)uVar2 < 0x32) {
    FUN_00a1c1b0(param_1,5000 / uVar2);
    return;
  }
  FUN_00a1c1b0(param_1,(int)uVar2 * -2 + 200);
  return;
}

