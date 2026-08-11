/* Ghidra address: 01d82d90 */
/* Ghidra symbol: FUN_01d82d90 */


void FUN_01d82d90(longlong param_1)

{
  FUN_01d82a90(param_1,6,1);
  FUN_01d80da0(param_1,6,1,0);
  if ((*(char *)(param_1 + 0xaa0) != '\0') &&
     (*(longlong *)(param_1 + 0xae0) == *(longlong *)(param_1 + 0xaa8))) {
    FUN_01d80d00(param_1,1,0);
  }
  return;
}

