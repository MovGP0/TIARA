/* Ghidra address: 017c2ab0 */
/* Ghidra symbol: FUN_017c2ab0 */


void FUN_017c2ab0(longlong param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = FUN_017c3740(param_1);
  if (((cVar1 == '\0') && (param_2 < 2)) && (-1 < param_2)) {
    *(undefined4 *)(param_1 + 0x9c + (longlong)param_2 * 0x10c) = param_3;
  }
  return;
}

