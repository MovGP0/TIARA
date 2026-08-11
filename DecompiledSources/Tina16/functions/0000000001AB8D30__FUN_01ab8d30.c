/* Ghidra address: 01ab8d30 */
/* Ghidra symbol: FUN_01ab8d30 */


void FUN_01ab8d30(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = FUN_004aeba0(*(undefined8 *)(param_1 + 0xf8),param_2);
  if (iVar2 != -1) {
    uVar1 = *(undefined8 *)(param_1 + 0xf8);
    FUN_004aee30(uVar1,param_2);
    FUN_004aee80(uVar1);
  }
  return;
}

