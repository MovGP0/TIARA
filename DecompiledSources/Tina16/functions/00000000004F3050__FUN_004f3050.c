/* Ghidra address: 004f3050 */
/* Ghidra symbol: FUN_004f3050 */


void FUN_004f3050(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[8] != 0;
  if (!bVar1) {
    bVar1 = *(code **)(*param_1 + 0x10) != FUN_004f3220;
  }
  if (bVar1) {
    param_1[5] = (longlong)FUN_004f3030;
  }
  else {
    param_1[5] = 0;
  }
  return;
}

