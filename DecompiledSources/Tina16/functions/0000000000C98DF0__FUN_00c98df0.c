/* Ghidra address: 00c98df0 */
/* Ghidra symbol: FUN_00c98df0 */


undefined8 FUN_00c98df0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_00409570(0x120);
  (*DAT_01eaa9d8)(uVar1);
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(ulonglong *)(param_1 + -8);
  }
  uVar2 = (*DAT_01eaa200)();
  if (DAT_01eaa9e0 == (code *)0x0) {
    if (DAT_01eaa9e8 != (code *)0x0) {
      (*DAT_01eaa9e8)(uVar1,param_1,uVar3 & 0xffffffff,uVar2,0);
    }
  }
  else {
    (*DAT_01eaa9e0)(uVar1,param_1,uVar3 & 0xffffffff,uVar2,0);
  }
  return uVar1;
}

