/* Ghidra address: 0079de80 */
/* Ghidra symbol: FUN_0079de80 */


void FUN_0079de80(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_0079dfe0;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_0079de60;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

