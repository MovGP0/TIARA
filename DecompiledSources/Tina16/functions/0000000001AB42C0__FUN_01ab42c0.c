/* Ghidra address: 01ab42c0 */
/* Ghidra symbol: FUN_01ab42c0 */


void FUN_01ab42c0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x108),param_2);
  if (iVar2 != -1) {
    uVar1 = *(undefined8 *)(param_1 + 0x108);
    FUN_004aee30(uVar1,param_2);
    FUN_004aee80(uVar1);
  }
  return;
}

