/* Ghidra address: 01d04e30 */
/* Ghidra symbol: FUN_01d04e30 */


void FUN_01d04e30(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = FUN_01d04d40(param_1);
  if (cVar1 != '\0') {
    FUN_0176a3c0(*(undefined8 *)(param_1 + 0x1a8),param_2,param_3);
  }
  return;
}

