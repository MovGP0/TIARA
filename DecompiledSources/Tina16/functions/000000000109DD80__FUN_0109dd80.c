/* Ghidra address: 0109dd80 */
/* Ghidra symbol: FUN_0109dd80 */


void FUN_0109dd80(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_006d8150(*(undefined8 *)(param_1 + 0x770));
  if (iVar1 == 0) {
    FUN_0109e470(param_1);
  }
  else if (iVar1 == 1) {
    FUN_0109d930(param_1);
  }
  else if (iVar1 == 2) {
    FUN_0109d7c0(param_1,1);
  }
  return;
}

