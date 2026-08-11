/* Ghidra address: 01d04e00 */
/* Ghidra symbol: FUN_01d04e00 */


void FUN_01d04e00(longlong param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_01d04d40(param_1);
  if (cVar1 != '\0') {
    FUN_0176a3a0(*(undefined8 *)(param_1 + 0x1a8),param_2);
  }
  return;
}

