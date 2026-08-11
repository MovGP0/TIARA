/* Ghidra address: 01ab8cf0 */
/* Ghidra symbol: FUN_01ab8cf0 */


void FUN_01ab8cf0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_004aeba0(*(undefined8 *)(param_1 + 0xf8),param_2);
  if (iVar1 == -1) {
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0xf8),param_2);
  }
  return;
}

