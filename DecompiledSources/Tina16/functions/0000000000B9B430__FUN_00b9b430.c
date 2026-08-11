/* Ghidra address: 00b9b430 */
/* Ghidra symbol: FUN_00b9b430 */


longlong FUN_00b9b430(longlong param_1)

{
  return (*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x38)) +
         (longlong)*(int *)(param_1 + 0x10);
}

