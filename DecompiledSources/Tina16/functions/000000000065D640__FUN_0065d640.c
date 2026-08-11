/* Ghidra address: 0065d640 */
/* Ghidra symbol: FUN_0065d640 */


void FUN_0065d640(longlong param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 800)) {
    *(int *)(param_1 + 800) = param_2;
    FUN_0064fca0(param_1,0xb03b,0,0);
  }
  return;
}

