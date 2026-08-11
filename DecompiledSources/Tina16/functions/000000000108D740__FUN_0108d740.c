/* Ghidra address: 0108d740 */
/* Ghidra symbol: FUN_0108d740 */


void FUN_0108d740(longlong param_1)

{
  longlong lVar1;
  
  FUN_01607d20(*(undefined8 *)(param_1 + 0xb90),*(undefined8 *)(param_1 + 0xac8),1);
  FUN_0107a0c0(param_1);
  lVar1 = FUN_01081ce0(param_1);
  FUN_010792a0(param_1,lVar1);
  if (lVar1 != 0) {
    FUN_01085110(param_1,*(undefined8 *)(lVar1 + 0x10),0xffffffff);
  }
  *(undefined1 *)(param_1 + 0xb51) = 0;
  *(undefined1 *)(param_1 + 0x4d48) = 1;
  return;
}

