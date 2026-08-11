/* Ghidra address: 017a5640 */
/* Ghidra symbol: FUN_017a5640 */


void FUN_017a5640(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 unaff_RSI;
  ulonglong uVar1;
  bool bVar2;
  
  bVar2 = *(int *)(param_3 + 0x18) == 0x66;
  uVar1 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),bVar2);
  if (bVar2) {
    *(longlong *)(param_1 + 0x7c0) = param_3;
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6f8),*(undefined8 *)(param_3 + 0x10));
  }
  else {
    *(undefined8 *)(param_1 + 0x7c0) = 0;
  }
  (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x128))
            (*(longlong **)(param_1 + 0x6f8),uVar1 & 0xffffffff);
  (**(code **)(**(longlong **)(param_1 + 0x700) + 0x128))
            (*(longlong **)(param_1 + 0x700),uVar1 & 0xffffffff);
  return;
}

