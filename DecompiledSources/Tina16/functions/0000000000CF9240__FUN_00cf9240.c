/* Ghidra address: 00cf9240 */
/* Ghidra symbol: FUN_00cf9240 */


undefined1 FUN_00cf9240(longlong param_1)

{
  undefined1 auStack_28 [32];
  
  if ((*(char *)(param_1 + 9) == '\0') && (*(char *)(param_1 + 8) != '\0')) {
    FUN_00cf8eb0(param_1);
    FUN_00cf8fc0(auStack_28);
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return *(undefined1 *)(param_1 + 9);
}

