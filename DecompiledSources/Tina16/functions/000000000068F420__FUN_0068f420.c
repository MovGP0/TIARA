/* Ghidra address: 0068f420 */
/* Ghidra symbol: FUN_0068f420 */


void FUN_0068f420(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x490) != param_2) {
    *(char *)(param_1 + 0x490) = param_2;
    FUN_00655b90();
  }
  return;
}

