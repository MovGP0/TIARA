/* Ghidra address: 012f7730 */
/* Ghidra symbol: FUN_012f7730 */


void FUN_012f7730(longlong param_1)

{
  int iVar1;
  undefined8 unaff_RSI;
  
  iVar1 = FUN_006e5350(*(undefined8 *)(param_1 + 0x700));
  if (iVar1 != 0) {
    iVar1 = FUN_006e5350(*(undefined8 *)(param_1 + 0x700));
    if (iVar1 != 0) {
      unaff_RSI = FUN_006e5360(*(undefined8 *)(param_1 + 0x700),0);
    }
    FUN_01303af0(param_1,unaff_RSI,1);
  }
  return;
}

